#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int totalseconds=time(0);
	int currentseconds=totalseconds%60;
	int totalminutes=totalseconds/60;
	int currentminutes=totalminutes%60;
	int totalhours=totalminutes/60;
	int currenthours=totalhours%24;
	cout<<"Enter the time zone offset to GMT:";
	int offset;
	cin>>offset;
	if(offset+currenthours<0)
	{
		currenthours=currenthours+offset*2+24;
	}
	else if(offset+currenthours>24)
	{
		currenthours=currenthours+offset-24;
	}
		else
		{
			currenthours=currenthours+offset;
		}
	cout<<"The current time is "<<currenthours<<":"<<currentminutes<<":"<<currentseconds;
	return 0;
}
