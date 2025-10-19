#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(size_t n)
{
    _array = new T[n]();
    _size = n;  
}