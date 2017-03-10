/*Deposit and Withdraw from Accounts of People, using Structures*/
#include<iostream>
using namespace std;
struct customer
{
	long accNo, balance;
	char name[50];
};
void balanceCheck(customer);
void with_dep(customer, int);
int main()
{
	customer cust[200];
	int i, n, code;
	long accNo;
	cout<<"Enter the number of Customers\n";
	cin>>n;
	cout<<"Enter the details\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Account No.\n";
		cin>>cust[i].accNo;
		cout<<"Enter the Name\n";
		cin>>cust[i].name;
		cout<<"Enter the Balance\n";
		cin>>cust[i].balance;
	}
	cout<<"Would you like to \n0. Deposit \n\tor \n1. Withdraw? \n";
	cin>>code;
	cout<<"Enter your Account No.\n";
	cin>>accNo;
	for(i=0;i<n;i++)
		if(accNo == cust[i].accNo)
			{
				with_dep(cust[i], code);
				break;
			}
	if(i == n)
		cout<<"Invalid Customer Account No.\n";
	cout<<"The Customers with Inadequate funds ( < 100 ) are : \n";
	for(i=0;i<n;i++)
		balanceCheck(cust[i]);
	return 0;
}

void balanceCheck(customer you)
{
	if(you.balance < 100)
		cout<<"Account No. "<<you.accNo<<"\t\t"<<you.name<<endl;
}

void with_dep(customer me, int code)
{
	long amount;
	if(!code)
	{
		cout<<"Enter the Amount to be Deposited\n";
		cin>>amount;
		me.balance += amount;
	}
	else
	{
		cout<<"Enter the Amount to be Withdrawn (Max. 20000)\n";
		cin>>amount;
		me.balance -= amount;
	}
	cout<<"Transaction Successful\n";
	cout<<"Balance is now Rs. "<<me.balance;
}
