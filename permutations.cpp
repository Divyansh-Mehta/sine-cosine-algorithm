#include<iostream>
using namespace std;

/*
for n > 3 we will put all odd no. together and all even no. together 
so that difference between them would always be 2 or more
*/

int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }
    int arr[n];
    int index = 0;
    for (int i = 2; i <=n; i += 2){
        arr[index] = i;
        index++;
    }

    for (int i = 1; i <= n; i += 2){
        arr[index] = i;
        index++;
    }

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}