#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
};

class Derived : public Base
{
	public:
	int i,j;
};

int main()
{
	Base *bp = new Base();		//no casting
	Derived *dp = new Derived();		//no casting
	
	Base *bp1 = new Derived();			//upcasting        he chalt
	//Derived *dp1 = new Base();			//Downcasting       he nahi chalat(commpilatioin error yrto)
	
 return 0;
}