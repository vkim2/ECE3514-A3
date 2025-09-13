//include/reverse.ipp
 
//define generic version so main.cpp work as expected

#ifndef REVERSE_IPP
#define REVERSE_IPP
#include "reverse.hpp"

template <typename T>
void print_array(const T arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
    }
}

template <typename T>
void reverse_array(T arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        T current = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = current;
    }
}

#endif