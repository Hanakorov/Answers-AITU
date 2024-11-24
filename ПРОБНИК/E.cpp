#include <iostream>
#include <cmath>

int main()
{
    long long N;
    std::cin >> N;

    int count = 0;
    long long sqrtN = std::sqrt(N);

    for (long long i = 1; i <= sqrtN; ++i)
    {
        if (N % i == 0)
        {
            count += 2;
            if (i == N / i)
            {
                --count;
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}