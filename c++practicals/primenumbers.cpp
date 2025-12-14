/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"All the prime numbers till "<<n<<" "<<"are: ";
    for (int i=2; i<=n; i++) {
        bool isprime=true;
        for (int j=2; j*j<=i; j++) {
            if (i%j==0) {
                isprime=false;
                break;
            }
        }
    
        if (isprime) {
            cout<<i<<" ";
        }
      
        
    }
    
    cout<<endl;
    return 0;
}