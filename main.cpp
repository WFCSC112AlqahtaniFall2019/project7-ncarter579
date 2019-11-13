//Nathan Carter


#include <iostream>

//#include "Data.h"
#include "LinkedList.h"
#include "Queue.h"
#include "SortedLinkedList.h"
#include "Stack.h"

#include <fstream>

int main() {

    LinkedList list;
    Stack *lis = new Stack;

    ifstream inputs;
    ofstream stacked;
    ofstream queued;
    ofstream sorted;

    inputs.open ("all_seasons.csv");
    stacked.open ("../stacked.txt");
    queued.open ("queued.txt");
    sorted.open ("sorted.txt");


    stacked << "HelloWorld";
    stacked.close();
    if (!inputs.is_open()){
        cout << "imputs isn't open" << endl;
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


        while(inputs.good()){
            string points;
            getline(inputs, points, ',');

            string rebounds;
            getline(inputs, rebounds, ',');

            string assists;
            getline(inputs, assists, ',');

            string rating;
            getline(inputs, rating, ',');

            Data object =  Data(stod(points), stod(rebounds), stod(assists), stod(rating));
            lis->push_head(object);
        }


    while(lis->pop_head()){
        lis->print(stacked);
        if(!lis->pop_head()){
            break;
        }
    }






    inputs.close ();
    stacked.close ();
    queued.close ();
    sorted.close ();
    return 0;
}