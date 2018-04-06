		#include "stdafx.h"
#include <string.h>
#include <stdio.h>
void mystrcat(char*to,char*from)
{
	while (*to)to++;
	while (*from)
	{
		*to = *from;
		to++;
		from++;
		*to = '\0';	
	}
}
int main()
{
	char stroka1[100], stroka2[50];
	gets_s(stroka2);
	gets_s(stroka1);
	mystrcat(stroka2,stroka1);
	printf("%s\n", stroka2);

	return 0;
}