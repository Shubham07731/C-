#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        int f;
      for(f=2;f<i;f++){
        if(i%f==0)
        {
            break;
        }
      }
      if(i==f)
      {
          cout<<f<<endl;
      }
    }
    return 0;
}
