#include <iostream>

int main()
{
    int A, B;
    std::cin >> A >> B;

    std::cout << ((A >= 1 && A <= 9 && B >= 1 && B <= 9) ? A * B : -1) << std::endl;

    return 0;
}