#include <stdio.h>
#include <stdlib.h>

float fatorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fatorial(n-1));  
} 

int main(void) {
  float euler=0;
  
  for(int i=0;i<1000;i++){
    euler+=1/(fatorial(i));  
  }
  printf("%.30f",euler);
  return 0;
}