#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a;
    float b;
   
   printf("분자를 입력하세요 :");
   scanf("%f",&a);
   printf("분모를 입력하세요 :");
   scanf("%f",&b);
   
   printf("나누기의 결과는 %f입니니.\n",(float)a/b);
  
  system("PAUSE");	
  return 0;
}
