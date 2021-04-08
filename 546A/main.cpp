#include <bits/stdc++.h>
using namespace std;

int main()
{
    int banana , money , number_of_banana;
    cin >> banana >> money >> number_of_banana;
    int result = 0;

    for(int i = 1 ; i <= number_of_banana ; i++){
        int sum = banana * i;
        result = result + sum;
    }

    if((result - money) > 0){
        cout << result - money << endl;
    }else{
        cout << "0" << endl;
    }
    return 0;
}
