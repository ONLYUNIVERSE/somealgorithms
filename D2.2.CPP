#include<iostream>

using namespace std;

int main()
{
	float PI,p,n;
	int m,i;
	m=1;
	n=1;
	p=1;
	for(i=1;i<130000000;i=i+2)
	{
		m=m*(-1);
		n=1.0/(i+2);
		n=n*m;
		p=p+n;
	}
	PI=4*p;
	double radius,area,length,volume;
	cout<<"Enter the radius and length of a cylinder:";
	cin>>radius>>length;
	area=radius*radius*PI;
	volume=area*length;
	cout<<"The area is "<<area<<endl;
	cout<<"The volume is "<<volume<<endl;
	return 0;
}
