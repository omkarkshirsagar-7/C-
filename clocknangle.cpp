 #include<stdio.h>
 #include<iostream>
  using namespace std;
  
  int main()
  {
    int i,n,h,m,a;
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
      
      if(h>m){
        a=h-m;
        if(a>180)
          cout<<360-a<<"\n";
        else
        cout<<a<<"\n";
      }
      else{
       a=m-h;
       if(a>180)
          cout<<360-a<<"\n";
        else
        cout<<a<<"\n";
      }
    }
    
    return 0;
  }
        