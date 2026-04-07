#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Ex1 선언
int Ex1(int a)
{
    if (a < 0)
    {
        return 0;
    }

    if (a > 5)
    {
        return 5;
    }

    else 
    {
        return a;
    }
}

// Ex2 선언
bool Ex2(double* a)
{



    if (*a < 0)
    {
        return false;
    }

    else 
    {
        *a = sqrt(*a);
        return true;
    }

}

// Ex3 선언
void Ex3(int a, int b, int& sum)
{

    sum = 0;
    
    if (a > b)
    {
        sum = 0;
    }

    for (int i = a; i <= b; ++i)
    {
        sum += i;
    }
}

// Ex4 선언
// void Ex4(std::vector<int>& v);

// Ex5 선언
// std::vector<std::vector<int>> Ex5(int n);

// Ex6 선언
// int Ex6(std::vector<int>& v);

// Ex7 선언
// void Ex7(int num, std::vector<int>& v1, std::vector<int>& v2);

// Print 함수 (1차원 벡터)
void Print(std::vector<int>& v) {
	for (int i = 0; i < v.size(); ++i)
		std::cout << v[i] << ", ";
	std::cout << std::endl;
}

// Print 함수 (2차원 벡터)
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
	for (int i = -2; i < 10; ++i)
		std::cout << Ex1(i) << " ";
	std::cout << std::endl;
	
	
	// 문제 2
	
	std::cout << "\n### 2 ###" << std::endl;
	double x = 5;
	std::cout << std::boolalpha << Ex2(&x) << " ";
	std::cout << x << std::endl;
	x = 0;
	std::cout << Ex2(&x) << " ";
	std::cout << x << std::endl;
	x = -2;
	std::cout << Ex2(&x) << " ";
	std::cout << x << std::noboolalpha << std::endl;
	
	
	// 문제 3
	
	std::cout << "\n### 3 ###" << std::endl;
	int sum = 0;
	Ex3(2, 10, sum);
	std::cout << sum << std::endl;
	Ex3(-1, 5, sum);
	std::cout << sum << std::endl;
	Ex3(2, 1, sum);
	std::cout << sum << std::endl;
	
	
	// 문제 4
	/*
	std::cout << "\n### 4 ###" << std::endl;
	std::vector<int> v1{ 2, 4, 5, 7, 9 };
	Ex4(v1);
	Print(v1);
	*/
	
	// 문제 5
	/*
	std::cout << "\n### 5 ###" << std::endl;
	std::vector<std::vector<int>> v3;
	v3 = Ex5(5);
	Print(v3);
	*/
	
	// 문제 6
	/*
	std::cout << "\n### 6 ###" << std::endl;
	std::vector<int> v4{ 1, 2, 6, 4, 6 };
	std::cout << Ex6(v4) << std::endl;
	v4.clear();
	std::cout << Ex6(v4) << std::endl;
	std::cout << Ex6(std::vector<int>{1, 9, -1}) << std::endl;
	*/
	
	// 문제 7
	/*
	std::cout << "\n### 7 ###" << std::endl;
	std::vector<int> v5, v6;
	Ex7(12345, v5, v6);
	Print(v5);
	Print(v6);
	*/
	
	return 0;
}
