#include<iostream>

using namespace std;

int main()
{
	int number,a,b,c,sum;
	cout<<"Enter a number between 0 and 1000:";
	cin>>number;
	c=number%10;
	b=number%100/10;
	a=number/100;
	sum=a+b+c;
	cout<<"The sum of the digits is "<<sum<<endl;
	return 0;
}