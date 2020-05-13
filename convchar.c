#include<stdio.h>
#include<string.h>

int main()
{
	char str[21];
	int i;
	printf("20글자 내외 문자열 입력:");
	scanf("%s",str);
	
	//A=65, Z=97, z=122
	printf("%s",str); 
	
	for(i=0; i<strlen(str);i++)
	{
		if(str[i] >= 65 && str[1] <=90)
		    putchar(tolower(str[i]));
		    //putchar(str[1]+32);
		else if(str[i] >=97 && str[i] <=122)
		    putchar(str[i]-32);
		else
		    putchar(str[i]);
	}
	 
	return 0;
}
