#include <stdio.h>

int main()
{
	
	short int n1;	//%hd
	int n2;			//%d
	long int n3;	//%ld
	short n4;
	long n5;
	long long n6;   //%lld
	
	printf("short int : %d, int : %d , long int : %d \n", sizeof(n1), sizeof(n2), sizeof(n3));
	printf("short : %d,long : %d , long long : %d \n", sizeof(n4), sizeof(n5), sizeof(n6));

	signed char c1 = 'A';
	unsigned char c2 = 97;
	printf("char : %d, unsigned char : %d \n", sizeof(c1), sizeof(c2));


	float f1 = 123456789123456789;
	double d1 = 123456789123456789;

	printf("f1 : %f \n", f1);
	printf("d1 : %f \n", d1);
	return 0;

}