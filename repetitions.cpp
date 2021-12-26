#include<iostream>
using namespace std;

int max(int a, int b){
    return a >= b ? a : b;
}

int main(){
    string s;
    cin >> s;
    int count = 1, maxCount = 0; 
    char lastCharacter = s[0];
    for (int i = 1; s[i] != '\0'; i++){
        if (s[i] == lastCharacter){
            count++;
        }
        else{
            lastCharacter = s[i];
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    maxCount = max(maxCount, count);

    cout << maxCount;
    return 0;
}