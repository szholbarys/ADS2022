#include <iostream>
#include <stack>
using namespace std;

bool prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    stack <int> v;
    int n , s; 
    cin >> n;
    if(n == 1){
        cout << 2;
        return 0;
    }
    for(int i = 2 ; i < 10000; i++){
        s = prime(i);
        if(s){
            v.push(i);
            if(n == v.size()){   // 2 3 5 7 11
                break;
            }
        }
    }
    cout << v.top();
}