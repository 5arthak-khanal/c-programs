#include <iostream>

int main(){
    int num,guess,tries=0;
    srand(time(NULL));
    num=(rand() % 100) +1;

    std::cout << "*****Number Gussessing Game******\n";
    do{
        std::cout << "Enter a number: ";
        std::cin >> guess;
        tries++;

        if (num > guess){
            std::cout << "Too low\n";
        }
        else if (num < guess){
            std::cout << "Too high\n";
        }
        else{
            std::cout << "You got the Number is " << tries << " tries\n";
        }
    }while (num!=guess);
    std::cout << "***********************************";
return 0;
}