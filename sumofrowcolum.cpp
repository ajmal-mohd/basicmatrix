#include <iostream>
using namespace std ;
int main(){
    int i,j,r,c,sumc,sumr;
    cout<<"enter a r row";
    cin>>r;
    cout<<"enter c colum";
    cin>>c;
    int mat[r][c];

    cout<<"enter frist matrix values "<<endl;
     
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>mat[i][j];
        }
     }
  cout<<"matrix are"<<endl;
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
     }


     for(i=0;i<r;i++){
        sumr=0;
        for(j=0;j<c;j++){
             sumr=sumr+mat[i][j];

        }
         cout<<"row is "<<" "<<i<<" "<<"sum is :"<<sumr;
        cout<<endl;
     }


     for(i=0;i<r;i++){
        sumc=0;
        for(j=0;j<c;j++){
            sumc=sumc+mat[j][i];
        }

        cout<<"row is "<<" "<<i<<"sum is:"<<sumc;
        cout<<endl;
     }
}