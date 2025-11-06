#include <stdio.h>
#include <stdlib.h>

//1. 문자 변수 및 상수

int main(int argc, char *argv[])
{
    //다른 형태로 저장 
    char code1 = 'A'; //1bite 아스키코드로 저장 
    int code2 = 65; // 4bite
    
    //특정 변수를 숫자, 문자 관점으로 찍어본다. 
    printf("code1 = %c, (%d)\n", code1, code1);
    printf("code2 = %c, (%d)\n", code2, code2);
  
  system("PAUSE");	
  return 0;
}
