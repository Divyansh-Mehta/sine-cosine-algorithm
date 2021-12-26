#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int numbers[n - 1];
    for (int i = 0; i < n - 1; i++){
        cin >> numbers[i];
    }
    long long sum = 0;
    for (int i = 0; i < n - 1; i++){
        sum += numbers[i];
    }

    cout << ((n * (n + 1) ) / 2) - sum;
    return 0;
}