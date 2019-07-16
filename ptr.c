#include<stdio.h>
#include<stddef.h>
int main(void){
  int count = 10, x;
  int *int_pointer = NULL;

  int_pointer = &count;
  x = *int_pointer;

  printf("count=%i,x=%i,ptr address=%p\n",count,x,int_pointer);
  printf("count=%p\n",&count);
  printf("int_pointer=%p\n",&int_pointer);
  printf("Size : %d\n",(int)sizeof(int_pointer));
  return 0;
}
