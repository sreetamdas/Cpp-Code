#include<iostream>
using namespace std;
void sort( int[] );
int main()
{
	int a[] = {5, 6, 2, 0, 14, 0, 0, 12};
	cout<<"Unsorted :\n";
	for (int i = 0; i < 7; ++i)
	{
		/* code */
		cout<<a[i]<<" ";
	}
	cout<<endl;
	sort(a);
	cout<<"\n\nSorted : \n";
	for (int i = 0; i < 7; ++i)
	{
		/* code */
		cout<<a[i]<<" ";

	}
	cout<<endl;
	return 0;
}

void sort(int a[])
{
	int count = 6;

	for (int i = 6; i >= 0 ; --i)
	{
		/* code */
		if( a[i] )
			a[count--] = a[i];
	}

	while(count >= 0)
		a[count--] = 0;
}
