#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三个数字" << endl;
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "输入错误，方程并非一元二次方程" << endl;
	}
	else
	{
		double delta;
		delta = b * b - 4 * a * c;
		double x1, x2;
		if (delta >= 0)
		{
			x1 = (-b + sqrt(delta)) / 2 * a;
			x2 = (-b - sqrt(delta)) / 2 * a;
			if (x1 == x2)
			{
				cout << "方程有两个相同的跟" << "x1=x2=" << x1 << endl;
			}
			else
			{
				cout << "方程有两个不相同的跟" << "x1=" << x1 << "x2=" << x2 << endl;
			}
		}
		else
		{
			cout << "方程无实数根,有复数根" << endl;
			//delta = -sqrt(delta)
			delta = -delta;
			double del;
			del = sqrt(delta);
			double c,d;
			c = (-b) / 2 * a;
			d = (del) / 2 * a;
			cout << "方程的复数根为" << "x1="<<c<<"+"<<d<<"i "<<"x2 = "<<c<<"-"<<d <<"i"<< endl;
		}
		return 0;
	}

}