#include <iostream>
#include <fstream>

int main()
{
    int id = 101;
    double grade = 88.5;
    int numbers[10] = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

    std::ofstream outFile("output.txt");

    if (!outFile)
    {
        std::cout << "Error opening file." << std::endl;
        return 1;
    }

    outFile << id << std::endl;
    outFile << grade << std::endl;

    for (int i = 0; i < 10; i++)
    {
        outFile << numbers[i] << " ";
    }
    outFile << std::endl;

    outFile.close();

    return 0;
}