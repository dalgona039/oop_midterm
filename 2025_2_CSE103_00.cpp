#include <iostream>
#include <cstring>

using namespace std;

// Ex1 선언
int Ex1(int a, int b)
{
    int sum;
    sum = a + b;

    if (sum >= 0 && sum <= 99)
    {
        return sum;
    }

    if (sum < 0)
    {
        return 0;
    }

    else 
    {
        return 99;
    }
    

}

// Ex2 선언
bool Ex2(double* a, double* b)
{
    if (*a <= *b)  // 포인터가 가리키는 값을 비교
    {
        return true;
    }

    else 
    {   
        double temp = *a;

        *a = *b;
        *b = temp;
        return false;
    }
}

// Ex3 선언
double Ex3(int* a, int n, int& sum)
{
    sum = 0;
    double p = 0;
    for (int i = 0; i < n; ++i )
    {
        sum += a[i];
        p = (double)sum / n;
    }

    return p;
}

// Ex4 선언
int Ex4(int* a, int n)
{
	if (n == 0)
	{
		return -1;
	}

	int max = a[0];
	int max_index = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[i] >= max)
		{
			max = a[i];
			max_index = i;
		}
	}

	return max_index;
}

// Ex5 선언
int Ex5(char* dest, const char* src)
{
	int len = 0;
	for (int i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
		len++;
	}

	dest[len] = '\0';
	return len;
}

// Ex6 선언
int** Ex6(int row, int col)
{
	return 0;
}

// Print 선언
// void Print(int** pp, int row, int col);

// Ex7 선언
// void Ex7(char& c);

int main() {
	// 문제 1
	
	std::cout << "### 1 ###" << std::endl;
	std::cout << Ex1(1, -3) << " " << Ex1(3, 2) << " "
	           << Ex1(99, 3) << " " << Ex1(91, 2) << " ";
	std::cout << std::endl;
	
	
	// 문제 2
	
	std::cout << "\n### 2 ###" << std::endl;
	double x = 1.2, y = 2.5;
	std::cout << std::boolalpha << Ex2(&x, &y) << " ";
	std::cout << x << ", " << y << std::endl;
	x = 5.3, y = 1.2;
	std::cout << Ex2(&x, &y) << " ";
	std::cout << x << ", " << y << std::endl;
	x = 7.5, y = 7.5;
	std::cout << Ex2(&x, &y) << std::noboolalpha  << " ";
	std::cout << x << ", " << y << std::endl;
	
	
	// 문제 3
	
	std::cout << "\n### 3 ###" << std::endl;
	double mean = 0;
	int sum = 0;
	int a3[5] = { 1, 3, 7, 10, 25 };
	mean = Ex3(a3, 4, sum);
	std::cout << sum << ", " << mean << std::endl;
	mean = Ex3(a3, 5, sum);
	std::cout << sum << ", " << mean << std::endl;
	
	
	// 문제 4
	
	std::cout << "\n### 4 ###" << std::endl;
	int a4[5] = { 3, 7, 2, 4, 7 };
	std::cout << Ex4(a4, 5) << std::endl;
	std::cout << Ex4(a4, 0) << std::endl;
	std::cout << Ex4(a4, 3) << std::endl;
	
	
	// 문제 5
	
	std::cout << "\n### 5 ###" << std::endl;
	char str5[100] = "";
	int len = 0;
	len = Ex5(str5, "Programming");
	std::cout << str5 << ", " << len << std::endl;
	
	
	// 문제 6
	/*
	std::cout << "\n### 6 ###" << std::endl;
	int** pp = Ex6(3, 4);
	Print(pp, 3, 4);
	*/
	
	// 문제 7
	/*
	std::cout << "\n### 7 ###" << std::endl;
	char str7[100] = "abX1at3x~#+cT";
	for(int i = 0 ; i < strlen(str7); ++i)
		Ex7(str7[i]);
	std::cout << str7 << std::endl;
	*/
	
	return 0;
}

