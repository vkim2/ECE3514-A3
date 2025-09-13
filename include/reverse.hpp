//include/reverse.hpp
//declare generic versions so main.cpp work as expected
#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <iostream>

template <typename T> //the array can be any datatype
void print_array(const T arr[], int n);

template <typename T>
void reverse_array(T arr[], int n);

#include "reverse.ipp"

#endif