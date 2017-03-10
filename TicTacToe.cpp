#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
class TicTacToe
{
	int tic[3][3];
public:
	TicTacToe()
	{
		for(int i=0;i<3;i++)
	 		for(int j=0;j<3;j++)
	 			tic[i][j] = 0;
	}
	int check1();
	int check2( int );
	void AI_Turn();
    void player();
    void fill(int, int);
    void display();
    void Gameplay();

};

int TicTacToe::check1()
{ 
	 int sum1, sum2, sum3, sum4;
	 sum1 = sum2 = sum3 = sum4 = 0;
	 int a,b,c,d,i,j,k;
	for (i = 0; i < 3; i++)
	{
		sum1 = sum2 = 0;
		for (j = 0; j < 3; j++)
		{
			sum1 += tic[i][j];		//row sum
			sum2 += tic[j][i];		//Column sum
            if(i == j)
           		sum3 += tic[i][j];
            if((i+j) == 2)
            	sum4 += tic[i][j];
            	

	 	}
		
		if(check2(sum1) == 3)
		{
			cout<<"You WIN!!! :P\n";
			exit(0);	// "a", 		WIN
		}

		if(check2(sum2) == -3)
	    {
	    	cout<<"You LOST, Sucker!\n";
	    	exit(0);		// "b", 		WIN
	    }

	    if(check2(sum1) == -3)
		{
			cout<<"You LOST, Sucker!\n";
			exit(0);		// "a", 		WIN
		}

		if(check2(sum2) == 3)
	    {
	    	cout<<"You WIN!!! :P\n";
	    	exit(0);		// "b", 		WIN
	    }

		if(check2(sum1) == 2)
			return i;					//Row
	  
	    if (check2(sum2) == -2)
			return (i+3);	
		
		if(check2(sum1) == -2)
			return i;					//Row
	    
	    if (check2(sum2) == 2)
			return (i+3);	 			//Column
 		 		
	}
	
	if(check2(sum3) == 3)
	{
		cout<<"You WIN!!! :P\n";
		exit(0);		// "a", 		WIN
	}

	if(check2(sum4) == -3)
	{
		cout<<"You LOST, Sucker!\n";
	   	exit(0);		// "b", 		WIN
	}

	if(check2(sum3) == -3)
	{
		cout<<"You LOST, Sucker!\n";
		exit(0);		// "a", 		WIN
	}

	if(check2(sum4) == 3)
	{
		cout<<"You WIN!!! :P\n";
	   	exit(0);		// "b", 		WIN
	}

	if(check2(sum3) == 2)
		return 8;					//Row
	
	if (check2(sum4) == -2)
		return 9;
	
	if(check2(sum3) == -2)
		return 8;					//Row
	
	if (check2(sum4) == 2)
		return 9;

	return -1;						//random
}

int TicTacToe::check2(int x)
{
	if(x == 2)
		return 2;
	else if(x == 3)
		return 3;
	else if(x == -2)
		return -2;
	else if(x == -3)
		return -3;
	else
		return 0;

}

void TicTacToe::fill(int m, int n)			//done
{
	switch(m)
	{
		case 7: tic[0][0] = n; break;
		case 8: tic[0][1] = n; break;
		case 9: tic[0][2] = n; break;
		case 4: tic[1][0] = n; break;
		case 5: tic[1][1] = n; break;
		case 6: tic[1][2] = n; break;
		case 1: tic[2][0] = n; break;
		case 2: tic[2][1] = n; break;
		case 3: tic[2][2] = n; break;
		default: break;
	}

}

void TicTacToe::player()			//done
{
	int m;
	cout<<"Enter your move\n";
	cin>>m;
	fill(m, 1);
	display();
	int win = check1();
}

void TicTacToe::AI_Turn()			//done
{
	srand(time(NULL));
	int x, y;

	int m = check1();

	again:

	if(m >= 0)
	{
		if((m > 2) && (m < 8))
		{
			y = m-3;
			x = rand() % 3;			
		}
		else if(m <= 2)
		{
			x = m;
			y = rand() % 3;
		}
		else if(m == 8)
		{
			x = rand() % 3;
			y = x; 
		}
		else
		{
			x = rand() % 3;
			y = 2 - x;
		}
	}
	else
	{
		x = rand() % 3;
		y = rand() % 3;
	}

	if( !tic[x][y] )
		fill( (7-(3*x) + y), -1);
	else
		goto again;

	display();
	int win = check1();

}

void TicTacToe::display()
{
	 for( int i = 0; i< 3;i++)
	 	{
	 		cout<<"\t\t";
		 for (int j= 0; j < 3; ++j)
	 	{
	 		if( tic[i][j] == 1)		cout<<"X";
	 		else if(tic[i][j] == -1)	cout<<"O";
	 		else cout<<" ";
	 		if(j != 2)
	 		cout<<" | ";

	 	}
	 	cout<<"\n";
	 	if(i != 2)
	 	cout<<"\t\t---------\n";
	 }
	 cout<<"\n\n\t----------------------------\n\n\n";
}

void TicTacToe::Gameplay()
{
	for (int i = 0; i < 9; ++i)
	{
		player();
		AI_Turn();
	}
}

int main()
{
	TicTacToe Game;
	Game.Gameplay();
	return 0;

}
