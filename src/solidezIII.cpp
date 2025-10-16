#include <bits/stdc++.h>
using namespace std;

int solidezIII(vector<int> A, int p, int r){
    int f = A[p], x = A[p];
    for (int q = p + 1; q <= r; q++) {
        f = max(A[q], f + A[q]);
        if (f > x)
            x = f;
    }
    return x;
}

int main(){
    int i, n;
    cin >> n;
    vector<int> vetor(n,0);
    for(i=0; i<n; i++){
        cin >> vetor[i];
    }
    cout << solidezIII(vetor, 0, n-1) << endl;
}
