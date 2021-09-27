#include<iostream>
#include "trie.h"
using namespace std;
int main()
{
    Trie t;
    vector<string> s = {"hello","hell","apple"};
    for(auto k:s)
    {
        t.insert(k);

    }
    string key;
    cin>>key;
    cout<<t.search(key)<<endl;
}