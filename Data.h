//
// Created by carte on 11/7/2019.
//
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
using namespace std;
class Data{
public:
    friend const ostream& operator<<( ostream& os, Data d); //output stream overload operator
    bool operator>(Data& rhs);
    Data(double point, double rebound, double assist, double rate);
    Data(){};
private:
    double pointsPerGame;              //four data points
    double assistsPerGame;
    double reboundsPerGame;
    double  rating;
};


#endif //PROJECT7_DATA_H
