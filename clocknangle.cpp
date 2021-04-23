 #include<stdio.h>
 #include<iostream>
 using namespace std;
  
  int main()
  {
    int i,n,h,m;
    int hr[n+1];
    int min[n+1];
    cin>>n;
    for(i=0;i<n;i++){
      cin>>hr[i];
      cin>>min[i];
    }
    for(i=0;i<n;i++){
      h=hr[i]*30+(0.5*min[i]);
      m=min[i]*6;
      
      if(h>m)
        cout<<h-m<<"\n";
      else
        cout<<m-h<<"\n";
    }
    
    return 0;
  }