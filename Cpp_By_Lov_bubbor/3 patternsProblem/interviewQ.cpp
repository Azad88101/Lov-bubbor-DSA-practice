#include<iostream>
using namespace  std;

void print (int n){
    // n=3;
    for(int i=0;i<n;i++){

        // spaces
        for(int j =i;j<n;j++){
            cout<<" ";
        }
        for(int k =0;k<=i;k++){
            cout<<k+1;
        }
for(int z=i;z>0;z--){
    cout<<z;
}
cout<<'\n';
    }

}


int main(){
    print(7);
    return 0;
}