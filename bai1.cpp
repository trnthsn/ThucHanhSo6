#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

std::vector<int> numbers;

int countNumber(string s)
{
    int temp;
    ifstream file;
    file.open(s);
    if (file.is_open())
    {
        int temp;
        while (file >> temp)
        {
            numbers.push_back(temp);
        }
    }
    return numbers.size();
}

void getValue(int &max, int &min, int &sumValue)
{
    min = numbers[0];
    max = numbers[0];
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        sumValue += numbers[i];
    }
}
int main()
{
    int max, min, sumValue;
    string s;
    getline(cin, s);
    cout << countNumber(s);
    getValue(max, min, sumValue);
    cout << " " << min << " " << max << " " << sumValue;
}