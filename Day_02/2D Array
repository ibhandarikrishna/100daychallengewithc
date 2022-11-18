#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n][n];
    int mark = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>ar[i][j];
        }
   for(int i=0;i<n;i++){  
        mark = mark + ar[i][i];
         sum = sum + ar[i][n-i-1];
        }
       int diff = mark - sum;
 
    cout<<abs(diff);
}
