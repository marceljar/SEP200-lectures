#include <iostream>
#include <cstring> // for strncpy

class Student{
private:
    char email_[16];
    float gpa_;

public:
    Student(){
        email_[0] = '\0';
        gpa_ = 0;
    }
    Student(const char* email, float gpa) {
        // Copy at most 15 chars and ensure null-termination
        std::strncpy(email_, email, sizeof(email_) - 1);
        email_[sizeof(email_) - 1] = '\0';
        gpa_ = gpa;
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
    
    Student student1, student2("john@email.com", 3.8);
    
    student1.display();
   
    student1.edit();
    student1.display();

    student2.display();
    
    return 0;
}