#include <bits/stdc++.h>

using namespace std;

int main() {
    string text;
    cin>>text;
    map<string, int> wordCount;
    string word = "";

    for (auto c : text) {
        if (c == ' ') 
        {
            if (word.length() > 0) 
            {
                wordCount[word]++;
                word = "";
            }
        }
        else
        {
            word += c;
        }
    }
    if (word.length() > 0)
    {
        wordCount[word]++;
    }

    string maxWord = "";
    int maxCount = 0;
    for (auto it = wordCount.begin(); it != wordCount.end(); ++it)
     {
        if (it->second > maxCount)
        {
            maxWord = it->first;
            maxCount = it->second;
        } 
        else if (it->second == maxCount && it->first < maxWord)
        {
            maxWord = it->first;
        }
    }

    cout << "Maximum occurring word: " << maxWord << endl;

    return 0;
}
