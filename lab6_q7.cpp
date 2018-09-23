#include<iostream>
using namespace std;
//write a user defined function to upper() that return to uppercase of input char received.
	char to upper(char lowercase,char uppercase)
	{
	uppercase = lowercase-32;
	return uppercase;
	}
//write a user defined function to lower () that return to lowercase of input char received.
	char to lower(char uppercase,char lowercase)
	{
	lowercase = uppercase+32;
	return lowercase;
	}
//write a main program that calls the other function based on the input of the user.if the user enter a lower case character, it should automatically detect it and call to upper() and display the upper case value and vice-versa.
int main()
	{
	char ch,alp,result;
	cout << "enter any alphabet" << endl;
	cin >> ch;
	if(ch >= 'a' && ch <='z')
	{
	result = to upper(ch,alp);
	cout << "uppercase character is" << result << endl;
	}
	else
	{
	result = to lower(ch,alp);
	cout << "lowercase character is" << result << endl;
	}
	return 0;
	}
