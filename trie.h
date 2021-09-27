#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    char ch;
    unordered_map<char,node*> m;
    bool isTerminal;
    

    node(char ch)
    {
        ch = ch;
        isTerminal = false;
    }

};
class Trie
{
    node *root;
    public:
    Trie()
    {
        root = new node('\0');
    }
    //insertion
    void insert( string word)
    {
        node *temp = root;
        for(auto ch:word)
        {
            if(temp->m.count(ch)==0)
            {
                node *n = new node(ch);
                temp->m[ch] = n;


            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }

    // searching
    bool search(string word)
    {
        node *temp = root;
        for(auto ch:word)
        {
            if(temp->m[ch]==0)
            {
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }

};
