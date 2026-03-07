#include <iostream>
#include <fstream>
#include <stdexcept>

int main()
{
    try
    {
        int id;
        double grade;
        int numbers[10];

        std::ifstream inFile("output.txt");

        if (!inFile)
        {
            throw "Error: output.txt could not be opened.";
        }

        inFile >> id;
        inFile >> grade;

        for (int i = 0; i < 10; i++)
        {
            inFile >> numbers[i];
        }

        inFile.close();

        std::cout << "ID: " << id << std::endl;
        std::cout << "Grade: " << grade << std::endl;

        std::cout << "Numbers: ";
        for (int i = 0; i < 10; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    }

    catch (const char *error)
    {
        std::cerr << error << std::endl;
    }

    return 0;
}