#include <stdio.h>

int main()
{
	char str[128];
	int x = 0;
	printf("Enter the value: ");
	scanf_s("%d", &x);
	printf("\n");
    int i = 0;

	while (x >= 2)
	{
		str[i] = x % 2 + '0'; // перевод числа в символ
		x = x / 2;
		i++;
	}
	str[i] = x + '0';

	int end = i;

	int j = 0;
	int temp = 0;
	for (j = 0; j <= i; j++, i--)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}

	end++;
	str[end] = '\0';

	printf("%s", str);
	return 0;
}
