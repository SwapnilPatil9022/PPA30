#include<iostream>
using namespace std;

int main()
{
	enum Marvellous_Batches{PPA = 0, LB = 1, Python = 2};
	const int Fees[] = {15000,16000,17000};
	const float Duration[] = {3.5,4.0,3.5};
	int choice = 0;
	
	cout<<"Select that batch that you want to join\n";
	cout<<"0: PPA\n";
	cout<<"1: LB\n";
	cout<<"2: Python\n";
	
	cin>>choice;
	
	switch(choice)
	{
		case PPA:
		cout<<"Thank you for selecting Pre-Placement activity batch\n";
		cout<<"Deuration is : "<<Duration[PPA]<<"\n";
		cout<<"Fees are : "<<Fees[PPA]<<"\n";
		break;
		
		case LB:
		cout<<"Thank you for selecting Logic Building batch\n";
		cout<<"Deuration is : "<<Duration[LB]<<"\n";
		cout<<"Fees are : "<<Fees[LB]<<"\n";
		break;
		
		case Python:
		cout<<"Thank you for selecting Pre-Placement activity batch\n";
		cout<<"Deuration is : "<<Duration[Python]<<"\n";
		cout<<"Fees are : "<<Fees[Python]<<"\n";
		break;
		
		default:
		cout<<"Sorry there is no such a bach\n";
		cout<<"Contact Admin : 7020713938\n";
	}
	
	return 0;
}
		
		