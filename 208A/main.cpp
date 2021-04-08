#include <iostream>
#include <string>

using namespace std;
char array[205];
int main()
{
    string song;
    cin >> song;
    int length = song.length();

    for(int i = 0 ; i < length ; i++){
        array[i] = song.at(i);
    }
    array[length+1] = '\0';

    for(int i = 0 ; i < length ; i++){
        if(array[i] == 'W' && array[i+1] == 'U' && array[i+2] == 'B'){
            array[i]=array[i+1]=array[i+2] = '\0';
        }
    }

    int counter = 0;

    for(int i = 0 ; i < length ; i++){
        if(array[i] != '\0'){
            counter++;
            cout << array[i];
        }else if(counter != 0 && array[i] == '\0' && array[i+1] != '\0'){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
