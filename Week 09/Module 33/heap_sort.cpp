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

vector<int> heap_sort(vector<int>&a)
{
    MaxHeap heap;
    heap.build_from_array(a);
    vector<int>ans;
    for(int i=0;i<a.size();i++)
    {
        ans.push_back(heap.ExtractMax());
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int>v={1,2,3,4,10,9,8,7};
    vector<int>sorted=heap_sort(v);
    for(int i=0;i<sorted.size();i++)
    {
        cout<<sorted[i]<<" ";
    }
    return 0;
}

