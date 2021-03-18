#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    if (b == 0)
        return a;
    else
        return ucln(b, a % b);
}

void write(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int bcnn(int a, int b)
{
    return (a * b) / ucln(a, b);
}

int main()
{
    int m, n;
    int count = 0;
    cin >> m >> n;
    int a[1000], b[1000];
    write(a, m);
    write(b, n);
    // tìm bội chung nhỏ nhất của mảng thứ nhất
    int bcnn1 = a[0];
    for (int i = 0; i < m; i++)
    {
    	bcnn1 = bcnn(bcnn1, a[i]);
    }
    // tìm ước chung lớn nhất của mảng thứ 2
    int ucln1 = b[0];
    for (int i = 0; i < n; i++)
    {
    	ucln1 = ucln(ucln1, b[i]);
    }
    // check các số thoả mãn yêu cầu đề bài
    for (int i = bcnn1; i <= ucln1; i++)
    {
    	if (i % bcnn1 == 0 && ucln1 % i == 0)
    	{
    		count++;
    	}
    }
    cout << count;
}
