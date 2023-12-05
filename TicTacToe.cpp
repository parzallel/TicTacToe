#include <iostream>
#define RED "\033[31m"
#define LBLUE "\033[94m"
#define RESET "\033[0m"
int main()
{
    system("cls");
    std::string mat00[3][3];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat00[i][j] = "0";
        }
    }
    int i, j;
    int counter = 1;

    for (int k = 0; k < 9 ; k++)
    {
        if (counter % 2 == 0){
            do
            {
                std::cout <<RED<< "ij" << counter <<RESET<< std::endl;
                std::cin >> i >> j;
            } while (mat00[i][j] != "0");

        }
        else{
            do
            {
                std::cout <<LBLUE<< "ij" << counter <<RESET<< std::endl;
                std::cin >> i >> j;
            } while (mat00[i][j] != "0");

        }
        if(counter%2==0){
            do{
                std::cin >> mat00[i][j];
            } while (mat00[i][j]!="o"); 
        }else{
            do{
                std::cin >> mat00[i][j];
            } while (mat00[i][j]!="x");
        }
        counter++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << mat00[i][j]<<"  ";
        }
        std::cout << "\n";
    }
return 0;
}
