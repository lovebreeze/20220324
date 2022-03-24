#include <stdio.h>
#include <stdlib.h>

// void: 자료형이 존재하지 않기 때문에 반환할 게 없습니다.
int function(int a, int b)
{
	printf("두 수 %d과 %d 의 곱 , 합: %d %d",a,b,a*b,a+b);
	
	int c = a - b;
	return c;
}

int Add(int x, int y);// 두 수의 합
int Sub(int x, int y);// 두 수의 차 ( 절댓값;)
int Mul(int x, int y);// 두 수의 곱
float Divi(int x, int y);// 앞의 수를 뒤의 수로 나누기

int main()
{
	
	//상수 지시 포인터

	int value = 10;

	printf("%d\n", value);

	// 상수 지시 포인터 : 포인터로는 접근해서 값을 변경할수 없도록 상수화 하는것.
	const int *ptr = &value;

	const char* character= "leedonghyeon" ;

	//value 값을 변경하기위해서는 ptr포인터가 상수지시 포인터이기때문에 해당 변수로 접근해서 직접 변경해야함.
	value = 500;

	printf("%d\n", *ptr);
	printf("%d\n", value);
	printf("%s\n", character);
	printf("%c\n", character[1]);
	int sum ;

	int num1=5,num2=3;
	
	printf("합 : %d\n", Add(10, 20));
	printf("차 : %d\n", Sub(10, 20));
	printf("곱 : %d\n", Mul(10, 20));
	printf("나눗셈 : %.2f\n", Divi(10, 20));

	return 0;
}

// 함수 네개 만들기

// 반환형 - 함수이름(매개변수x,매개변수y);
int Add(int x, int y)
{
	int z = x + y;

	return z;
}

//서로 같은 이름의 함수를 정의 할 수 없음.
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
