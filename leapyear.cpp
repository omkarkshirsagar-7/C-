#include <iostream>
  using namespace std;
  
  int main()
  {
    int i,a,r=0;
    int arr[a+1];
    cin>>a;
    for(i=0;i<a;i++){
      cin>>arr[i];
    }
    for(i=0;i<a;i++){
      if(arr[i]%4 == 0){
      if(arr[i]%100==0){
        if(arr[i]%400==0)
          cout<<"Yes\n";
        else
        cout<<"No\n";
      }
      else
        cout<<"Yes\n";
      }
      else
      cout<<"No\n";
    }
    return 0;
  }