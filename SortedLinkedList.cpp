//
// Created by carte on 11/7/2019.
//

#include "SortedLinkedList.h"
using namespace std;
#include <iostream>

void SortedLinkedList::insertSorted(Data stat) {
    Node* temp = new Node(stat); //create node

    Node *curr = head->next;      //creating the nodes used to traverse the linked list
    Node *prev = head;
    Node *check = head;
    if (head->next == nullptr) {   //checking to see if their are any values in the list
        cout << "Not enough values in the list" << endl;  //if their are not enough values print this and return
        return;
    }
    while (curr != nullptr) {    //do this until curr reaches nullPtr
        if (curr->data > temp->data) {    //if the current value is greater then the prev value move curr and prev forward 1
            curr = curr->next;  //moving curr and prev forward in the list
            prev = prev->next;
        } else {         //do this if the values need to be rearranged
            if (head->data > temp->data) {      //if head's value is greater then curr's value
                prev->next = temp;   //sets prev's next equal to curr's next
                temp->next = curr;
            } else {
                check = head;     //set check equal to head
                while (check != nullptr && temp->data > check->next->data ) {   //while check dosn't reach the end of the list and checks next value is less then curr's value
                    check = check->next;   //iterate check through the list
                }
                prev->next = temp;     //when it reaches a value that must be swapped set prev's next equal to curr's next
                temp->next = check;
            }
        }
        curr = prev->next;     //iterates curr
    }
}
