#include <iostream>
#include <cstdlib>   // for rand

class IntArray {
private:
    int* data_;
    int size_;

public:
    // constructor
    IntArray(int size) : size_(size) {
        data_ = new int[size_];
        for (int i = 0; i < size_; i++){
            data_[i] = (std::rand() % 6) + 1;
        }
        std::cout << "constructor called." << std::endl;
    }
    // copy constructor
    IntArray(const IntArray& other) : size_(other.size_) {
        data_ = new int[size_];
        for (int i = 0; i < size_; i++) {
            data_[i] = other.data_[i];
        }
        std::cout << "copy constructor called." << std::endl;
    }
    // destructor
    ~IntArray() {
        delete[] data_;
        std::cout << "destructor called." << std::endl;
    }
    void print() {
        for (int i = 0; i < size_; i++){
            std::cout << data_[i] << " ";
        }
        std::cout << std::endl;
    }
};

void call_print(IntArray array){
     array.print();
}

int main() {
    IntArray array1(5), array2(8);

    call_print(array1);
    call_print(array2);

    IntArray *array3 = new IntArray(5);

    call_print(*array3);

    delete array3;

    return 0;
}
