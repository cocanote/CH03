#include <stdio.h> //입출력 과련 표준 라이브러리, 시스템 라이브러리
//# : 전처리문 ;으로 끝나면안됨
funcA() //호출될 때 실행
{
	printf("funcA() start. \n");
	printf("funcA() end. \n");
}

int main() //자동으로 실행하는 진입점 함수.
{
	printf("main() start. \n");
	funcA();
	printf("main() end. \n");

	return 0;
}

