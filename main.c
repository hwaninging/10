#include <stdio.h>
#include <stdlib.h>

//4. 문자열 길이 계산 
//실질적인 문자열 길이를 알수 있다. 

int main(int argc, char *argv[])
{
    char str[30] = "happy C programming";
    
    printf("string %s length: %i\n", str, strlen(str));

  system("PAUSE");	
  return 0;
}
