#include <iostream>

using namespace std;

void tri(){
    cout<<"Specify the length of the triangle\n>_ ";
    int l;
    cin>>l;
    for (int i=0; i<l+1; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}


void rect(){
    cout<<"Enter the width and the breadth of the rectangle\n>_ ";
    int w, b;
    cin>>w;
    cin>>b;
    for(int i = 0; i<w; i++){
        for(int j=0; j<b; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void circle(){
    cout<<"Enter the radius of the circle";
    int r;
    cin>>r;
    
}

// void circle(){
//     cout>>"Enter the radius of the circle";
//     int r;
//     cin>>r;
    
// }
int main(){

    cout<<"Enter a num to display a paterrn";
    cout<<"\n1.Triangle\n2.Rectangle\n3.Circle\n>_ ";
    int c;
    cin>>c;
    switch(c){
        case 1: tri();
                break;
        case 2: rect();
                break;
        case 3: circle();
                break;
        default:cout<<"Error! Try again";
                main();
    }
}