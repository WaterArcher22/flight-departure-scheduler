
#ifndef QUEUE_H
#define QUEUE_H
#include "flight.h"

//I chose to do this in linkedlist instead of array implemation
typedef struct QueueNode {
    Flight data;
    struct QueueNode* next;
}QueueNode;

typedef struct {
    QueueNode* head;
    QueueNode* tail;
}Queue;
//API
Queue* createQueue(void);
int isQueueEmpty(const Queue* q);
void enqueue(Queue* q, Flight f);
Flight dequeue(Queue* q);
#endif //QUEUE_H

