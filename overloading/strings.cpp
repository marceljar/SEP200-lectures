#include <iostream>
#include <string>

int main() {
    std::string firstName = "Marcel";
    std::string lastName("Jar");

    std::string fullName = firstName + " " + lastName;

    std::cout << "Full name: " << fullName << std::endl;
    std::cout << "Length: " << fullName.length() << std::endl;

    std::cout << "First letter: " << fullName[0] << std::endl;

    fullName[0] = 'm';
    std::cout << "Modified name: " << fullName << std::endl;

    fullName.append(" (PhD)");
    std::cout << "After append: " << fullName << std::endl;

    if (firstName == "Marcel") {
        std::cout << "First name matches!" << std::endl;
    }

    std::string title = fullName.substr(0, 6);
    std::cout << "Substring: " << title << std::endl;

    size_t pos = fullName.find("Jar");
    if (pos != std::string::npos) {
        std::cout << "'Jar' found at position " << pos << std::endl;
    }

    return 0;
}
