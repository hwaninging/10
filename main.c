#include <stdio.h>
#include <stdlib.h>

//3. 문자열 복사
//반환을 받는게 애매하면 반환을 안 받는 형태로 함수 호출 해보기 

int main(int argc, char *argv[])
{
    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    
    //복사 대상 문자열 - 라이브러이 함수 활용하면 훨씬 쉬움 
    strcpy (dst,src); //2개 받을 땐 , 해주면 끝 
    
    printf("copied string : %s\n", dst);
  
  system("PAUSE");	
  return 0;
}
