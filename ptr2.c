#include<stdio.h>
#include<stddef.h>

int main(void){

  long num1 = 0L;
  long num2 = 0L;
  long *pnum = NULL;

  pnum = &num1;
  *pnum = 2L; // num1 = 2
  ++num2;
  num2 += *pnum; // num2 = 3

  pnum = &num2; // pnum = 3
  ++*pnum;      // pnum = 4 num2 = 4
         // 2   4    4   8
  printf("num1=%ld num2=%ld *pnum=%ld *pnum + num2 = %ld\n",
          num1,num2,*pnum,*pnum+num2);
}
