#include <stdio.h>
#include "scheduler.h"
#include "flight.h"

int main(void)
{
    Scheduler* scheduler = createScheduler();

    if (scheduler == NULL) {
        printf("Scheduler could not be created.\n");
        return 1;
    }

    Flight f1 = createFligth(1, DOMESTICS, 0, 5);
    Flight f2 = createFligth(2, INTERNATIONAL, 1, 4);
    Flight f3 = createFligth(3, EMERGENCY, 2, 3);
    Flight f4 = createFligth(4, DOMESTICS, 3, 6);
    Flight f5 = createFligth(5, EMERGENCY, 4, 2);

    addFlight(scheduler, f1);
    addFlight(scheduler, f2);
    addFlight(scheduler, f3);
    addFlight(scheduler, f4);
    addFlight(scheduler, f5);

    printf("Flight departure order:\n");

    while (!isSchedulerEmpty(scheduler)) {
        Flight next = getNextFlight(scheduler);
        printFlight(&next);
    }

    return 0;
}
