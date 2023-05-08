#include <stdio.h>
#include <gmp.h>
#include <omp.h>

int main() {
    mpf_set_default_prec(1000000); // define a precisão padrão para 1000000 bits
    mpf_t e, term;
    mpf_init_set_ui(e, 1);
    mpf_init_set_ui(term, 1);
    int i, nthreads;
    mpf_t *partials;

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        mpf_t partial;
        mpf_init(partial);
        mpf_set_ui(partial, 0);

        #pragma omp single
        nthreads = omp_get_num_threads();

        for (i = tid + 1; i <= 1000000; i += nthreads) {
            mpf_div_ui(term, term, i); // term = term/i
            mpf_add(partial, partial, term); // partial = partial + term
        }

        #pragma omp critical
        mpf_add(e, e, partial);

        mpf_clear(partial);
    }

    gmp_printf("%.10000Ff\n", e);

    mpf_clear(e);
    mpf_clear(term);

    return 0;
}