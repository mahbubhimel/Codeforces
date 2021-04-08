#include <iostream>

using namespace std;

int main()
{
    int x, y ,z , sumx , sumy , sumz;
    sumx = sumy = sumz = 0;
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> x >> y >> z;
        sumx = sumx+x;
        sumy = sumy+y;
        sumz = sumz+z;

    }

    if(sumx == 0 &&  sumy == 0 && sumz == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
