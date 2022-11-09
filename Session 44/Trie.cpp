#include<iostream>
using namespace std;

class TrieNode{
  public:
    int data;
    bool isTerminal;
    TrieNode* children[26];
    
    TrieNode(int data){
      this->data = data;
      isTerminal = false;
      for (int i = 0; i < 26; i++)
      {
        children[i] = NULL;
      }
      
    }
};

class Trie{

  public:
    TrieNode* root;

    Trie(){
      root = new TrieNode('\0');
    }

    void insertHelper(TrieNode* root, string word){
      //base case
      if(word.length() == 0){
        root->isTerminal = true;
        return;
      }

      //current character fetch
      char ch = word[0];

      //mapping character to an index integer
      int index = ch - 'a';

      TrieNode* child;
      //2 caase is present 
      //1. The Alphabet is present 
      //2. The Alphabet is not present

      if(root->children[index] != NULL){
        //present case = child prr pauch jayo
        child = root->children[index];
      }else{
        //absent case = child create and link
        child = new TrieNode(ch);
        root->children[index] = child;
      }

      //now Recursion will be take care of rest of them
      insertHelper(child, word.substr(1));
    }

      void insert(string word) {
            insertHelper(root, word);
            cout << word << " -> Insert successful " << endl;
        }

};

 
int main()
{
      //trie create

    Trie* trie = new Trie();

    //insert code
    trie->insert("code");
    trie->insert("coding");
    trie->insert("codemonk");
    trie->insert("coder");
    trie->insert("codee");
 
 
 
 return 0;
}