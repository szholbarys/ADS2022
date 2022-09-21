#include <iostream>
#include <stack>

using namespace std;


bool prime = true;

int main(){
    stack<int> st;
    int n;
    cin >> n;
    if(n <= 1){
        cout << "NO";
    }else{
       st.push(n);
    }
    for(int i = 2; i*i <= st.top(); i++){
        if(st.top() % i == 0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
} 