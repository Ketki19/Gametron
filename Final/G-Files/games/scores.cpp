#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include "games.h"
#include "termcolor/termcolor.hpp"

using namespace std;
using namespace scores;
using namespace termcolor;

void profiles::create_files(){
    fstream profile;

    for(unsigned int i = 0; i < games.size(); i++){
        profile.open(path + games[i] + ".txt", ios::app);
        profile << "name:admin score:0";
        profile.close();
    }
}

//=================================ADDING NEW PROFLIES=======================================
string profiles::new_profile(){
    fstream profile;
    ifstream check_profile;
    //Elements to be pushed into scores
    string name, record, check_name;
    int score = 0;

    cout << red << on_yellow << "What should we call you?" << endl;
    while(true){
            int n=0;
        //Inputting the Name

        cout << "Alias: " << reset;
        cin >> name;

        //checking if the profile exist already
        check_profile.open(path + games[0] + ".txt", ios::in);
        while(!check_profile.eof()){
            getline(check_profile, record);

            stringstream x(record);
            x >> check_name;
            if(check_name == "name:" + name){
                cout << "Profile with the name " << name << " already exists. Enter a different alias.\n\n";
                n = 1;
                break;
            }
        }
        if(n==0){
            break;
        }
        check_profile.close();
    }


    //looping through every file and adding the profile to all the games
    for(unsigned int i = 0; i < games.size(); i++){
        profile.open(path + games[i] + ".txt", ios::app);
        profile << "\nname:" << name << " score:" << score ;
        profile.close();
    }
   cout << blue << on_yellow << "\nProfile Created!" << reset << endl;

   return name;
}


//==============================UPDATE SCORES==================================
void profiles::update_score(string game, string alias, int update_score){

    ofstream temp;
    ifstream data;
    string record, profile, up_record;
    string temp_path = path + game + "_temp.txt";
    string data_path = path + game+".txt";

    temp.open(temp_path, ios::out);
    data.open(data_path);

    while(!data.eof()){
        getline(data, record);
        stringstream x(record);
        //Breaking the record into words
        x >> profile;
        //making the comparison to find our alias
        if(!(profile == "name:" + alias)){
            temp << record << endl;
        }else if(profile == "name:" + alias){
            up_record = record; //up_record has the alias and its current score
        }

    }
    temp.close();
    data.close();

    //Taking the old score and adding the new score to it
    string score_string = "";

   for(unsigned int i = 0; i<up_record.length(); i++){
        if(isdigit(up_record[i])){
            score_string += up_record[i];
        }
    }

    int score_int = stoi(score_string);
    score_int = score_int + update_score;


    //Updating the score
    temp.open(temp_path, ios::app);
    temp << "name:" << alias << " score:" << score_int;
    temp.close();

    //removing the outdated version and renaming the new file with the name of old file
    remove(data_path.c_str());
    rename(temp_path.c_str(), data_path.c_str());

}

bool profiles::comparatorx(ranking obj1, ranking obj2){
    bool result =  obj1.score > obj2.score;
    return result;
}

//==============================================LEADERBOARD===============================================
void profiles::show_leaderboard(string game){
    ifstream data;
    string record, profile, up_record, score_string = "";
    string data_path = path + game+".txt";
    data.open(data_path);

    while(!data.eof()){
        ranking obj;
        getline(data, record);
        stringstream x(record);

        for(unsigned int i = 0; i<record.length(); i++){
            if(isdigit(record[i])){
                score_string += record[i];
            }
        }
        int score_int = stoi(score_string);
        obj.score = score_int;


        x >> profile;
        obj.name = profile;

        leaderboard.push_back(obj);
    }
    data.close();

    //sorting

    //sort(leaderboard.begin(), leaderboard.end(), comparatorx);

    for(unsigned int i=0; i<leaderboard.size(); i++){
        cout << leaderboard[i].name << " Score: " << leaderboard[i].score << endl;
    }


}



//=============================================Displaying Score===========================================
int profiles::show_score(string game, string alias){
    ifstream data;
    string record, profile, up_record;
    string data_path = path + game+".txt";
    data.open(data_path);

    while(!data.eof()){
        getline(data, record);
        stringstream x(record);
        //Breaking the record into words
        x >> profile;
        //making the comparison to find our alias
         if(profile == "name:" + alias){
            up_record = record; //up_record has the alias and its current score
        }

    }
    data.close();

    //Taking the old score and adding the new score to it
    string score_string = "";

   for(unsigned int i = 0; i<up_record.length(); i++){
        if(isdigit(up_record[i])){
            score_string += up_record[i];
        }
    }
    int score_int = stoi(score_string);

    return score_int;
}
