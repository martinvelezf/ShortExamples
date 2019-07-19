#include <stdio.h>
//#include <mpi.h>
#include "print.h"

void f(){
  unsigned long int max=2147483;
  unsigned long int i=1,j=1,z=0;
  int A[100][100];
  int x=0;
  while(i<max){
    //if (i>1000 && i%1000==0)
      //printf(" %ld ",i);
    i++;
    for(int u=x;u<77;u++)
    for(int k=(u+i%33);k<100;k++)
          *(A[u+i%33]+u%100)=k;
      }

 matrix(A);

}
