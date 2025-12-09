#include <iostream>

class Student{
private:
    char email_[32];
    float gpa_;

public:
    // constructor with member initalizer list
    Student() : gpa_(0) {
        email_[0] = '\0';
    }
    void edit() {
        std::cout << "email: " << std::endl;
        std::cin >> email_;
        std::cout << "gpa: " << std::endl;
        std::cin >> gpa_;
    }
    void display(){
        std::cout << "-----------------" << std::endl;
        std::cout << "Email: " << email_  << std::endl;
        std::cout << "gpa: " << gpa_ << std::endl;
    }
};

int main() {
    
    Student student;
    
    student.display();
   
    student.edit();
    student.display();
    
    return 0;
}