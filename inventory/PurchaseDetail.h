#ifndef PURCHASEDETAIL_h
#define PURCHASEDETAIL_h 

#include<iostream>
#include "Product"
#include "Location"

using namespace std;
class PurchaseDetail{
    string PurchasedProductsID;
    Product product;
    double totalPrice;
    double tax;
    double extendedPrice;
    public:
    PurchaseDetail(Product product,double quantity);
    void addLocation(Location l);
    void calculateTotalPrice();
    void calculateExtendedPrice();
    void calculateTax();
    double getTax();
    double getTotalPrice();
    double getExtendedPrice();
    void setTax(double t);

    };
#endif