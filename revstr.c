#include <stdio.h>
 
int main(void)
{
	

    char str[80];
    int i;
 
    printf("���ڿ��� �Է� : ");
    scanf("%s", str);
 
    for (i=strlen(str);i>=0; i--)
        putchar(str[i]);
    
     return 0;

}



