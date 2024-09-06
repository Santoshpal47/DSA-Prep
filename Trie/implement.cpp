#include <iostream>
using namespace std;

class Trie
{
public:
    Trie *arr[26];
    bool flag;

    Trie()
    {
        flag = false;
        for (int i = 0; i < 26; i++)
        {
            arr[i] = NULL;
        }
    }
};

void insertInTrie(Trie *root, string str)
{

    Trie *curr = root;
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';

        if (curr->arr[index] == NULL)
        {

            Trie *newnode = new Trie();

            curr->arr[index] = newnode;
        }
        curr = curr->arr[index];
    }
    curr->flag = true;
}

bool searchInTrie(Trie *root, string str)
{

    Trie *curr = root;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';

        if (curr->arr[index] == NULL)
        {
            return false;
        }
        curr = curr->arr[index];
    }
    return curr->flag;
}


void deleteStringInTrie(Trie* root,string str){

    

}

int main()
{
    Trie *root = new Trie();

    insertInTrie(root, "apple");
    insertInTrie(root, "cake");
    insertInTrie(root, "shop");
    insertInTrie(root, "soap");
    insertInTrie(root, "bubble");
    cout << endl;

    cout << "searcing for soap" << endl;

    cout << searchInTrie(root, "soap") << endl;
    cout << endl;
    cout << "searcing for cake" << endl;
    cout << searchInTrie(root, "cake") << endl;
    cout << endl;
    cout << "searcing for apple" << endl;

    cout << searchInTrie(root, "apple") << endl;

    cout << endl;
    cout << "searcing for honeymoon" << endl;

    cout << searchInTrie(root, "honeymoon") << endl;
    cout << endl;

    return 0;
}