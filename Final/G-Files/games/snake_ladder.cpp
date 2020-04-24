#include<iostream>
#include<time.h>
#include<stdlib.h>
#include "termcolor/termcolor.hpp"
#include "games.h"

using namespace std;
using namespace snake_ladder;


snl1::snl1(){

        for(int i = 0; i<100; i++){
            pos_array[i] = i+1;
        }
    }

void snl1::board()
	{
        int sum_pos,ten_adder=0;

        cout<< termcolor::on_red << "\t\t\tS N A K E    A N D    L A D D E R \t\t\t" << termcolor::reset << "Press Enter key to spin the Dice!" << "\n\n";
        cout << termcolor::yellow;

        for(int i=0; i<=9;i++){
            cout << "\n\n";
            for(int j=0; j<=9; j++){
                sum_pos = ten_adder+j;
                if(sum_pos == pos1){
                    cout << "|\t" << termcolor::on_cyan << termcolor::yellow << pos_array[sum_pos] << termcolor::reset << termcolor::yellow << "\t|";
                }else if(sum_pos == pos2){
                    cout << "|\t" << termcolor::on_red << termcolor::yellow << pos_array[sum_pos] << termcolor::reset << termcolor::yellow << "\t|";
                }else{
                    cout << "|\t" << pos_array[sum_pos] << "\t|";
                }
            }
            ten_adder +=10;

        }

        cout << termcolor::reset << "\n\n";


        cout<< termcolor::green << "\tSNAKE:\t\tLADDER:\n";
        cout<<"\t27->7\t\t2->14\n";
        cout<<"\t35->5\t\t14->29\n";
        cout<<"\t39->3\t\t22->41\n";
        cout<<"\t50->34\t\t28->77\n";
        cout<<"\t59->46\t\t30->32\n";
        cout<<"\t66->24\t\t44->58\n";
        cout<<"\t73->12\t\t54->69\n";
        cout<<"\t76->63\t\t70->90\n";
        cout<<"\t89->67\t\t80->83\n";
        cout<<"\t97->86\t\t87->93\n";
        cout<<"\t99->26\n" << termcolor::reset;
    }



void snl1::chance()
	{
		if(p1){
            p1 = false;
			p2 = true;
		}else{
			p1 = true;
			p2 = false;
		}
	}


int snl1::Dice()
	{
		srand(time(NULL));
		dice=(rand()%6)+1;
		return dice;
	}

void snl1::khel()
	{
        //press enter key to continue
        check_enter=fgetc(stdin);

		if(p1 && check_enter == 10)
		{
            system("CLS");
			dice=this->Dice();
			this->position();
			this->board();

			cout<<"DICE: "<<dice << endl;
			cout<< termcolor::cyan << player << termcolor::reset << ": "<<pos1+1<<endl;
			cout<< termcolor::red << "CPU: " << termcolor::reset <<pos2+1<<endl;
			cout << "\n" << termcolor::red << "CPU " << termcolor::reset << "rolls the dice now \n";
		}
		else if(p2 && check_enter == 10)
		{
		    system("CLS");
			dice=this->Dice();
			this->position();
			this->board();

            cout<<"DICE: "<<dice << endl;
			cout<< termcolor::cyan << player << termcolor::reset << ": "<<pos1+1<<endl;
			cout<< termcolor::red << "CPU: " << termcolor::reset <<pos2+1<<endl;
			cout << "\n" << termcolor::cyan << player << termcolor::reset <<" rolls the dice now \n";
		}

		this->chance();
	}

void snl1::position()
	{
		if(p1)
		{
			pos1+=dice;

			for(int i=0;i<11;i++)
			{
				if(pos1==snake[i])
					pos1=snake2[i];
			}

			for(int i=0;i<10;i++)
			{
				if(pos1==ladder[i])
					pos1=ladder2[i];
			}
		}

		if(p2)
		{
			pos2+=dice;

			for(int i=0;i<11;i++)
			{
				if(pos2==snake[i])
					pos2=snake2[i];
			}

			for(int i=0;i<10;i++)
			{
				if(pos2==ladder[i])
					{
					    pos2=ladder2[i];
					}
			}
		}
	}

bool snl1::gameover()
	{
		if(pos1>=100)
		{
		    system("CLS");
			cout << termcolor::cyan << player << termcolor::reset << " WINS\n";
			winner = true;
			return true;
		}
		else if(pos2>=100)
		{
		    system("CLS");
			cout<< termcolor::red << "CPU: " << termcolor::reset << " WINS\n";
			winner =  false;
			return true;
		}
		else{
            return false;
		}
}

void snl1::game(string alias){
        player = alias;
	    cout << "Press Enter Key to start" << endl;
        while(!(this->gameover())){
            this->khel();
        }
}


