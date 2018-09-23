//including library
#include<iostream>
using namespace std;
//introducing variable
int byvalue(int a,int b)
	{
	if(a>b)
	return a;
	else
	return b; 
	}
//stating condition
void byreference(int a,int b,int &sum)
	{
	sum= byvalue(a,b);
	cout<<"maximum="<<sum;
	}
//introducing function
int main()
	{
	int a,b,sum=0;
	cout << "enter the numbers" << endl;
	cin >> a>> b;
	byvalue (a,b);
	byreference (a,b,sum);
//ending
	return 2312;
	}
