#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(int argc, char *argv[]){
  int size;
  char *text = NULL;
  printf("String limit : ");
  scanf("%d", &size);
  text = (char *)malloc(size * sizeof(char));

  if(text!=NULL){
    printf("Enter some text: \n");
    scanf(" ");
    gets(text); // take string store in text

    printf("Inputted text is : %s\n",text);
  }
  free(text);
  return 0;
}
