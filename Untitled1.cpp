#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int correct(int);
int wrong(int);
int main()
{
	srand(time(NULL));
	int c, cor=0, wro=0, ch;
	int a = rand() % 10;
	int b = rand() % 10;
	
	cout<<"The Sum of "<<a<<" and "<<b<<" is ?\n";
	cin>>c;
	if(c==(a+b))
		cor=correct(cor);
	else
		wro=wrong(wro);
	return 0;
}

int correct( int n )
{
	cout<<"Correct Answer!\n";
	n++;
	int ch = rand() % 4;
	switch(ch)
	{
		case 1: cout<<"Very Good!\n";	break;
		case 2: cout<<"Excellent!\n";	break;
		case 3: cout<<"Nice Work!\n"; 	break;
		default:cout<<"Keep Up the Good Work!\n"; break;
	}
	return n;
		
}

int wrong( int n )
{
	cout<<"Wrong Answer.\n";
	n++;
	int ch = rand() % 4;
	switch(ch)
	{
		case 1: cout<<"Please try again.\n";	break;
		case 2: cout<<"Try once more.\n";		break;
		case 3: cout<<"Don't give up!\n"; 		break;
		default:cout<<"Keep trying\n";			break;
	}	
	return n;
		
}
