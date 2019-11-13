#include <iostream>

//#include "Data.h"
#include "LinkedList.h"
#include "Queue.h"
#include "SortedLinkedList.h"
#include "Stack.h"

#include <fstream>

int main() {

    LinkedList list;
    Stack lis;

    ifstream inputs;
    ofstream stacked;
    ofstream queued;
    ofstream sorted;

    inputs.open ("all_seasons.csv");
    stacked.open ("stacked.txt");
    queued.open ("queued.txt");
    sorted.open ("sorted.txt");

    if (!inputs.is_open()){
        //imputs isn't open
    }
    if (!stacked.is_open()){
        //stacked isn't open
    }
    if (!queued.is_open()){
        //queued isn't open
    }
    if (!sorted.is_open()){
        //sorted isn't open
    }
    
        Data object;
        while(inputs.good()){
            string points;
            getline(inputs, points, ',');

            string rebounds;
            getline(inputs, rebounds, ',');

            string assists;
            getline(inputs, assists, ',');

            string rating;
            getline(inputs, rating, ',');

            Data* object = new Data(stod(points), stod(rebounds), stod(assists), stod(rating));
        }







    inputs.close ();
    stacked.close ();
    queued.close ();
    sorted.close ();
        return 0;
}