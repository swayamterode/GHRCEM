#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
using namespace std;
/*
Define a class to represent a bank account. Include the following members:
Data members: - Name of depositor, Account number, Type of account, Balance amount in the account
Member functions: - To assign initial values, To deposit an amount, 
To withdraw an amount after checking the balance, To display name & balance
Write a main program to test program using class and object.
*/
class Bank
{

    //Declaration of data members
public:
    char name_of_depositor[20];
    char account_type[20];
    int account_number;
    int balance;

    //member functions of the class Bank
    // initialize function to initialize data members

    void initialize()
    {
        cout << "\nEnter Account Holders Name:";
        gets(name_of_depositor);
        cout << "\nEnter Account type:";
        gets(account_type);
        cout << "\nEnter account number:";
        cin >> account_number;
        cout << "\nEnter balance to deposit:";
        cin >> balance;
    }

    //deposit() function to deposit amount in account
    void deposit()
    {
        int bal;
        cout << "\nEnter the amount to deposit:";
        cin >> bal;
        balance += bal;
        cout << "\nAmount deposited successfuly\nYour New Balance:" << balance;
    }

    //check() function to withdraw amount and check remaining balance

    void check()
    {
        int bal;
        cout << "\nYour balance :" << balance << "\nEnter amount to withdraw:";
        cin >> bal;
        if (bal <= balance)
        {
            balance -= bal;
            cout << "\nRemaining Balance:" << balance;
        }
        else
        {
            exit(0);
        }
    }

    //display function to display user information
    void display()
    {
        cout << "\nName :";
        puts(name_of_depositor);
        cout << "\nBalance :" << balance;
    }
};

int main()
{
    int i;

    Bank user;
    user.initialize();
    cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
    cin >> i;
    if (i == 1)
    {
        user.display();
    }
    else if (i == 2)
    {
        user.deposit();
    }
    else if (i == 3)
    {
        user.check();
    }
    getch();
}