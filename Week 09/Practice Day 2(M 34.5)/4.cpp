#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }
    map<int, int> mp;
    int index = -1;
    
    for(int i = 0; i < n; i++) {
        if(mp.find(arr[i]) != mp.end()) {
            index = mp[arr[i]];
            break;
        }
        mp[arr[i]] = i;
    }

    if(index == -1) {
        cout << "There is no duplicate element in the array." << endl;
    } else {
        cout << "The first duplicate element is " << arr[index] << " and it first occurred at index " << index << "." << endl;
    }

    return 0;
}
