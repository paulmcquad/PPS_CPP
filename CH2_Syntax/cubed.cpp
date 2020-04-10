#include <iostream>

int Square(int);
int Cube(int);

int main()
{

    std::cout << "The square of 27 is " << Square(27) << std::endl;
    std::cout << "The cube of 27 is " << Cube(27) << std::endl;

    return 0;
}

int Square(int n)
{
    return n * n;
}

int Cube(int n)
{
    return n * n * n;
}