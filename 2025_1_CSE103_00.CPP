#include <iostream>

using namespace std;

// Fn1 선언
double Fn1(double a, double b)
{
	double p = 0;

	p = a + b;
	return p;

}

// Fn2 선언
double* Fn2(double* a, int n)
{
	double* p = &a[0];

	for (int i = 1; i < n; ++i)  
	{
		if (a[i] > *p)
		{
			p = &a[i];
		}
	}
	return p; 
}

// Fn3 선언
double Fn3(double a, double b, double& max)
{	
	
	double diff = 0;

	if (a >= b)
	{
		max = a ;
		diff = double (a - b);
	}

	else 
	{
		max = b;
		diff = double (b - a);
	}

	return diff;

}

// Fn4 선언
//void Fn4(double a[][3], int n)


// Fn5 선언
// double Fn5(double (*f)(double), double x);

// Fn6 선언
// int Fn6(const char* src, char* dest = nullptr);

// Fn7 선언
// void Fn7(int num, char* str, int index = 0);

// Print 함수 (1차원 배열)
void Print(double* a, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << a[i] << ", ";
	std::cout << std::endl;
}

// Print 함수 (2차원 배열)
void Print(double a[][3], int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 3; ++j)
			std::cout << a[i][j] << ", ";
		std::cout << std::endl;
	}
}

int main() {
	// 문제 1
	
	std::cout << "### 1 ###" << std::endl;
	std::cout << Fn1(3.3, 2.2) << " " << Fn1(2.7, 3.9) << std::endl;
	
	
	// 문제 2
	
	std::cout << "\n### 2 ###" << std::endl;
	double a1[3] = { 9.9, 5.7, 1.2 };
	double a2[5] = { 3.5, 2.5, -7.1, 9.1, -1.3 };
	double* p;
	p = Fn2(a1, 3);
	*p *= *p;
	Print(a1, 3);
	p = Fn2(a2, 5);
	std::cout << *p << std::endl;
	
	
	// 문제 3
	
	std::cout << "\n### 3 ###" << std::endl;
	double max, diff;
	diff = Fn3(3.2, 2.7, max);
	std::cout << max << " " << diff << std::endl;
	diff = Fn3(2.1, 12.6, max);
	std::cout << max << " " << diff << std::endl;
	
	
	// 문제 4
	/*
	std::cout << "\n### 4 ###" << std::endl;
	double a3[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	Fn4(a3, 3);
	Print(a3, 3);
	*/
	
	// 문제 5
	/*
	std::cout << "\n### 5 ###" << std::endl;
	std::cout << Fn5(sin, 90) << ' ' << Fn5(cos, 66.67) << ' ' << Fn5(tan, 45) << std::endl;
	*/
	
	// 문제 6
	/*
	std::cout << "\n### 6 ###" << std::endl;
	char* str;
	str = new char[Fn6("Programming") + 1];
	Fn6("Programming", str);
	std::cout << str << std::endl;
	delete[] str;
	*/
	
	// 문제 7
	/*
	std::cout << "\n### 7 ###" << std::endl;
	char a4[10] = { 0 };
	Fn7(123, a4);
	std::cout << a4 << std::endl;
	*/
	
	return 0;
}
