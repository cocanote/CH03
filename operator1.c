#include <stdio.h>

int main()
{

	//4.3 증감 연산자///////////////
	int x = 100, y = 200;
	printf("x: %d \n", x);
	
	//후위형 : 다음 라인부터 변수에 증감이 된다 (후 증감 선 사용)
	x++;	//x = x + 1
	printf("x: %d \n", x);
	x--;	//x = x - 1
	printf("x: %d \n", x);

	//전위형 : 해당 라인에서 변수에 증감이 된다 (선 증감 후 사용)
	++x;	//x = x + 1
	printf("x: %d \n", x);
	--x;	//x = x - 1
	printf("x: %d \n", x);
	///////////////////////////////

	//전위 후위 비교 Test //////////
	printf("x: %d, y: %d \n", ++x, y++);
	printf("x: %d, y: %d \n", x, y);
	printf("x: %d, y: %d \n", --x, y--);
	printf("x: %d, y: %d \n", x, y);
	///////////////////////////////


	return 0;
}