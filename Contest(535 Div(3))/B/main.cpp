#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    int array[n];

    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }

    sort(array , array+n);

    /*for(int i = 0 ; i < n ; i ++){
        cout << array[i] << " ";
    }*/

    for(int i = n - 1 ; i >= 0 ; i--){
        if((array[n-1] % array[i]) != 0){

                if(array[i] < 0){
                    break;
                }
            cout << array[n-1]  << " " << array[i] << endl;
            count++;
            exit(0);
        }
    }

    if(count <= 0){
        cout << array[n-1]  << " " << array[n-2] << endl;
    }
    return 0;
}
