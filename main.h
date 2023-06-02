#ifndef ATM
#define ATM

#include <conio.h> //_getch() to hold screen until user press any key
#include <iostream>
#include <string.h>

using namespace std;
/**
 * @brief
 *
 */

class Atm // class Atm
{
private: // private member variables
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public: // public member functions
    /**
     * @brief setData function is setting the Data into the private member variables
     *
     * @param account_No_a
     * @param name_a
     * @param PIN_a
     * @param balance_a
     * @param mobile_No_a
     * @return void
     */
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a);

    // getAccountNo returning user's account number
    long int getAccountNo();

    // getName returning user's name
    string getName();

    // getPIN returning user's pin
    int getPIN();

    // getBalance returning user's balance
    double getBalance();

    // getMobileNo returning user's mobile number
    string getMobileNo();

    // setMobile: to update user's mobile no
    void setMobile(string mob_prev, string mob_new);

    void cashWithDraw(int amount_a); // for withdrawal
};



void Atm::setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
{
    // assinging the formal arguments to the private member
    account_No = account_No_a;
    name = name_a;
    PIN = PIN_a;
    balance = balance_a;
    mobile_No = mobile_No_a;
}

long int Atm::getAccountNo()
{
    return account_No;
}

string Atm::getName()
{
    return name;
}

int Atm::getPIN()
{
    return PIN;
}

double Atm::getBalance()
{
    return balance;
}

string Atm::getMobileNo()
{
    return mobile_No;
}

void Atm::setMobile(string mob_prev, string mob_new)
{
    if (mob_prev == mobile_No)
    {
        mobile_No = mob_new;
        cout << endl
             << "Successfully Updated Mobile no.";
        _getch();
    }
    else
    {
        cout << endl
             << "Incorrect !!! Old Mobile no";
        _getch();
    }
}

void Atm::cashWithDraw(int amount_a) // for withdrawal
{
    if (amount_a > 0 && amount_a < balance) // check entered amount validity
    {
        balance -= amount_a;
        cout << endl
             << "Please Collect Your Cash";
        cout << endl
             << "Available Balance: " << balance;
        _getch();
    }
    else
    {
        cout << endl
             << "Invalid Input or Insufficient Funds";
        _getch();
    }
}

#endif