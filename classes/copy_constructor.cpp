#include <iostream>
#include <cstring> // for strncpy

class Student{
private:
    char email_[32];
    float gpa_;

public:
    Student(){
        email_[0] = '\0';
        gpa_ = 0;
    }
    // overloaded constructor
    Student(char email[], float gpa) {
        std::strncpy(email_, email, sizeof(email_) - 1);
        email_[sizeof(email_) - 1] = '\0';
        gpa_ = gpa;
    }
    // Copy constructor
    Student(const Student& other) {
        std::strncpy(email_, other.email_, sizeof(email_) - 1);
        email_[sizeof(email_) - 1] = '\0';
        gpa_ = other.gpa_;
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

void call_display(Student student){
    student.display();
}

Student copy(Student student){
    return student;
}

int main() {
    
    Student student1, student2("john@email.com", 3.8);
    
    student1.display();
   
    student1.edit();
    student1.display();

    student2.display();

    Student student3(student1); // calls copy constructor
    call_display(student2); // also calls copy constructor

    Student student4;
    student4 = copy(student3); // also calls copy constructor
    
    return 0;
}