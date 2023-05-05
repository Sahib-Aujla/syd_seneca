#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <iostream>

class EntityManager{
    public:
    void perist();
    ProductType create();
    void get(ProductType);
    void getProductsByType();
    void create();
    Suppliers[] getSuppliers();
    Location create(Location);
    Location[] getLocations();
};


#endif