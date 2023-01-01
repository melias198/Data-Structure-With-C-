## Week 02

### (Module 04)

**1.Factor of Judging Algorithms:**
```
Every day we come across many problems and we find one or more than one solutions to that particular problem. Some solutions may be efficient as compared to others and some solutions may be less efficient. Generally, we tend to use the most efficient solution.

For example, while going from your home to your office or school or college, there can be "n" number of paths. But you choose only one path to go to your destination i.e. the shortest path.
```
**2.Time Complexity:**
```
**Defination**
Time complexity is defined in terms of how many times it takes to run a given algorithm, based on the length of the input. Time complexity is not a measurement of how much time it takes to execute a particular algorithm because such factors as programming language, operating system, and processing power are also considered.
Time complexity is a type of computational complexity that describes the time required to execute an algorithm. The time complexity of an algorithm is the amount of time it takes for each statement to complete. As a result, it is highly dependent on the size of the processed data. It also aids in defining an algorithm's effectiveness and evaluating its performance.

**Asymptotic Notations**
Asymptotic Notations are programming languages that allow you to analyze an algorithm's running time by identifying its behavior as its input size grows. This is also referred to as an algorithm's growth rate. When the input size increases, does the algorithm become incredibly slow? Is it able to maintain its fast run time as the input size grows? You can answer these questions thanks to Asymptotic Notation.

**Asymptotic notations are classified into three types**
1. Big-Oh (O) notation--Upper bound
2. Big Omega ( Ω ) notation--Lower bound
3. Big Theta ( Θ ) notation--Upper and Lower bound
We normally using Big-Oh(O)
**Polynomial time complexility**
O(1),O(n),O(n^2),O(n^3),O(n^k),O(log(n)),O(nlog(n)),O(n squreroot n).
**Exponential time complexility**
O(2^n),O(c^n).
**Time Complexity-->>
O(1)<O(log(n))<O(Square(n))<O(n)<O(n^2)<O(n^3)<O(n^n).
**Time complexity with operation**
1. Assignment Operation(=) ---> O(1)
2. Comparison Operation(<,>,==) ---> O(1)
3. Mathmathical Operation(+,-,*,/) ---> O(1)
4. Function Call Operation(=) ---> 
5. Inside Function Operation(=) ---> Depends on function
```
**3.Space Complexity:**
```
When an algorithm is run on a computer, it necessitates a certain amount of memory space. The amount of memory used by a program to execute it is represented by its space complexity. Because a program requires memory to store input data and temporal values while running, the space complexity is auxiliary and input space.

Notations same as time complexity.

Space capacity and speed.
Speed: Virtual<Ram<Cache(Level 1)<Cache(Level 2)<Register
Capacity: Virtual>Ram>Cache(Level 1)>Cache(Level 2)>Register
```