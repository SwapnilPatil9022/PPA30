#include<iostream>
using namespace std;

class Demo
{
 public:
	int i,j;
	
	void gun()		//defination
	{
	cout<<"Inside gun\n";
	}
	void fun()		//defination
	{
	cout<<"Inside fun\n";
	}
	void fun(int no)		//Overloading defination
	{
	cout<<"Inside fun\n";
	}
};

 int main()
{
 return 0;
}