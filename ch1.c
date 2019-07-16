#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int num = 10;
  int *pNum = NULL;
  pNum=&num;

  // address of pointer , value of pointer, value of the pointer is point to

  printf("1. %p\n",&num );
  printf("1. %p 2. %p 3. %d\n", &pNum, pNum, *pNum );
}
