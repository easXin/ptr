#include<stdio.h>

int squareTheNum(const int *pnum);

int main(void){
  int num = 10;
  int result = 0;
  result = squareTheNum(&num);
  printf("Result : %d\n", result);
  return 0;
}

int squareTheNum(const int *pNum){
  return *pNum * *pNum;
}
