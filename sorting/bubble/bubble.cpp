#include <iostream>

void print(int* array, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
void bubble(int* array, int length) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < length - 1 ; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int array[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    print(array, 15);
    bubble(array, 15);
    print(array, 15);
    return 0;
}
