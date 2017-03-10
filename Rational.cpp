#include<iostream>
using namespace std;

class Rational 
{
	int Num, Denom;
public:
	Rational()
	{
		Num = 0;
		Denom = 1;
	}
	void setRational(int, int);
	int getNum()
	{
		return Num;
	}
	int getDenom()
	{
		return Denom;
	}
	void simplify();
	void Display();
	int getGCD(int, int);
	int getLCM(int, int);
	void Add(Rational, Rational);
	void Multiply(Rational, Rational);
}; 

void Rational::setRational(int n, int d)
{
	Num = n;
	Denom = d;
	simplify();
}
int Rational::getGCD(int n, int d)
{
	int r = 1;
	while(r)
	{
		if(n > d)
			r = n -d;
		else
			r = d - n;
		n = d;
		d = r;
	}
	return n;
}
int Rational::getLCM(int n, int d)
{
	int g = getGCD(n,d);
	return ( (n * d)/g );
}
void Rational::simplify()
{
	int g = getGCD(getNum(),getDenom());

	Num /= g;
	Denom /= g;
}
void Rational::Add(Rational r1, Rational r2)
{
	int n1, n2, d1, d2;
	int n, d;
	
	n1 = r1.getNum();
	d1 = r1.getDenom();
	n2 = r2.getNum();
	d2 = r2.getDenom();

	d = getLCM(d1, d2);
	n = ( (n1 * (d / d1)) + (n2 * (d / d2)));

	setRational(n,d);
}
void Rational::Multiply(Rational r1, Rational r2)
{
	int n,d;

	n = (r1.getNum() * r2.getNum());
	d = (r1.getDenom() * r2.getDenom());

	setRational(n,d);
}
void Rational::Display()
{
	cout<<"\n\n\tNumerator = "<<Num;
	cout<<"\n\tDenominator = "<<Denom;
}







int main()
{
	Rational r1, r2, rAdd, rMul;
	int n1, d1, n2, d2;
	cout<<"Enter the Numerator and Denominator for 1st Number\n";
	cin>>n1>>d1;
	r1.setRational(n1, d1);
	cout<<"Enter the Numerator and Denominator for 2nd Number\n";
	cin>>n2>>d2;
	r2.setRational(n2, d2);
	
	rAdd.Add(r1, r2);
	rMul.Multiply(r1, r2);

	cout<<"\n\nAfter Adding, we have :";
	rAdd.Display();
	cout<<"\n\nAfter Multiplying, we have :";
	rMul.Display();
	return 0;

}
