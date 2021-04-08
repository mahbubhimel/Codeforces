#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , a , b , c , d;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a >> c >> d >> b;
        if(a != b){
            cout << a << " " << b << endl;
        }else{
            if((b-1) != a){
                cout << a << " " << (b - 1) << endl;
            }else{
                cout << (a + 1) << " " << b << endl;
            }
        }
    }
    return 0;
}
