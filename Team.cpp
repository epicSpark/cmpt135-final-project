// Team.cpp 

#include "Team.h"
#include <string>
#include <vector>

using namespace std;

Team::Team()
{ }

string Team::get_full() const { return fullName };
string Team::get_short() const { return shortName };
vector<string> Team::get_divList() const { return divList };
string Team::get_president() const { return president };
string Team::get_ceo() const { return ceo };
vector<string> Team::get_partners() const { return partners };
string Team::get_location() const { return location };
int Team::get_dateFounded() const { return dateFounded };

void Team::set_full(string s) { 

}

void Team::set_short(string s){

}

void Team::set_divList(string s){

}

void Team::set_president(string s){

}

void Team::set_ceo(string s){

}

void Team::set_partner(string s){

}

void Team::set_location(string s){

}

void Team::set_dateFounded(int i){
    
}