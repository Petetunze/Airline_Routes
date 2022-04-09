#ifndef ROUTERECORDS_H
#define ROUTERECORDS_H

typedef enum SearchType{ROUTE, ORIGIN, DESTINATION, AIRLINE} SearchType;

typedef struct RouteRecord_struct{

    char    originAirlineCode[4];
    char    destinAirlineCode[4];
    char    airlineCode[4];
    int     passengersPerMonth[6];
}RouteRecord;

RouteRecord* createRecords(FILE*);

#endif // ROUTE-RECORDS_H