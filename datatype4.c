#include <stdio.h>

int main()
{

	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / y); //묵시적 형변환

	printf("%f \n", (float)x / 30); // cast 연산자 (명시적 형번환) 후 묵시적 형변환

	typedef long long int li;
	long long int n1 = 2700000000;
	li n2 = 2800000000;
	printf("%lld \n", n2);
	return 0;
}