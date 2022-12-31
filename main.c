#include <string.h>
#define HOTELS_H_INCLUDED
#define MAX_LINE_LEN 100
#define FLIGHTS_H_INCLUDED
#define data_H_INCLUDED
#define TEMPFILE_H_INCLUDED
#define TEMPFILE2_H_INCLUDED
//---//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
//---//

int main()
{
   ClearConsoleToColors(70,80);
   printf("                ________________________________________________________________________________________\n");
  printf("                ________________________________________________________________________________________\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                         WELCOME TO ENSI TOURS AND TRAVELS                          ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                Enter your choice:                                  ||\n");
  printf("                ||                                 0:-  About Us                                      ||\n");
  printf("                ||                                 1:-  Show All Available Flights                    ||\n");
  printf("                ||                                 2:-  Show All Hotels                               ||\n");
  printf("                ||                                 3:-  Find Flight                                   ||\n");
  printf("                ||                                 4:-  Find Hotels                                   ||\n");
  printf("                ||                                 5:-  Add Flight                                    ||\n");
  printf("                ||                                 6:-  Add Hotel                                     ||\n");
  printf("                ||                                 7:-  Modify Flight                                 ||\n");
  printf("                ||                                 8:-  Modify Hotel                                  ||\n");
  printf("                ||                                 9:-  Delete Flight                                 ||\n");
  printf("                ||                                10:-  Delete Hotel                                  ||\n");
  printf("                ||                                11:-  Used formats                                  ||\n");
  printf("                ||                                12:- Go back to menu                                ||\n");
  printf("                ||                                -1:-  Exit                                          ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ________________________________________________________________________________________\n");
  printf("                ________________________________________________________________________________________\n");
  char id[50];
  char d[100];
  int a;
  int choice;
  int res;
  char hot[100];
  int answer;
  while(1){
    fflush(stdin);
    printf("Please Enter your Choice : ");
    scanf("%d",&choice);
  switch(choice){
     case 0:
           printf("         Welcome to ENSI Travel Agency! We are a full-service travel agency dedicated to helping you plan your dream vacations.\n");
           printf("              With over 10 years of experience in the industry, we have the knowledge and expertise to help you plan the perfect trip,\n");
           printf("              whether you're looking for a relaxing beach vacation, an adventurous backpacking trip, or a luxurious cruise.\n");
           printf("         Our team of experienced travel agents are passionate about travel and are here to help you every step of the way.\n");
           printf("              We offer a wide range of travel services, including flights, hotels, car rentals, tours, and more.\n");
           printf("              We can also help you plan custom itineraries and assist with travel visas and documents.\n");
           printf("         At ENSI Travel Agency, customer satisfaction is our top priority.\n");
           printf("              We are committed to providing personalized service and will go the extra mile to ensure that your trip is everything you've dreamed of.\n");
           printf("              So why wait? Contact us today and let us help you plan your next adventure!\n");
           printf("\n");
           printf("****Enter (1) If u want to see all The available Flights ****\n");
           break;
     case 1:
          printf("All Flights :\n");
          showallflights();
                    printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
          break;
     case 2:
        printf("All Available Hotels :\n");
        showallhotels();
        printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
        break;
     case 3:
          printf("Do you u want to search With Flight Id or for a specific Date ? \n");
          printf("Enter (1):If u want to search with Date or (0):if u want to search with ID :");
          scanf("%d",&a);
          if (a==1){
            printf("Please Enter Flight Date in this format : dd/mm/yy ");
          }else {printf("Please Enter Fligt ID ( X...) : ");
          }
          fflush(stdin);
          scanf("%s",d);
          res=findflight(d);
          if((a==1)&&(res==-1)){
               printf("Sorry There is no flight at that specific date\n");
          }
          if((a==0)&&(res==-1)){
            printf("Sorry There is no flight with the given ID    \n");
            printf("Please Enter (3) If u want to try again  Or (12) If u want to go back to main menu : ");
          }
          if (res>-1){
          scanf("%d",&answer);
            if (answer==1){
            printf("\n");

            printf("Please Enter Your Destination : ");
            scanf("%s",hot);
            findhotel(hot);
            printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
            }else {
            printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
            break;}}
          break;
    case 4 :
            printf("Please Enter Your Destination : \n");
            scanf("%s",id);
            findhotel(id);
             printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
            break;
     case 5 :
            printf("Please Enter New Flight Details : \n");
            printf("****ID Departureplace Destination Date ****:\n");
            addflight();
            printf("New Flight added successfully \n");
            fflush(stdin);
             printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
            break;

     case 6:
         addhotel();
         printf("Hotel added successfully \n");
         printf("                                                                        ****** Enter 12 If u want to go back to main menu ***\n");
         break;
     case 9:
         printf("Please Enter Flight ID To delete :\n");
         scanf("%s",id);
         deleteflight(id);
         printf("Flight Deleted successfully \n");
         printf("Please Enter (5) If u want to Add a New flight Or Enter (12) If u want to go back to main menu : ");
         break;
    case 10:
         printf("Please Enter Hotel Name And Location To delete :\n");
         scanf("%s",id);
         deletehotel(id);
         printf("Hotel Deleted successfully \n");
         printf("Please Enter (6) If u want to Add a New Hotel Or Enter (12) If u want to go back to main menu : \n");
         break;
     case 7:
         printf("Please Enter Flight ID to Modify :\n");
         scanf("%s",id);
         deleteflight(id);
         printf("Please Enter Modified Flight \n");
         addflight();
         printf("Flight Modified successfully \n");
         fflush(stdin);
          printf(" Enter (1) if u want to see The modified flights list Or Enter (12) if u want to go back to main menu ***\n");
         break;
      case 8:
         printf("Please Enter Hotel Location And Name to Modify :\n");
         scanf("%s",id);
         deletehotel(id);
         addhotel();
         printf("Hotel Modified successfully \n");
         fflush(stdin);
          printf(" Enter (2) if u want to see The modified Hotels list Or Enter (12) if u want to go back to main menu ***\n");
         break;
     case 11:
        printf("Format: -  Flight             :{ID:(X...),departure(name),arrival(name) Date(dd/mm/yy) , Departuretime(..H..) ,Arrivaltime(..H..) ,Price(....$)} \n");
        printf("        -  Hotels             :{Location (name) , Name(name) , Price(...$/night)         }\n");


        printf("                                                                     *** Enter 12 if u want to go back to main menu ***\n");
        break;
     case 12:
printf("                ________________________________________________________________________________________\n");
  printf("                ________________________________________________________________________________________\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                         WELCOME TO ENSI TOURS AND TRAVELS                          ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                Enter your choice:                                  ||\n");
  printf("                ||                                 0:-  About Us                                      ||\n");
  printf("                ||                                 1:-  Show All Available Flights                    ||\n");
  printf("                ||                                 2:-  Show All Hotels                               ||\n");
  printf("                ||                                 3:-  Find Flight                                   ||\n");
  printf("                ||                                 4:-  Find Hotels                                   ||\n");
  printf("                ||                                 5:-  Add Flight                                    ||\n");
  printf("                ||                                 6:-  Add Hotel                                     ||\n");
  printf("                ||                                 7:-  Modify Flight                                 ||\n");
  printf("                ||                                 8:-  Modify Hotel                                  ||\n");
  printf("                ||                                 9:-  Delete Flight                                 ||\n");
  printf("                ||                                10:-  Delete Hotel                                  ||\n");
  printf("                ||                                11:-  Used formats                                  ||\n");
  printf("                ||                                12:- Go back to menu                                ||\n");
  printf("                ||                                -1:-  Exit                                          ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ________________________________________________________________________________________\n");
  printf("                ________________________________________________________________________________________\n");
  break;
  }
   if(choice==-1){
       printf("\n");
    break;
    }
  }



}
