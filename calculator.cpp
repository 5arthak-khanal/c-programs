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
void area_inputs();
void area_calculations(float l,float b,float h,float r,std::string area);




int main(){

    std::cout << "\t\t********************CALCULATOR****************\n";
    std::cout << "\t\t\t\t\t-build by Sarthak Khanal\n\n";

    std::cout << "This calculation can do the following operations: \n\n•addition\t\t•factorial\t\t•area\n•subtraction\t\t•square\n•multiplication\t\t•square root\n•division\t\t•cube\n•modulus\t\t•cube root\n\n";
    std::cout << "Enter the operation: ";
    std::string operation;
    std::getline(std::cin,operation);
    std::cout << "Selected the operation as " << operation << "\n";
    
    choice(operation);

     std::cout << "\n**************************************\n";
    return 0;
}

//condition check//
void choice(std::string operation){
    if(operation == "addition" || operation == "+" || operation == "add" || operation == "sum"){
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
        area_inputs();
    }

    else {
        std::cout << "\nError: The operation" << operation <<  "selected is not vaild.\n\n";
        std::cout << "This calculation only supports the following operations: \n\n•addition\t\t•factorial\t\t•area\n•subtraction\t\t•square\n•multiplication\t\t•square root\n•division\t\t•cube\n•modulus\t\t•cube root\n";
    }
    
}

//inputs//
void area_inputs(){
     float l,b,h,r;
     std::string area;
    
     std::cout << "Enter the object: ";
     std::cin >> area;


    if(area == "triangle" || area == "rectangle"){
            std::cout << "Enter the length: ";
            std::cin >> l;

            if(std::cin.fail()){
                std::cout << "\nThe length you entered is not vaild.\n";
                
            }
            std::cout << "Enter the breath: ";
            std::cin >> b;

            if(std::cin.fail()){
                std::cout << "\nThe breath you entered is not vaild.\n";
                
         }
                area_calculations(l,b,h,r,area);
             }
        else if(area == "circle"){
                std::cout << "Enter the radius: ";
                std::cin >> r;
            
                 if(std::cin.fail()){
                    std::cout << "\nThe breath you entered is not vaild.\n";
                    
            }
                area_calculations(l,b,h,r,area);
             }
        else if(area == "parallelogram"){

                 std::cout << "Enter the breath: ";
                 std::cin >> b;

                 std::cout << "Enter the height: ";
                 std::cin >> h;

                 if(std::cin.fail()){
                    std::cout << "\nThe breath you entered is not vaild.\n";
                   
            }
                area_calculations(l,b,h,r,area);
             }
        else if(area == "square"){
                std::cout << "Enter the length: ";
                std::cin >> l;
                  if(std::cin.fail()){
                    std::cout << "\nThe breath you entered is not vaild.\n";
                    
            }
                area_calculations(l,b,h,r,area);
            }
        else{
            std::cout << "Error: The request is invaild.";
            }
}

//basic calculations//
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


//area calculations//

void area_calculations(float l,float b,float h,float r,std::string area){
  
    if(area == "rectangle"){
        std::cout << "The area is " << 0.5*(l*b);
    }

    else if(area == "triangle"){
        std::cout << "The area is " << l*b;
    }

    else if(area == "circle"){
        std::cout << "The area is " << 3.14*pow(r,2);
    }
    
    else if(area == "parallelogram"){
        std::cout << "The area is " << b*h;
    }
    
    
    else if(area == "square"){
        std::cout << "The area is " << pow(l,2);
    }
    
    
    else {
        std::cout << "Error: cannot calculate area of "<< area << "the requested object.";\
        std::cout << "This calculator only supports area for the following objects: \n\n•rectangle\t\t•parallelogram\n•triangle\t\t•square\n•circle";
    }

}
