## Week 02

## Module 5.5(Practice Day)

**1**
```
Write the time complexity of each of the code segments shown below.
1.

int k=1;
while(k<=n){
	cout<<k<<endl; 
	k=k*2;
}

2.

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;

3.

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

4.

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j*2){
   		cout<<i<<j<<endl;
	}
}

5.

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j+i){
   		cout<<i<<j<<endl;
	}
}

6.

for(int i=1;i<=n;i++)
{
	if(builtin_popcount(i) == 1)
	{
		for(int j=1;j<=n;j++)
			cout<<i<<j<<endl;
	}
}
Note: builtin_popcount(i) returns the number of set bits in 'i'.
For example, builtin_popcount(5) = 2. Because, 5 = (101)2. So there are 2 set bits in 5. 

```
**2**
```
WAP that takes an array of size n and q queries as input. For each query you will be given a number. For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’. Solve the problem in O((n+q)*logn)
Sample input 01
5
6 3 2 1 8

4

1
5
2
9

Sample output 01
YES
NO
YES
NO

Explanation: You are given an array of size 5 and 4 queries. In the first query you are given 1. 1 is present in the array so we print ‘YES’. In the second query 5 is not present in the array so we print ‘NO’. Third and Fourth query are similar.

Hint: First sort the array with the STL sort function which works in O(nlogn), then for each query binary search the value in the sorted array.
```
**3**
```
Modify the bubble sort and insertion sort code to sort in non-increasing order.
Sample input 01
5
4 5 2 4 1
Sample input 02
3
1 2 1
Sample output 01
5 4 4 2 1
Sample output 02
2 1 1
```