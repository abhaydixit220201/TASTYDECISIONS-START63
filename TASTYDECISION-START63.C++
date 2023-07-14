#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int s=(x*2);
        int p=(y*5);
        if(s>p){
            cout<<"chocolate"<<endl;
        }else if(p>s){
            cout<<"candy"<<endl;
        }
        else{
            cout<<"equal"<<endl;
        }
    }
	// your code goes here
	return 0;
}
