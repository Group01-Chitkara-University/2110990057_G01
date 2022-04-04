#include <iostream>
#include <stdlib.h>
using namespace std;

	// function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();
void deposit();
void withdraw();
void reqBalance();

// global variable (use this variable to store the user’s menu selection)
char menuInput;
string user, pwd;
double dpMoney;
double wdMoney;
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
    cout << "Enter the amount to be depostied: ₹";
    cin >> dpMoney;
    cout << endl;
    cout << "Deposited Successfully!!" << endl << endl;
    cout << "------------------------" << endl;
    printMainMenu();
}

void withdraw(){
    if(dpMoney==0){
        cout << "You have ₹ 0 in your Account!!" << endl;
        printMainMenu();
    }
    else{
        int i = 0;
        cout << endl;
        cout << "Enter amount to be withdrawn: ₹";
        cin >> wdMoney;
        while(wdMoney > dpMoney){
            if(i == 2){
                cout << endl;
                cout << "Sorry, invalid inputs recieved too many times! Start Again"<< endl;
                printMainMenu();
                break;
        }
        cout << endl;
        cout << "You don't have sufficient balance!" << endl << endl;
        cout << "Enter amount to be withdrawn: $";
        cin >> wdMoney;
        i+=1;
        }
        cin.clear();
        dpMoney -= wdMoney;
        cout << endl;
        cout << "Transaction Successfull!!" << endl << endl;
        cout << "--------------------------" << endl;
        printMainMenu();
    }
}

void reqBalance(){
    cout << "₹" << dpMoney << endl;
    printMainMenu();
}

void start()
{
	cout << "Please select an option from the menu below:" << endl;
    printIntroMenu();
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
    else{
        cout << "Username or Password don't match." << endl;
        printIntroMenu();
    }
}
