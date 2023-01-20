/**
* author: asif_102
* created: 2023-01-18 22:33:38
**/
#include <bits/stdc++.h>
#include "MYSTACK.h"

int main(){
    Stack numst;
    numst.PUSH(10);
    numst.PUSH(20);
    numst.PUSH(30);
    numst.PUSH(40);
    numst.PUSH(50);
    numst.PUSH(60);
    numst.PUSH(70);
    numst.PUSH(80);
    // cout << numst.EMPTY();
    // cout << numst.SIZE();
    cout << "size: " << numst.SIZE() << '\n';

    while(numst.EMPTY() == false){
        cout << numst.TOP() << " ";
        numst.POP();
    }
    cout << "\nsize: " << numst.SIZE() << '\n';

    return 0;
}