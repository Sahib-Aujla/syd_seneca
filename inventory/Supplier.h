#ifndef SUPPLIER_H
#define SUPPLIER_H
#include <iostream>

class Supplier{
   std:: string supplierID;
    std::string supplierName;
    std::string phone;
    std::string email;
    std::string address;
    public:
    Supplier(std::string phone, std::string supplierName, std::string email,std::string address);
    std::string getPhone();
    std::string getEmail();
    std::string getAddress();
    std::string getName();
    Supplier getSupplier();
    void setSupplierName(std::string name);
    void setemail(std::string email);
    void setphone(std::string phone);
    void setAddress(std::string add);





   
};

#endif