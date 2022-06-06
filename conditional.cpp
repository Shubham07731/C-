#include <iostream>

using namespace std;

int main(){
    int savings;
    cin>>savings;

    if(savings>5000)
    {
        if(savings>10000){
            cout<<"Pooja will go to roadtrip with me";
        }
        else{
            cout<<"Pooja will go to restaurant with me";
        }
    }
    else if(savings>2000){
        cout<<"Rashi will go with me";
    }
    else{
        cout<<"No I am fine at home leave me alone";
    }
    return 0;
}
