// fputc int ch file pointer

#include<stdio.h>

int main(){
  FILE *fp;
  int ch;

  fp = fopen("file.txt","w+");

  // WRITE CHAR
  for(ch = 33l ch <= 100; ch++){
    fputc(ch,fp);
  }
  // WRITE STRING  arg1: *str   arg2: *destination
  fputs("testing123",fp);
  fprintf(fp, "%s %s %s\n","Just","For","TESTING");
  fclose(fp);
  // ftell(*file)   fgetpos() fseek(fp,0,SEEK_END): go to end of file
  return 0;
}
