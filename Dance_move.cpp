#include <iostream>
#include<vector>

using namespace std;

void count_Steps()
{
    int n;
    vector<vector<int>> A;
    cin>>n;
    A.resize(n);
    
    for(int i =0;i<n;i++)
    {
        
        A[i].resize(2);
        cin>>A[i][0]>>A[i][1];
    }
   
    for(int i =0;i<n;i++)
    {
       
        int value =0;
        
        if((A[i][0] < 0 && A[i][1] <0 ) ||  (A[i][0] > 0 && A[i][1] >0))
        {
            value =A[i][1]-A[i][0];
            //cout<<"one "<<endl;
        }
        else if (A[i][0] < 0 && A[i][1] >0)
        {
            value =A[i][1]-A[i][0];
            //cout<<"one 2"<<endl;
        }
        else if (A[i][0]  > 0  && A[i][1] <0) 
        {
            value =A[i][0]-A[i][1];
          //  cout<<"one 3"<<endl;
        }
        
        int rem = value % 2;
        int steps = value / 2;
        
        if(rem != 0) steps = steps +1;
        
        
        cout<<steps+rem<<endl;
    }
    
}

int main()
{
    
   int A =6;
   count_Steps();
   return 0;
}
