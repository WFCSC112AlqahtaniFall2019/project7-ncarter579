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
    if(rating != compare.rating){
        return rating > compare.rating;
    }
    else if(pointsPerGame != compare.pointsPerGame){
        return pointsPerGame > compare.pointsPerGame;
    }
    else if(assistsPerGame != compare.assistsPerGame){
        return assistsPerGame > compare.assistsPerGame;
    }
    else{
        return reboundsPerGame > reboundsPerGame;
    }
    return false;
}


Data::Data() {
    pointsPerGame = 0;
    assistsPerGame = 0;
    reboundsPerGame = 0;
    rating = 0;
}

Data::Data(double point, double assist, double rebound, double rate) {
    pointsPerGame = point;
    assistsPerGame = assist;
    reboundsPerGame = rebound;
    rating = rate;
}
