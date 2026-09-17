#include <iostream>

void addition();
void subtraction();
void multiplication();
void division();
void factorial_input();
int factorial_calculation(int num);
void cube();
void square();
void square_root();
void cube_root();
void choice(std::string operation);

int main(){
    
    std::cout << "\t\tThis is a simple Calculator\n";
    std::cout << "\t\t\t\tBuild by Sarthak Khanal\n";

    std::cout << "Enter what do you want to calculate(+,-,/,*,! and more ): ";
    std::string operation;
    std::getline(std::cin,operation);
    std::cout << "Selected the operation as " << operation;
    
    choice(operation);

    return 0;
}

void choice(std::string operation){
    if(operation == "addition" || operation == "+"){
        addition();
    }
    else if(operation == "subtraction" || operation == "-"||operation == "sub"){
        subtraction();
    }
    else if(operation == "multiply" || operation == "multiplication" || operation == "*"){
        multiplication();
    }
        
    
    else if(operation == "divide" || operation == "division" || operation == "/"){
        division();
    }
        
    
    else if(operation == "factorial" || operation == "!"){
        factorial_input();
    }
        
    else if(operation == "cube"){
        cube();
    }
        
    else if(operation == "square"){
        square();
    }
        
    else if(operation == "cube root"){
        cube_root();
    }
    else if(operation == "square root"){
        square_root();
    }

    else {
        std::cout << "The operation you selected is not available";
    }
    
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

void factorial_input(){
    int num;
    
    std::cout << "Enter the number you want to factorial of: ";
    std::cin >> num;
    std::cout << "The factorial is " << factorial_calculation(num);
}
int factorial_calculation(int num){
    

    if(num>1){
        return (num*factorial_calculation(num-1));
    }
    else 
    { 
        return (1);
    }

}

