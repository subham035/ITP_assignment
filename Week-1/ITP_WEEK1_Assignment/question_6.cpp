#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) {  
            for (int k = 1; k <= i; k++) {  
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}
