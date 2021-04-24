#include <iostream>
  using namespace std;
  
  int main()
  {
    int i,j;
    cin>>i>>j;
    if(i==j)
    cout<<i<<" is equal to "<<j;
    else if(i<j)
    cout<<i<<" is smaller then "<<j;
    else
    cout<<i<<" is greater then "<<j;
    return 0;
  }