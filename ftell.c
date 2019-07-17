#include<stdio.h>

int main(){
  FILE *fp;
  int len;

  fp=fopen("file.txt","r");
  if(fp==NULL){
    perror("Error opening file");
    return -1;
  }
  fseek(fp,0,SEEK_END);
  len = ftell(fp);

  // second way
  fpos_t position;
  fgetpos(fp,&position);
  fputs("testing123",fp);
  // SEEK_SET  SEEK_CUR SEEK_END

  // fsetpos()      arg1 file , position  return nonzero, or 0 when there is an error 
  fclose(fp);

  printf("Total size : %d bytes \n", len );
}
