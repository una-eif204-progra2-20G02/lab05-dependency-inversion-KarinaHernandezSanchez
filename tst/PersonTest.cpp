//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    Person person;
    person.setFirstName("Karina");
    person.setLastName("Hernandez");
    person.setDocumentId(402280955);
    ISendPayment* transfer = new BankTransferSender();

    EXPECT_EQ(person.processPayment(transfer), "Sending the money by transference");

    ISendPayment* cash = new CashSender();

    EXPECT_EQ(person.processPayment(cash), "Give the money in the hands");

    ISendPayment* check = new CheckSender();

    EXPECT_EQ(person.processPayment(check), "Sending the check with the money");
}
