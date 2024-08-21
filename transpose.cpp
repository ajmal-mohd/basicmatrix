#include <iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"enter r row";
    cin>>r;
    cout<<"enter c colum";
    cin>>c;

    int mat[r][c];

    cout<<"enter 1st matrix"<<endl;
     
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>mat[i][j];
        }
     }

     cout<<"matrix are"<<endl;

     for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
     }



     cout<<" transpose  matrix"<<endl;

     for(i=0;i<r;i++){
     for(j=0;j<c;j++){
         cout<<mat[j][i]<<" ";
     }

     cout<<endl;
     }
}