#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n , k;
    int arrayN[100] , arrayK[100];

    cin >> t ;

    for(int i = 0 ; i < t ; i++){
        cin >> arrayN[i] >> arrayK[i];
    }

    int loop = 0;
    int count = 0;
    int poop;

    for(int i = 0 ; i < t ; i++){
        while(count != arrayN[i]){
        for(poop = 97 ; poop < (97 + arrayK[i]) ; poop++){
            cout << (char)poop;
            count++;
            if(count == arrayN[i]){
                break;
            }
        }
    }
    cout << endl;
    count = 0;
    }

    return 0;
}
