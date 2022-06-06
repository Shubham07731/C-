#include <iostream>

using namespace std;

int main(){



//print five rows and five cols
int rows,col;
cin>>rows>>col;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=col;j++){
        cout<<"*";
    }
    cout<<endl;
}
//print five rows and five cols
return 0;
}
