#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LEN 100
#define FLIGHTS_H_INCLUDED
#define data_H_INCLUDED
#define TEMPFILE_H_INCLUDED
#define HOTELS_H_INCLUDED
#define TEMPFILE2_H_INCLUDED

void showallflights(){
   FILE *fp = fopen("Flights.h", "r");
   if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
   }
   char line[MAX_LINE_LEN];

int line_number = 1;
int cp=1;
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {

    printf("Flight %d): %s",cp, line);
    cp++;

  line_number++;
}

fclose(fp);
}
void showallhotels(){
   FILE *fp = fopen("Hotels.h", "r");
   if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
   }
   char line[MAX_LINE_LEN];

int line_number = 1;
int cp=1;
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {

    printf("Hotel %d): %s",cp, line);
    cp++;
  line_number++;
}

fclose(fp);
}
void addflight(){
 FILE *fp = fopen("Flights.h", "a");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}

char line[MAX_LINE_LEN];
fflush(stdin);
fgets(line, MAX_LINE_LEN, stdin);
if (fprintf(fp,"%s",line) < 0) {
  printf("Error writing to file.\n");
}
printf("\n");
fclose(fp);
// ------------//

}

int searchflight(char word[MAX_LINE_LEN]){
FILE *fp = fopen("Flights.h", "r");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}
int res=-1;
char line[MAX_LINE_LEN];
int line_number = 1;
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
  if (strstr(line, word) != NULL) {
    res = line_number;
  }
  line_number++;
}

return res;
}


//-----------------------------------//
void deleteflight(char id[MAX_LINE_LEN]){

FILE *fp = fopen("Flights.h", "r");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}

FILE *tmp_fp = fopen("tempfile.h", "w");
if (tmp_fp == NULL) {
  printf("Error creating temporary file.\n");
  return 1;
}

int line_to_delete=searchflight(id);

int line_number = 1;
char line[MAX_LINE_LEN];
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
    fputs(line, tmp_fp);
  line_number++;
}
fclose(fp);
fclose(tmp_fp);




FILE *tmp_fp2=fopen("tempfile.h","r");
FILE *fp2 = fopen("Flights.h", "w");


int line2_number = 1;
char line2[MAX_LINE_LEN];
while (fgets(line2, MAX_LINE_LEN, tmp_fp2) != NULL) {
  if (line2_number != line_to_delete) {
    fputs(line2, fp2);
  }
  line2_number++;
}

fclose(fp2);
fclose(tmp_fp2);
tmp_fp2 = fopen("tempfile.h", "w");
fclose(tmp_fp2);

}
//----------------------------------------------//
void deletehotel(char id[MAX_LINE_LEN]){

FILE *fp = fopen("Hotels.h", "r");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}

FILE *tmp_fp = fopen("tempfile.h", "w");
if (tmp_fp == NULL) {
  printf("Error creating temporary file.\n");
  return 1;
}

int line_to_delete=searchhotel(id);

int line_number = 1;
char line[MAX_LINE_LEN];
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
    fputs(line, tmp_fp);
  line_number++;
}
fclose(fp);
fclose(tmp_fp);




FILE *tmp_fp2=fopen("tempfile.h","r");
FILE *fp2 = fopen("Hotels.h", "w");


int line2_number = 1;
char line2[MAX_LINE_LEN];
while (fgets(line2, MAX_LINE_LEN, tmp_fp2) != NULL) {
  if (line2_number != line_to_delete) {
    fputs(line2, fp2);
  }
  line2_number++;
}

fclose(fp2);
fclose(tmp_fp2);
tmp_fp2 = fopen("tempfile.h", "w");
fclose(tmp_fp2);

}
//-----------------------------------------------------------------------//
int searchhotel(char id[MAX_LINE_LEN]){
    FILE *fp = fopen("Hotels.h", "r");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}
int res=-1;
char line[MAX_LINE_LEN];
int line_number = 1;
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
  if (strstr(line, id) != NULL) {
    res = line_number;
  }
  line_number++;
}

return res;
}


int findflight(char word[100]){
     FILE *fp = fopen("Flights.h", "r");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}
int t=0;
int cp=0;
int res=-1;
char line[MAX_LINE_LEN];
int line_number = 1;
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
  if (strstr(line, word) != NULL) {
    if (t==0){
        printf("*****       Flights Found :   ****** \n");
        t=1;
    }
    cp++;
    printf("Flight %d : %s",cp,line);
    res=0;
  }
  line_number++;
}
if (res!=-1)
{printf("\n  Please   Enter {(1):yes or (0):no} if u want to see Available Hotels in Your destination : ");}
return res ;
}


void findhotel(char word[100]){
     FILE *fp = fopen("Hotels.h", "r");
if (fp == NULL) {
  printf("Error opening file.\n");
  return 1;
}
int cp;
char line[MAX_LINE_LEN];
int line_number = 1;
int res=-1;
while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
  if (strstr(line, word) != NULL) {
   printf("*****      Hotel Description   *****\n");
   cp++;
   res=5;
   printf("Hotel %d : %s",cp,line);
  }
  line_number++;
}
 if (res==-1){
    printf("Sorry no available Hotels in Your Destination \n");
 }
}








void addhotel(){
FILE *gp = fopen("Hotels.h", "a");
if (gp == NULL) {
  printf("Error opening file.\n");
  return 1;
}
printf("Please Enter New Hotel : \n");
printf("***Location Name Price per night(...$/night) : ***\n");
char line2[MAX_LINE_LEN];
fflush(stdin);
fgets(line2, MAX_LINE_LEN, stdin);

if (fprintf(gp,"%s",line2) < 0) {
  printf("Error writing to file.\n");
}

fclose(gp);}

