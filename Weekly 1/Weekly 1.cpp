#include <iostream>
#include <string>
#include <conio.h>

int main()
{
    
    int task;

    std::cout << "Enter you task: ";
    std::cin >> task;
    std::cin.ignore();
    if (task == 1) {
        std::string fullname;
        char initial;
        int age;
        long pnumber;
        int byear;
        int bmonth;
        int bday;

        std::cout << "Write your full name: " << std::endl;
        std::getline(std::cin, fullname);
        std::cout << "Enter you initial: " << std::endl;
        std::cin >> initial;
        std::cout << "Enter your age: " << std::endl;
        std::cin >> age;
        std::cout << "Enter your phone number(no spaces): " << std::endl;
        std::cin >> pnumber;
        std::cout << "Enter your birthyear: " << std::endl;
        std::cin >> byear;
        std::cout << "Enter your birtmonth: " << std::endl;
        std::cin >> bmonth;
        std::cout << "Enter your birthday: " << std::endl;
        std::cin >> bday;
        system("cls");
        std::cout << "Name:          " << fullname << "\nInitial:       " << initial << "\nPhone number:  " << pnumber << "\nAge:           " << age << "\nDate of birth: " << bday << "/" << bmonth << "/" << byear;
    }
    else if (task == 2) {
        std::string name;
        int age;
        char coffee;
        
        std::cout << "Write your name: " << std::endl;
        std::getline(std::cin, name);
        std::cout << "Enter your age: " << std::endl;
        std::cin >> age;
        std::cout << "Do you drink coffee?(y/n) " << std::endl;
        std::cin >> coffee;
        system("cls");
        if (coffee == 'y' || coffee == 'Y') {
            std::cout << "Your name is " << name << "\nYour age is " << age << "\nIt seems you like coffee";
        }
        else {
            std::cout << "Your name is " << name << "\nYour age is " << age << "\nIt seems you don't like coffee";
        }

    }
    else if (task == 3) {

    }
    
   




    
    

}


