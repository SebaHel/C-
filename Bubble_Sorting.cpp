#include <iostream>
#include <cstdlib>

int main()
{
    int N = 1000;
    int array[100];
    for (int i = 0; i < 100; i++) {
        array[i] = rand() % N;
        std::cout << array[i] << std::endl;
    }
    for (int i = 0; i < 99; i++) {
        for (int i = 0; i < 99; i++) {
            if (array[i] > array[i + 1])
                std::swap(array[i], array[i + 1]);
        }

    }
    std::cout << std::endl << std::endl;
    int i = 0;
    while (i < 100) {
        std::cout << array[i] << std::endl;
        i++;
    }


}
