#include <iostream>

void print(int* array, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}


int main() {
    int array[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    print(array, 15);
    merge(array, 15);
    print(array, 15);
    return 0;
}
