#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int long long value = 0;
    int long long number = 0;
    long long int sum = 0;

    value = (n*(n+1))/2;

    sum = value/2;
    number = abs(value - sum);

    cout << abs(sum - number) << endl;
    return 0;
}
