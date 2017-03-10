#include<iostream>
using namespace std;
void selSort(int[], int);
void bubSort(int[], int);
void insSort(int[], int);
int main()
{
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int a[n], i, c;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Select the Sort\n";
	cout<<"1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n";
	cin>>c;
	switch(c)
	{
		case 1:
			bubSort(a,n);
			break;
		case 2:
			selSort(a,n);
			break;
		case 3:
			insSort(a,n);
			break;
		default:
			cout<<"Wrong option\n";
	}
	cout<<"\n\nAfter Sorting\n";
	for(i=0;i<n;i++)
		cout<<a[i];
	return 0;
}

void bubSort(int x[], int n)
{
	int j,t, flag=0;
	do
	{
		flag=0;
		for(j=1;j<=n;j++)
		{
			if(x[j-1]>x[j])
			{
				t=x[j-1];
				x[j-1]=x[j];
				x[j]=t;
				flag=1;
			}
		}
		cout<<"\nAfter pass\n";
		for(int i=0;i<n;i++)
		cout<<x[i];
	}while(flag);
}

void selSort(int x[], int n)
{
	int i,j,p,temp;
	for(i = 0; i < n; i++) // sort the numbers
  	{
	   p = i;   //p is used store smallest number index in a[i+1] to 
                  // a[n-1] and initially it is assigned as i.
		for(j = i + 1; j < n; j++)
        {	if (x[j] < x[p]) 
					p = j; 
				}
      			temp = x[i];   
				x[i] = x[p]; 
				x[p] =temp;
   			
   			cout<<"\nAfter pass\n";
		for(int k=0;k<n;k++)
		cout<<x[k];
	}
}

void insSort(int a[], int n)
{
	int i, k, t;
	for ( i = 1; i < n; i++)		  // outer loop runs n-1 times
      { 
	  		for (k = i; k >= 0 && a[i] <= a[k]; k--) 
     		{ 
	 			t = a[k]; 
	 			a[k] = a[k-1]; 
				a[k-1] = t;
	 		}
			 cout<<"\nAfter pass\n";
		for(int j=0;j<n;j++)
		cout<<a[j]; 

}
}

	
	
	
