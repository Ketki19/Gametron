#include<iostream>
#include "games.h"

using namespace std;
using namespace sudoku_ns;

void sudoku::board_gene()
    {

      for(i=0;i<9;i++)
      {
          for(j=0;j<9;j++)
          a[i][j]=0;
      }

      a[0][0]=8;
      a[0][1]=7;
      a[0][2]=6;
      a[0][3]=9;
      a[1][1]=1;
      a[1][5]=6;
      a[2][1]=4;
      a[2][3]=3;
      a[2][5]=5;
      a[2][6]=8;
      a[3][0]=4;
      a[3][6]=2;
      a[3][7]=1;
      a[4][1]=9;
      a[4][3]=5;
      a[5][1]=5;
      a[5][5]=4;
      a[5][6]=3;
      a[5][8]=6;
      a[6][1]=2;
      a[6][2]=9;
      a[6][8]=8;
      a[7][2]=4;
      a[7][3]=6;
      a[7][4]=9;
      a[7][6]=1;
      a[7][7]=7;
      a[7][8]=3;
      a[8][5]=1;
      a[8][8]=4;

      cout<<"\n\n\t\t\t\t\tWelcome to Sudoku...\n\n";

      cout<<"\t _______________________________________________________\n";
      cout<<"\t|     |     |     ||     |     |     ||     |     |     |\n";
			cout<<"\t|  "<<a[0][0]<<"  | "<<a[0][1]<<"   |  "<<a[0][2]<<"  ||  "<<a[0][3]<<"  |  "<<a[0][4]<<"  |  "<<a[0][5]<<"  ||  "<<a[0][6]<<"  |  "<<a[0][7]<<"  |  "<<a[0][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |   \n";
			cout<<"\t|  "<<a[1][0]<<"  | "<<a[1][1]<<"   |  "<<a[1][2]<<"  ||  "<<a[1][3]<<"  |  "<<a[1][4]<<"  |  "<<a[1][5]<<"  ||  "<<a[1][6]<<"  |  "<<a[1][7]<<"  |  "<<a[1][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |   \n";
			cout<<"\t|  "<<a[2][0]<<"  | "<<a[2][1]<<"   |  "<<a[2][2]<<"  ||  "<<a[2][3]<<"  |  "<<a[2][4]<<"  |  "<<a[2][5]<<"  ||  "<<a[2][6]<<"  |  "<<a[2][7]<<"  |  "<<a[2][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
      cout<<"\t|-----|-----|-----||-----|-----|-----||-----|-----|-----| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     | \n";
			cout<<"\t|  "<<a[3][0]<<"  | "<<a[3][1]<<"   |  "<<a[3][2]<<"  ||  "<<a[3][3]<<"  |  "<<a[3][4]<<"  |  "<<a[3][5]<<"  ||  "<<a[3][6]<<"  |  "<<a[3][7]<<"  |  "<<a[3][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |  \n";
			cout<<"\t|  "<<a[4][0]<<"  | "<<a[4][1]<<"   |  "<<a[4][2]<<"  ||  "<<a[4][3]<<"  |  "<<a[4][4]<<"  |  "<<a[4][5]<<"  ||  "<<a[4][6]<<"  |  "<<a[4][7]<<"  |  "<<a[4][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     | \n";
			cout<<"\t|  "<<a[5][0]<<"  | "<<a[5][1]<<"   |  "<<a[5][2]<<"  ||  "<<a[5][3]<<"  |  "<<a[5][4]<<"  |  "<<a[5][5]<<"  ||  "<<a[5][6]<<"  |  "<<a[5][7]<<"  |  "<<a[5][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
      cout<<"\t|-----|-----|-----||-----|-----|-----||-----|-----|-----| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     | \n";
			cout<<"\t|  "<<a[6][0]<<"  | "<<a[6][1]<<"   |  "<<a[6][2]<<"  ||  "<<a[6][3]<<"  |  "<<a[6][4]<<"  |  "<<a[6][5]<<"  ||  "<<a[6][6]<<"  |  "<<a[6][7]<<"  |  "<<a[6][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |\n";
			cout<<"\t|  "<<a[7][0]<<"  | "<<a[7][1]<<"   |  "<<a[7][2]<<"  ||  "<<a[7][3]<<"  |  "<<a[7][4]<<"  |  "<<a[7][5]<<"  ||  "<<a[7][6]<<"  |  "<<a[7][7]<<"  |  "<<a[7][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |\n";
			cout<<"\t|  "<<a[8][0]<<"  | "<<a[8][1]<<"   |  "<<a[8][2]<<"  ||  "<<a[8][3]<<"  |  "<<a[8][4]<<"  |  "<<a[8][5]<<"  ||  "<<a[8][6]<<"  |  "<<a[8][7]<<"  |  "<<a[8][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";





    }

void sudoku::board()
    {
       cout<<"\t _______________________________________________________\n";
      cout<<"\t|     |     |     ||     |     |     ||     |     |     |\n";
			cout<<"\t|  "<<a[0][0]<<"  | "<<a[0][1]<<"   |  "<<a[0][2]<<"  ||  "<<a[0][3]<<"  |  "<<a[0][4]<<"  |  "<<a[0][5]<<"  ||  "<<a[0][6]<<"  |  "<<a[0][7]<<"  |  "<<a[0][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |   \n";
			cout<<"\t|  "<<a[1][0]<<"  | "<<a[1][1]<<"   |  "<<a[1][2]<<"  ||  "<<a[1][3]<<"  |  "<<a[1][4]<<"  |  "<<a[1][5]<<"  ||  "<<a[1][6]<<"  |  "<<a[1][7]<<"  |  "<<a[1][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |   \n";
			cout<<"\t|  "<<a[2][0]<<"  | "<<a[2][1]<<"   |  "<<a[2][2]<<"  ||  "<<a[2][3]<<"  |  "<<a[2][4]<<"  |  "<<a[2][5]<<"  ||  "<<a[2][6]<<"  |  "<<a[2][7]<<"  |  "<<a[2][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
      cout<<"\t|-----|-----|-----||-----|-----|-----||-----|-----|-----| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     | \n";
			cout<<"\t|  "<<a[3][0]<<"  | "<<a[3][1]<<"   |  "<<a[3][2]<<"  ||  "<<a[3][3]<<"  |  "<<a[3][4]<<"  |  "<<a[3][5]<<"  ||  "<<a[3][6]<<"  |  "<<a[3][7]<<"  |  "<<a[3][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |  \n";
			cout<<"\t|  "<<a[4][0]<<"  | "<<a[4][1]<<"   |  "<<a[4][2]<<"  ||  "<<a[4][3]<<"  |  "<<a[4][4]<<"  |  "<<a[4][5]<<"  ||  "<<a[4][6]<<"  |  "<<a[4][7]<<"  |  "<<a[4][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     | \n";
			cout<<"\t|  "<<a[5][0]<<"  | "<<a[5][1]<<"   |  "<<a[5][2]<<"  ||  "<<a[5][3]<<"  |  "<<a[5][4]<<"  |  "<<a[5][5]<<"  ||  "<<a[5][6]<<"  |  "<<a[5][7]<<"  |  "<<a[5][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
      cout<<"\t|-----|-----|-----||-----|-----|-----||-----|-----|-----| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     | \n";
			cout<<"\t|  "<<a[6][0]<<"  | "<<a[6][1]<<"   |  "<<a[6][2]<<"  ||  "<<a[6][3]<<"  |  "<<a[6][4]<<"  |  "<<a[6][5]<<"  ||  "<<a[6][6]<<"  |  "<<a[6][7]<<"  |  "<<a[6][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |\n";
			cout<<"\t|  "<<a[7][0]<<"  | "<<a[7][1]<<"   |  "<<a[7][2]<<"  ||  "<<a[7][3]<<"  |  "<<a[7][4]<<"  |  "<<a[7][5]<<"  ||  "<<a[7][6]<<"  |  "<<a[7][7]<<"  |  "<<a[7][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";
			cout<<"\t|     |     |     ||     |     |     ||     |     |     |\n";
			cout<<"\t|  "<<a[8][0]<<"  | "<<a[8][1]<<"   |  "<<a[8][2]<<"  ||  "<<a[8][3]<<"  |  "<<a[8][4]<<"  |  "<<a[8][5]<<"  ||  "<<a[8][6]<<"  |  "<<a[8][7]<<"  |  "<<a[8][8]<<"  |\n";
			cout<<"\t|_____|_____|_____||_____|_____|_____||_____|_____|_____| \n";




    }

void sudoku::input()
    {
      //system("CLS");


        while(ch == 'Y')
        {
            cout<<"\n\nEnter the location where you want to insert the number: ";
            cin>>x>>y;
            if((x==0 && y==0)||(x==0 && y==1)||(x==7 && y==8)||(x==0 && y==2)||(x==0 && y==3)||(x==1 && y==1)||(x==1 && y==5)||(x==2 && y==1)||(x==2 && y==3)||(x==2 && y==5)||(x==2 && y==6)||(x==3 && y==0)||(x==3 && y==6)||(x==3 && y==7)||(x==8 && y==8)||(x==8 && y==5)||(x==4 && y==1)||(x==4 && y==3)||(x==5 && y==1)||(x==5 && y==5)||(x==5 && y==6)||(x==5 && y==8)||(x==6 && y==1)||(x==6 && y==2)||(x==6 && y==8)||(x==7 && y==2)||(x==7 && y==3)||(x==7 && y==4)||(x==7 && y==6)||(x==7 && y==7))
              {
                cout<<"Sorry, thats a wrong input... \n";
                input();
              }
            else
            {
              cout<<"Enter the number you want to insert: ";
              cin>>num;
              cout<<"Continue? [Y/N]";
              cin>>ch;
              a[x][y]=num;
              system("CLS");
              cout<<"\n\n\t\t\t\t\tWelcome to Sudoku...\n\n";
              board();
            }
        }

    }

void sudoku::final1()
    {
        b[0][0]=8;
        b[0][1]=7;
        b[0][2]=6;
        b[0][3]=9;
        b[0][4]=1;
        b[0][5]=4;
        b[0][6]=5;
        b[0][7]=3;
        b[0][8]=2;

        b[1][0]=3;
        b[1][1]=1;
        b[1][2]=5;
        b[1][3]=2;
        b[1][4]=8;
        b[1][5]=6;
        b[1][6]=7;
        b[1][7]=4;
        b[1][8]=9;

        b[2][0]=9;
        b[2][1]=4;
        b[2][2]=2;
        b[2][3]=3;
        b[2][4]=7;
        b[2][5]=5;
        b[2][6]=8;
        b[2][7]=6;
        b[2][8]=1;

        b[3][0]=4;
        b[3][1]=3;
        b[3][2]=8;
        b[3][3]=7;
        b[3][4]=6;
        b[3][5]=9;
        b[3][6]=2;
        b[3][7]=1;
        b[3][8]=5;

        b[4][0]=6;
        b[4][1]=9;
        b[4][2]=1;
        b[4][3]=5;
        b[4][4]=2;
        b[4][5]=3;
        b[4][6]=4;
        b[4][7]=8;
        b[4][8]=7;

        b[5][0]=2;
        b[5][1]=5;
        b[5][2]=7;
        b[5][3]=1;
        b[5][4]=4;
        b[5][5]=8;
        b[5][6]=3;
        b[5][7]=9;
        b[5][8]=6;

        b[6][0]=1;
        b[6][1]=2;
        b[6][2]=9;
        b[6][3]=4;
        b[6][4]=3;
        b[6][5]=7;
        b[6][6]=6;
        b[6][7]=5;
        b[6][8]=8;

        b[7][0]=5;
        b[7][1]=8;
        b[7][2]=4;
        b[7][3]=6;
        b[7][4]=9;
        b[7][5]=2;
        b[7][6]=1;
        b[7][7]=7;
        b[7][8]=3;

        b[8][0]=7;
        b[8][1]=6;
        b[8][2]=3;
        b[8][3]=8;
        b[8][4]=5;
        b[8][5]=1;
        b[8][6]=9;
        b[8][7]=2;
        b[8][8]=4;

        for(i=0;i<9;i++)
      {
          for(j=0;j<9;j++)
            {
              if(a[i][j] == b[i][j])
                count++;
            }
      }

      if (count==81){
        cout<<"\n \n \t \t \tThat's Great!! \n \t\t\t You solved it correctly!!\n\t\t\t CONGRATULATIONS!! \n\n";
        winner = true;
      }
      else{
        cout<<"\n\n \t\t\t You got few entries wrong... \n \t\t\tBetter Luck Next Time...\n\n";
        winner = true;
      }

    }

