#include <iostream>

using namespace std;

int main(){
    int n , k;
    cout << "Enter n: ";
    cin >> n ;
    cout << "Enter k: ";
    cin >> k ;
    int i = 0;
    while(i < n){
        cout << "-";
        i++;
    }
    cout << endl;
    i = n*n;
    while(i > 0){
        if(i % k == 0)
            cout << 'o';
        else
            cout << 'x';
        if(n == 1 || i % n == 1)
            cout << endl;
        i--;
    }
    i = 0;
    while(i < n){
        cout << "-";
        ++i;
    }
    cout << endl;
    return 0;
}