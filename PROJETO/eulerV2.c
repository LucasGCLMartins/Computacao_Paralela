#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<omp.h>

void Euler(int n , double *global_result_p);
float f(int x);

int main(int argc, char *argv[]){
        double global_result = 0.0;
        int n=1000;
        int thread_count;

        thread_count = strtol(argv[1],NULL,10);

        #pragma omp parallel num_threads(thread_count)
        Euler(n,&global_result);;
        printf("%.14e\n",global_result);
        return 0;
}
void Euler(int n, double *global_result_p){
        double x,my_result=0.0;
        int i,local_n;
        int my_rank = omp_get_thread_num();
        double thread_count = omp_get_num_threads();

        local_n = n/thread_count;

        for(i=0;i<=local_n;i++){
            my_result+=1/(f(i));
        }

        #pragma omp critical
        *global_result_p += my_result;
        *global_result_p = global_result_p/thread_count;
}
float f(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * f(n-1));  
}
