#include<stdio.h>
int main(int argc,char *argv[])
{
	int out1, out2;
	int a,b;
	
	out1 = printf("Hello c world\n");
	printf("%d\n",out1);
	
	printf("두개의 정수입력 : ");
	out2 = scanf("%d %d", &a, &b);
	printf("%d %d",a,b);
	printf("scanf 함수가 입력받은  데이터의  개수는  %d입니다 "); 
	
	return 0;
}
