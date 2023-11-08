
#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the integer array: ";
    std::cin >> size;
    int *intArray = new int[size];

    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> intArray[i];
    }

    std::cout << "Values in the integer array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << intArray[i] << " ";
    }
    delete[] intArray;



    int numRows, numCols;
    std::cout << "Enter the number of rows for the character array: ";
    std::cin >> numRows;
    std::cout << "Enter the number of columns for each row: ";
    std::cin >> numCols;

    char **charArray = new char*[numRows];

    for (int i = 0; i < numRows; i++) {
        charArray[i] = new char[numCols];
    }

    std::cout << "Enter " << numRows << " strings with " << numCols << " characters each:\n";
    for (int i = 0; i < numRows; i++) {
        std::cin >> charArray[i];
    }

    std::cout << "Strings in the character array:\n";
    for (int i = 0; i < numRows; i++) {
        std::cout << charArray[i] << "\n";
    }

    for (int i = 0; i < numRows; i++) {
        delete[] charArray[i];
    }
    delete[] charArray;





    return 0;
}


void no3() {
    int numRows;
    std::cout << "Enter the number of rows for the integer array: ";
    std::cin >> numRows;

    int **intArray = new int*[numRows];
    int *rowSizes = new int[numRows];

    for (int i = 0; i < numRows; i++) {
        std::cout << "Enter the number of elements for row " << (i + 1) << ": ";
        std::cin >> rowSizes[i];
        intArray[i] = new int[rowSizes[i]];
    }

    std::cout << "Enter values for the integer array:\n";
    for (int i = 0; i < numRows; i++) {
        std::cout << "Enter " << rowSizes[i] << " integers for row " << (i + 1) << ": ";
        for (int j = 0; j < rowSizes[i]; j++) {
            std::cin >> intArray[i][j];
        }
    }

    std::cout << "Values in the integer array:\n";
    for (int i = 0; i < numRows; i++) {
        std::cout << "Row " << (i + 1) << ": ";
        for (int j = 0; j < rowSizes[i]; j++) {
            std::cout << intArray[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < numRows; i++) {
        delete[] intArray[i];
    }
    delete[] intArray;
    delete[] rowSizes;


}





