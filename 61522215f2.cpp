#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	double a, b;//����ʾδ�����ʶ��"a""b"
	cout << "��������������" ;
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
