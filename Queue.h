//
// Created by carte on 11/7/2019.
//

#include "LinkedList.h"

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#endif //PROJECT7_QUEUE_H

class Queue: public LinkedList{
public:
    Queue();
    void enqueue_tail(double stat);
    bool dequeue_head();
private:
    Node* tail;
};