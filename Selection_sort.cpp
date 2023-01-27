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
    for (int i = 0; i < 100; i++) {
        int minimum = i;
        for (int j = i+1; j < 100; j++){
            if (array[j] < array[minimum])
                minimum = j;
            }
        if (minimum != i)
            std::swap(array[i], array[minimum]);
            std::cout << array[i] << std::endl;


    }
    std::cout << std::endl << std::endl;
    int i = 0;
    while (i < 100) {
        std::cout << array[i] << std::endl;
        i++;
    }


}
