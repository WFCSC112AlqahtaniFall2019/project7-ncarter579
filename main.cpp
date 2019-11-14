//Nathan Carter


#include <iostream>
#include "Data.h"
#include "LinkedList.h"
#include "Queue.h"
#include "SortedLinkedList.h"
#include "Stack.h"

#include <fstream>

int main() {
    Stack lis;      //creating objects for necessary classes
    Queue queue;
    SortedLinkedList sortedlinkedlist;

    ifstream inputs;       //creating input and output variables
    ofstream stacked;
    ofstream queued;
    ofstream sorted;

    inputs.open ("all_seasons.csv");     //opening files
    stacked.open ("stacked.txt");
    queued.open ("queued.txt");
    sorted.open ("sorted.txt");

    if (!inputs.is_open()){                     //checking to see if all files were opened correctly
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



    string points;       //creating strings for all of my imputs
    string rebounds;
    string assists;
    string rating;

      cout << "Reading ../dataset.csv…" << endl;

    for(int i = 0; i < 10101; i++){             //for the length of the data set
        //while(!inputs.eof()){
            getline(inputs, points, ',');           //getting the imputs from the data set and storing them in the strings
            getline(inputs, rebounds, ',');
            getline(inputs, assists, ',');
            getline(inputs, rating);

            Data object (stod(points), stod(rebounds), stod(assists), stod(rating));   //creating a Data object by converting strings to double and storing them in the object

            lis.push_head(object);
            queue.enqueue_tail(object);
            sortedlinkedlist.insertSorted(object);
    }

    cout << "Writing data in stack inserted at head into stacked.txt." << endl;      //printing the data to the proper output file
    lis.print(stacked);
    cout << "Writing data in queue inserted at tail into queued.txt." << endl;
    queue.print(queued);
    cout << "Writing data in sorted linked list sorted by attribute into sorted.txt." << endl;
    sortedlinkedlist.print(sorted);


    while(lis.pop_head()){           //destroying the stack
    }

    while(queue.dequeue_head()){     //destorying the queue
    }

    inputs.close ();         //closing all of the opened files
    stacked.close ();
    queued.close ();
    sorted.close ();
    return 0;
}