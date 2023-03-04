#include <bits/stdc++.h>

using namespace std;

class MinHeap
{
public:
       vector<int>node;
       MinHeap()
       {

       }
     //O(logn)
       void up_heapify(int index)
       {
         while(index>0 && node[index]<node[(index-1)/2])
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
    MinHeap heap;
    heap.Insert(5);
    heap.Insert(4);
    heap.Insert(8);
    heap.Insert(6);
    heap.Insert(9);
    heap.PrintHeap();
    return 0;
}

