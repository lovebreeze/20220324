#include <stdio.h>
#include <stdlib.h>

// void: �ڷ����� �������� �ʱ� ������ ��ȯ�� �� �����ϴ�.
int function(int a, int b)
{
	printf("�� �� %d�� %d �� �� , ��: %d %d",a,b,a*b,a+b);
	
	int c = a - b;
	return c;
}

int Add(int x, int y);// �� ���� ��
int Sub(int x, int y);// �� ���� �� ( ����;)
int Mul(int x, int y);// �� ���� ��
float Divi(int x, int y);// ���� ���� ���� ���� ������

int main()
{
	
	//��� ���� ������

	int value = 10;

	printf("%d\n", value);

	// ��� ���� ������ : �����ͷδ� �����ؼ� ���� �����Ҽ� ������ ���ȭ �ϴ°�.
	const int *ptr = &value;

	const char* character= "leedonghyeon" ;

	//value ���� �����ϱ����ؼ��� ptr�����Ͱ� ������� �������̱⶧���� �ش� ������ �����ؼ� ���� �����ؾ���.
	value = 500;

	printf("%d\n", *ptr);
	printf("%d\n", value);
	printf("%s\n", character);
	printf("%c\n", character[1]);
	int sum ;

	int num1=5,num2=3;
	
	printf("�� : %d\n", Add(10, 20));
	printf("�� : %d\n", Sub(10, 20));
	printf("�� : %d\n", Mul(10, 20));
	printf("������ : %.2f\n", Divi(10, 20));

	return 0;
}

// �Լ� �װ� �����

// ��ȯ�� - �Լ��̸�(�Ű�����x,�Ű�����y);
int Add(int x, int y)
{
	int z = x + y;

	return z;
}

//���� ���� �̸��� �Լ��� ���� �� �� ����.
int Sub(int x, int y)
{
	int z = abs(x - y);

	return z;
}
int Mul(int x, int y)
{
	int z = x * y;

	return z;
}
float Divi(int x, int y)
{
	return (float)x / y;
}
