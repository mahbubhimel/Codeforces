#include <iostream>

using namespace std;

int main()
{
    int a[1000];
    int x;
    cin >> x;
    for(int i = 1 ,  j =0 ; i <= x ; i++ , j++){
        a[j] = i ;
    }

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < x ; j++){
            if(a[i] * a[j] > x && (a[i] % a[j] == 0) && (a[i] % a[j] < x)){
                cout << a[i] << " " << a[j] << endl;
                exit(0);
            }
        }
    }
    cout << -1 << endl;

    return 0;
}
