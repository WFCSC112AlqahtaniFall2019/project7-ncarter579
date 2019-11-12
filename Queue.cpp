//
// Created by carte on 11/7/2019.
//

#include "Queue.h"


Queue::Queue() {         //default constructor for Stack
    head = nullptr;
}

void Queue::enqueue_tail(Data stat){
    Node* iterator = head->next;
    Node* trail = head;
    while(iterator->next != nullptr){
        iterator = iterator->next;
        trail = trail->next;
    }
    Node* temp = new Node(stat); //create node
    trail->next = temp;
    delete iterator;
}

bool Queue::dequeue_head() {
    Node* del = head->next;
    if(head->next = nullptr){
        return false;
    }
    else{
        head->next = del->next;
        delete del;
        return true;
    }
}
