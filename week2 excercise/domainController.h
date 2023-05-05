/*
Name: Sahibpreet Singh
student id: 165338211
email:sahibpreet-singh1@myseneca.ca
date: 16 feb 2023
*/

#ifndef DOMAINCONTROLLER_H
#define DOMAINCONTROLLER_H
#include<iostream>

class DomainController {
public:
BusTour[] getBusTours();
void AddPassenger(std::string name, std::string email, std::string phone,std::string tourID);
Ticket confirmsPayment(BusTour TourInfo,std::string PassenegerInfo);
void validate(std::string name, std::string email, std::string phone);
};

#endif