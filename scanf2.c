#include <stdio.h>

int main(void)
{
	char ch;		//A
	short int num1;	//100
	int num2;	//200
	long int num3;	//300
	float f_num;	//1.1
	double d_num;	//5.2



	printf("input short int ? ");
	scanf("%hd",&num1);

	printf("input char ? ");
	scanf(" %c", &ch); //공백지정자 : 엔터 텝 공백 제거

	printf("input  int ? ");
	scanf("%d",&num2);

	printf("input long  int ? ");
	scanf("%ld",&num3);
	
    printf("input float ? ");
	scanf("%f",&f_num);

    printf("input double ? ");
	scanf("%lf",&d_num);

	printf("ch: %c, num1 : %hd, num2 : %d, num3: %ld, f_num : %f , d_num : %lf \n",
		                       ch, num1, num2, num3, f_num, d_num );

	return 0 ;
}
