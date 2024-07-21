#include <iostream>
using namespace std;

int main() {
    int a[5];
    cout<<"give 5 integers as the input"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"the array given is:"<<endl;
    for(int i=0;i<5;i++){
        
        cout<<a[i]<<" ";
    }
    return 0;
}
