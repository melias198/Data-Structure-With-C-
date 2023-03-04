#include <bits/stdc++.h>

using namespace std;

class MinHeap
{
public:
    vector<int> node;

    MinHeap()
    {

    }

    void up_heapify(int index)
    {
        while (index > 0 && node[index] < node[(index - 1) / 2])
        {
            swap(node[index], node[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void Insert(int value)
    {
        node.push_back(value);
        up_heapify(node.size() - 1);
    }

    void down_heapify(int index)
    {
        while (1)
        {
            int largest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            if (left < node.size() && node[largest] > node[left])
            {
                largest = left;
            }
            if (right < node.size() && node[largest] > node[right])
            {
                largest = right;
            }
            if (largest == index)
            {
                break;
            }
            swap(node[index], node[largest]);
            index = largest;
        }
    }

    void Delete(int index)
    {
        if (index >= node.size())
        {
            return;
        }
        swap(node[index], node[node.size() - 1]);
        node.pop_back();
        down_heapify(index);
    }

    int GetMin()
    {
        if (node.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        return node[0];
    }

    int ExtractMin()
    {
        if (node.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        int ret=node[0];
        Delete(0);
        return ret;
    }

    void PrintHeap()
    {
        for (int i = 0; i < node.size(); i++)
        {
            cout << node[i] << " ";
        }
        cout << "\n";
    }

    void heap_sort()
    {
      int n=node.size();
      for(int i=0;i<n;i++)
      {
        cout<<ExtractMin()<<" ";
      }
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
    heap.heap_sort();
    return 0;
}
