#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "������3��������ȵ�����";
	cin >> a >> b >> c;

	/*����1*/
	//if ((a > b) && (a > c))
	//	cout << a << "����������" << endl;
	//if ((b>a) &&(b>c))
	//	cout << b << "����������" << endl;
	//if ((c > a) && (c > b))
	//	cout << c << "����������" << endl;

	//������- ��Ŀ�����
	//a = a > b ? a : b;
	//a = a > c ? a : c;
	//cout << a << "����������" << endl;

	//������ ���� 
	//�����������߷���һ������max����
	//��������д max ��a,b,c)

	return 0;
}
