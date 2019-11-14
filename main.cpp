//Nathan Carter


#include <iostream>
#include "Data.h"
#include "LinkedList.h"
#include "Queue.h"
#include "SortedLinkedList.h"
#include "Stack.h"

#include <fstream>

int main() {
    Stack lis;
    Queue queue;
    SortedLinkedList sortedlinkedlist;

    ifstream inputs;
    ofstream stacked;
    ofstream queued;
    ofstream sorted;

    inputs.open ("all_seasons.csv");
    stacked.open ("stacked.txt");
    queued.open ("queued.txt");
    sorted.open ("sorted.txt");

    if (!inputs.is_open()){
        cout << "inputs isn't open" << endl;
        return -1;
    }
    if (!stacked.is_open()){
        cout << "stacked isn't open" << endl;
        return -1;
    }
    if (!queued.is_open()){
        cout << "queued isn't open" << endl;
        return -1;
    }
    if (!sorted.is_open()){
        cout << "sorted isn't open" << endl;
        return -1;
    }

    string points;
    string rebounds;
    string assists;
    string rating;
    
        while(!inputs.eof()){
            getline(inputs, points, ',');
            getline(inputs, rebounds, ',');
            getline(inputs, assists, ',');
            getline(inputs, rating);

            Data object (stod(points), stod(rebounds), stod(assists), stod(rating));

            lis.push_head(object);
            queue.enqueue_tail(object);
            sortedlinkedlist.insertSorted(object);
        }

    lis.print(stacked);
    queue.print(queued);
    sortedlinkedlist.print(sorted);

    while(lis.pop_head()){
        //Popping and Printing
    }

    while(queue.dequeue_head()){
        //Dequeue and print
    }

    inputs.close ();
    stacked.close ();
    queued.close ();
    sorted.close ();
    return 0;
}