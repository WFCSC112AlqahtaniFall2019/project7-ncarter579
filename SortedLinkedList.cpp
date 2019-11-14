//
// Created by carte on 11/7/2019.
//

#include "SortedLinkedList.h"
using namespace std;
#include <iostream>

void SortedLinkedList::insertSorted(Data stat) {
    Node* temp = new Node(stat); //create node

    Node *curr;      //creating the nodes used to traverse the linked list
    Node *prev = head;
    Node *check = head;
    if (head == nullptr) {   //checking to see if their are any values in the list
        temp->next = head;
        head = temp;
    }
    else{
        if (head->dat > temp->dat) {        //checking to see if you need to insert at your head
            temp->next = head;
            head = temp;
        }
        else {
            curr = head;
            while (curr != nullptr && temp->dat > curr->dat ) {    //traversing the list until you need to insert your node
                prev=curr;
                curr = curr->next;
            }
            prev->next=temp;         //iterating variables
            temp->next=curr;
        }
    }
}

