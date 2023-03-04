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
      //O(logn)
       void down_heapify(int index)
       {
        while(1)
        {
            int largest=index;
            int l=2*index+1;
            int r=2*index+2;
            if(l<node.size() && node[largest]<node[l])
            {
                largest=l;
            }
            if(r<node.size() && node[largest]<node[r])
            {
                largest=r;
            }
            if(largest==index)
            {
             break;
            }
            swap(node[index],node[largest]);
            index=largest;
        }
       }
       //O(logn)
       void Delete(int index)
       {
        if(index>=node.size())
        {
            return;
        }
        swap(node[index],node[node.size()-1]);
        node.pop_back();
        down_heapify(index);
       }
      //O(1)
       int GetMax()
       {
        if(node.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        return node[0];
       }
      //O(logn)
       int ExtractMax()
       {
        if(node.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        int ret=node[0];
        Delete(0);
        return ret;
       }
};

int main()
{
    MaxHeap heap;
    heap.Insert(5);
    heap.Insert(4);
    heap.Insert(8);
    heap.Insert(6);
    heap.Insert(9);
    cout<<heap.GetMax()<<"\n";
    heap.PrintHeap();
    //heap.Delete(0);
    cout<<heap.ExtractMax()<<"\n";
    heap.PrintHeap();
    return 0;
}

