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
    for (int i = 1; i < 100; i++) {
        int j = i;
        while (j > 0 && array[j - 1] > array[j]){
            std::swap(array[j], array[j - 1]);
            j = j - 1;
        }

    }
    std::cout << std::endl << std::endl;
    int i = 0;
    while (i < 100) {
        std::cout << array[i] << std::endl;
        i++;
    }


}
