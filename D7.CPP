#include<iostream>

using namespace std;

int main()
{
	long year,day,min;
	cout<<"Enter the number of minutes:";
	cin>>min;
	day=min/(24*60);
	year=day/365;
	day=day-year*365;
	cout<<min<<" minutes is approximately "<<year<<" years and "<<day<<"days"<<endl;
	return 0;
}