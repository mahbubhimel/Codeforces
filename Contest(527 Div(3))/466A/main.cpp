#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rides,m,a,b;
    cin >> rides >> m >> a >> b;
    int resultB = 0;
    int resultA = 0;
    int result = 0;
    int loop = 0;
    int ride = rides;
    while(rides!=0){
        if(m > rides && loop == 0){
            result = result + b;
            loop++;
        }
        if(rides >= m){
            rides = rides - m;
            resultB = resultB + b;
        }else if(rides < m &&  a > b){
            rides = rides - rides;
            resultB = resultB + b;
        }else{
            rides = rides - 1;
            resultA = resultA + a;
        }
    }

    int rido = 0;

    while(ride!=0){
        ride = ride -1;
        rido = rido + a;
    }

    resultA = min(resultA , result);
    resultB = min(rido,resultB);

    cout << resultB + resultA << endl;

    return 0;
}
