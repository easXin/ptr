#include<stdio.h>
#include<stddef.h>

int main(void){
  int number = 0;
  int *pNumber = NULL;

  number = 10;
  printf("Number address : %p\n",&number);
  printf("Number value : %d\n",number);

  pNumber = &number;
  // ptr address
  printf("pNumber itself address :%p\n",(void*)&pNumber);
  // ptr size
  printf("pNumber size : %d\n",(int)sizeof(pNumber));
  // ptr itself address
  printf("pNumber val address : %p\n",pNumber);
  // ptr val
  printf("PNumber val : %d\n",*pNumber);

}
