#include<iostream>
using namespace std;
int main()
{
	int A[10], B[10], C[20], i;
	cout<<"Enter the First Array elements\n";
	for(i=0;i<10;i++)
		cin>>A[i];
	cout<<"Enter the Second Array elements\n";
	for (;i<20;i++)
		cin>>B[i];
	for(i=0;i<20;i++)
	{
		if(i<10)
			C[i] = A[i];
		else
			C[i] = B[i];
	}
	cout<<"After Appending :\n";
	for(i=0;i<20;i++)
		cout<<C[i]<<" ";
	return 0;
}
