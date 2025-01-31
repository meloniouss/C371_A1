#include <iostream>


// Function declarations (forward declarations)
int* createArray(int size);
void printArray(int* array, int size);
void deleteArray(int* array);

int main() {
    std::cout << "Please enter an array size: ";
    int size;
    std::cin >> size;
    int* array = createArray(size);
    printArray(array, size);

    deleteArray(array);
    return 0;
}

// Function to allocate an array dynamically
int* createArray(int size) {
    int* dynamicArray = new int[size];
    for(int i = 0; i < size; i++){
        dynamicArray[i] = i;
    }
    return dynamicArray;
}

// Function to print array values
void printArray(int* array, int size) {
    std::cout << "The array contains the following numbers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// Function to deallocate memory
void deleteArray(int* array) {
    delete[] array;
}