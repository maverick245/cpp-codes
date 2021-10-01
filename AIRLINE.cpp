
#include<bits/stdc++.h>
using namespace std;
void ans(int w1, w2, w3){
    if(w1 + w2 <= d && w3 <= e){
	        cout<<"yes\n";
	    }
	    else if(w1 + w3 <= d && w2 <= e){
	        cout<<"yes\n";
	    }
	    else if(w3 + w2 <= d && w1 <= e){
	        cout<<"yes\n";
	    }
	    
	    else{
	        cout<<"no\n";
	    }
}
//driver code
int main() {
	//taking input of no of test cases
	int test;
	cin>>test;
	
	while(test--){
	    //entering the three values
	    int w1,w2,w3;
	    int d,e;
	    cin>>w1>>w2>>w3>>d>>e;
	    
	    ans(w1, w2, w3);
	}
	return 0;
}
