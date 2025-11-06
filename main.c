#include <stdio.h>
#include <stdlib.h>

//5. 입력 받은 단어를 파일로 출력 

int main(int argc, char *argv[])
{
    char input[100];
    FILE* fp;
    int i;
    
    //fopen
    fp = fopen("sample.txt","w");
    
    //3번 해야되니까 for문 사용 
    for (i=0;i<3;i++)
    {
    //fprintf
    printf("input a word:");
    scanf("%s", input); //%s : 문자 여러개 저장 - 형식 지정자 
    //&input 할 필요 없음
    fprintf(fp, "%s\n", input); //다 출력 가능!  fp 넣는거 중요 
}

    //fcolse
    fclose(fp);


  system("PAUSE");	
  return 0;
}
