#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int N;
    cin >> N;
    int arr[N];
	int inv[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
		inv[arr[i]]=i;
    }

    for (int i = 0; i < N; i++) {
        cout << inv[i] << " ";
    }

}
