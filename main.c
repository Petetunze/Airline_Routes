#include <stdio.h>
#include <stdlib.h>

#include "route-records.h"

int main( int argc, char *argv[] )
{
    
    printf("filenane.csv\n");
    FILE* fileIn = fopen("data.csv", "r");

    //AAAAAA
    if(fileIn == NULL){

        printf("ERROR: Could not open file.");
        return 0;
    }
    else{


        RouteRecord* records = createRecords(fileIn);
        rewind(fileIn);
        
        
        int i;
        for(i = 0; i < 10; i++){
            
            int j;
            for(j = 0; j < 6; j++){
                printf("%d ", records->passengersPerMonth[j]);
            }
            
            printf("\n");
            records++;
        }
    }

    return 0;
}