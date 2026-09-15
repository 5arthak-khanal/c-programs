#include <iostream>

void add();
void sub();
void multiple();
void divide();
void factorls();
void cub();
void sqre();
void squareroot();
void cuberoot();


int main(){
    std::string operation[]={addition,subtraction,multiplication,division,factorial,cube,square,square_root,cube_root}

    std::cout << "\t\tThis is a simple Calculator\n";
    std::cout << "\t\t\t\tBuild by Sarthak Khanal\n";

    std::cout << "Enter what do you want to calculate(+,-,/,*,! and more ): ";
    std::getline(std::cin,operation);
    std::cout << "Selected the operation as " << operation;
    
        switch(operation){
        case '1': 
            addition();
            break;
        case '2': 
            subtraction();
            break; 
        case '3': 
            multiplication();
            break; 
        case '4': 
            division();
            break; 
        case '5': 
            factorial();
            break; 
        case '6': 
            cube();
            break; 
        case '7': 
            square();
            break; 
        case '8': 
            square_root();
            break; 
        case '9': 
            cube_root();
            break; 
        default:
            std::cout << "The operation is invalid";

    }
    
    
    return 0;
}

void addition(){
    int num1,num2;

    std::cout << "Enter the first number: ";
    std::cout << "Enter the second number: ";

    std::cin >> num1;
    std::cin >> num2;

    std::cout << "The sum is " << num1 + num2;
}

void subtraction(){
    int num1,num2;

    std::cout << "Enter the first number: ";
    std::cout << "Enter the second number: ";
    
    
    std::cin >> num1;
    std::cin >> num2;

    std::cout << "The subtraction is " << num1 - num2;
}

void multiplication(){
    int num1,num2;

    std::cout << "Enter the first number: ";
    std::cout << "Enter the second number: ";

    std::cin >> num1;
    std::cin >> num2;

    std::cout << "The multiplication is " << num1 * num2;
}

void division(){
    int num1,num2;

    std::cout << "Enter the first number: ";
    std::cout << "Enter the second number: ";

    std::cin >> num1;
    std::cin >> num2;

    std::cout << "The division is " << num1 / num2;
}

void factorial(){
    int num

    std::cout << "Enter the first number: ";
    if (i=0,num>i,i++){
        num= num*(num-i)
    }
    std::cin >> num;

    std::cout << "The factorial is " << num;
}

