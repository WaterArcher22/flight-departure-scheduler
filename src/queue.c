#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
//Que creating
Queue* createQueue(void) {
    Queue* q= (Queue*)malloc(sizeof(Queue));
    if (q==NULL) {
        return NULL;
    }

    q->head=NULL;
    q->tail= NULL;
    return q;

}

int isQueueEmpty(const Queue* q) {
    if (q->head==NULL){return 1}
    return 0;
}
//enque-deque
void enqueue(Queue* q, Flight f) {
    if (q==NULL) {
        return;
    }
    QueueNode* newnode= (QueueNode*)malloc(sizeof(QueueNode));
    if (newnode==NULL) {
        return;
    }
    newnode->data= f;
    newnode->next= NULL;

    if (q->tail==NULL) {
        q->head=newnode;
        q->tail=newnode;
    }
    else {
        q->tail->next=newnode;
        q->tail=newnode;
    }
}

Flight dequeue(Queue* q) {
    Flight invalidFlight;
    invalidFlight.flightID=-1;
    invalidFlight.priority=DOMESTICS;
    invalidFlight.arival_time=-1;
    invalidFlight.servie_time=-1;

    if (isQueueEmpty(q)) {
        return invalidFlight;
    }
    QueueNode* temp= q->head;
    Flight result =temp->data;

    q->head=temp->next;

    if (q->head==NULL) {
        q->tail=NULL;
    }

    free(temp);
    return result;
}