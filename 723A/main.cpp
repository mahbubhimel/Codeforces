#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[3];

    for(int i = 0 ; i < 3 ; i++){
        cin >> array[i];
    }

    sort(array , array+3);

    int distance = abs(array[1] - array[0]) + abs(array[1] - array[2]);
    cout << distance << endl;

    return 0;
}
