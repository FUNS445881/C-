#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int x, y, z;
	int arr[40] = {};
	int count = 0;

	while (count < 40)
	{
		x = rand() % 101;
		x = x - 50;
		arr[count] = x;
		//x = rand() % 2;
		//if (x == 1)
		//{
		//	y = -1 * (rand() % 51);
		//}
		//else
		//{
		//	y = rand() % 51;
		//}
		//arr[count] = y;
		count++;
	}
	int n1 = 0;
	int sum1 = 0;
	int n2 = 0;
	int sum2 = 0;
	int sum = 0;
	for (count = 0; count < 40; count++)
	{
		if (arr[count] > 0)
		{
			n1++;
			sum1 += arr[count];
		}
		if (arr[count] < 0)
		{
			n2++;
			sum2 += arr[count];
		}
		sum += arr[count];
	}
	double a1, a2;
	a1 = (double)sum1 / n1;
	a2 = (double)sum2 / n2;

	for (count = 0; count < 40;)
	{
		//int bug;
		//bug = count + 8;
		//for (;count<bug;count++)
		//{
		//	cout << setw(3) << arr[count]<<' ';
		//}
		cout << setw(6) << arr[count];
		if ((count+1) % 8 == 0)
		{
			cout << endl;
		}
		count++;
	}
	cout << "正数的个数为" << n1<<endl;
	cout << "正数的和为" << sum1 << endl;
	cout << "正数的平均值为" << a1 << endl;
	cout << "负数的个数为" << n2 << endl;
	cout << "负数的和为" << sum2 << endl;
	cout << "负数的平均值为" << a2 << endl;
	cout << "整数的和为" << sum << endl;

	return 0;
}
