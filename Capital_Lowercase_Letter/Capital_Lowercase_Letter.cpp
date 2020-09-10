#include<stdio.h>
int main()
{
	char x[1000];
	int n = 0;
	gets_s(x);
	while (x[n] != '\0')
	{
		if (x[n] >= 'a' && x[n] <= 'z')
		{
			printf("%c", x[n] - 32);
		}
		else if (x[n] >= 'A' && x[n] <= 'Z')
		{
			printf("%c", x[n] + 32);
		}
		n++;
	}
	return 0;
}