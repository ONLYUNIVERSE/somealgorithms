#include<iostream>

using namespace std;

int main()
{
//    7 13 45
	int birth,death,immigrant,year,s,p;
	cout<<"Enter the years";
	cin>>year;
	s=year*24*3600*365;
	birth=s/7;
	death=s/13;
	immigrant=s/45;
	p=birth+immigrant-death+312032486;
	cout<<endl;
	cout<<""The population in"<<year<<"year"<<"is"<<p;
	return 0;
}