#include<stdio.h>

void copyString(char to[], char from[]){
  int i;

  for(i=0;from[i]!='\0';++i){
    to[i] = from[i];
  }
  to[i]='\0';
}

// void copyString(char *to, char *from){
//   for(;*from!='\0';++from,++to){
//     *to = *from;
//   }
//   *to='\0';
// }
//
// void copyString(char *to, char *from){
//   // while not null
//   while(*from){
//     *to++ = *from++;
//   }
//   *to='\0';
// }

int main(void){
  char str1[]="testing 123";
  char str2[20];
  copyString(str2,str1);
  printf("%s\n",str2 );
  return 0;
}
