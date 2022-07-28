#include <stdio.h>

#define EQ "=============" 
#define MSG "오스템 C 교육"
#define SUM(x,y) x+y

//# 으로 시작하는 구문을 전처리문이라고한다 (; 으로 끝나지 않는다.)
int main()
{
	printf("C 언어의 자료형(DataType) \n");

	//변수나 배열의 선언은 자료형의 크기만큼 메모리를 할당 받고,
	//컴파일러에게 자료형을 알린다.
	char ch; //선언
	int age = 20; //초기화
	double height = 175.1;
	const float PI = 3.14159; //변수를 상수화(반드시 초기화)
	ch = 'A'; //대입

	printf("%c, %d, %lf, %f \n", ch, age, height, PI);

	age = 27; 
	//PI = 1.5;

	printf("%c, %d, %lf, %f \n", ch, age, height, PI);

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	return 0;
}