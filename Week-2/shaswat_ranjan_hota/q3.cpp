#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) b[i] = a[i];
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;
}
