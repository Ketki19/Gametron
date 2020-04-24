#include<iostream>
#include<cstdlib>
#include<time.h>
#include "games.h"

using namespace std;
using namespace TicTacToe;


	void tictoe::display()
	{
		system("cls");
		cout<<"\t PLAYER 1[X]\n\t PLAYER 2[0]\n\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  \n";
		cout<<"\t\t_____|_____|_____\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  \n";
		cout<<"\t\t_____|_____|_____\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  \n";
		cout<<"\t\t     |     |     \n";
	}

	void tictoe::Choice()
	{
				if(turn=='X')
				cout<<"\n\t PLAYER 1[X] turn:";

				if(turn=='O')
				cout<<"\n\t PLAYER 2[O] turn:";

		cin>>choice;
		switch(choice)
		{
			case 1: row=0; column=0; break;
			case 2: row=0; column=1; break;
			case 3: row=0; column=2; break;
			case 4: row=1; column=0; break;
			case 5: row=1; column=1; break;
			case 6: row=1; column=2; break;
			case 7: row=2; column=0; break;
			case 8: row=2; column=1; break;
			case 9: row=2; column=2; break;

			default: cout<<"Invalid input \n";
		}

		if(turn=='X'&&a[row][column]!='X'&&a[row][column]!='O')
		{
			a[row][column]='X';
			turn='O';
		}

		else if(turn=='O'&&a[row][column]!='X'&&a[row][column]!='O')
		{
			a[row][column]='O';
			turn='X';
		}
		else
		{
			cout<<"BOX IS FILLED!\n TRY AGAIN!"<<endl;
			Choice();
		}
		display();
	}

	bool tictoe::gameover()
	{
		for(int i=0;i<3;i++)
		{
			if((a[i][0]==a[i][1]&&a[i][0]==a[i][2])  ||  (a[0][i]==a[1][i]&&a[0][i]==a[2][i]))
				return false;
		}

		if(a[0][0]==a[1][1]&&a[0][0]==a[2][2])
			return false;

		if(a[0][2]==a[1][1]&&a[0][2]==a[2][0])
			return false;

		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if((a[i][j]!='X')&&a[i][j]!='O')
					return true;
			}
		}

		return false;
	}



