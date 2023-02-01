#include <iostream>

long power(int x, unsigned n)
{
// base condition
if (n == 0)
{
return 1L;
}


if (n & 1)
{ // if `n` is odd
    return x * power(x, n / 2) * power(x, n / 2);
}

// otherwise, `n` is even
return power(x, n / 2) * power(x, n / 2);
}

int main()
{
int x = -2;
unsigned n = 10;



std::cout << "pow(" << x << ", " << n << ") = " << power(x, n) << std::endl;

return 0;
}

...

#include <iostream>

long power(int x, unsigned n)
{
// initialize result by 1
long pow = 1L;


// multiply `x` exactly `n` times
for (int i = 0; i < n; i++)
{
    pow = pow * x;
}

return pow;
}

int main()
{
int x = -2;
unsigned n = 10;


std::cout << "pow(" << x << ", " << n << ") = " << power(x, n) << std::endl;

return 0;
}
...

