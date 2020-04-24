#include<iostream>
#include <fstream>
#include<sstream>
#include<cstdlib>
#include<time.h>
#include "games.h"

using namespace std;
using namespace KBC;


void quiz::getQuestions(){
    fstream fin;
    int q_no;
    string row, col, word;

    srand(time(NULL));
    q_no = (rand()%40)+1; //divided by 40 because there are 40 questions in the csv file

    //converting q_no to string so as to compare the it with row[0]
    //string q_no_string = to_string(q_no);

    //opening the quiz.csv file
        fin.open("KBC/quiz.csv", ios::in);
    cout << "round 5";
    //parsing through every row in the file till we get the desired question
    while(!fin.eof()){
    cout << "In while" << endl;
        getline(fin, row);
        stringstream words(row);
        cout << row << "THis";
        /*if(row[0] == q_no_string){
            while(getline(words, word, ",")){
                questions_vector.push_back(word);
            }
        }*/

    }

    fin.close();

}

void displayQuestions(){
//    cout << "Question: " << questions_vector[1] << "\n";
}
