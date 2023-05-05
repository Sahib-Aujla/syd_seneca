#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include "ProductTypes.h"

class Product{
    std::string productID;
    std::string productName;
    std::string prodDesc;
    std::string ingredients;
    std::string instructions;
    double price;
    ProductType productType;
    public:
    std::string getProductID();
    void setProductID(std::string productID);
    std::string getProductName();
    std::string getProductDesc();
    std::string getIngredient();
    std::string getInstructions();
    void setProductDesc(std::string productDesc);
    void setProductName(std::string productName);
    void setIngredient(std::string Ingredient);
    void setInstructions(std::string pInstructions);

    double getPrice();
    void setPrice(double price);
    ProductType getProductType();
    void setProductType(ProductType prod);

};

#endif