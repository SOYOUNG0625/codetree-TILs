#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a, ft=30.48;
    cout << fixed;
    cin >> a;
    cout.precision(1);
    cout << a*ft;
    return 0;
}