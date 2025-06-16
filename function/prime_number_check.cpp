#include<bits/stdc++.h>
using namespace std;

int checkprime(int n)  {
    bool is_prime = true;
    if(n==0 || n==1) {
        is_prime = false;
    }

    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main() {
    int low, high;
    cin>>low>>high;
    bool flag;

    cout<<"print the prime number:";

    for(int i=low+1; i<=high; i++ ){

       flag = checkprime(i);

       if(flag) {
        cout<<i<<" ";
       }
    }
    return 0;
}