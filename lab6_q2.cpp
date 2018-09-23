//including library
#include<iostream>
using namespace std;
//including variable
int byvalue(int a,int b)
	{
	int c = a+b;
	return c;
	}
//stating condition
void byreference(int a,int b,int &sum)
	{
	sum = byvalue(a,b);
	cout << sum;
	}
//introducing function
int main()
	{
	int a,b,sum = 0;
	cout << "enter the numbers" << endl;
	cin >> a >> b;
	byvalue(a,b);
	byreference(a,b,sum);
//ending
	return 0;
	}
