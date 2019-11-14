//
// Created by carte on 11/7/2019.
//

#include "Queue.h"


Queue::Queue() {         //default constructor for queue
    head = nullptr;
    tail = nullptr;
}

void Queue::enqueue_tail(Data stat){     //puts Nodes into the queue
    Node * node = new Node(stat);
    if (head == nullptr){
        head= node ;
        tail = node;
    }
    else{
        tail->next=node;
        tail=node;
    }
}

bool Queue::dequeue_head() {     //takes everything out of the queue
    Node* del = head;
    if(head->next = tail){
        return false;
    }
    else{
        head = head->next;
        delete (del);
        return true;
    }
}
