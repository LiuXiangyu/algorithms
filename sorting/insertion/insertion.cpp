#include <iostream>

void print(int* array, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void insertion(int* array, int length) {
    for (int i = 1; i < length; ++i) {
        int element = array[i], j;
        for (j = i - 1; j >= 0; --j) {
            if (element < array[j]) {
                array[j + 1] = array[j];
            } else {
                break;
            }
            array[j] = element;
        }
    }
}

int main() {
    int array[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    print(array, 15);
    insertion(array, 15);
    print(array, 15);
    return 0;
}
