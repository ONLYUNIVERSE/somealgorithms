#include<iostream>

using namespace std;

int main()
{
	double m,ft,it;
	int q;
	cout<<"Enter the amount of water in kilograms:";
	cin>>m;
//	cout <<endl;
	cout<<"Enter the initial temperature:";
	cin>>it;
//	cout <<endl;
	cout<<"Enter the final temperature:";
	cin>>ft;
//	cout<<endl;
	q=m*(ft-it)*4184;
	cout <<"The energy needed is "<<q<<endl;
	return 0;
}