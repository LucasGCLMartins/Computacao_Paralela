#include <stdio.h>
#include <gmp.h>

int main() {
    mpf_set_default_prec(1000000); // define a precisão padrão para 500 bits (cerca de 150 dígitos)
    mpf_t e, term;
    mpf_init_set_ui(e, 1);
    mpf_init_set_ui(term, 1);
    int i;

    for (i = 1; i <= 1000000; i++) {
        mpf_div_ui(term, term, i); //term = term/i
        mpf_add(e, e, term); //e = e + term
    }

    gmp_printf("%.10000Ff\n", e);

    mpf_clear(e);
    mpf_clear(term);

    return 0;
}