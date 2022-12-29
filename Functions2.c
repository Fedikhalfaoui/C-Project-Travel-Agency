#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LEN 100
#define FLIGHTS_H_INCLUDED
#define data_H_INCLUDED
#define TEMPFILE_H_INCLUDED
#define FLIGHTDESCRIPTION_H_INCLUDED
#define TEMPFILE2_H_INCLUDED

typedef struct {
    char* id;
    char*destination;
    char*departure;
    char*date;
    char *price;
    char *deptime;
    char *arrtime;
       }flights;




flights getflight(char line[100]){

   flights f;
    const char delimiter[] = " ";  // The delimiter to use
    char* token;  // Pointer to hold the current token
    // Get the first token
   token=strtok(line,delimiter);
    f.id=token;

    token = strtok(NULL, delimiter);
    f.departure=token;

    token = strtok(NULL, delimiter);
    f.destination=token;
    token = strtok(NULL, delimiter);
    f.date=token;
     token = strtok(NULL, delimiter);
     f.deptime=token;
     token = strtok(NULL, delimiter);
     f.arrtime=token;
     token = strtok(NULL, delimiter);
     f.price=token;

    return f;
}


void makeline(char line[100],flights f){
     strcat(line,f.id);
     strcat(line," ");
     strcat(line,f.departure);
     strcat(line," ");
     strcat(line,f.destination);
     strcat(line," ");
     strcat(line,f.date);
     strcat(line," ");
     strcat(line,f.deptime);
     strcat(line," ");
     strcat(line,f.arrtime);
     strcat(line," ");
     strcat(line,f.price);

}


void addflight2(){
    flights f;
    FILE *fp = fopen("Flights.h", "a");
    printf("Enter : ");
    scanf("%s",f.id);
    printf("Enter : ");
    scanf("%s",f.departure);
    printf("Enter : ");
    scanf("%s",f.destination);
    printf("Enter : ");
    scanf("%s",f.date);
    printf("Enter : ");
    scanf("%s",f.deptime);
    printf("Enter : ");
    scanf("%s",f.arrtime);
    printf("Enter : ");
    scanf("%s",f.price);
    char line[100];
    makeline(line,f);
    fprintf(fp,"%s",line);
}





