#include<bits/stdc++.h>
using namespace std;
int main(){
int key;
cout<<"enter the value of key"<<endl;
    vector<int>a={3,8,6,90};
    
    cin>>key;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"elemnt si found"<<i<<endl;
        }
    }

}
