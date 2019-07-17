#include<stdio.h>
#include<stddef.h>

int main(){
  ##
  FILE *fp;
  int c;

  fp = fopen("file.txt","r");

  if(fp == NULL){
    perror("Error in opening file");
    return -1;
  }
  //read a single char
  // fgec keep returns the number
  while((c=fgec(fp))!=EOF){
    printf("%c",c);
  }

  ##
  // read string from file NULL~> error || EOP
  if(fgets(str,60,fp)!=NULL){
    printf("%s",str);
  }
  // *stream *format    arg1 -> pointer to the file  formatterd string
  fscanf()  // like scan f

  ##
  char str1[10];
  char str2[10];
  char str3[10];
  int year;
  FILE *fp;
  fp = fopen("file.txt","w+");
  if(fp!=NULL){
    fputs("Testing321",fp);
  }
  rewind(fp);
  fscanf(fp,%s %s %s %d,str1,str2,str3,&year);
  printf("Reading String1 |%s|\n",str1);
  printf("Reading String2 |%s|\n",str2);
  printf("Reading String3 |%s|\n",str3);
  printf("Reading Integer |%d|\n", year);

  fclose(fp);
  fp = NULL;

  system("pause");
  return 0
}
