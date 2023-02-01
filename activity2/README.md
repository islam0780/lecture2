# Activities

## Task 1

Refer to the first [link](#links).

- Why is Algorithm Analysis Important?

// the accidental or unintentional use of an inefficient algorithm can significantly impact system performance.

- Explain the Big $O$ notation

// Big O Notation is a tool used to describe the time complexity of algorithms. It calculates the time taken to run an algorithm as the input grows. In other words, it calculates the worst-case time complexity of an algorithm. Big O Notation in Data Structure describes the upper bound of an algorithm's runtime

- Compare `Linear`, `Logarithmic`, `Quadratic` and `Constant` complexities.
// 
They all refer to how long it takes to run a computer program with large inputs, and specifically how much longer it takes with larger inputs.

Constant time means that the program will run for the same length of time regardless of the input side. Ask a program for the first word in Harry Potter and the Philosopher’s Stone and it will reply immediately. Ask a program for the first word in Harry Potter and the Deathly Hallows and it will also reply immediately, despite Deathly Hallows being 4 times as long. Ask for the first word in the Encyclopedia Brittanica and it will also reply immediately, despite Britannica being 20 times as long as Deathly Hallows.

Linear time means that the program will run for a time roughly proportional to the size of the input. Ask a program for the longest word in Philosopher’s Stone and it’ll run for a second. Ask a program for the longest word in Deathly Hallows and it’ll run for 4 seconds. Ask a program for the longest word in the Brittanica and it’ll run for 80 seconds.

Quadratic time means that doubling the size of the input will quadruple the running time. Ask a program to sort the words (using Bubble Sort) in Philosopher’s Stone and it’ll take a minute. Ask a program to sort the words in Deathly Hallows and it’ll take 16 minutes. Ask a program to sort the words in Brittanica and it’ll take almost 4 and a half days.

Logarithmic time means that doubling the size of the input will (roughly) add a fixed amount of running time. Once you’ve sorted Philosopher’s Stone, finding out if a particular word is in the book takes a second. Finding out of a particular word is in the sorted Deathly Hallows takes 2 seconds. Finding out if a particular word is in the sorted Brittanica takes an additional 4.5 seconds.


## Task2

Refer to the first [link](#links).

- Write a simple algorithm in C++ that finds the square of the first item in a list and then prints it on the screen.
```c++
#include <iostream>
#include <vector>

int main() {
    std::vector<int> list = {1, 2, 3, 4, 5};
    int square = list[0] * list[0];
    std::cout << "The square of the first item in the list is: " << square << std::endl;
    return 0;
}
```
Explanation:

The code includes the iostream and vector headers to allow input/output and use of the vector data structure.
The vector named list is initialized with values 1, 2, 3, 4, 5.
The square of the first item in the list (index 0) is calculated and stored in the int variable square.
Finally, the square value is printed on the screen using the cout stream.

- What is the complexity of the algorithm?

//The complexity of this algorithm is O(1), which is constant time. The reason is that the algorithm only performs a single operation (i.e., calculation of the square of the first item in the list) and does not loop through the entire list. Therefore, the time taken by the algorithm does not depend on the size of the list, and remains constant regardless of the size of the input.

## Task 3

Refer to the first [link](#links).

- Write a simple program that displays all items in a list to the console.
```c++
#include <iostream>
#include <vector>

int main() {
    std::vector<int> list = {1, 2, 3, 4, 5};
    std::cout << "The items in the list are: ";
    for (int i = 0; i < list.size(); i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
```
Explanation:

The code includes the iostream and vector headers to allow input/output and use of the vector data structure.
The vector named list is initialized with values 1, 2, 3, 4, 5.
A for loop is used to iterate over the items in the list and display them on the screen.
Finally, a newline character is printed after all items have been displayed.

- What is the complexity of the algorithm?

// The complexity of this algorithm is O(n), where n is the number of items in the list. This is because the algorithm needs to loop through the entire list to display all items. The time taken by the algorithm grows linearly with the size of the list.

## Task 4: : Individual, at home

Refer to this [pdf](./big_o.pdf):

- What is the difference between complexity and performance:
- Does complexity affects performance bor is it the other way around?
- Restate the formal definition of big $O$ in plain English

## Links

- [Big O Notation and Algorithm Analysis ](https://stackabuse.com/big-o-notation-and-algorithm-analysis-with-python-examples/)
- [Visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html)
- [Big-O notation explained by a self-taught programmer](https://justin.abrah.ms/computer-science/big-o-notation-explained.html)
- [Big-O is easy to calculate, if you know how](https://justin.abrah.ms/computer-science/how-to-calculate-big-o.html)
- https://cpp.sh/
