#include <stdio.h>

void matrix(int A[100][100]){
  for (int i=0;i<100;i++){
    for (int j=0;j<100;j++)
      printf(" %d ",A[i][j]);
    puts("\n");
    }
}
