#include <stdio.h>

#define EQ "=============" 
#define MSG "������ C ����"
#define SUM(x,y) x+y

//# ���� �����ϴ� ������ ��ó�����̶���Ѵ� (; ���� ������ �ʴ´�.)
int main()
{
	printf("C ����� �ڷ���(DataType) \n");

	//������ �迭�� ������ �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ� �ް�,
	//�����Ϸ����� �ڷ����� �˸���.
	char ch; //����
	int age = 20; //�ʱ�ȭ
	double height = 175.1;
	const float PI = 3.14159; //������ ���ȭ(�ݵ�� �ʱ�ȭ)
	ch = 'A'; //����

	printf("%c, %d, %lf, %f \n", ch, age, height, PI);

	age = 27; 
	//PI = 1.5;

	printf("%c, %d, %lf, %f \n", ch, age, height, PI);

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	return 0;
}