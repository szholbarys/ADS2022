#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <char> s1;
    stack <char> s2;
    string a, b;
    cin >> a >> b;
    for(int i = 0;i < a.size();i++){
        if(isalpha(a[i])){
            s1.push(a[i]);
        }else if(a[i] == '#'){
            s1.pop();
        }
    }
    for(int i = 0;i < b.size();i++){
        if(isalpha(b[i])){
            s2.push(b[i]);
        }else if(b[i] == '#'){
            s2.pop();
        }
    }
    if(s1.size() == s2.size()){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}