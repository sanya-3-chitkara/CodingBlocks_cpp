#include <iostream>
using namespace std;


int searchArr(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }

    }
    return -1;
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int search;
    cin >> search;
    int number = sizeof(arr) / sizeof(arr[0]);
    int result = searchArr(arr, number, search);
    cout << result;

    return 0;

}
