#include <stdio.h>
#include <stdlib.h>

//6. 파일을 읽어서 내용 출력
//sample.txt 파일을 열어서 내용을 출력 

int main(int argc, char *argv[])
{
    char input[100];
    FILE* fp;
    char c; 
    
    //fopen
    fp = fopen("sample.txt","r");
    if (fp == NULL)
    {
           printf("Failed to open file!\n");
           return -1;
}
    #if 0
    while( (c = fgetc(fp) != EOF)
    {
           putchar(C); //putchar 하면 알아서 해줌 printf보다 편함. 
     }
     #else
     while( fgets(input, 100, fp) > 0 ) //배열 크기 100으로 잡았으니 100 넣기(배열크기안넘게) 
     {
            printf("%s", input);
            }
      #endif  
    //fcolse
    fclose(fp);


  system("PAUSE");	
  return 0;
}
