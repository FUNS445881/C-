#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath> //cmath����sin�ļ��㣬ע�͵�����޷�����(���һ��ǿ��ԣ�ħ�ã�
using namespace std;
int main()
{
	const double pi = 3.1415926;
	int degree;
	double radian;
	cout << "������Ƕ�ֵ��";
	cin >> degree;
	radian = sin(degree * pi / 180); //��ʽ�ӱ�ʾ��degree * pi /180 ����ǻ��ȣ���ͨ��sin���ֵ���� radian
	cout << "sin(" << degree << "deg.)" << '=' << radian << endl; //��ʽ�ӱ�ʾ ��ӡ sin����degree�����ִ�С��+deg����ʾ���ȣ� = ��radian��ֵ��
	return 0;
}
