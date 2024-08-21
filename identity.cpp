#include <iostream>
using namespace std;
int main(){
    int i,j,r,c,flag=0;

   cout<<"enter r row";
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


     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
     }


     for(i=0;i<r;i++){
        for(j=0;j<c;j++){

         if(i==j&&mat[i][j]!=1){
            flag=1;
            break;
         }else if(i!=j&&mat[i][j]!=0){
                
                flag=1;
                break;
            
         }
              
        }

}

        if(flag==1){
            cout<<"this not identity"<<endl;

        }else{
            cout<<"this is identity"<<endl;
        }
     


}