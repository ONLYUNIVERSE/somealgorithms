#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a,v,l;
	cout<<"Enter speed and acceleration:";
	cin>>v>>a;
	l=pow(v,2)/(2*a);
	cout<<"The minimum runway length for this airplane is "<<l<<endl;
	return 0;
}