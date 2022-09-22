#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入3个互不相等的数字";
	cin >> a >> b >> c;

	/*方法1*/
	//if ((a > b) && (a > c))
	//	cout << a << "是最大的数字" << endl;
	//if ((b>a) &&(b>c))
	//	cout << b << "是最大的数字" << endl;
	//if ((c > a) && (c > b))
	//	cout << c << "是最大的数字" << endl;

	//方法二- 三目运算符
	//a = a > b ? a : b;
	//a = a > c ? a : c;
	//cout << a << "是最大的数字" << endl;

	//方法三 函数 
	//将方法二或者方法一做函数max（）
	//主函数中写 max （a,b,c)

	return 0;
}
