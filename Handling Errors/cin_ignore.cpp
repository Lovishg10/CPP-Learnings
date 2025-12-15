#include <iostream>
#include <limits> // Required for numeric_limits
#include <string>

/* In this program after entering my age , the buffer will be like 45\n, now cin will take 45 from buffer but \n is still in buffer so when getline comes, it sees \n and thinks that user give empty string and it doesnot take any actual input from user
*/

int main() {
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // THE FIX: Clear the buffer before using getline , try commenting this line and see what happens
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Now this waits for user input correctly

    std::cout << "Hello " << name << " (" << age << ")" << std::endl;
    return 0;
}

/*Here std::numeric_limits give maximum characters buffer can take*/

// Must read 9.5 LearnCPP for full clarity on all things or just see last conclusion its BEST