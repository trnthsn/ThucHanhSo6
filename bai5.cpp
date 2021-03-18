#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

vector<string> words;
struct comp
{
    bool operator()(string const &i, string const &j) const
    {
        return i > j;
    }
};

string combineWordsFromFile(const char fileName[])
{
    ifstream file;
    file.open(fileName);
    if (file.is_open())
    {
        string temp;
        while (file >> temp)
        {
            words.push_back(temp);
        }
    }
    string s;
    sort(words.begin(), words.end(), comp());
    for (int i = 0; i < words.size(); i++)
    {
        if (i == words.size() - 1)
        {
            s += words[i];
        }
        else
        {
            s += words[i];
            s += " ";
        }
    }
    return s;
}

int main()
{
    char testFileName[] = "words1.txt";
    string combined = combineWordsFromFile(testFileName);
    cout << combined << endl;
    cout << boolalpha << ("this test is a" == combined);
}