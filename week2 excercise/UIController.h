/*
Name: Sahibpreet Singh
student id: 165338211
email:sahibpreet-singh1@myseneca.ca
date: 16 feb 2023
*/
#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <iostream>

class UIController{

public:
void displayBusTours();
void AddPassenger(std::string name, std::string email, std::string phone,std::string tourId);
std::string confirmsPayment(BusTour TourInfo,std::string PassenegerInfo);

};

#endif