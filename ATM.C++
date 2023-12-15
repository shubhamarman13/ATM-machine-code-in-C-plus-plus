#include <iostream>
#include <stdio.h>
#include <conio.h>
#define clrscr() ;
using namespace std;

void show_menu()
{
    // clearerr();

    cout << "************MENU************" << endl;
    cout << "1. Check Balance " << endl;
    cout << "2. Deposite  " << endl;
    cout << "3. Withdraw  " << endl;
    cout << "4. Exit " << endl;
    cout << "*****************************" << endl;
}
int main()
{
    int input, balance = 500, deposite, withdraw;

    do
    {
        show_menu();
        cout << "input: ";
        cin >> input;
        system("cls");
        switch (input)
        {
        case 1:
            cout << "Balance is: " << balance << ".00 Rupees" << endl;
            break;
        case 2:
            cout << "Enter Amount to Deposite: ";
            cin >> deposite;
            balance += deposite;
            break;

        case 3:
            cout << "Enter Amount to withdraw: ";
            cin >> withdraw;
            if (balance >= withdraw)
            {
                balance -= withdraw;
            }
            else
            {
                cout << endl
                     << "You dont have sufficient Amount in you A/c" << endl;
            }

            break;
        case 4:
            exit(1);
        }
    } while (input != 4);

    return 0;
}