#include<string.h>
#include<stdio.h>
#include<stddef.h>

int strLen(const char * pStr);
int main(int argc, char *argv[]){

  printf("Length of String : %d\n", strLen("Testing123"));
}

// Write a function that calculate the length of a string
int strLen(const char *pStr){
  // beginning
  const char *lastAddress = pStr;
  while(*lastAddress!='\0'){
    ++lastAddress;
  }
  printf("%d %d\n",(int)lastAddress,(int)pStr);
  return lastAddress - pStr;
}
