#include <iostream>
#include "dynarr.h"

int main() {
    dynArr obj1;
    dynArr obj2(5);

    for (int i = 0; i < 5; i++) {
        int value;
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> value;
        obj2.setValue(i, value);
    }

    std::cout << "Values stored in obj2: ";
    for (int i = 0; i < 5; i++) {
        std::cout << obj2.getValue(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

