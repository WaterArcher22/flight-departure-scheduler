#include "flight.h"
#include <stdio.h>
//creating flights
Flight createFligth(int id,FligthPiority priority,int arival_time,int servie_time) {
    Flight f;
    f.flightID=id;
    f.priority= priority;
    f.arival_time=arival_time;
    f.servie_time= servie_time;
    return f;
}
//Printing
void printFlight(const Flight* flight) {
    if (flight==NULL) {
        return;
    }
    const char* priorityStr;

    switch (flight->priority) {
        case EMERGENCY:
            priorityStr="Emergency";
            break;
        case INTERNATIONAL:
            priorityStr="International";
            break;
        case DOMESTICS:
            priorityStr="Domestics";
            break;
        default:
            priorityStr="Unknown";
    }
    printf("Flight ID: %d | Priority: %s | Arival Time: %d | Service Time %d \n",flight->flightID,priorityStr,flight->arival_time,flight->servie_time);

}
