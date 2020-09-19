#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string>
int main() {
	int i = 0, j;
	char a[50];
	char *b;
	scanf("%s", a);
	b = a;
	while (*b != '\0')
	{
		if (*b - 'a' >= 0 && *b - 'a' <= 'z')
		{
			printf("%c", a[i] - 'a' + 'A');
			
		}
		else
		{
			printf("%c", a[i]);
		}
		i++;
		b++;
	}
	return 0;
}