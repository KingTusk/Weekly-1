#include <iostream>
#include <string>
#include <conio.h>

int main()
{
    int stop = 1;
    while (stop == 1) {
        int task;

        std::cout << "Choose task to review:  ";
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
            std::cout << "Name:          " << fullname << "\nInitial:       " << initial << "\nPhone number:  " << pnumber << "\nAge:           " << age << "\nDate of birth: " << bday << "/" << bmonth << "/" << byear << "\nType 1 to repeat program or 2 to end program\n";
            std::cin >> stop;
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
            std::cout << "\nType 1 to repeat program or 2 to end program\n";
            std::cin >> stop;

        }
        else if (task == 3) {
            int age;
            std::cout << "Enter your age: " << std::endl;
            std::cin >> age;
            system("cls");
            if (age < 20 && age >= 0) {
                std::cout << "You are young";
            }
            else if (age < 41 && age >= 0) {
                std::cout << "You are a grown up";
            }
            else if (age < 60 && age >= 0) {
                std::cout << "You are old";
            }
            else if (age > 60 && age >= 0) {
                std::cout << "You ARE really old";
            }
            else {
                std::cout << "Your age cannot be negative";
            }
            std::cout << "\nType 1 to repeat program or 2 to end program\n";
            std::cin >> stop;
        }
        else if (task == 4) {
            int fdrink;
            std::cout << "Which is you favorite drink?\n 1. Coffee\n 2. Tea\n 3. Coca cola \n Enter number besides your favorite drink: ";
            std::cin >> fdrink;
            system("cls");
            if (fdrink == 1) {
                std::cout << "Coffee is delicious";
            }
            else if (fdrink == 2) {
                std::cout << "Tea gives peace of mind";
            }
            else if (fdrink == 3) {
                std::cout << "Coke will give you a white smile";
            }
            std::cout << "\nType 1 to repeat program or 2 to end program\n";
            std::cin >> stop;
        }
        else if (task == 5) {
            std::cout << "      1       2       3       4       5       6   \n    _ _ _   _ _ _   _ _ _   _ _ _   _ _ _   _ _ _ \nA |   *   |   *   |   *   |   *   |   *   |   *   |\n  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\nB |   *   |   *   |   *   |   *   |   *   |   *   |\n  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\nC |   *   |   *   |   *   |   *   |   *   |   *   |\n  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\nD |   *   |   *   |   *   |   *   |   *   |   *   |\n  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\n" << "\nType 1 to repeat program or 2 to end program\n";
            std::cin >> stop;
        }
        else {
            std::cout << "You must choose a task 1 - 5, singel digit numbers only." << "\nType 1 to repeat program or 2 to end program\n";
            std::cin >> stop;
        }
    }
   




    
    

}


