#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
}

int main() {
    int a[100], n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sortArray(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
