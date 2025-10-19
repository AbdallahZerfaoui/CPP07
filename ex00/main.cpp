#include "ex00.hpp"

int main(void)
{
    int a = 2, b = 3;
    double c = 0.5, d = 0.7;
    float e = 4.2f, f = -42.0f;
    char g = 'a', h = 'z';
    std::string i = "Hello", j = "Help";

    std::cout << WHITE << "Integer:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << "a = " << a << ", b = " << b << "\nswap(a, b)" << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << GREEN << "\nDouble:" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << "c = " << c << ", d = " << d << "\nswap(c, d)" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << RED << "\nFloat:" << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
    std::cout << "e = " << e << ", f = " << f << "\nswap(e, f)" << std::endl;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;

    std::cout << MAGENTA << "\nChar:" << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
    std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
    std::cout << "g = " << g << ", h = " << h << "\nswap(g, h)" << std::endl;
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << RESET << std::endl;

    std::cout << YELLOW << "\nString:" << std::endl;
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
    std::cout << "max(i, j) = " << ::max(i, j) << std::endl;
    std::cout << "i = " << i << ", j = " << j << "\nswap(i, j)" << std::endl;
    ::swap(i, j);
    std::cout << "i = " << i << ", j = " << j << RESET << std::endl;

    return (0);
}
