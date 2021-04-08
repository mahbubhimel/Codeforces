#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;
    int sum = 0;
    int maximum = 0;

    for(int i = 0 ; i < n ; i++){
        int j , k;
        cin >> j >> k;
        result = sum - j;
        sum = result + k;
        if(maximum < sum){
            maximum = sum;
        }
    }

    cout << maximum << endl;
    return 0;
}
