#include <iostream>

class IntArray
{
private:
    int *data_;
    int size_;

public:
    IntArray(int s)
    {
        size_ = s;
        data_ = new int[size_];

        for (int i = 0; i < size_; ++i)
        {
            data_[i] = 0;
        }
    }

    IntArray(const IntArray &other)
    {
        size_ = other.size_;
        data_ = new int[size_];

        for (int i = 0; i < size_; ++i)
        {
            data_[i] = other.data_[i];
        }
    }

    IntArray &operator=(const IntArray &other)
    {
        if (this != &other)
        {
            delete[] data_;

            size_ = other.size_;
            data_ = new int[size_];

            for (int i = 0; i < size_; ++i)
            {
                data_[i] = other.data_[i];
            }
        }

        return *this;
    }

    ~IntArray()
    {
        delete[] data_;
    }

    void setValue(int index, int value)
    {
        if (index >= 0 && index < size_)
        {
            data_[index] = value;
        }
    }

    void print() const
    {
        std::cout << "[ ";
        for (int i = 0; i < size_; ++i)
        {
            std::cout << data_[i] << " ";
        }
        std::cout << "]" << std::endl;
    }
};

int main()
{
    IntArray a(5);
    a.setValue(0, 10);
    a.setValue(1, 20);
    a.setValue(2, 30);

    std::cout << "Array a: ";
    a.print();

    IntArray b = a;
    std::cout << "Array b (copy of a): ";
    b.print();

    b.setValue(1, 999);
    std::cout << "After modifying b:" << std::endl;
    std::cout << "Array a: ";
    a.print();
    std::cout << "Array b: ";
    b.print();

    IntArray c(3);
    c = a;
    std::cout << "Array c (assigned from a): ";
    c.print();

    return 0;
}