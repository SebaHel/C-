#include <iostream>

int main()
{
    int Lista[10][10];
    std::cout << "Table content:" << std::endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < 11; j++) {
            if (j <= 2) {
                Lista[i][j] = (i) * (j);
                std::cout << " " << Lista[i][j] << " ";
            }
            if (j == 3) {
                Lista[i][j] = (i) * (i);
                std::cout << " " << Lista[i][j] << " ";
            }
            if (j == 4) {
                Lista[i][j] = ((i)+(j)) - 1;
                std::cout << " " << Lista[i][j] << " ";
            }
            if (j == 5) {
                Lista[i][j] = ((i)-(j)) + 1;
                std::cout << " " << Lista[i][j] << " ";
            }
            if (j >= 6) {
                Lista[i][j] = { 0 };
                std::cout << " " << Lista[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
