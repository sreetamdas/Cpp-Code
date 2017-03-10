/*Matrix Multiplication using pointers and recursion*/
#include<iostream>
using namespace std;
void Multiply(int*, int*, int*, int, int, int);
int main()
{
	int a[100][100], b[100][100], c[100][100], r1, r2, c1, c2, i, j;
	cout<<"Enter the size of the 1st Matrix\n";
	cin>>r1>>c1;
	cout<<"Enter the size of the 2nd Matrix\n";
	cin>>r2>>c2;
	cout<<"Enter Matrix A\n";
	for(i=0; i<r1; i++)
		for(j=0; j<c1; j++)
			cin>>a[i][j];
	cout<<"Enter Matrix B\n";
	for(i=0; i<r2; i++)
		for(j=0; j<c2; j++)
			cin>>b[i][j];
	if(c1 == r2)
	{
		Multiply(&a[0][0], &b[0][0], &c[0][0], r1, r2, c2);
		cout<<"\n\n\tResultant Matrix is :\n";
		cout<<"Enter Matrix A\n";
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
				cout<<c[i][j]<<" ";
			cout<<endl;
		}
	}	
	else
		cout<<"\n\n\tMultiplication not Possible\n";

	return 0;
}

void Multiply(int *p, int *q, int *s, int r1, int r2, int c2)
{
	static int i=0, j=0;

	if(i == r1)
		cout<<"Multiplication Done\n";
	else if(j < c2)
	{
		*(s + (i * 100) + j) = 0;
		for(int k=0; k<r2; k++)
		*(s + (i * 100) + j) += ( *(p + (i * 100) + k) ) * ( *(q + (k * 100) + j) );
		j++;
		Multiply(p, q, s, r1, r2, c2);
	}
	else if(j == c2)
	{
		i++, j=0, Multiply(p, q, s, r1, r2, c2);
	}
}



