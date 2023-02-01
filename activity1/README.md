# Activities

## Task 1/5

> Refer to the instruction in [GitHub Workflow](../github.md)

- Clone today's repo
- Create a new branch e.g answers
- Create a repository in GitHub
- Change remote to point to your repo

## Task 2/5: Brute force

- What is the maximum number of steps it would take to perform a linear search on an ordered array of size 100,000?

  > Refer to `./src/search-linear.cpp`

  //100,000 steps
## Task 3/5: Decrease-and-Conquer

- What is the maximum number of steps it would take to perform a binary search on an ordered array of size 100,000?

  > Refer to `./src/search-binary.cpp`
  // 16 steps

## Task 4/5: Quiz

32 teams qualified for the 2014 World Cup. If the names of the teams were arranged in sorted order (an array), how many items in the array would binary search have to examine to find the location of a particular team in the array, in the worst case?

- [] At most, 32.
- [] At most, 1.
- [x] At most, 6.
- [] At most, 16.

## Task 5/5: Individual, at home

Refactor the code in `./src/task4.cpp` to use recursion

- Refer to the following [link](https://www.techiedelight.com/binary-search/)
- Make sure that you:
  - Replace `printf()` with` std::cout()`
  - Include the right headers e.g. `iostream`
  
 ```c++
 #include <iostream>


// Iterative implementation of the binary search algorithm to return
// the position of `target` in array `nums` of size `n`
int binarySearch(int nums[], int n, int target)
{
    // search space is nums[low…high]
    int low = 0, high = n - 1;

    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and
        // compares it with the target

        int mid = (low + high) / 2; // overflow can happen
        // int mid = low + (high - low)/2;
        // int mid = high - (high - low)/2;

        // target value is found
        if (target == nums[mid])
        {
            return mid;
        }

        // if the target is less than the middle element, discard all elements
        // in the right search space, including the middle element
        else if (target < nums[mid])
        {
            high = mid - 1;
        }

        // if the target is more than the middle element, discard all elements
        // in the left search space, including the middle element
        else
        {
            low = mid + 1;
        }
    }

    // target doesn't exist in the array
    return -1;
}

int main(void)
{
    int nums[] = {2, 5, 6, 8, 9, 10};
    int target = 5;

    int n = sizeof(nums) / sizeof(nums[0]);
    int index = binarySearch(nums, n, target);

    if (index != -1)
    {
        std::cout<< "Element found at index %d" << index ;
    }
    else
    {
        std::cout<<"Element not found in the array" ;
    }

    return 0;
}
```

## Links

- https://cpp.sh/
- https://www.techiedelight.com/binary-search/
- https://www.softwaretestinghelp.com/searching-algorithms-in-cpp/
- https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/e/running-time-of-binary-search
