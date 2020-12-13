#include <stdio.h>

typedef struct happy {
	int a;
	char b;
}happy;

int main(void)
{
	happy H;
	H.a = 95;
	H.b = 'A';

	printf("%d %c\n", H.a, H.b);

	return 0;
}