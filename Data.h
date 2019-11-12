//
// Created by carte on 11/7/2019.
//
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#endif //PROJECT7_DATA_H

class Data{
public:
    void operator <<(Data list);       //output stream overload operator
    bool operator >(Data compare);     //comparison overload operator
    double pointsPerGame;              //four data points
    double assistsPerGame;
    double reboundsPerGame;
    double  rating;
};