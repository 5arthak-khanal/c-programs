#include <iostream>
#include <math.h>

void choice(std::string operation);
void double_calculation(std::string operation,float num1,float num2,int num);
void area_calculations(float l,float b,float h,float r,std::string area);




int main(){

    std::cout << "\t\t********************CALCULATOR****************\n";
    std::cout << "\t\t\t\t\t-build by Sarthak Khanal\n\n";

    std::cout << "This calculation can do the following operations: \n\n•addition\t\t•square\n•subtraction\t\t•sqaure root\n•multiplication\t\t•cube\n•division\t\t•cube root\n•modulus\t\t•area\n";
    std::cout << "Enter the operation: ";
    std::string operation;
    std::getline(std::cin,operation);
    std::cout << "Selected the operation as " << operation << "\n";
    
    choice(operation);

     std::cout << "\n**************************************\n";
    return 0;
}

//inputs//
void choice(std::string operation){
    if(operation == "addition" || operation == "+" || operation == "add" || operation == "sum" || operation == "subtraction" || operation == "-" || operation == "sub" || operation == "multiply" || operation == "multiplication" || operation == "*" || operation == "divide" || operation == "division" || operation == "/" || operation == "modulus" || operation == "%"){
        float num1,num2;

        std::cout << "Enter the first number: ";
        std::cin >> num1;

        if(std::cin.fail()){
            std::cout << "\nThe breath you entered is not vaild.\n";
        }

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        if(std::cin.fail()){
            std::cout << "\nThe breath you entered is not vaild.\n";
        }

    }
     
   
    else if(operation == "square" ||  operation == "cube" || operation == "cube root" || operation == "square root"){
        float num;

        std::cout << "Enter the number: ";
        std::cin >> num;

        if(std::cin.fail()){
            std::cout << "\nThe breath you entered is not vaild.\n";
        }
    }
    
    else if(operation == "area"){
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
        }


    

     else {
        std::cout << "\nError: The operation " << operation <<  " selected is not vaild.\n\n";
        std::cout << "This calculation only supports the following operations: \n\n•addition\t\t•square\n•subtraction\t\t•sqaure root\n•multiplication\t\t•cube\n•division\t\t•cube root\n•modulus\t\t•area\n";
    }
    
}

//basic calculations//
void double_calculation(std::string operation,float num1,float num2,int num){

    if(operation == "addition" || operation == "+" || operation == "add" || operation == "sum"){
        std::cout << "The sum is " << num1 + num2;
    }
    else if(operation == "subtraction" || operation == "-" || operation == "sub"){
        std::cout << "The sum is " << num1 - num2;
    }
    else if(operation == "multiply" || operation == "multiplication" || operation == "*"){
        std::cout << "The sum is " << num1 * num2;
    }
    else if(operation == "divide" || operation == "division" || operation == "/" ){
        std::cout << "The sum is " << num1 / num2;
    }
    else if(operation == "modulus" || operation == "%"){
        std::cout << "The sum is " << (int)num1 % (int)num2;
    }
    else if(operation == "square"){
        std::cout << "The square is " << pow(num,2);
    }
    else if(operation == "cube"){
        std::cout << "The cube is " << pow(num,3);
    }
    else if(operation == "cube root"){
        std::cout << "The cube root is " << cbrt(num);
    }
    else if(operation == "square root"){
        std::cout << "The square root is " << sqrt(num);
    }

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
