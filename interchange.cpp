#include <iostream>
using namespace std;

int main(){
    int i,j,r,c;
    cout<<"enter r row";
    cin>>r;
    cout<<"enter c colum";
    cin>>c;
     int mat[r][c];
      int temp=0;
      int count=c-1;

    cout<<"enter frist matrix values";

    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        cin>>mat[i][j];
       }
    }
cout<<"The matrix you entered is "<<endl;
 for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j){
                temp=mat[i][j];
                mat[i][j]=mat[i][count];
                mat[i][count]=temp;

            }
        }
        count --;
        
    }
      
    

 

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
         cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
