/**
* author: asif_102
* created: 2023-01-18 22:12:56
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> numst;
    numst.push(10);
    numst.push(20);
    numst.push(30);
    numst.push(40);

    // if(numst.empty() == false){
    //     numst.pop();
    // }
    // if(numst.empty() == false){
    //     numst.pop();
    // }
    // if(numst.empty() == false){
    //     numst.pop();
    // }
    // if(numst.empty() == false){
    //     numst.pop();
    // }
    // if(numst.empty() == false){
    //     numst.pop();
    // }

    // if(numst.empty() == false){
    //     cout << numst.top() << '\n';
    // }

    while(numst.empty() == false){
        cout << numst.top() << " ";
        numst.pop();
    }


    
    // cout << numst.empty();
    return 0;
}