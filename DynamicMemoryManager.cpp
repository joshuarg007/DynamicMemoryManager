#include <iostream>

int main() {
    const int SIZE = 3;  // Constant array size

    int variables[SIZE];  // Array to store ints

    // Prompt user for input
    std::cout << "Enter three integers:\n";

    // Loop to read three integers from user
    for (int i = 0; i < SIZE; ++i) 
    {
        std::cin >> variables[i]; // Store user input

    } // END FOR

    // Create an array of integer pointers
    int *ptr[SIZE];

    // Allocate memory for each integer dynamically
    for (int i = 0; i < SIZE; ++i) 
    {
        // Allocate memory for an integer and store its address in 'ptr[i]'
        ptr[i] = new int; 

        // Assign value from 'variables[i]'
        *ptr[i] = variables[i];

    } // END FOR

    // Display contents ofarray
    std::cout << "\nContents of variables:\n";

    for (int i = 0; i < SIZE; ++i) 
    {
        // Output each element of array
        std::cout << "var" << i + 1 << " - " << variables[i] << std::endl;

    } // END FOR

    // Display contents of pointers
    std::cout << "Contents of pointers:\n";

    for (int i = 0; i < SIZE; ++i) 
    {
        // Dereference and output each element of array
        std::cout << "ptr" << i + 1 << ": " << *ptr[i] << std::endl;  

    } // END FOR

    // Deallocate dynamic memory for each pointer
    for (int i = 0; i < SIZE; ++i) 
    {
        delete ptr[i];  // Delete the dynamically allocated integer pointed by 'ptr[i]'
        
    } // END FOR

    return 0;  // Exit the program with success status
}
