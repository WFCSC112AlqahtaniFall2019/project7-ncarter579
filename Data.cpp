//
// Created by carte on 11/7/2019.
//

using namespace std;
#include <ostream>
#include "Data.h"


Data::Data(double points, double rebounds, double assists, double rate) {     //constructor for a Data object
    pointsPerGame = points;
    reboundsPerGame = rebounds;
    assistsPerGame = assists;
    rating = rate;
}

const ostream& operator<<( ostream &os, Data d) {         //overloading the output stream
    os << d.pointsPerGame << " " << d.reboundsPerGame << " " << d.assistsPerGame << "  " << d.rating << endl;    //printing the Data object
    return os;
}


bool Data::operator>(Data &rhs) {          //overload operator for > that checks if the players rating is greater or not
    return this->rating > rhs.rating;
}
