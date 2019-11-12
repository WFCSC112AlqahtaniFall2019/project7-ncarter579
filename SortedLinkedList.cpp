//
// Created by carte on 11/7/2019.
//

#include "SortedLinkedList.h"
using namespace std;

void SortedLinkedList::insertSorted(double stat) {
    Node* temp = new Node(stat, nullptr); //create node

    Node *curr = head->next;      //creating the nodes used to traverse the linked list
    Node *prev = head;
    Node *check = head;
    if (head->next == nullptr || curr->next == nullptr) {   //checking to see if their are any values in the list or only 1 value in the list
        cout << "Not enough values in the list" << endl;  //if their are not enough values print this and return
        return;
    }
    while (curr != nullptr) {    //do this until curr reaches nullPtr
        if (curr->value > prev->value) {    //if the current value is greater then the prev value move curr and prev forward 1
            curr = curr->next;  //moving curr and prev forward in the list
            prev = prev->next;
        } else {         //do this if the values need to be rearranged
            if (head->value > curr->value) {      //if head's value is greater then curr's value
                prev->next = curr->next;      //sets prev's next equal to curr's next
                curr->next = head;     //sets curr's next equal to the head
                head = curr;            //sets curr's value equal to head
            } else {
                check = head;     //set check equal to head
                while (check != nullptr && check->next->value < curr->value) {   //while check dosn't reach the end of the list and checks next value is less then curr's value
                    check = check->next;   //iterate check through the list
                }
                prev->next = curr->next;     //when it reaches a value that must be swapped set prev's next equal to curr's next
                curr->next = check->next;     //set curr's next equal to check's next
                check->next = curr;              //set check's next equal to curr
            }
        }
        curr = prev->next;     //iterates curr
    }
}
