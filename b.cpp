#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    stack <int> stack;

    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(stack.empty()){
            cout << -1 << " ";
            stack.push(a[i]);
        }else{
            while(!stack.empty() && stack.top() > a[i]){
               stack.pop(); 
            }
            if(stack.empty()){
                cout << -1 << " ";
                stack.push(a[i]);
            }else{
                cout << stack.top() << " ";
                stack.push(a[i]);
            }
        }
    }
    return 0;
}