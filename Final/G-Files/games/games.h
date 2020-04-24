#ifndef GAMES_H_INCLUDED
#define GAMES_H_INCLUDED

#include<vector>

//Inky Ponky game
namespace Inky_ponky{

    class c_inky_ponky{
        int color, secret_num, num;

    public:
        void ch_color();
        void number();
    };
}

//Treasure Hunt
namespace T_hunt{
    class treasure{
        bool winner = false;
        int i, j, r, r1, x, y, arr[10][10];
        char choice;

    public:
        void store();
        void find_t();
        bool get_winner(){
            if(winner)
                return true;
        }
    };
}

namespace TicTacToe{
    class tictoe{
        char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
        int choice,row,column;


    public:
        char turn='X';
        bool winner;
        bool draw=false;
        void display();
        void Choice();
        bool gameover();
        bool get_winner(){
            if(winner)
                return true;
        }
    };
}

namespace KBC{
    class quiz{
        std::vector<std::string>questions_vector;
    public:
        void getQuestions();
        void displayQuestions();
    };
}

namespace sudoku_ns{
    class sudoku{
        bool winner = false;
        int a[9][9], b[9][9], i, j, x, y, num;
        char ch = 'Y';
        int count=0;
    public:
        void board_gene();
        void board();
        void input();
        void final1();
        bool get_winner(){
            if(winner)
                return true;
        }
    };
}

namespace snake_ladder{
    class snl1{
        //turns of the players
        bool p1 = true, p2 = false, winner=false;
        std::string player;

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

    public:
        snl1();
        void board();
        void chance();
        int Dice();
        void khel();
        void position();
        bool gameover();
        void game(std::string);
        bool get_winner(){
            if(winner)
                return true;
        }
    };
}

namespace scores{

    class profiles{
        struct ranking{
            std::string name;
            int score;
        };
    public:
        //Array of games
        std::vector<ranking> leaderboard;
        std::vector<std::string> games = {"Inky_ponky", "Sudoku", "Treasure_hunt", "Tic_tac_toe", "Snake_ladder", "Kbc"};
        std::string path = "games/scores/";
        void create_files();
        void update_score(std::string, std::string, int);
        std::string new_profile();
        void show_leaderboard(std::string);
        int show_score(std::string, std::string);
        bool comparatorx(ranking, ranking);
    };
}

#endif // GAMES_H_INCLUDED
