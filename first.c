#include <stdio.h> //����� ���� ǥ�� ���̺귯��, �ý��� ���̺귯��
//# : ��ó���� ;���� ������ȵ�
funcA() //ȣ��� �� ����
{
	printf("funcA() start. \n");
	printf("funcA() end. \n");
}

int main() //�ڵ����� �����ϴ� ������ �Լ�.
{
	printf("main() start. \n");
	funcA();
	printf("main() end. \n");

	return 0;
}

