#include<stdio.h>
#include<stdlib.h>

#define FILENAME "Test.txt"

int main(){
  FILE *fp = NULL;

  int cnt = 0;
  int i = 0;

  fp = fopen(FILENAME, "r");

  if(fp == NULL){
    return -1;
  }
  fseek(fp,0,SEEK_END);
  cnt = ftell(fp);

  while(i<cnt){
    i++;
    fseek(fp,-i,SEEK_END); // -i back to beginning
    printf("%c\n",fgetc(fp));
  }
  printf("\n");
  fclose(fp);
  fp = NULL;

  return 0;
}
