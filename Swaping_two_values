#include <iostream>

int main()
{
    int size;
    int wartosc1 = 0, wartosc2 = 0;
    std::cout << "Tell the size of the table: ";
    std::cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Type Element: " << i + 1 << std::endl;
        std::cin >> array[i];
    }
    std::cout << std::endl << "The Output table:" << std::endl;
    for (int i = 0; i < size; i++) {
        if ((i % 2) == 0)
            std::cout << array[i] << "   ";
        if ((i % 2) != 0)
            std::cout << array[i] << "   ";
        wartosc2++;
        if ((wartosc2 % 2) == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl << "The Input table:" << std::endl;
    for (int i = 0; i < size; i++) {
        if ((i % 2) != 0)
            std::cout << array[i - 1] << "   ";
        if ((i % 2) == 0 && i != (size - 1))
            std::cout << array[i + 1] << "   ";
        if (size - 1 == i && (size % 2) != 0)
            std::cout << "     " << array[i] << "   ";
        wartosc1++;
        if ((wartosc1 % 2) == 0)
            std::cout << std::endl;
    }

    return 0;
}
