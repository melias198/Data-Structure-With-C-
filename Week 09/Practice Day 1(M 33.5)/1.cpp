#include <bits/stdc++.h>

using namespace std;

template<class T>

class MaxHeap
{
public:
    vector<T> node;

    MaxHeap()
    {

    }

    void up_heapify(T index)
    {
        while (index > 0 && node[index] > node[(index - 1) / 2])
        {
            swap(node[index], node[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void Insert(T value)
    {
        node.push_back(value);
        up_heapify(node.size() - 1);
    }

    void down_heapify(T index)
    {
        while (1)
        {
            T largest = index;
            T left = 2 * index + 1;
            T right = 2 * index + 2;
            if (left < node.size() && node[largest] < node[left])
            {
                largest = left;
            }
            if (right < node.size() && node[largest] < node[right])
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

    void Delete(T index)
    {
        if (index >= node.size())
        {
            return;
        }
        swap(node[index], node[node.size() - 1]);
        node.pop_back();
        down_heapify(index);
    }

    T GetMax()
    {
        if (node.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        return node[0];
    }

    void PrintHeap()
    {
        for (int i = 0; i < node.size(); i++)
        {
            cout << node[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    MaxHeap<int> heap;
    heap.Insert(5);
    heap.Insert(4);
    heap.Insert(8);
    heap.Insert(6);
    heap.Insert(9);
    cout << heap.GetMax() << "\n";
    heap.PrintHeap();
    heap.Delete(0);
    heap.PrintHeap();
    return 0;
}
