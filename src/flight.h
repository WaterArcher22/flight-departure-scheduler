
#ifndef FLIGHT_H
#define FLIGHT_H
//Setting Piority Levels
typedef enum {
    EMERGENCY;
    INTERNATIONAL;
    DOMESTICS;
}FligthPiority;

typedef struct {
    int flightID;
    FligthPiority priority;
    int arival_time;
    int servie_time;

}Flight;
//API
Flight createFligth(int id,FligthPiority priority,int arival_time,int servie_time);
void printFlight(const Flight* flight);
#endif //FLIGHT_H
