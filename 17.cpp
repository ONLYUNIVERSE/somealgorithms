//·çÀäÎÂ¶È

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double t1,t2,v;
	cout<<"Enter the temperature in Fahrenheit:";
	cin>>t1;
	cout<<"Enter the wind speed in miles per hour:";
	cin>>v;
	t2=35.74+0.6215*t1-35.75*pow(v,0.16)+0.4275*t1*pow(v,0.16);
	cout<<t2;
	return 0;
}