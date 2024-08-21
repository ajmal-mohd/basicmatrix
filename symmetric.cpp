#include <iostream>
using namespace std;

int main(){
   
   int i,j,r,c,count=0;

   cout<<"enter r row";
   cin>>r;
   cout<<"enter  colum";
   cin>>c;
   int mat[r][c];

   cout<<"enter a frist matrix"<<endl;

   for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        cin>>mat[i][j];
       }
   }
  
  cout<<"entered matrix are"<<endl;

   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<mat[i][j]<<" ";
    }

    cout<<endl;
   }

cout<<"transpox matrix are "<<endl;


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<mat[j][i]<<" ";
    }

    cout<<endl;
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if (mat[i][j]!=mat[j][i]){

            count++;

        }
       
    }
}

if(count==0){

    cout<<"this is symmatrix"<<endl;
}else{
    cout<<"this is not symmatric "<<endl;
}


}