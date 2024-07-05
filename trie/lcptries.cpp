/*
// tries
    // algo  if root node has one child then add it to ans

class TrieNode{
public:
char data;
TrieNode* children[26];
int childCount;
bool isTerminal;

TrieNode(char ch){
    data = ch;
    for(int i=0;i<26;++i){
        children[i]=NULL;
    }
    isTerminal = false;
    childCount = 0;

}
};
class Trie{
    public:
    TrieNode* root;

    Trie(char ch){
        root = new TrieNode(ch);
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
        int index = word[0] - 'a';
        TrieNode *child;

        // word is present
        if (root->children[index] != NULL)
            child = root->children[index];

        // word is absent
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
            root->childCount++;
        }

        wordUtil(child, word.substr(1));
    }

    void wordInsert(string word)
    {
        wordUtil(root, word);
    }

    void lcp(string str, string &ans){
         for(int i=0;i<str.length();++i){
             char ch = str[i];
             if(root->childCount==1){
                 ans.push_back(ch);
                //  continue
                 int index = ch -'a';
                 root = root->children[index];
             }
             else break;

             if(root->isTerminal) break;
         }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
 Trie *t = new Trie('\0');

 for(int i=0;i<n;++i){
     t->wordInsert(arr[i]);
 }
    string first = arr[0];
    string ans = "";
    t->lcp(first,ans);
return ans;
}



*/