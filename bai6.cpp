#include <iostream>
#include <vector>

using namespace std;

vector<int> listSquare(int a, int b)
{
    vector<int> temp;
    for (int i = 0; i * i <= b; i++)
    {
        if (i * i > a && i * i < b)
        {
            temp.push_back(i * i);
        }
    }
    return temp;
}
/*

int main()
{
    vector<int> a = listSquare(-1, 120);
    cout << a.size() << endl;
    for (int i = a.size() - 1; i >= 0; --i)
        cout << a[i] << " ";
}
*/