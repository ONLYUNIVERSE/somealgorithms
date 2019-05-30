#include<iostream>

using namespace std;

int main()
{
	double mm;
	double rate=0.00417;
	int month;
	cout<<"Enter the monthly saving amount:";
	cin>>mm;
	double const1=mm;
	cout<<endl;
	mm=mm*1.00417;
	for(month=2;month<=6;month++)
	{
		mm=(mm+const1)*(1+rate);
	}
	cout<<"After the sixth month,the account value is $"<<mm<<endl;
	return 0;
}
