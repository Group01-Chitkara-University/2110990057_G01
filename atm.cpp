#include <iostream>
#include <stdlib.h>
using namespace std;

	// function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

// global variable (use this variable to store the user’s menu selection)
char menuInput;
string user, pwd;

// the main function
int main()
{
	// TO WRITE A WELCOME MESSAGE HERE  
    
		// call the function start
		start();

		return 0;
}

void printIntroMenu()
{
    cout << "l  -> Login" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "q -> Quit" << endl;
    char input;
    cin >> input;
    switch (input){
        case 'l':
            login();
            break;
        case 'c':
            createAccount();
            break;
        case 'q':
            exit(0);
            break;
        default:
            cout << "Please enter the correct option.." << endl;
            printIntroMenu();
            break;
    }
}

void printMainMenu(){
    cout << "Choose from the Below options:- " << endl;
    cout << "d 	-> Deposit Money" << endl;
    cout << "w 	-> Withdraw Money" << endl;
    cout << "r 	-> Request Balance" << endl;
    cout << "q 	-> Quit" << endl;
    
    char input;
    cin >> input;
    switch (input){
        case 'd':
            deposit();
            break;
        case 'w':
            withdraw();
            break;
        case 'r':
            reqBalance();
            break;
        case 'q':
            cout << "Thank you, " << user << "!" << endl << endl;
            printIntroMenu();
            break;
        default:
            cout << "Please enter the correct option.." << endl;
            printMainMenu();
            break;
    }
}

void deposit(){
    cout << endl;
    double dpMoney;
    cout << "Enter the amount to be depostied: ₹";
    cin >> dpMoney;
    cout << endl;
    cout << "Deposited Successfully!!" << endl << endl;
    cout << "------------------------" << endl;
}

void withdraw(){

}

void reqBalance(){

}

void start()
{
	cout << "Please select an option from the menu below:" << endl;
    printMainMenu();
}

void createAccount()
{
    cout << "Enter Username --> " << endl;
    cin >> user;
    cout << "Enter Password --> " << endl;
    cin >> pwd;

    cout << "Thank You.." << endl;
    printIntroMenu();
}

void login()
{
    string userCopy, pwdCopy;
	cout << "Enter your Username --> ";
    cin >> userCopy;
    cout << "Enter your Password --> ";
    cin >> pwdCopy;
    if(userCopy==user && pwdCopy == pwd){
        cout << "****** LOGIN SUCCESSFULL ******" << endl;
        printMainMenu();
    }
}
