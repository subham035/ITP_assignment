#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }
    int maxCount = 0, res = -1;
    for(auto p : freq)
        if(p.second > maxCount) {
            maxCount = p.second;
            res = p.first;
        }
    cout << res;
    return 0;
}
