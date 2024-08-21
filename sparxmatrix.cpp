#include <iostream>
using namespace std;
int main(){
   int i,j,r,c,coount;

   cout<<"enter a r row";
   cin>>r;
   cout<<"enter a c colum";
   cin>>c;
   int mat[r][c];
   cout<<"enter a matrix values"<<endl;

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
         if(mat[i][j]==0){
            coount++;
         }
      }
   }

   if(coount>(r*c)/2){
      cout<<"this is sparx matrix"<<endl;

      }else{
         cout<<"this not sparx"<<endl;
      }
   }

