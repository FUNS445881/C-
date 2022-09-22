#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath> //cmath包含sin的计算，注释掉后会无法计算(但我还是可以，魔幻）
using namespace std;
int main()
{
	const double pi = 3.1415926;
	int degree;
	double radian;
	cout << "请输入角度值：";
	cin >> degree;
	radian = sin(degree * pi / 180); //该式子表示：degree * pi /180 算的是弧度，再通过sin求出值赋给 radian
	cout << "sin(" << degree << "deg.)" << '=' << radian << endl; //该式子表示 打印 sin（（degree的数字大小）+deg（表示弧度） = （radian的值）
	return 0;
}
