#include <iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int i = 1, a = 1;
    while (i <= n) {
        a *= i; 
        i++;   
    }
    cout << a << endl;
    return 0;
}
