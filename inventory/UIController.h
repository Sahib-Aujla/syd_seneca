#ifndef UICONTROLLER_H
#define UICONTROLLER_H
#include <iostream>
class UIController{
    public:
    void confirm();
    void AddProduct(std::string name,std::string description,std::string ingredients,std::string instructions,ProductType p,double price );
    void RequestToAddProduct();
    void displayProducts(ProductType p);
    void displayProductsByType();
    void createPurchaseDetail(Location l,double quantity,Product);
    void displayLocations(Product);
    void AddPurchaseDetails(Supplier,time_t date,std::string receipt);
    void AddPurchaseDetails();
    void RequestToNewPurchase();



};

#endif