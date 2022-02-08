#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    int prime[n + 1] = {0};
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sieve(n);
    return 0;
}