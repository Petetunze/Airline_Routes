#include <stdio.h>
#include <stdlib.h>

#include "route-records.h"

RouteRecord* createRecords(FILE* fileIn){

    char currentLine[50];
    int lineCount = 0;
    int s = 0;

    // Get the amount of lines
    // s is to skip the header in the CVS file
    while(fgets(currentLine, 50, fileIn)){

        if(s == 1){
            
            lineCount++;
        }
        else{
            s = 1;
        }
    }
    
    // Set the dynamically allocated array
    RouteRecord* returnPtr = (RouteRecord*)malloc(sizeof(RouteRecord) * lineCount);
    RouteRecord* records = returnPtr;
    
    // Set every element in each struct's array to 0
    int counter = 0;
    while(counter < lineCount){

        int i;
        for(i = 0; i < 6; i++){

            returnPtr->passengersPerMonth[i] = 0;
            //printf("%d", returnPtr->passengersPerMonth[i]);
        }

        counter++;
        returnPtr++;
    }

    return records;
}
