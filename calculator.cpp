#include <iostream>
#include <math.h>

void choice(std::string operation);
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial_input();
int factorial_calculation(int num);
void square();
void square_root();
void cube();
void cube_root();
void area_type();
void area_rectangle();
void area_triangle();
void area_circle();
void area_parallelogram();
void square();


int main(){

    std::cout << "\t\tThis is a simple Calculator\n";
    std::cout << "\t\t\t\tBuild by Sarthak Khanal\n";

    std::cout << "Enter what do you want to calculate(+,-,/,*,! and more ): ";
    std::string operation;
    std::getline(std::cin,operation);
    std::cout << "Selected the operation as " << operation << "\n";
    
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
        
    else if(operation == "modulus" || operation == "%"){
        modulus();
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

    else if(operation == "area"){
        area_type();
    }

    else {
        std::cout << "The operation you selected is not available";
    }
    
}

void addition(){
    float num1,num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The sum is " << num1 + num2;
}

void subtraction(){
    float num1,num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    std::cout << "The sub is " << num1 - num2;
}

void multiplication(){
    float num1,num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The multiplication is " << num1 * num2;
}

void division(){
    float num1,num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The division is " << num1 / num2;
}

void modulus(){
    int num1,num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The modulus is " << num1 % num2;
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

void square(){
    float num,sqre;
    
    std::cout << "Enter the number you want to square of: ";
    std::cin >> num;
    sqre=pow(num,2);
    std::cout << "The factorial is " << sqre;
}

void square_root(){
    float num,squrt;
    
    std::cout << "Enter the number you want to factorial of: ";
    std::cin >> num;
    squrt=sqrt(num);
    std::cout << "The factorial is " << squrt;
}

void cube(){
    float num,cube;
    
    std::cout << "Enter the number you want to cube of: ";
    std::cin >> num;
    cube=pow(num,3);
    std::cout << "The factorial is " << cube;
}

void cube_root(){
    float num,cubrt;
    
    std::cout << "Enter the number you want to cube root of: ";
    std::cin >> num;
    cubrt=cbrt(num);
    std::cout << "The factorial is " << cubrt;
}

void area_type(){
    std::string area;
    
    std::cout << "Enter the object: ";
    std::cin >> area;

    if(area == "rectangle"){
        area_rectangle();
    }

    else if(area == "triangle"){
        area_triangle();
    }

    else if(area == "circle"){
        area_circle();
    }
    
    
    
    else if(area == "parallelogram"){
        area_parallelogram();
    }
    
    
    else if(area == "square"){
        area_circle();
    }
    
    
    else {
        std::cout << "The result you are required is not vaild for this program";
    }

}

void area_triangle(){
    
    float l,b;

    std::cout << "Enter the length: ";
    std::cin >> l;

    std::cout << "Enter the breath: ";
    std::cin >> b;

    std::cout << "The area is " << l*b;
}

void area_rectangle(){
    float l,b;

    std::cout << "Enter the length: ";
    std::cin >> l;

    std::cout << "Enter the breath: ";
    std::cin >> b;

    std::cout << "The area is " << 0.5*(l*b);
}

void area_circle(){
    float r;

    std::cout << "Enter the radius: ";
    std::cin >> r;

    std::cout << "The area is " << 3.14*pow(r,2);
}

void area_parallelogram(){
    float b,h;

    std::cout << "Enter the breath: ";
    std::cin >> b;

    std::cout << "Enter the height: ";
    std::cin >> h;

    std::cout << "The area is " << b*h;
}

void area_square(){
    float l,b;

    std::cout << "Enter the length: ";
    std::cin >> l;

    std::cout << "The area is " << pow(l,2);
}
