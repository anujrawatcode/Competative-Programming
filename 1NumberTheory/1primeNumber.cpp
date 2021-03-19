#include <bits/stdc++.h>
using namespace std;

bool isPrime1(int n) // O(n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool isPrime2(int n) // O(n)
{
    for (int i = 2; i < n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool isPrime3(int n) // O(sqrt(n))
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    cout << isPrime3(5);
}