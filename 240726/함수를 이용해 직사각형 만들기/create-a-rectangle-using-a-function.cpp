#include <iostream>
using namespace std;

void PrintRect(int n, int m) {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    PrintRect(n, m);
    return 0;
}