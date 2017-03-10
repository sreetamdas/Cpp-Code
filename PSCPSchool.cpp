#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int operation(int);
int correct(int);
int wrong(int);	int c;
int main()
{
	srand(time(NULL));
	
	int x, cor=0, wro=0, ch;
	int count=0;
	float perc;
	char choice, rnd;
	
	LOOP:
		cout<<"Operations Available\n";
		cout<<"\n\tAddition\n\tSubtraction\n\tMultiplication\n\tDivision\n";
		ch = rand() % 4;	ch++;
	do
	{	
		c=operation(ch);
		cin>>x;
		count++;
		if(x==c)
		{	
			cor=correct(cor);
			ch = rand() % 4;	ch++;
		}
		else
			wro=wrong(wro);
	}while(count%10);
	
	perc=((float) cor/(float) (cor+wro))*100;
	cout<<"\n\tYou answered "<<cor<<" Correct and "<<wro<<" Wrong answers\n";
	cout<<"\tYour Percentage so far is "<<perc<<"%"<<endl; 
	
	if(perc>=85)
		cout<<"\tYou are doing really Good! Keep it Up and try other Operations as well!\n";
	else if(perc>=75)
		cout<<"\tYou are doing Well, but Try harder!\n";
	else
	{
		cout<<"\tPlease ask your instructor for extra help.\n\t\tTerminating\n";
		return 0;		
	}
	cout<<"Would you like to Practice more, and other operations as well?\n";
	cin>>choice;
	if((choice == 'y') || (choice == 'Y'))
		goto LOOP;
	
	cout<<"\nThank You for Using NITW CSE Dept.'s Elementary School Arithmatic Testing System.\n";
	return 0;
	
}

int operation(int m)
{
	srand(time(NULL));
	
	int a = rand() % 20;	a++;
	int b = rand() % 20;	b++;
	
	here:
	switch(m)
	{
		case 1:
			cout<<"\nThe Sum of "<<a<<" and "<<b<<", ("<<a<<" + "<<b<<") is ?\n";
			return (a+b);
		case 2:
			cout<<"\nThe Difference (positive) between "<<a<<" and "<<b<<", |"<<a<<" - "<<b<<"| is ?\n";
			if(a>b)
				return (a-b);		//to show absolute value
			else
				return (b-a);
		case 3:
			cout<<"\nThe Product of "<<a<<" and "<<b<<", ("<<a<<" * "<<b<<") is ?\n";
			return (a*b);
		case 4:
			a+=10;
			b%=10;	b++;		//to avoid b = 0
			cout<<"\nThe Quotient (Integer) of "<<a<<" and "<<b<<", ( "<<a<<" / "<<b<<" ) is ?\n";
			return (a/b);
		default:
			cout<<"Wrong Option! Enter option again!\n";
			cin>>m;
			goto here;	
			break;		
	}
	return 0;
}

int correct( int n )
{
	cout<<"\tCorrect Answer!\n";
	n++;
	int ch = rand() % 4;	ch++;
	switch(ch)
	{
		case 1: cout<<"\tVery Good!\n";	break;
		case 2: cout<<"\tExcellent!\n";	break;
		case 3: cout<<"\tNice Work!\n"; 	break;
		default:cout<<"\tKeep Up the Good Work!\n"; break;
	}
	return n;
		
}

int wrong( int n )
{
	cout<<"\tWrong Answer.\n\t The Correct answer is "<<c<<endl;
	n++;
	int ch = rand() % 4;	ch++;
	switch(ch)
	{
		case 1: cout<<"\tPlease try again.\n";	break;
		case 2: cout<<"\tTry once more.\n";		break;
		case 3: cout<<"\tDon't give up!\n"; 		break;
		default:cout<<"\tKeep trying\n";			break;
	}	
	return n;
		
}
