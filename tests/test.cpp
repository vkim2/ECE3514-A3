// tests/test.cpp
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "reverse.hpp"
 
// you may write array comparison function to compare true/actual and expected use in test cases to see if the array is in reverse or not.
//test case for print_array() is not required 

// checks for array equality
template <typename T>
bool arrsAreEqual(const T arr1[], const T arr2[]) {
    //check length
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (n1 != n2) {
        return false;
    }

    //check elements
    for (int i = 0; i < n1; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

bool wordsAreEqual(const char word1[], const char word2[]) {
    //check length
    int n1 = std::strlen(word1);
    int n2 = std::strlen(word2);

    if (n1 != n2) {
        return false;
    }

    //check elements
    for (int i = 0; i < n1; i++) {
        if (word1[i] != word2[i]) {
            return false;
        }
    }

    return true;
}

TEST_CASE("int reverse_array()", "[]") {
    int arr1[] {2, 4, 6, 8};
    int arr2[] {8, 6, 4, 2};
    int arr3[] {3, 5, 6, 7};
    int arr4[] {2, 4};
    reverse_array<int>(arr1, 4);
    REQUIRE(arrsAreEqual(arr1, arr2) == true);
    REQUIRE(arrsAreEqual(arr1, arr3) == false);
    REQUIRE(arrsAreEqual(arr1, arr4) == false);
}

TEST_CASE("double reverse_array()", "[]") {
    double arr1[] {1.2, 2.4, 3.6, 4.8};
    double arr2[] {4.8, 3.6, 2.4, 1.2};
    double arr3[] {3.1, 5.1, 6.1, 7.0};
    double arr4[] {1.2, 2.4};
    reverse_array<double>(arr1, 4);
    REQUIRE(arrsAreEqual(arr1, arr2) == true);
    REQUIRE(arrsAreEqual(arr1, arr3) == false);
    REQUIRE(arrsAreEqual(arr1, arr4) == false);
}

TEST_CASE("char reverse_array()", "[]") {
    char word1[] {"love"};
    char word2[] {"evol"};
    char word3[] {"dove"};
    char word4[] {"lover"};
    reverse_array<char>(word1, 4);
    REQUIRE(wordsAreEqual(word1, word2) == true);
    REQUIRE(wordsAreEqual(word1, word3) == false);
    REQUIRE(wordsAreEqual(word1, word4) == false);
}