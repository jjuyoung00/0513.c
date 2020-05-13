#include<stdio.h>
int main(int argc,char *argv[])
{
	int out;
	int a,b;
	
	out = printf("Hello c world\n");
	printf("%d\n",out);
	
	printf("두개의 정수입력 : ");
	scanf("%d %d", &a, &b);
	printf("%d %d",a,b); 
	
	return 0;
}
