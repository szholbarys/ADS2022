#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main(){
    queue<char> q;
    stack<char> st;
    int n;
    string s;
    cin >> n >> s;

    for(int i = 0;i < n;i++){
        q.push(s[i]); // KSKS
    }
    while(!q.empty()){
        if(st.empty()){
            st.push(q.front());  
        }else if(st.top() != q.front()){
            q.push(st.top()); // q = KK
            st.pop();
        }else{
            st.push(q.front());
        }
        q.pop();
    }
    if(st.top() == 'K'){
        cout << "KATSURAGI" ;
    }else{
        cout << "SAKAYANAGI";
    }
    return 0;
}