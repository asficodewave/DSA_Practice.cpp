#include<bits/stdc++.h>
using namespace std;

int main(){

int n1,n2;
cin>>n1;
cin>>n2;

int A[n1], B[n2];
int R[n1+n2];

    for(int i=0; i<n1; i++){
        cin>>A[i];
    }

    for(int j=0; j<n2; j++){
        cin>>B[j];
    }

   int i=0,j=0,k=0;


 while(i<n1 && j<n2){
    if(A[i]<=B[j]){
        R[k] = A[i];
        k++,i++;
    }
    else{
        R[k] = B[j];
        k++,j++;
    }
}
 while(i<n1){
    R[k] = A[i];
    k++,i++;
}
 while(j<n2){
    R[k] = B[j];
    k++,j++;
}

 for(int i=0; i<n1+n2; i++){  //array uporer loop gulute already merge hoye gese.ekhane just traverse kora hoise
    cout<<R[i]<<" ";
}
    cout<<endl;

return 0;
}
