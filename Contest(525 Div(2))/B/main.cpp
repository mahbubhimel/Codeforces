#include <iostream>
#include <algorithm>

using namespace std;

void zero(int n){
    for(int i = 0 ; i < n ; i++){
        cout << 0 << endl;
    }
}

int main()
{
    int n , k;
    cin >>  n >> k;
    int a [n+5];

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    if(n == 1){
            cout << a[0] << endl;
            zero(k-1);
            exit(0);
    }
    sort(a , a+n);

    int loop = 0;
    int poop = 0;

        for(int i = 0 ; i < n-1 ; i++){
            if(poop == 0 && a[i] != 0){
                    cout << a[i] << endl;
                    poop++;
                    if(poop == k){
                        break;
                    }
            }
            if(poop > 0){
               if(a[i + 1] > a[i]){
                cout << abs(a[i+1] - a[i]) << endl;
                loop++;
               }
            }

            if((loop + poop) == k){
                break;
            }
        }

        zero(k-(loop + poop));

    return 0;
}
