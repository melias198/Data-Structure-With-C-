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
       
       //O(n)
       void build_from_array(vector<int>&a)
       {
        node=a;
        int n=node.size();
        int last_leaf=n/2-1;
        for(int i=last_leaf;i>=0;i--)
        {
            down_heapify(i);
        }
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
    vector<int>v={1,2,3,4,10,9,8,7};
    heap.build_from_array(v);
    heap.PrintHeap();
    return 0;
}

