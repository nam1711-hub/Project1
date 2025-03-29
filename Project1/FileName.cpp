#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int i = 0;
    while (i <= n) {
        n += i; 
        i++;   
    }
    cout << "Giá trị cuối cùng của n: " << n << endl;
    return 0;
}
