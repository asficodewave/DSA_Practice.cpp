#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter array size:";
  cin>>n;

  cout<<"Enter"<<" "<<n<<" "<<"numbers:";

  int A[n];
  for(int j=0; j<n; j++){
    cin>>A[j];
  }

  int k;
  cout<<"Enter key value:";
  cin>>k;

  int index=-1;

  for(int i=0; i<n ; i++){
    if (A[i] == k){
        index = i;
        break;
    }
   }
    if (index != -1){
        cout<<"the key is at "<< index<<" position";
    }
    else{
        cout<<"not found";
    }

return 0;
}
