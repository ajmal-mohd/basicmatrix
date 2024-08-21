#include <iostream>
using namespace std;
int main(){
    int i,j,r,c;

    cout<<"enter r matrix ";
    cin>>r;
    cout<<"enter c colum";
    cin>>c;

    int mat[r][c];

    cout<<"enter matric values"<<endl;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            cin>>mat[i][j];

        }
    }


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"lowertraingle"<<endl;

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
          if(j<=i){
           cout<<mat[i][j]<<"  ";

          }else{
            cout<<" ";
          }
        
    }
    cout<<endl;
}
}