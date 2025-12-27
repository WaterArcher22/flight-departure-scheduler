#include <stdio.h>
#include <stdlib.h>
#include "scheduler.h"

Scheduler createSchedule(void) {
    Scheduler schedule = (Scheduler*)malloc(sizeof(Scheduler));
    if (schedule==NULL) {
        return NULL;
    }

    schedule.emergencyQueue= createQueue();
    schedule.internationalQueue= createQueue();
    schedule.domesticQueue= createQueue();

    return schedule;
}

void addFlight(Scheduler* scheduler, Flight flight) {
    if (scheduler==NULL) {
        return;
    }
    switch (flight.priority) {
        case EMERGENCY:
            enqueue(scheduler->emergencyQueue,flight);
            break;
        case INTERNATIONAL:
            enqueue(scheduler->internationalQueue,flight);
            break;
        case DOMESTICS:
            enqueue(scheduler->domesticQueue,flight);
            break;
        default:
            break;
    }
}

int isSchedulerEmpty(const Scheduler* scheduler) {
    if (scheduler==NULL) {
        return 1;
    }
    return isQueueEmpty(scheduler->emergencyQueue) && isQueueEmpty(scheduler->internationalQueue) && isQueueEmpty(scheduler->domesticQueue);
}

Flight getNextFlight(Scheduler* scheduler) {
    if (scheduler == NULL) {
        Flight invalid;
        invalid.flightID = -1;
        invalid.priority = DOMESTICS;
        invalid.arival_time = -1;
        invalid.servie_time = -1;
        return invalid;
    }

    if (!isQueueEmpty(scheduler->emergencyQueue)) {
        return dequeue(scheduler->emergencyQueue);
    }

    if (!isQueueEmpty(scheduler->internationalQueue)) {
        return dequeue(scheduler->internationalQueue);
    }

    if (!isQueueEmpty(scheduler->domesticQueue)) {
        return dequeue(scheduler->domesticQueue);
    }

    Flight invalid;
    invalid.flightID= -1;
    invalid.priority = DOMESTICS;
    invalid.arival_time = -1;
    invalid.servie_time = -1;
    return invalid;
}