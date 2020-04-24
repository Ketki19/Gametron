#include<iostream>
#include<time.h>
#include<stdlib.h>
#include "termcolor/termcolor.hpp"
using namespace std;

class snl1{

    //turns of the players
    bool p1 = true, p2 = false;

    //to check the pressed key is enter for rolling the dice
    char check_enter;

    //positions of the players
    int pos1 = 0, pos2 = 0, dice;

    //snakes
    int snake[11]={27,35,39,50,59,66,73,76,89,97,99};
	int snake2[11]={7,5,3,34,46,24,12,63,67,86,26};

	//ladders
	int ladder[10]={2,14,22,28,30,44,54,70,80,87};
	int ladder2[10]={23,29,41,77,32,58,69,90,83,93};

    int pos_array[100];

    int a[10][10]={{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30},{31,32,33,34,35,36,37,38,39,40},{41,42,43,44,45,46,47,48,49,50},{51,52,53,54,55,56,57,58,59,60},{61,62,63,64,65,66,67,68,69,70},{71,72,73,74,75,76,77,78,79,80},{81,82,83,84,85,86,87,88,89,90},{91,92,93,94,95,96,97,98,99,100}};

public:

    snl1(){
        ;
        for(int i = 0; i<100; i++){
            pos_array[i] = i+1;
        }
    }

    void board()
	{
        int sum_pos,ten_adder=0;

        cout<< termcolor::on_red << "\t\t\tS N A K E    A N D    L A D D E R \t\t\t" << termcolor::reset << "Press Enter key to spin the Dice!" << "\n\n";
        cout << termcolor::yellow;

        for(int i=0; i<=9;i++){
            cout << "\n\n";
            for(int j=0; j<=9; j++){
                sum_pos = ten_adder+j;
                if(sum_pos == pos1){
                    cout << "|\t" << termcolor::on_blue << termcolor::yellow << pos_array[sum_pos] << termcolor::reset << termcolor::yellow << "\t|";
                }else if(sum_pos == pos2){
                    cout << "|\t" << termcolor::on_red << termcolor::yellow << pos_array[sum_pos] << termcolor::reset << termcolor::yellow << "\t|";
                }else{
                    cout << "|\t" << pos_array[sum_pos] << "\t|";
                }
            }
            ten_adder +=10;

        }

        cout << termcolor::reset << "\n\n";
    }



    void chance()
	{
		if(p1){
            p1 = false;
			p2 = true;
		}else{
			p1 = true;
			p2 = false;
		}
	}


	int Dice()
	{
		srand(time(NULL));
		dice=(rand()%6)+1;
		return dice;
	}

    void khel()
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
			cout<<"PLAYER 1: "<<pos1+1<<endl;
			cout<<"PLAYER 2: "<<pos2+1<<endl;
			cout << "\n PLAYER 2 rolls the dice now \n";
		}
		else if(p2 && check_enter == 10)
		{
		    system("CLS");
			dice=this->Dice();
			this->position();
			this->board();

            cout<<"DICE: "<<dice << endl;
			cout<<"PLAYER 1: "<<pos1+1<<endl;
			cout<<"PLAYER 2: "<<pos2+1<<endl;
			cout << "\n PLAYER 1 rolls the dice now \n";
		}

		this->chance();
	}

	void position()
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

	bool gameover()
	{
		if(pos1>=100)
		{
		    system("CLS");
			cout<<"\t\t\tPLAYER 1 WINS\n";
			return true;
		}
		else if(pos2>=100)
		{
		    system("CLS");
			cout<<"\t\t\tPLAYER 2 WINS\n";
			return true;
		}
		else{
            return false;
		}
	}

	void game(){
	    cout << "Press Enter Key to start" << endl;
        while(!(this->gameover())){
            this->khel();
        }
	}
};

int main(){

    snl1 obj;
    obj.game();

    return 0;
}
