#pragma once

#include <iostream>

#define WHITE "\033[37m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define MAGENTA "\033[35m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

template <typename T>
void swap(T& x, T& y);

template <typename T>
T min(T x, T y);

template <typename T>
T max(T x, T y);

#include "ex00.tpp"