#include <iostream>

class Student{
private:
    char email_[32];
    float gpa_;
    
public:
    void edit() {
        std::cout << "email: " << std::endl;
        std::cin >> this->email_;
        std::cout << "gpa: " << std::endl;
        std::cin >> this->gpa_;
    }
    void edit_gpa(float gpa_) {
        this->gpa_ = gpa_;
    }
    void display(){
        std::cout << "-----------------" << std::endl;
        std::cout << "Email: " << this->email_  << std::endl;
        std::cout << "gpa: " << this->gpa_ << std::endl;
    }
};

int main() {
    
    Student student;

    student.edit();
    student.display();

    student.edit_gpa(4.0);
    student.display();

    return 0;
}