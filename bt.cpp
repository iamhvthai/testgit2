#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Nhap n = \n";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cout<<"Nhap phan tu thu "<<i<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    int x = -1, y = -1;
    cout<<"Nhap k = \n";
    cin>>k;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n-1; j++) {
            if(i != j) {
            if (k - arr[i] == arr[j]) {
                x=i;
                y=j;
                break;
            }
            }
        }
        if(x!=-1 && y!=-1)
        break;
    }
    cout<<"ket qua: "<<x<<" "<<y;
    return 0;
}