#include <stdio.h>

int main()
{

	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / y); //������ ����ȯ

	printf("%f \n", (float)x / 30); // cast ������ (����� ����ȯ) �� ������ ����ȯ

	typedef long long int li;
	long long int n1 = 2700000000;
	li n2 = 2800000000;
	printf("%lld \n", n2);
	return 0;
}