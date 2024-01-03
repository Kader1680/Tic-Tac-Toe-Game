#include <iostream>
#include <stdlib.h>
using namespace std;


string X(int a){

    if (a == 1)
    {
        return "X";
    }
    else{
        return "O";
    }

}

string O(){
    return "O";
}
void diplay(){
    
    
    
    // cout<<" "<<X()<<" | "<<O()<<" | "<<X()<<" "<<endl;
    // cout<<"---|---|----"<<endl;
    // cout<<" "<<X()<<" | "<<X()<<" | "<<O()<<" "<<endl;


    // int n;
    // cout<<"enter number from (1 et 9) : ";
    // switch (n)
    // {
    // case 1:
    //     /* code */
    //     break;
    // case 2:
    //     /* code */
    //     break;
    // default:
    //     break;
    // }
}
int main()
{
    cout<<"enter number "<<endl;
    int b;
    cin>>b;
    cout<<"--------------------"<<endl;
    cout<<"----Tic Tac Toc-----"<<endl;
    cout<<"--------------------"<<endl;
    cout<<" "<<X(b)<<" | "<<O()<<" | "<<O()<<" "<<endl;
    cout<<"---|---|----"<<endl;
    
    diplay();
} 