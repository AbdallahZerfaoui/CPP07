#include "ex01.hpp"

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    double b[] = {0.5, 1.5, 2.5};
    char c[] = {'a', 'b', 'c'};
    std::string d[] = {"Hello", "World", "42"};

    std::cout << WHITE << "Integer array:" << std::endl;
    ::iter(a, 5, printElement<int>);
    std::cout << "\nIncrementing..." << std::endl;
    ::iter(a, 5, increment<int>);
    ::iter(a, 5, printElement<int>);
    std::cout << RESET << std::endl;

    std::cout << GREEN << "\nDouble array:" << std::endl;
    ::iter(b, 3, printElement<double>);
    std::cout << "\nIncrementing..." << std::endl;
    ::iter(b, 3, increment<double>);
    ::iter(b, 3, printElement<double>);
    std::cout << RESET << std::endl;

    std::cout << RED << "\nChar array:" << std::endl;
    ::iter(c, 3, printElement<char>);
    std::cout << "\nIncrementing..." << std::endl;
    ::iter(c, 3, increment<char>);
    ::iter(c, 3, printElement<char>);
    std::cout << RESET << std::endl;

    std::cout << MAGENTA << "\nString array:" << std::endl;
    ::iter(d, 3, printElement<std::string>);
    std::cout << "\nAdding exclamation mark..." << std::endl;
    ::iter(d, 3, static_cast<void (*)(std::string &)>(increment)); // pick void increment(std::string&)
    ::iter(d, 3, printElement<std::string>);
    std::cout << RESET << std::endl;

    std::cout << YELLOW << "\nConst array test:" << std::endl;
    const int e[] = {10, 20, 30};
    ::iter(e, 3, printElement<int>);
    std::cout << RESET << std::endl;

    return (0);
}