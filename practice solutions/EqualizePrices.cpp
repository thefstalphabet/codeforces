#include <bits/stdc++.h>
using namespace std;
void solution()
{
    // n is for number of products
    // k is the max value
    int n, k, ele, newPrice = INT_MAX;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        vec[i] = ele;
        newPrice = min(ele, newPrice);
    }
    newPrice = newPrice + k;
    bool flag = true;
    for (auto item : vec)
    {
        if (abs(newPrice - item) > k)
            flag = false;
    }
    if (flag)
    {
        cout << newPrice << endl;
    }
    else
        cout << "-1" << endl;
}
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solution();
    }

    return 0;
}