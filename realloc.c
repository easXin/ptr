#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
  char *str = NULL;

  str = (char *)malloc(15); // malloc return void*
  strcpy(str,"Jason");
  printf("String = %s , Address = %p Size = %d\n", str,str,(int)sizeof(str));

  str = (char *)realloc(str,25*sizeof(char));
  strcat(str,".com");
  printf("String = %s, Address = %p Size = %d\n", str,str,(int)sizeof(str));

  free(str);

  return 0;
}
