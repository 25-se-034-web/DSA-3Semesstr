#include<iostream>
using namespace std;

int main()
{
	int a=34;
	int b=56;
	int *p = &a;
	int *pb = &b;
	cout<<*p<<endl;
	cout<<*pb<<endl;
	cout<<"Sum of two values"<<*p + *pb <<endl;
	
	return 0;
}
