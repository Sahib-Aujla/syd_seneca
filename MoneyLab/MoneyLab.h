#ifndef MONEYLAB_H
#define MONEYLAB_H
#include <iostream>
class Payment{
    std::string PaymentExOrIncome;
    std::string paymentType;
    std::string paymentDescription;
    time_t date;
    float transactionAmount;
    float HSTAmount;
    int paymentID;
    public:
    Payment(std::string PaymentExOrIncome,std::string  PaymentType,std::string  PaymentDescription,time_t date,float transactionAmount,float HSTAmount);
    Payment getPayment();
    void setPayment(Payment);


};

#endif