#include <stdio.h>
#include<stdlib.h>
#include <gmp.h>
#include <omp.h>
void Euler(mpf_t *global_result_p);


int main(int argc, char *argv[]) {
    mpf_set_default_prec(1000000); // define a precisão padrão para 1000000 bits
    mpf_t e, term;
    mpf_init_set_ui(e, 1);
    mpf_init_set_ui(term, 1);
    int i;
    int thread_count;
    thread_count = strtol(argv[1],NULL,10);
    mpf_t global_result;
    mpf_init_set_ui(global_result,0);

    #pragma omp parallel num_threads(thread_count)
    Euler(&global_result);

    gmp_printf("%.10000Ff\n",global_result);

    mpf_clear(e);
    mpf_clear(term);
    mpf_clear(global_result);


    return 0;
}

void Euler(mpf_t *global_result_p){

        mpf_t my_result,term;
        int my_rank = omp_get_thread_num();
        int thread_count = omp_get_num_threads();

        mpf_init_set_ui(my_result,1);
        int local_n;
        local_n = 100000/thread_count;
        mpf_init_set_ui(term, 1);
        int i;

        for (i = 1; i <= (my_rank+1)* local_n; i++) {
          mpf_div_ui(term, term, i); //term =  term / i
          if(i>((my_rank)*local_n)+1){
                mpf_add(my_result, my_result, term); //e = e + term
        }
        }
        #pragma omp critical
        mpf_add(*global_result_p,*global_result_p, my_result);



}
