#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cout<<"Enter the size of the Array\n";
	cin>>n;
	int A[n], S[n];
	cout<<"Enter the elements\n";
	cin>>A[0];
	S[0] = A[0];
	for(i=1;i<n;i++)
	{
		cin>>A[i];
		S[i] = S[i-1] + A[i];
	}
	cout<<"The Cumulative Sum Array is :\n";
	for(i=0;i<n;i++)
		cout<<S[i]<<" ";
	return 0;
}
