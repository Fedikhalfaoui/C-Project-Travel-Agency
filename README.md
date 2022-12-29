# Project-C-Travel-Agency
   Welcome to the Travel Agency console app! This app allows you to manage and book travel Flights for your clients, so you can easily keep track of all the destinations and details of their trips.
   
# Installation
To install the Travel Agency app, you'll need a computer with the C programming language installed. You can then clone or download the source code from this repository and compile it using your preferred C compiler.

# Usage 
Create flight: Create a New flight 

View flights: View a list of all the flights you have available, along with the relevant details.

Edit flight: Edit the details of a flight, such as the departure or arrival airports or dates.

Cancel flight: Cancel a flight .

Find flights: Search for available flights  on specific dates.

Quit: Exit the app
   
   ![main menu](https://user-images.githubusercontent.com/121511558/210021932-15a35df8-e897-4e37-8634-3766c736ed88.jpg)


   
# Find flights : 
      The user is prompted to enter a Date. If found, The flights with the specific date will be shown with
      an option to see all the available hotels in their destination.
# Find Hotels: 
      The user is prompted to enter a Location. If found, The Hotels in the specific destination will be shown with     
# Delete Flight :
      The user is prompted to enter a flight Id . if found , the flight  will be deleted .
# Delete Hotel :
      The user is prompted to enter a hotel name and location . if found , the hotel will be deleted .    
# Add Flight :
      The user is prompted to enter an Id , departureplace , destination , date ,depTime , Arrivaltime , Price.
# Add Hotel :
      The user is prompted to enter an Hotellocation , Hotelname , Price per night .
# Modify Flight :
      The user is prompted to enter the flight Id they wish to modify .If found, the user is then prompted to enter
      the modified details for the flight.
# Modify Hotel :
      The user is prompted to enter the Hotel name and hotel location they wish to modify .If found, the user is then prompted to enter
      the modified details for the hotel.
# Design Decisions :
    I chose to use 4 header files, Flights.h and data.h and Consolecolor.h and Hotels.h
    I used two functions.c and main.c.
    I found that by splitting my code into three main areas, it really helped keep a nice structure throughout.
    The user's experience was something I took into account through every aspect of the program. 
    I made the program as user friendly as I could with appropriate  headers and a well structured output.
    I believe if you have never used this program before, you would have no issue in using this program 
    for the first time due to how user friendly this program is.
 # Used Formats :
    Flight:{ID:(X...),departure(name),arrival(name) Date(dd/mm/yy)} e.g : X118 Tunis Japan 07/02/2022
    Flight description :{ID:(X...),Date(dd/mm/yy),Departuretime(..H..),Arrivaltime(..H..) , Price(....$) }
        e.g: X118  07/02/2022 20h 23h   3200$
    
