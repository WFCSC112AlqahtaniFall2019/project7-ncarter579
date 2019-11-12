//
// Created by carte on 11/7/2019.
//

//573

#include "Stack.h"

Stack::Stack() {         //default constructor for Stack
    head = nullptr;
}

void Stack::push_head(Data stat){
    Node* iterator = head->next;
    if(head->next == nullptr){  //do this if their is nothing in the list
        Node* temp = new Node(stat); //create node
        head->next = temp;
    }
    else{     //do this if their are other elements in the list
        Node* temp = new Node(stat); //create node
        head->next = temp;
        temp->next = iterator;
    }
}

bool Stack::pop_head() {
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