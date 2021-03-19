#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

string combineWordsFromFile(const char fileName[])
{
    vector<string> words;
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
    sort(words.begin(), words.end());
    for (int i = words.size() - 1; i >= 0; i--)
    {
        s += words[i];
        if (i)
            s += " ";
    }
    return s;
}
/*


int main()
{
    char testFileName[] = "words1.txt";
    string combined = combineWordsFromFile(testFileName);
    cout << combined << endl;
    cout << boolalpha << ("this test is a" == combined);
}
*/