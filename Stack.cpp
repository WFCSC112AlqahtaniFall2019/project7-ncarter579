//
// Created by carte on 11/7/2019.
//

#include "Stack.h"

Stack::Stack() {         //default constructor for Stack
    head = nullptr;
}

void Stack::push_head(const Data &stat){     //pushing Nodes onto the stack
    Node* node = new Node(stat);
    node->next = head;
    head = node;
}

bool Stack::pop_head() {      //deleting Nodes from the Stack
    Node* del = head;
    if(head->next = nullptr){
        return false;
    }
    else{
        head = head->next;
        delete (del);
        return true;
    }
}

