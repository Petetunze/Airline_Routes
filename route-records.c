#include <stdio.h>
#include <stdlib.h>

#include "route-records.h"

RouteRecord* createRecords(FILE* fileIn){

    char currentLine[50];
    int lineCount = 0;
    int s = 0;
    int k = 0;

    // Get the amount of lines
    while(fgets(currentLine, 50, fileIn) && k < 1){

        if(s == 1){
            
            lineCount++;
            k++;
        }
        else{
            s = 1;
        }
    }

    RouteRecord* returnPtr = (RouteRecord*)malloc(sizeof(RouteRecord) * lineCount);
    RouteRecord* records = returnPtr;

    int counter = 0;
    while(counter < lineCount){

        int i;
        for(i = 0; i < 6; i++){

            returnPtr->passengersPerMonth[i] = 2;
            //printf("%d", returnPtr->passengersPerMonth[i]);
        }

        counter++;
        returnPtr++;
    }

    return records;
}