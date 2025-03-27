#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int fizz=0,buzz=0;
    for(int i=0;i<=n;i++){
    	fizz++,buzz++;
    	if(fizz == 3 && buzz == 5){
    		cout<<"FizzBuzz"<<endl;;
    	}
    	else if(fizz == 3){
    		cout<<"Fizz"<<endl;;
    	}
    	else if(buzz == 5){
    		cout<<"Buzz"<<endl;;
    	}
    	else{
    		cout<<i<<endl;
    	}
    }
}
