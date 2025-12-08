#include <iostream>
#include "student.h"

void Student::edit() {
    std::cout << "email: " <<std::endl;
            std::cin >> email_;
            std::cout << "gpa: " <<std::endl;
            std::cin >> gpa_;
}

void Student::display(){
    std::cout << "-----------------" << std::endl;
    std::cout << "Email: " << email_  << std::endl;
    std::cout << "gpa: " << gpa_ << std::endl;
}
