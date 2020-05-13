#include <stdio.h>
 
int main(void)
{
	

    char str[80];
    int i;
 
    printf("문자열을 입력 : ");
    scanf("%s", str);
 
    for (i=strlen(str);i>=0; i--)
        putchar(str[i]);
    
     return 0;

}



