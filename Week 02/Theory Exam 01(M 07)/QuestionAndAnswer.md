## Week 02

### (Module 07)

**Theory Exam 01 Question Link**
[Theory 01](https://docs.google.com/document/d/11no3B5UqZ30GWnUCb0nRGwOdGm5lomyD2xh0mHX2ONI/edit?usp=sharing).

**Theory Exam 01 Answer**
**Answer 01**
```
Given Array is– 7 2 13 2 11 4
All the steps of Bubble Sort:
1st iteration:
                       1st step: 2 7 13 2 11 4
                       2nd step: 2 7 13 2 11 4
                       3rd step: 2 7 2 13 11 4
                       4th step: 2 7 2 11 13 4
                       5th step: 2 7 2 11 4 13
After considering  1  iteration the Array is:  2 7 2 11 4 13
2nd iteration:
                       1st step: 2 7 2 11 4 13
                       2nd step: 2 2 7 11 4 13
                       3rd step: 2 2 7 11 4 13
                       4th step: 2 2 7 4 11 13
After considering  2 iteration the Array is: 2 2 7 4 11 13
3rd iteration:
                       1st step: 2 2 7 4 11 13
                       2nd step: 2 2 7 4 11 13
                       3rd step: 2 2 4 7 11 13
After considering  3 iteration the Array is: 2 2 4 7 11 13


```
**Answer 02**
```
Two Differences between Array and Vector:
Array:
1.  An array is the static memory allocation.
2.  After creation,an array is a fixed-length structure.
Vector:
1.  Vector is the dynamic memory allocation.
2.  Size of the vectors is not fixed,it can be resized. 
```
**Answer 03**
```
Time complexity of the code segment is: O(n^2)
In the code segment there are nested loops. In nested outer loop run by n time and its time complexity would be O(n).
The Inner loop will be running when the builtin_popcount() is returned 2,when the function is true the inner loop also runs for n time and time complexity would be O(n).
Total time complexity would be O(n*n) = O(n^2).
```
**Answer 04**
```
There is one flaw in this code.When calculating the numbers of distinct elements in the vector a,the loop should start at (1) index and go to (n-1).
Why start index 1:
Let assume there are 5 numbers in the vector with start index 0. 
Elements of vectors: 3 4 5 6 6
Index:                            0 1  2  3 4

for(int i=0 ; i<=n ; i++)
		if(a[i]!=a[i-1])
			ans++;
The first comparison in this loop will be a[0] and a[-1]  (The index (-1) does not exist!) which is not a valid comparison.
Why go to index n-1:
Let assume there are 5 numbers in the vector with the end index equal n.
Elements of vectors: 3 4 5 6 6
Index:                            0 1  2  3 4

for(int i=0 ; i<=n ; i++)
		if(a[i]!=a[i-1])
			ans++;
We have to compare the current element a[i] with the previous element a[i-1] and if they are not equal,it increases the ans variable.Since the vector takes input with index 0 that's why the valid index is n-1.
If n=5 and we compare a[5] and a[4], (The index a[5] is not valid!)

Correct code is:
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
           int ans = 0;
	for(int i=1 ; i<n; i++)
		if(a[i]!=a[i-1])
			ans++;
	cout<<ans;
	return 0;
}

```
**Answer 05**
```
Time complexity of the code segment is: O(n log n)
In nested outer loop run by n time,its time complexity would be O(n).
Inner loop is:
Let's assume, n=5.
When i=1 , j = 1,2,3,4,5 ,the number of times is n/1.
            i=2, j = 2,4, the number of times is n/2.
            i=3,j= 3, ,the number of times is n/3.
            i=4, j = 4, the number of times is n/4.
            i=5,j= 5, ,the number of times is n/5.
Sum = n/1 +n/2 +n/3 +n/4 ….. n/n 
Sum = n(1 +1/2 +1/3 +1/4 ….. 1/n)   = n(logn)    
Total time complexity : O(n log n)..
Space complexity of the code segment is: O(n^2)
The code segment creates a vector of vectors,which is called a 2D vector.  
Thats why its take memory O(n^2)
```
**Answer 06**
```
Name		                        Public         Private     Protected

Accessibility from own class:        YES            YES          YES

Accessibility from derived class:    YES            NO           YES

Accessibility from world:            YES            NO            NO
```
**Answer 07**
```
In C++ ‘new’ and ‘delete’ are operators.
‘new’:
A new operator is used to allocate the memory at the runtime.The memory
Initialized by the new operator is allocated in a heap. 
Syntax for ‘new’:
void func()
{
    int* p = new int;
    return;
}
‘delete’:
A delete operator is used to release array and non-array (pointer) objects from the heap,which the new operator dynamically allocates to put variables on heap memory.
Syntax for ‘delete’:
void func()
{
    int* p = new int;
    delete p;
    return;
}

```
**Answer 08**
```
Yes,I agree with Bob. Alice's algorithm works in O(n^3),the worst case for Alice’s algorithm would be when n = 10^6. Which means its take (10^6)^3 =10^18 instructions to finish. Alice's computer can run 10^9 instructions in 1 second.
So,10^18/10^9=10^9 seconds needed to finish this program.
We know,1 Day  = 86400 seconds.
Then,10^9/86400 = 11574.07407Days.
11574.07407/365=31.7 years (almost).
So,it takes 31.7 years to finish.
```
**Answer 09**
```
Differences between binary search and linear search:
Linear Search:
1.  It sequentially searches an element by comparing each element stored in the given list from start to end. It is not mandatory to have a sorted list.
2.  Time complexity for linear search is O(n).
Binary Search:
1.  It is based on divide and conquer rule.It searches position on target value within a sorted array.
2. Time complexity for binary search is O(log n)
```
**Answer 10**
```
There is a flaw in the function because it is using dynamic memory allocation ‘new’ but it’s not releasing the dynamically allocated memory using ‘delete’ . As a result,the dynamically allocated memory will be leaked and will not be available for other parts of the program to use.

Modified Function:
void func()
{
    int* p = new int;
    delete p;
    return;
}
```
**Theory Exam 01 Answer Link**
[Theory 01 Answer](https://docs.google.com/document/d/1O4AEDNtT7kUVdCIHWfK6hTfNZteUf3ALY3rsk6KS3Wg/edit?usp=drivesdk).
