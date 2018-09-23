//include library
#include<iostream>
using namespace std;
//writing a function that outputs the sum of all even numbers between firstNum and secondNum by creating user friendly function called sumEvenNumbers().
	int sumEvenNumbers(int a,int b)
	{
	int sum = 0;
	for(int i = a+1;i <= b-1;i++)
	{
	if(i%2==0)
	sum = sum+i;
	else
	sum = sum;
	}
	return sum;
	}
//writing a function that outputs the sum of all odd numbers between firstNum and secondNumby creating a loop in user friendly function called sumOddNumbers().

	int sumOddNumbers(int a,int b)
	{
	int sum=0;
	for(int i=a+1;i<=b-1;i++)
	{
	if(i%2!=0)
	sum=sum+i;
	else
	sum=sum;
	}
	return sum;
	}
//writing a function that outputs the sum of square of odd numbers between firstNum and secondNum by creating a loop in user friendly way using a function called sumSquareOddNumbers().
	int sumSquareOddNumbers(int a,int b)
	{
	int sum=0,i=a+1;
	while(i<=b-1)
	{
	{
	if(i% 2!=0)
	sum = sum+i*i;

	else
	sum = sum;
	}
	i++;
	}
	return sum;
	}
//writing a function that outputs the sum of the square of even numbers between firstNum and secondNum by creating a loop in user friendly way using a function called sumSquareEvenNumbers().
	int sumSquareEvenNumbers(int a,int b)
	{
	int sum = 0,i = a+1;
	while(i <= b-1)
	{
	{
	if(i% 2 == 0)
	sum = sum+i*i;

	else
	sum = sum;
	}
	i++;
	}
	return sum;
	}
//writing a main program by declaring variables sumEven for sumEvenNumbers, sumOdd for sumOddNumbers, sumSquareEven for sumSquareEvenNumbers, sumSquareOdd for sumSquareOddNumbers.      
int main(){
	int firstnum,secondnum,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
	cout << "enter the  numbers in ascending order " << endl;
	cin >> firstnum >> secondnum;
	sumEven = sumEvenNumbers(firstnum,secondnum);
	sumOdd = sumOddNumbers(firstnum,secondnum);
	sumSquareEven = sumSquareEvenNumbers(firstnum,secondnum);
	sumSquareOdd = sumSquareOddNumbers(firstnum,secondnum);
	cout << sumEven <<' ' << sumOdd << ' ' << sumSquareEven << ' ' << sumSquareOdd << endl;
	return 2323;
	}
