#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double weight,height,BMI;
	cout <<"Enter weight in pounds:";
	cin>>weight;
	cout<<endl;
	cout<<"Enter height in inches:";
	cin>>height;
	cout<<endl;
	weight=weight*0.45359237;
	height=height*0.0254;
	cout<<"BMI is "<<weight/pow(height,2);
	return 0;
}