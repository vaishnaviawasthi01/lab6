//including library
#include<iostream>
using namespace std;
//introducing variable for q2
int byvalue2(int a,int b)
	{
	int c = a+b;
	return c;
	}
//stating condition for q2
	void byreference2(int a,int b,int &sum)
	{
	sum = byvalue2(a,b);
	cout << sum;
	}
//introducing variable for q3
	int byvalue3(int a,int b)
	{
	if(a>b)
	return a;
	else
	return b;
	}
//stating condition for q3
	void byreference3(int a,int b,int &sum)
	{
	sum = byvalue3(a,b);
	cout << "maximum = " << sum;
	}
//introducing variable for q4
	int byvalue4(int a,int b)
	{
	if(a<b)
	return a;
	else 
	return b; 
	}
//stating condition for q4
	void byreference4(int a,int b,int &sum)
	{
	sum = byvalue4(a,b);
	cout << "minimum=" << sum;
	}
//including function
int main()
	{
//introducing variable
	int a,b,sum=0,choice;
	cout << "enter the numbers" << endl;
	cin >> a >> b;
	cout << "enter 1 for sum,2 for maximum,3 for minimum" << endl;
	cin >> choice;
//including if else condition
	if(choice == 1)
	{
	byvalue2(a,b);
	byreference2(a,b,sum);
	}
	else if(choice == 2)
	{
	byvalue3(a,b);
	byreference3(a,b,sum);
	}
	else if(choice == 3)
	{
	byvalue4(a,b);
	byreference4(a,b,sum);
	}
	else
	cout << "please enter correct choice" << endl; 
//ending
	return 0;
	}

    
