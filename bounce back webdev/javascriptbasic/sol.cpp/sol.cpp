

#include<bits/stdc++.h>

using namespace std;
bool sorted( vector<int>);
bool sorted( vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
        return true;
    }
}
int main(){
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    if(k>=2){
        cout<<"YES"<<endl;
    }else{
        if(sorted(v)==false){
          cout<<"NO"<<endl;
        }else{
            cout<<"YES";
        }
    
    }

 }
return 0;
}





