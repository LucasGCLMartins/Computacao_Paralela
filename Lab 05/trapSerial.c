#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>

double f(double x);
int main(int argc, char* argv[]){
	double global_result = 0.0;

	double a=10,b=20;
	int n=10,x_i;
	double h = (b-a)/n;
	global_result = (f(a)+f(b))/2.0;
	for(int i = 1;i<=n-1;i++){
        x_i=a+i*h;
        global_result+=f(x_i);
	}
	global_result=h*global_result;
	printf("Com %d trapezios, a integral de %f ate %f = %.14e\n",n,a,b,global_result);
	return 0;
}

double f(double x){
	double result=exp(x);
	return result;
}
