#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
	int a,b;
	cout<<"Enter two values\n";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"\nmain\n"<<a<<b;
	return 0;
}
void swap(int *p1, int *p2)
{
	int &t=p1;
	p1=p2;
	p2=t;
	cout<<"p1="<<p1;
	cout<<"*p1="<<*p1;
	cout<<"p2="<<p2;
	cout<<"*p2="<<*p2;
}
