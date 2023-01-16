#include <iostream>
#include <vector>


int main()
{
    std::vector <int> vector;
    int elements, V_size;
    std::cout << "Type the size of vector: ";
    std::cin >> V_size;
    int wartosc = 0, max = 0, indeks = 0;

    while (vector.size() != V_size) {
        std::cout << "type elements of vector: ";
        std::cin >> elements;
        vector.push_back(elements);
    }
    std::cout << std::endl;
    for (int x = 0; x < vector.size(); x++) {
        wartosc = vector[x];
        if (wartosc >= max) {
            indeks = x;
            max = wartosc;
        }
    }
    std::cout << "The highest element of Vector is: " << max << std::endl;
    std::cout << "The index value of the highest element: " << indeks;
    return 0;
}
