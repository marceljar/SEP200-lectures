#ifndef STUDENT_H
#define STUDENT_H

class Student{
    private:
        char email_[16];
        float gpa_;
    public:
        void edit();
        void display();
};

#endif