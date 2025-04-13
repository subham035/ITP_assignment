#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n1, n2;
    cin >> n1;
    for(int i = 0; i < n1; i++) cin >> a[i];
    cin >> n2;
    for(int i = 0; i < n2; i++) cin >> b[i];
    for(int i = n2-1; i >= 0; i--) cout << b[i] << " ";
    for(int i = n1-1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}
