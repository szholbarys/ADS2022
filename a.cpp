#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        deque<int> dq;
        cin >> m;
        for (int j = m; j > 0; j--) {
            dq.push_back(j);
            for (int k = 0; k <= j; k++) {
                int temp = dq.back();
                dq.pop_back();
                dq.push_front(temp);
            }
        }
        while (dq.empty() == false) {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }
    return 0;
}