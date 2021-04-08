#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , a_start , a_end , b_start , b_end;
    cin  >> n >> a_start >> a_end >> b_start >> b_end;
    int ini_sa = a_start;
    int ini_sb = b_start;
    int loop = 0 , poop = 0;

    if(a_start == b_start){
        cout <<"YES"<<endl;
        exit(0);
    }

    while(1){

        if(a_start != a_end){a_start += 1;}
        if(a_start == n+1){
            a_start = 1;
        }
        if(b_start != b_end){b_start -= 1;}
        if(b_start == 0){
            b_start = n;
        }

        //cout << a_start <<"," << b_start << endl;

        if(a_start == b_start){
            cout << "YES" << endl;
            exit(0);
        }

        if(((a_start == a_end) || (b_start == b_end))){
            break;
        }
    }

    cout << "NO" << endl;

    return 0;
}
