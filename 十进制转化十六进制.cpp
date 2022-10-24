#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int x = 0;
	int a = 0;
	int arr[11] = {0};
	char brr[11] = {0};
	int i = 0;
	int j;
	cout << "请输入十进制整数"<<endl;
	cin >> x;
	if (x >= 0)
	{
		cout << "+";
	}
	else
	{
		cout << "-";
	}
	x = abs(x);
	for (; x != 0;)
	{
		a = x % 16;
		x = x / 16;
		arr[i] = a;
		i++;
	}

	int n = i;//存储有多少位

	for (i = 0; i < 11; i++)
	{
		if (arr[i] < 10)
		{
			brr[i] = '0' + arr[i];
		}
		else
		{
			brr[i] = '0' + arr[i] + 7;
			//brr[i] = '0' -arr[i]+'A'
		}
	}

	for (i = n; i >= 0; i--)
	{
		cout << brr[i];
	}
	return 0;
}
