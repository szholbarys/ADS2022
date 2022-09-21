#include <iostream>
using namespace std;

bool prime = true;

int main(){
    int n;
    cin >> n;
    if(n < 2){
        prime = false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = false;
        }
    }if(prime == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
}