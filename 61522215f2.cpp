#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	double a, b;//会显示未定义标识符"a""b"
	cout << "请输入两个数字" ;
	cin >> a >> b;
	if (a > b)
		cout << a << '>' << b << endl;
	else
		if (a == b)
			cout << a << '=' << b << endl;
		else
			cout << a << '<' << b << endl;
	return 0;
}
