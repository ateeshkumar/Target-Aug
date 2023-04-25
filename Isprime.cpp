#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int a){
    bool flag=0;
    for (int i = 0; i <= sqrt(a); i++)
    {
        if(a%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
int main(){
    int n;
    cout<<"ENter your No: ";
    cin>>n;
    if (isPrime(n)==1)
    {
        cout<<n<<" is a prime"<<endl;
    }else{
        cout<<n<<" is not prime"<<endl;
    }
    
    return 0;
}