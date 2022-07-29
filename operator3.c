#include <stdio.h>

int main()
{
	//조건연산자////////////////////
	int x;

	printf("성별 ? (0 : 남, 1 : 여)");
	scanf("%d", &x);

	printf("%s \n", x ? x==1 ? "여성" : "입력오류" : "남성"); // 연산자 안에 연산자를 또 쓸 수 있음
	///////////////////////////////

	//복합 대입 연산자//////////////
	int n1 = 100, n2 = 200;
	int sum = 0;

	sum += n1; //sum = sum + n1;
	sum += n2; //sum = sum + n2;
	printf("SUM : %d \n", sum);

	return 0;
}