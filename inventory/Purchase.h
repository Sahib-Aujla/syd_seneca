#ifndef PURCHASE_H
#define PURCHASE_H

#include <iostream>
#include "PurchaseDetail.h"
#include "Supplier.h"
using namespace std;

class Purchase{
string purchaseId;
Supplier supplier;
string receiptFile;
time_t date;
PurchaseDetail purchaseDetail[];
public:
string getReceipt();
void AddpurchaseDetail(PurchaseDetail p);
Purchase(Supplier s,string receiptfile,time_t date);

};

#endif