#include <bits/stdc++.h>
using namespace std;

void maximo(vector<int>& A, int p, int q, int r, int& y1, int& y2) {
    int s = A[q];
    y1 = s;
    for (int i = q - 1; i >= p; i--) {
        s += A[i];
        if (s > y1)
            y1 = s;
    }
    s = A[q + 1];
    y2 = s;
    for (int j = q + 2; j <= r; j++) {
        s += A[j];
        if (s > y2)
            y2 = s;
    }
}

int solidezII(vector<int>& A, int p, int r){
    int q, x, x1, x2;
    if(p==r){
        return A[p];
    }else{
        q = (p+r)/2;
        x1 = solidezII(A,p,q);
        x2 = solidezII(A,q+1,r);
        //calcula o máximo de y'(y1) e y''(y2)
        int y1=0, y2=0;
        maximo(A, p, q, r, y1, y2);
        x = max({x1, y1+y2, x2});
        return x;
    }
}

int main(){
    int i, n;
    cin >> n;
    vector<int> vetor(n,0);
    for(i=0; i<n; i++){
        cin >> vetor[i];
    }
    cout << solidezII(vetor, 0, n-1) << endl;
}
