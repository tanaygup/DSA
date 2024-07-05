#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; ++i)
        {
            children[i] = NULL;
        }
        bool isTerminal = false;
    }
};
class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }
    void wordUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assumption- all letters in CAPS
        int index = word[0] - 'A';
        TrieNode *child;

        // word is present
        if (root->children[index] != NULL)
            child = root->children[index];

        // word is absent
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        wordUtil(child, word.substr(1));
    }

    void wordInsert(string word)
    {
        wordUtil(root, word);
    }
    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;

        //   present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchUtil(child,word);
    }
    bool search(string word)
    {
        return searchUtil(root, word);
    }
    bool removeUtil(TrieNode* root,string word){
          if (word.length() == 0){
            if(!root->isTerminal) return false;
          }
        root->isTerminal=false;
         
    }
    bool remove(string word){
        removeUtil(root,word);
    }
};
int main()
{
    Trie *t = new Trie();
    t->wordInsert("ABCD");
    return 0;
}
