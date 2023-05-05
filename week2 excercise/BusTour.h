
#ifndef BUSTOUR_H
#define BUSTOUR_H

#include <iostream>

class Passenger{
    int passengerID;
    std::string passengerName;
    std::string pEmail;
    std::string pAddress;
    std::string pPhone;
    public:
    Passenger( std::string name, std::string email,std::string address,std::string phone);
    ~Passenger();
};

class Bustour{
    int BusTourID;
    std::string tourName;
    std::string tourDescription;
    float tourPrice;
    std::string startingAddress;
    std::string endingAddress;
    time_t dates[];
    public:
    Bustour(std::string tourName,std::string tourDescription,float price,std::string startingAddress,std::string endingAddress,time_t dates[]);
    ~Bustour();
};

class Ticket{
    int ticketID;
    Bustour busTourName;
    Passenger passengerData;
    time_t dateOfTour;
    public:
    Ticket(Bustour b, Passenger p,time_t date);
    ~Ticket();
};


#endif