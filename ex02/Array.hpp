#pragma once


#include <iostream>
#include <string>

#define WHITE "\033[37m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define MAGENTA "\033[35m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"


template <typename T>
class Array
{
    private:
        T* _array;
        size_t _size;
    
    public:
        Array();
        Array(size_t n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator[](size_t index);
        const T& operator[](size_t index) const;
        size_t size() const;
        ~Array();
};

#include "Array.tpp"
