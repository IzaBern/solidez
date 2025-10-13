#include <bits/stdc++.h>
using namespace std;

int solidezI(vector<int> A, int p, int r){
    int i, j;
    int x, s;
    int n = r-p+1;
    x=0;
    for(i=0; i<n; i++){
        s = 0;
        for(j=i; j<n; j++){
            s = s+A[j];
            if(s>x){
                x = s;
            }
        }
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
    cout << solidezI(vetor, 0, n-1) << endl;
}
