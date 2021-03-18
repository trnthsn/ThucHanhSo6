#include <bits/stdc++.h>

using namespace std;
struct comp 
{
    bool operator()(string const &i, string const &j) const
    {
        return i > j;
    }
};
string combine(const vector<string> &words)
{
    string s;
    vector<string> temp;
    for (int i = 0; i < words.size(); i++)
    {
        temp.push_back(words[i]);
    }
    sort(temp.begin(), temp.end(), comp());
    for (int i = 0; i < temp.size(); i++)
    {
        if (i < temp.size() - 1)
        {
            s += temp[i];
            s += " ";
        }
        else
            s += temp[i];
    }
    return s;
}
/* this is test case.

int main()
{
    string s[] = {"this", "is", "a", "test"};
    vector<string> words(s, s + 4);
    string combined = combine(words);
    cout << combined << endl;
    cout << boolalpha << ("this test is a" == combined);

}
*/