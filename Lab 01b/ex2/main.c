#include <stdio.h>

int main(){
    float A=9,B=5,C=8,D=10;
    float MA=(A+B*2+C*3+D)/7;
    if(MA>=9)printf("%f - NOTA A",MA);
    if(MA>=7.5 && MA<9)printf("%f - NOTA B",MA);
    if(MA>=6 && MA<7.5)printf("%f - NOTA C",MA);
    if(MA>=4 && MA<6)printf("%f - NOTA D",MA);
    if(MA<4)printf("%f - NOTA E",MA);
    return 0;

}


