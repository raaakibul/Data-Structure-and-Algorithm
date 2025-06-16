#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    int key;
    cin >> key;
    int found =0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout << "found at index " << i << endl;
            found = 1;
            break;
        }
    }
    if(found!=1){
        cout << "Not Found";
    }

    return 0;
}