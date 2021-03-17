#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> customer;


void get()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		customer.push_back(temp);
	}
	sort(customer.begin(), customer.end());
}

int timeConsume(int queue[], int n)
{
	int timeConsumer = 0;
	for (int i = 0; i < n; i++)
	{
		timeConsumer += queue[i];
	}
	return timeConsumer;
}

int main()
{
	get();
	int queue[customer.size()];
	queue[0] = 0;
	for (int i = 1; i < customer.size(); i++)
	{
		queue[i] = queue[i - 1] + customer[i - 1];
	}
	cout << timeConsume(queue, customer.size());
}