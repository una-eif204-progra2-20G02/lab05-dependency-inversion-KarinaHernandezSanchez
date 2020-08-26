//
// Created by Maikol Guzman on 8/24/20.
//

#include <iostream>
#include "ISendPayment.h"
#include "CashSender.h"
#include "Person.h"

int main()
{
    std::cout << "Hello, Universidad Nacional!" << std::endl;
    ISendPayment* cash = new CashSender();
    ISendPayment* transfer = new BankTransferSender();
    ISendPayment* check = new CheckSender();
    Person person(  "Karina","Hernandez",402280955);
    person.processPayment(cash);
    person.processPayment(transfer);
    person.processPayment(check);
    return 0;
}