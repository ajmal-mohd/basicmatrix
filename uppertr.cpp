#include <iostream>
using namespace std;
int main(){
    int i,j,r,c,sum=0;

    cout<<"enter r row";
    cin>>r;
    cout<<"enter c colum";
     cin>>c;
      int  mat[r][c];

     cout<<"enter matrix values "<<endl;

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

     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(j>=i){
            sum=sum+mat[i][j];
            }

        }
       
     }
      cout<<sum;

        cout<<endl;
}