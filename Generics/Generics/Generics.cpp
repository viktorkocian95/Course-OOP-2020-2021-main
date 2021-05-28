// Generics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Array.h"
#include <string>

int main()
{
    std::cout << "Hello World!\n";\

    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
  
    string stringArray[5] = { "a", "b", "c", "d", "e"};
    Array<string> b(stringArray, 5);
    b.print();

    return 0;
}