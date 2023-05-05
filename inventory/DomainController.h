#ifndef DOMAINCONTROLLER_H
#define DOMAINCONTROLLER_H
#include <iostream>

class DomainController{
    public:
    void createPurchaseDetail(Location l,double quantity,Product);
    void RequestToAddProduct();
    void AddProduct(std::string name,std::string description,std::string ingredients,std::string instructions,ProductType p,double price );
    void save();
    Product[] getProducts(ProductType);
    Product[] getProductsByType();
    ProductType[] RequestToNewPurchase();
    void addPurchaseDetail(PurchaseDetail pd);
    Location[] getLocations();
    

};

#endif