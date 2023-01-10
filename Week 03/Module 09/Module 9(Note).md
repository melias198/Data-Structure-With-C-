## Week 03

### (Module 9)

**Quick Sort**
```

Quicksort is a sorting algorithm based on the divide and conquer approach where
An array is divided into subarrays by selecting a pivot element (element selected from the array).

While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.
At this point, elements are already sorted. Finally, elements are combined to form a sorted array.

Code implentation:

#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int>a)
{
if(a.size()<=1)
return a;
int pivot=rand() % a.size(); //random shuffle
vector<int>b,c;
for(int i=0;i<a.size();i++)
{
    if(i==pivot)
    {
        continue;
    }
    if(a[i]<a[pivot])
    {
        b.push_back(a[i]);
    }
    else
    {
        c.push_back(a[i]);
    }
}
    vector<int> sorted_b=quick_sort(b);
    vector<int> sorted_c=quick_sort(c);
    vector<int> sorted_a;
    for(int i=0;i<sorted_b.size();i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);
    for(int i=0;i<sorted_c.size();i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ans=quick_sort(v);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}

1. Time Complexities
**Worst Case Complexity [Big-O]: O(n2)**
It occurs when the pivot element picked is either the greatest or the smallest element.
This condition leads to the case in which the pivot element lies in an extreme end of the sorted array. One sub-array is always empty and another sub-array contains n - 1 elements. Thus, quicksort is called only on this sub-array.
However, the quicksort algorithm has better performance for scattered pivots.

**Best Case Complexity [Big-omega]: O(n*log n)**
It occurs when the pivot element is always the middle element or near to the middle element.

**Average Case Complexity [Big-theta]: O(n*log n)**
It occurs when the above conditions do not occur.

2. Space Complexity
The space complexity for quicksort is O(log n).
```