#include<iostream>
#include<queue>

using namespace std;

int main(){
    deque<int> b(5);
    deque<int> n(5);
    for(int i = 0;i < 5;i++){
        cin >> b[i];
    }
    for(int i = 0;i < 5;i++){
        cin >> n[i];
    }

  
    int cnt = 0;   
    while(not b.empty() && not n.empty() && cnt < 1000000){
       cnt++;
       int a = b.front(), d = n.front(); 
       b.pop_front();                      // 1 3 5 7 9
       n.pop_front();                      // 2 4 6 8 0
  
      if(a == 0 && d == 9){
        b.push_back(a);
        b.push_back(d);
      }else if(a == 9 && d == 0){
        n.push_back(a);
        n.push_back(d);
      }else if(a > d){
        b.push_back(a);
        b.push_back(d);
      }else if(d > a){
        n.push_back(a);
        n.push_back(d);
      }
    }
    if(b.empty()){
        cout << "Nursik " << cnt;
    }else{
        cout << "Boris " << cnt;
    }
    return 0;
}