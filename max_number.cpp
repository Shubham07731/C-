#include <iostream>
using namespace std;

int main(){
    int a,b,c;
cin>>a>>b>>c;

if(a>b){
   if(a>c){
    cout<<"a is greater"<< a;
   }
   else{
    cout<<"c is greater"<< c;
   }
}
else if(b>c){
    if(b>a){
        cout<<"b is greater "<<b;
    }
    else{
        cout<<"a is greater"<< a;
    }
}
else{
    cout<<"c is greater" <<c;
}
return 0;
}
