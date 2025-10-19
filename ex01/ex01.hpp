#pragma once

// #include <iostream>
#include <cstddef> // for size_t
#include <string>

#define WHITE "\033[37m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define MAGENTA "\033[35m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

template <typename T, typename F>
void iter(T *array, size_t len, F f);

template <typename T>
void printElement(T elem);

template <typename T>
void increment(T &elem);

void increment(std::string &s);

#include "ex01.tpp"