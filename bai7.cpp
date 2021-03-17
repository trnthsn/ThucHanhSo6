#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numbers;
string path;
int n;
void getWord()
{
    ifstream file;
    file.open(path);
    file >> n;
    for (int i = 0; i < n; i++)
    {
    	int temp;
    	file >> temp;
    	numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end());
}

int main()
{
	getline(cin, path);
	getWord();
	int pos = n / 2 ;
	cout << numbers[pos - 1];
}