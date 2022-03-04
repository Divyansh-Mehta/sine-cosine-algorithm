#include <iostream>
using namespace std;
#define int long long int

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> y >> x;
        if (x > y){
            if (x % 2 == 0){
                //(x - 1) * (x - 1) + 1 + y - 1 
                cout << (x - 1) * (x - 1) + y << "\n";
            }
            else{
                cout << x * x - y + 1 << "\n";
            }
        }
        else{
            if (y % 2 == 0){
                cout << y * y - x + 1 << "\n";
            }
            else{
                //(y - 1) * (y - 1) + 1 + x - 1 
                cout << (y - 1) * (y - 1) + x << "\n";
            }
        }
    }
    return 0;
}