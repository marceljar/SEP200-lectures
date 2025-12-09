#include <iostream>
#include <cstring> // for strncpy

class Student{
private:
    char email_[32];
    float gpa_;

public:
    // constructor
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
    // destructor
    ~Student(){
        std::cout << "Destructor Called" << std::endl;
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
    
    Student student("john@email.com", 3.8);
    
    student.display();
   
    Student student2(student); 
    call_display(student2); 

    Student student3;
    student3 = copy(student2); 
    
    return 0;
}