#include <iostream>
#include <queue>
using namespace std;

int main(){
    deque <int> d;
    int sum = 0;
    char c;
    int n;
    while(c != '!'){ // ! корсеткенше цикл жумыс жасай береди, корсеткен жагдайда токтайды
        cin >> c;
        if(c == '+'){ // + болса дек алдына косамыз
            cin >> n;
            d.push_front(n);
        }
        else if(c == '-'){ // -  болса дек сонына косамыз
            cin >> n;
            d.push_back(n); 
        }
        if(c == '*'){ // 1)* болса алдындагы элементпен сонындагы элементти косамыз жане оширип тастаймыз
            if(d.size() == 0){ // дек бос болса еррор шгарамыз
                cout << "error" << endl;
            }
            else {
                sum = d.front() + d.back(); // 2)* алдындагы элементпен сонындагы элементти косып суммасын шгарамыз
                cout << sum << endl;
                sum = 0;
                if(d.size() == 1){ 
                    d.pop_back();
                }
                else{
                    d.pop_front(); // алдындагы элементпен сонындагы элементти  оширемиз
                    d.pop_back();
                }
                
            }
        }
    
        
    }
}