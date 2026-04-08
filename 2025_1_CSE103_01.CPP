#include <iostream>
#include <vector>

using namespace std;

// Fn1 선언
int Fn1(int a, int b)
{
    int p = 0;

    if (a >= b)
    {
        p = a - b;
    }

    else 
    {
        p = b - a;
    }

    return p;
}

// Fn2 선언
int Fn2(int* a, int* b)
{
    if ( *a >= *b )
    {
        return *a;
    }

    else 
    {
        return *b;
    }
}


// Fn3 선언
//void Fn3(int n, int& sum)


// Fn4 선언
// std::vector<double> Fn4(std::vector<double>& v);

// Fn5 선언
// std::vector<std::vector<int>> Fn5(int n);

// Fn6 선언
// int Fn6(std::vector<double>& v);

// Fn7 선언
// void Fn7(int num, std::vector<int>& v1, std::vector<int>& v2);

// Print 함수 (1차원 double 벡터)
void Print(std::vector<double>& v) {
	for (int i = 0; i < v.size(); ++i)
		std::cout << v[i] << ", ";
	std::cout << std::endl;
}

// Print 함수 (1차원 int 벡터)
void Print(std::vector<int>& v) {
	for (int i = 0; i < v.size(); ++i)
		std::cout << v[i] << ", ";
	std::cout << std::endl;
}

// Print 함수 (2차원 int 벡터)
void Print(std::vector<std::vector<int>>& v) {
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j)
			std::cout << v[i][j] << ", ";
		std::cout << std::endl;
	}
}

int main() {
	// 문제 1
	
	std::cout << "### 1 ###" << std::endl;
	std::cout << Fn1(3, 2) << " " << Fn1(3, 0) << " " << Fn1(2, 9) << std::endl;
	
	
	// 문제 2
	
	std::cout << "\n### 2 ###" << std::endl;
	int x1 = 2, x2 = 5;
	std::cout << Fn2(&x1, &x2) << std::endl;
	x1 = 10; x2 = 5;
	std::cout << Fn2(&x1, &x2) << std::endl;
	x1 = x2 = 5;
	std::cout << Fn2(&x1, &x2) << std::endl;
	
	
	// 문제 3
	/*
	std::cout << "\n### 3 ###" << std::endl;
	int sum;
	Fn3(10, sum);
	std::cout << sum << std::endl;
	Fn3(5, sum);
	std::cout << sum << std::endl;
	*/
	
	// 문제 4
	/*
	std::cout << "\n### 4 ###" << std::endl;
	std::vector<double> v1{ 1.5, 2.4, 3.3, 4.2, 5.1 }, v2;
	v2 = Fn4(v1);
	Print(v1);
	Print(v2);
	*/
	
	// 문제 5
	/*
	std::cout << "\n### 5 ###" << std::endl;
	std::vector<std::vector<int>> v3;
	v3 = Fn5(3);
	Print(v3);
	*/
	
	// 문제 6
	/*
	std::cout << "\n### 6 ###" << std::endl;
	std::vector<double> v4{ 1.5, 2.4, 6.1, 4.2, 5.1 };
	std::cout << Fn6(v4) << std::endl;
	v4.clear();
	std::cout << Fn6(v4) << std::endl;
	std::cout << Fn6(std::vector<double>{1.1, 9.2, -1.2}) << std::endl;
	*/
	
	// 문제 7
	/*
	std::cout << "\n### 7 ###" << std::endl;
	std::vector<int> v5, v6;
	Fn7(12345, v5, v6);
	Print(v5);
	Print(v6);
	*/
	
	return 0;
}
