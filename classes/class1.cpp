#include <iostream>

class Student
{
private:
    char email_[32];
    float gpa_;

public:
    void edit()
    {
        std::cout << "email: " << std::endl;
        std::cin >> email_;
        std::cout << "gpa: " << std::endl;
        std::cin >> gpa_;
    }
    void display()
    {
        std::cout << "-----------------" << std::endl;
        std::cout << "Email: " << email_ << std::endl;
        std::cout << "gpa: " << gpa_ << std::endl;
    }
};

int main()
{
    Student student;

    student.edit();
    student.display();

    // errors
    // student.gpa_ = 4.0;
    // std::cout << student.gpa_;

    return 0;
}