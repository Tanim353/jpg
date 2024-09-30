#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int dp[N];

int fib(int a)
{
    if (a == 0)
        return dp[0] = 0;
    if (a == 1)
        return dp[1] = 1;
    if (dp[a] == -1)
    {
        dp[a] = fib(a - 1) + fib(a - 2);
    }
    return dp[a];
}


int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < N; i++)
    {
        dp[i] = -1;
    }
    cout << fib(a) << endl;
}