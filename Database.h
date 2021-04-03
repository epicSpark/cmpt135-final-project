// Database.h

#ifndef DATABASE_H
#define DATABASE_H

#include "tools/cmpt_error.h"
#include "tools/cmpt_trace.h"
#include "fields/divisions.h"
#include "fields/former_divisions.h"
#include "Team.h"
#include <iostream>
#include <string>


using namespace std;

class Database {

    vector<Team> database;

public:
    vector<Team> get_database() const;
    
   

};




#endif