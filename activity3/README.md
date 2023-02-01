# Activities

## Task 1/3: Divide-and-conquer

The code in `./src/pow1.cpp` and `./src/pow2.cpp` compute the power `pow(x, n)` using iterative and recursive approaches respectively.

> Refer to the following [link](https://www.techiedelight.com/power-function-implementation-recursive-iterative/).

- What is the time complexity for both approaches?
//
The time complexity of the first approach (recursive) is O(log n) while the time complexity of the second approach (iterative) is O(n).

## Task 2/3: Divide-and-conquer vs Decrease and conquer

- In many literature, Binary search is referred to use divide-and-conquer technique. Discuss in groups whether you agree or disagree and justify your answers. Refer to the the following thread: [Why Binary Search is not a divide and conquer algorithm?](https://stackoverflow.com/questions/8850447/why-is-binary-search-a-divide-and-conquer-algorithm)

// I agree that binary search can be referred to as using the divide-and-conquer technique.

The divide-and-conquer technique involves breaking down a problem into smaller sub-problems and solving them individually, until the problem is reduced to the simplest form that can be solved directly. Binary search is a divide-and-conquer algorithm that solves the problem of searching for a target value in a sorted array by dividing the array into two halves at each iteration and choosing the half where the target value is likely to be, until the target value is found or it is clear that it does not exist.

Therefore, the justification for referring to binary search as using the divide-and-conquer technique is that it effectively breaks down the problem of searching for a target value in a large array into smaller sub-problems, by dividing the array in half, until the problem is reduced to a simple form that can be solved directly.

## Task 3/3: Individual, at home

- Refactor the code in `./src/pow2.cpp` to optimize the time complexity of the recursive approach. Use `./src/pow3.cpp` as a starter.
- Refactor the code in `pow1.cpp` and `pow2.cpp`, as follows:
  - Replace `printf()` with` std::cout()`
  - Include the right headers e.g. `iostream`

**pow1.cpp**
```c++
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

```

**pow2.cpp**
```c++
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
```


## Links

- https://www.techiedelight.com/power-function-implementation-recursive-iterative/
- https://cpp.sh/
