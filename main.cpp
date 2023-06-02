#include <conio.h> //_getch() to hold screen until user press any key
#include <iostream>
#include <string.h>
#include "main.h"

using namespace std;
/**
 * @brief
 *
 */

int main(void)
{
    int choice = 0, enterPIN;
    long int enterAccountNo;

    system("cls");

    // created user (object)
    Atm user1;

    // set user details (into object)    (setting default data)
    user1.setData(1234567, "Idee", 1111, 4500.90, "08012345678");

    do
    {
        system("cls");

        cout << endl
             << "****Welcome to ATM****" << endl;
        cout << endl
             << "Enter Your Account No: ";
        cin >> enterAccountNo;

        cout << endl
             << "Enter PIN: ";
        cin >> enterPIN;

        // check if entered values matches with user details
        if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");
                // user interface
                cout << endl
                     << "****Welcome " << user1.getName()<< "****"<< endl;
                cout << endl
                     << "Select Optiions ";
                cout << endl
                     << "1. Check Balance";
                cout << endl
                     << "2. Cash withdraw";
                cout << endl
                     << "3. Show User Details";
                cout << endl
                     << "4. Update Mobile no.";
                cout << endl
                     << "5. Exit" << endl << endl;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    system("cls");
                    cout << endl
                         << "Your Account Balance is : " << user1.getBalance();
                    _getch();
                    break;
                case 2:
                    cout << endl
                         << "Enter the amount: ";
                    cin >> amount;
                    user1.cashWithDraw(amount);
                    break;
                case 3:
                    cout << endl
                         << "*** User Details are :- ";
                    cout << endl
                         << "-> Account no:  " << user1.getAccountNo();
                    cout << endl
                         << "-> Name:        " << user1.getName();
                    cout << endl
                         << "-> Balance:     " << user1.getBalance();
                    cout << endl
                         << "-> Mobile No.:  " << user1.getMobileNo();
                    _getch();
                    break;
                case 4:
                    cout << endl
                         << "Enter Old Mobile No. ";
                    cin >> oldMobileNo;

                    cout << endl
                         << "Enter New Mobile No. ";
                    cin >> newMobileNo;

                    user1.setMobile(oldMobileNo, newMobileNo);
                    break;
                case 5:
                    exit(0);
                    break;

                default:
                    cout << endl
                         << "Enter Valid Data! ";
                    break;
                }
            } while (1); // MENU
        }

    } while (1); // LOGIN // condition will always be TRUE and loop is capable of running infinite times

    return 0;
}