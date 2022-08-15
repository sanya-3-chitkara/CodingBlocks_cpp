#include <iostream>
using namespace std;


bool MatSearch(int * mat, int target, int n, int m) {

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        if (target == *(mat + i * m + j)) {
                                return 1;
                        }
                }
        }
        return 0;
}

int main() {

        int n, m;
        cin >> n >> m;

        int mat[n][m];

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> mat[i][j];
                }
        }

        int target;
        cin >> target;
        MatSearch((int *)mat, target, n, m) ? cout << "1" : cout << "0";



}
