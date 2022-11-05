#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

//variables
int choose;
int chooselikeFunction;
int num1, num2;
char op;
string returnChoose;
string nicknameRegister;
string passwordRegister;
string passwordRegisterI;
string nicknameLogin;
string passwordLogin;

//functions
void choosingaFunction();
void Register();
void Login();
void Dashboard();
void Calculator();

int main()
{
    std::cout << "#### CHOOSING A FUNCTION ####" << endl;
    choosingaFunction();
    return 0;
}

void choosingaFunction()
{
    vector<string> functions = {"1. Register", "2. Login", "3. Dashboard"};
    std::cout << functions[0] << endl;
    std::cout << functions[1] << endl;
    std::cout << functions[2] << endl;

    cin >> choose;

    switch(choose)
    {
        case 1:
            Register();
            break;

        case 2:
            Login();
            break;

        case 3:
            Dashboard();
            break;

        default:
            std::cout << "\nError\n";
            choosingaFunction();
            break;
    }
}

void Register()
{
    std::cout << "\nif you want to come back type '$returnChoose', otherwise type 'continue'\n";
    cin >> returnChoose;
    
    if(returnChoose == "$returnChoose")
    {
        main();
    }
    else if(returnChoose == "continue")
    {
        system("cls");

        std::cout << "\n#### REGISTER ####\n" << endl;
        std::cout << "Nickname: ";
        std::cin >> nicknameRegister;

        if (nicknameRegister.empty())
        {
            std::cout << "\nYou didn't enter any nickname\n";
            Register();
        }
        else
        {

        }

        std::cout << "Password: ";
        std::cin >> passwordRegister;

        int length = passwordRegister.length();

        if (length < 8)
        {
            std::cout << "\nYour password must be 8 characters.\n";
            Register();
        }
        else
        {
        
        }

        std::cout << "Repeat password: ";
        std::cin >> passwordRegisterI;

        if(passwordRegisterI != passwordRegister)
        {
            std::cout << "\nThe password is wrong, try again\n";
            Register();
        }
        else
        {
            choosingaFunction();
        }
    }    
}

void Login()
{
    system("cls");
    std::cout << "\n#### LOGIN ####" << endl;
    std::cout << "Nickname: ";
    std::cin >> nicknameLogin;

    if(nicknameLogin != nicknameRegister)
    {
        std::cout << "\nThe nickname doen't exist, try again\n";
        std::cout << "\nif you are don't regitered type '$returnChoose' otherwise type 'continue'\n";

        cin >> returnChoose;

        if(returnChoose == "$returnChoose")
        {
            main();
        }
        else
        {
            
        }
    }
    else
    {

    }
    std::cout << "Password: ";
    std::cin >> passwordLogin;

    if(passwordLogin != passwordRegister)
    {
        std::cout << "\nThe password is wrong, try again\n";
        Login();
    }
    else
    {   
        choosingaFunction();
    }
}

void Dashboard()
{
    system("cls");
    
    std::cout << "\n###DASHBOARD###\n";
    std::cout << "Welcome to the app, " + nicknameRegister.append("@raffa0732app.it") << endl;
    std::cout << "\nnow, choose what would you like to do.\n";
    vector <string> functionLike = {"[1] Calculator"};
    std::cout << functionLike[0] << endl;
    
    cin >> chooselikeFunction;

    switch(chooselikeFunction)
    { 
        case 1:
            Calculator();
            break;
    }
}

void Calculator()
{
    system("cls");
    std::cout << "\n#### CALCULATOR ####\n";
    
    cin >> op;
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            std::cout << num1 + num2 << endl;
            break;

        case '-':
            std::cout << num1 - num2 << endl;
            break;
        
        case '*':
            std::cout << num1 * num2 << endl;
            break;
        
        case '/':
            std::cout << num1 / num2 << endl;
            break;

        default:
            std::cout << "\nError! operator is not correct\n";
            Calculator();
            break;
    }
}
