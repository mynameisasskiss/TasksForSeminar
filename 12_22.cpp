#include <iostream>
using namespace std;

int main()
{
    int arr[9][9];
    for(int y=0;y<9;y++) {
        for(int x=0;x<9;x++) {
            arr[y][x]=(x+1)*(y+1);
            cout<<arr[y][x]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
