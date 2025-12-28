
#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "queue.h"
#include "flight.h"
typedef struct {
    Queue* emergencyQueue;
    Queue* internationalQueue;
    Queue* domesticQueue;
} Scheduler;

Scheduler* createScheduler(void);
void addFlight(Scheduler* scheduler, Flight flight);
int isSchedulerEmpty(const Scheduler* scheduler);
Flight getNextFlight(Scheduler* scheduler);

#endif //SCHEDULER_H

