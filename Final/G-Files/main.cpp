#include <iostream>
#include <vector>
#include "gametron.h"
#include "games/termcolor/termcolor.hpp"

using namespace std;
using namespace Inky_ponky;
using namespace T_hunt;
using namespace scores;
using namespace sudoku_ns;
using namespace snake_ladder;
using namespace TicTacToe;
using namespace KBC;

int main()
{
    int cont=1, choice;
    string temp, game_name,alias = "";
    vector<std::string> games = {"Inky_ponky", "Sudoku", "Treasure_hunt", "Tic_tac_toe", "Snake_ladder", "Kbc"};
    cout << termcolor::on_yellow << termcolor::red <<termcolor::bold << " We have developed it from ground up and haven't downloaded anything except the termcolor library \t" << termcolor::reset  << "\t\t\t"<< endl;
    cout << "\t\t\t" << termcolor::red << termcolor::bold << "         GAMETRON \t" << termcolor::reset  << "\t\t\t"<< endl;
    cout << "\t\t\t\t" << termcolor::on_magenta << termcolor::bold << "A Gaming Bot!" << termcolor::reset << "\t\t\t" << endl;
    cout << "\n\n\n";

     //Inky_ponky
    treasure hunt; //Treasure hunt
    sudoku sud; //Sudoku
    snl1 snake; //Snake and ladder
     //tic tac toe
    profiles profile;
    //profile.create_files();

    //select your alias
    cout << termcolor::on_grey << termcolor::cyan << "1. Enter your alias\n2. Create one:" << termcolor::reset << endl;
    cin >> choice;
    switch(choice){
    case 1:
        cout << "Enter the Alias: ";
        cin >> alias;
        break;
    case 2:
        alias = profile.new_profile();
        break;

    }

   do{
        c_inky_ponky *inky = new c_inky_ponky();
        tictoe *t = new tictoe();
        cout << "Choose the game: \n"
            << termcolor::red << termcolor::on_white << termcolor::bold << "1.Snake and Ladder" << "\n"
            << "2.Sudoku"<< endl
            <<  "3. Inky_ponky" << "\n"
            << "4. Treasure Hunt\n"
            << "5. Tic Tac Toe" << termcolor::reset << endl;

        cout << "\nYour choice: ";
        cin >> choice;

        //menu driven code
        switch(choice){
        case 1:

            game_name = games[4];
            snake.game(alias);
            if(snake.get_winner()){
                profile.update_score(game_name, alias, 10);
            }
            cout << "Your current score is " << profile.show_score(game_name, alias) << endl;
            break;
        case 2:
            game_name = games[2];
            sud.board_gene();
            sud.input();
            sud.final1();
            if(sud.get_winner()){
                profile.update_score(game_name, alias, 10);
            }
            cout << "Your current score is " << profile.show_score(game_name, alias) << endl;
            break;
        case 3:

            game_name = games[1];
            inky->ch_color();
            inky->number();
            break;
        case 4:
            game_name = games[2];
            hunt.store();
            hunt.find_t();
            if(hunt.get_winner()){
                profile.update_score(game_name, alias, 10);
            }
            cout << "\nYour current score is " << profile.show_score(game_name, alias) << endl;
            break;
        case 5:

            game_name= games[3];
                    int i;
                char turn;
                bool draw;
                cout<<"\n\n T I C K    T A C    T O E"<<endl;

                while(t->gameover())
                {
                    t->display();
                    t->Choice();
                    draw = t->gameover();

                }

                if(t->turn=='X'&& t->draw==false){
                cout<<"Player2 [O] Wins!! Congratulations\n";
                t->winner = true;}
                if(t->turn=='O'&& t->draw==false){
                cout<<"Player1 [X] Wins!! Congratulations\n";
                t->winner = true;}
                else{
                cout<<"GAME DRAW";}

                if(t->get_winner()){
                    profile.update_score(game_name, alias, 10);
                }
                cout << "\nYour current score is " << profile.show_score(game_name, alias) << endl;

                break;

        default:
            cout << "My creators are adding new games soon. Till then, play my existing games...";
        }

        cout << "\n\n";
        cout << "Try out our other games as well. Press Y or N to continue" << endl;
        cout << "Your choice: ";
        cin >> temp;
        cout << temp;
        if(temp == "Y"){
            cont = 1;
        }else if(temp == "N"){
            cont = 0;
        }else{
            cout << "Type Y or N";
        }
    }while(cont == 1);


	cout<<"\n \n \t \t Thanks for playing..."<<endl;
	return 0;
}
