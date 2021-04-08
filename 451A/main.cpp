#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int horizontal , vertical;

    int count = 0;
    cin >> horizontal >> vertical;

    while(horizontal >0 && vertical >0){
        horizontal = horizontal -1 ;
        vertical = vertical -1 ;
        count++;
    }

    if(count % 2 == 0){
        cout << "Malvika" << endl;
    }else{
        cout <<"Akshat" << endl;
    }

    return 0;
}
