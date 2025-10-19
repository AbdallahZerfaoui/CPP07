#include <iostream>


// template <typename T, typename F>
// void iter(const T *array, size_t len, F f)
// {
//     for (size_t i = 0; i < len; ++i)
//     {
//         f(array[i]);
//     }
// }

template <typename T, typename F>
void iter(T *array, size_t len, F f)
{
    for (size_t i = 0; i < len; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void printElement(T elem)
{
    std::cout << elem << std::endl;
}

// template <typename T>
// void printElement(const T elem)
// {
//     std::cout << elem << std::endl;
// }

template <typename T>
void increment(T &elem)
{
    elem += 1;
}

inline void increment(std::string& s) {
    s.push_back('!');
}
