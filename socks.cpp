/*PrepBuddy is getting late for college. 
She is looking for a matching pair of socks from a box full of socks.
In the worst-case scenario, how many socks should PrepBuddy remove from 
her drawer until she finds a matching pair.*/

#include<iostream>
 using namespace std;
  
  int main()
  {
    int n,i;
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
      if(arr[i] == 0)
        cout<<"0\n";
      else{
        cout<<arr[i]+1<<"\n";
      }
    }
    
    return 0;
  }