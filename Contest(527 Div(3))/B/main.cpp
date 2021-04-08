#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    int count = 0;

    for(int i = 0 ; i  < n ; i++){
        cin >> array[i];
    }

    sort(array , array+n);

    for(int i = 0 ; i < n ; i = i + 2){
        count = count + abs(array[i] - array[i+1]);
    }

    cout << count << endl;

    return 0;
}
