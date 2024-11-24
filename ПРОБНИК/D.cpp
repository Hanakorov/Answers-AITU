#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b + c <= 21)
    {
        std::cout << "Winner, winner, chicken dinner." << std::endl;
    }
    else
    {
        std::cout << "play again." << std::endl;
    }

    return 0;
}
