//To print diagonal of a square
#include <iostream> 
using namespace std;

void diagonalOfSquare(int lengthOfSide){
    for(int i=0;i<lengthOfSide;i++){
       for(int j=0;j<lengthOfSide;j++)
       if(j==i){
           cout<<"$ "<<" ";
       }
        else{
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    diagonalOfSquare
    return 0;
}
