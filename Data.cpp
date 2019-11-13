//
// Created by carte on 11/7/2019.
//
using namespace std;
#include <ostream>
#include "Data.h"

ostream& operator<<(ostream& os, const Data& d) {    //prints out the contents of a data object
    os << d.rating << " " << d.pointsPerGame << " " << d.assistsPerGame << " " << d.reboundsPerGame << endl;
}

bool Data::operator>(Data compare) {    //used to compare the contents of a data object
    if(this->rating < compare.rating){
        return false;
    }
    else if (this->rating > compare.rating){
        return true;
    }
    else{
        return false;
    }
}


Data::Data() {
    pointsPerGame = 0;
    assistsPerGame = 0;
    reboundsPerGame = 0;
    rating = 0;
}

Data::Data(double point, double rebound, double assist, double rate) {
    pointsPerGame = point;
    assistsPerGame = assist;
    reboundsPerGame = rebound;
    rating = rate;
}
