#include<iostream>

using namespace std;

int main()
{
	double subtotal,gratuity,total,rate;
	cout<<"Enter the subtotal and a gratuity rate:";
	cin>>subtotal>>gratuity;
	rate=gratuity/100;
	gratuity=rate*subtotal;
	total=gratuity+subtotal;
	cout<<"The gratuity is $"<<gratuity<<" and total is $"<<total<<endl;
	return 0;
}