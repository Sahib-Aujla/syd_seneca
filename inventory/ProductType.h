#ifndef PRODUCTTYPE_H
#define PRODUCTTYPE_H
#include<iostream>
class ProductType{
    std::string productTypeID;
    std::string productTypeName;
    std::string productTypeDesc;
    public:
    ProductType getProductType()const;
    void setProductType(const ProductType);
    ProductType(std::string productTypeID, std::string productTypeName,std::string desc);
};

#endif