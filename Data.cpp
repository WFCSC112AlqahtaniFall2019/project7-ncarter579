//
// Created by carte on 11/7/2019.
//

using namespace std;
#include <ostream>
#include "Data.h"


Data::Data(double points, double rebounds, double assists, double rate) {
    pointsPerGame = points;
    reboundsPerGame = rebounds;
    assistsPerGame = assists;
    rating = rate;
}

const ostream& operator<<( ostream &os, Data d) {
    os << d.pointsPerGame << " " << d.reboundsPerGame << " " << d.assistsPerGame << "  " << d.rating << endl;
    return os;
}


bool Data::operator>(Data &rhs) {
    return this->rating > rhs.rating;
}
