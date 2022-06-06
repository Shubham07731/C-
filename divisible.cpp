#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++)
{
    if(i%3==0)
    {
        continue;
    }
    cout<<"value of i :"<<i<<endl;
}
return 0;
}
