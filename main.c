#include <stdio.h>
#include <stdlib.h>

//2. 문자열 출력

int main(int argc, char *argv[])
{
    int i = 0;
    char str[4];
    str[0] = 'a'; //abc문자열 출력하는 코드라고 생각하면 쉬움. 
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
    
    //str[i] 문자열의 맨 끝이 아니다 -> 같지 않다가 연산자로 나와야함. 
    while (str[i] != '\0') { 
          printf("%c", str[i]); //글자 하나 printf로 찍기  
          i++;
          }
  
  system("PAUSE");	
  return 0;
}
