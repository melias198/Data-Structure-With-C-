#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
public:
       vector<int>node;
       MaxHeap()
       {

       }

      //O(logn)
       void up_heapify(int index)
       {
         while(index>0 && node[index]>node[(index-1)/2])
         {
            swap(node[index],node[(index-1)/2]);
            index=(index-1)/2;
         }
       }

      //O(logn)
       void Insert(int x)
       {
        node.push_back(x);
        up_heapify(node.size()-1);
       }
       
      //O(n)
       void PrintHeap()
       {
        for(int i=0;i<node.size();i++)
        {
            cout<<node[i]<<" ";
        }
        cout<<"\n";
       }
};

int main()
{
    MaxHeap heap;
    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);
    heap.PrintHeap();
    return 0;
}

