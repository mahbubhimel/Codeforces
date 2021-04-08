#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n , s , v;
    cin >> n >> s;
    long long int sum = 0;
    long long int minimum = 1e18;

    for(int i = 0 ; i < n ; i ++){
        cin >> v;
        sum = sum + v;
        minimum = min(v , minimum);
    }

    if(sum < s){
        cout << -1 << endl;
    }else{
        cout << min(((sum - s) / n) , minimum) << endl;
    }
    return 0;
}
