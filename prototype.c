#include<stdio.h>
int main(int argc,char *argv[])
{
	int out1, out2;
	int a,b;
	
	out1 = printf("Hello c world\n");
	printf("%d\n",out1);
	
	printf("�ΰ��� �����Է� : ");
	out2 = scanf("%d %d", &a, &b);
	printf("%d %d",a,b);
	printf("scanf �Լ��� �Է¹���  ��������  ������  %d�Դϴ� "); 
	
	return 0;
}
