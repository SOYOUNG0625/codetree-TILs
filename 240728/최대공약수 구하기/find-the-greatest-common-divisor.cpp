#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, a=1;
    cin >> n >> m;
    for(int i=1;i<101;i++){
        if(n%i==0&&m%i==0){
            a=i;
        }
    }
    cout << a;
    return 0;
}