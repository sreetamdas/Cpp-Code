/*6. Random numbers from 100 to 300*/
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int linear( int[], int);
int binary( int[], int);
int main()
{
	srand(time(NULL));
	int a[100], b[100], bin=0, lin=0, i, t, x;
	float linPerc, binPerc;
	for(i=0;i<100;i++)
	{
		x=rand()%201 + 100;
		a[i]=x;
		b[i]=x;
	}
	for(i=0; i<100; i++)
	{
		for(int j=0; j<99; j++)
		{
			if(b[j]>b[j+1])
			{
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}	
	for(i=0;i<100;i++)
	{
		x=rand()%100;
		lin += linear(a,a[x]);
		bin += binary(b,a[x]);
	}
	cout<<"\nNo. of Comparisons for :\n";
	cout<<"Linear = "<<lin;
	cout<<"\nBinary = "<<bin;
	
	cout<<"Success Percentage for : \n";
	linPerc = 100.0 - (((float)lin/(lin+bin))*100);
	binPerc = 100.0 - linPerc;
	cout<<"Linear : "<<linPerc<<"%";
	cout<<"\nBinary : "<<binPerc<<"%";
	return 0;
}	

int linear(int a[], int x)
{
	int i=0;
	for(i=0; i<100; i++)
		if(x == a[i])
			return i;
	return i;
}

int binary(int b[], int x)
{
	int beg=0, end=99, mid = (beg+end)/2, i=0;
	for(i=0; beg<=end; mid=(beg+end)/2)
	{
		i++;
		if(x < b[mid])
			end = mid - 1;
		else if(x > b[mid])
			beg = mid + 1;
		else
			return i;
	}
	cout<<"\nNot Found";
	return i;
}
