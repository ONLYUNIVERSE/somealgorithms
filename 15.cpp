#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x1,x2,y1,y2;
	cout<<"Enter x1 and y1:";
	cin>>x1>>y1;
	cout<<"Enter x2 and y2:";
	cin>>x2>>y2;
	double i,I;
	i=pow((x1-x2),2);
	I=pow((y1-y2),2);
	I=pow((i+I),0.5);
	cout<<"The distance between the two points is "<<I<<endl;
	return 0;
}