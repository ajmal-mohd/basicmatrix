// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,sumr,sumc;
        
//         cout<<"enter r row";
//         cin>>r;
//         cout<<"enter c colum";
//         cin>>c;
//         int mat[r][c];

//         cout<<"entered matrix values "<<endl;

//         for(i=0;i<r;i++){
//             for(j=0;j<c;j++){
//                 cin>>mat[i][j];
//             }
//         }

//          cout<<"matrix are"<<endl;
//         for(i=0;i<r;i++){
//             for(j=0;j<c;j++){
//                 cout<<mat[i][j]<<" ";
//             }
//         }


// for(i=0;i<r;i++){
//     sumr=0;
//     for(j=0;j<c;j++){
      
//       sumr=sumr+mat[i][j];

//     }
//     cout<<"row is "<<" "<<i<<" "<<"sum is "<<sumr;
//     cout<<endl;
// }

// for(i=0;i<r;i++){
//     sumc=0;
//     for(j=0;j<c;j++){
//         sumc=sumc+mat[j][i];
//     }
//     cout<<"row is "<<" "<<i<<" "<<sumc;
//     cout<<endl;
// }


// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,count;

//    cout<<"enter a row";
//    cin>>r;
//    cout<<"enter colum";
//    cin>>c;
//    int mat[r][c];

//    cout<<"enter matrixnumber"<<endl;

// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//       cin>>  mat[i][j];
//     }

// }

// for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;

//     }


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(mat[i][j]==0){
//                 count++;
//             }
//         }
//     }

//     if(count>(r*c)/2){
//         cout<<"sparx matrix";
//     }else{
//         cout<<"no sparc";
//     }




// }


// #include <iostream>
// using namespace std;
// int main(){
//     int r,c,i,j,count=0;

//     cout<<"enter r row";
//     cin>>r;
//     cout<<"enter c colum";
//     cin>>c;
//     int mat[r][c];

//     cout<<"enter frist matrix values";

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//     }
//      cout<<"matrix are "<<endl;
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"transpox matrix are"<<endl;

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[j][i]<<" ";
//         }
//         cout<<endl;
//     }


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(mat[i][j]!=mat[j][i]){

//                 count++;
//             }
//         }
//     }

//     if(count==0){
//         cout<<"this is symmareic"<<endl;
//     }else{
//         cout<<"not symmatric"<<endl;
//     }
    
    
    
//     }

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,flag=0;

//     cout<<"enter r row"<<endl;
//     cin>>r;
//     cout<<"enter c colum"<<endl;
//     cin>>c;

//     int mat[r][c];

//     cout<<"enter  1st matrix values "<<endl;

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//     }

//     for(i=0;i<r;i++){
//       for(j=0;j<c;j++){
//           cout<<mat[i][j]<<" ";
//       }
//       cout<<endl;
//     }

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(i==j&&mat[i][j]!=1){
//                 flag=1;
//                 break;
//             }else if(i!=j&&mat[i][j]!=0){

//                 flag=1;
//                 break;

//             }

//         }
//     }

// if (flag==1)
// {
//     cout<<"this is no iden"<<endl;
// }else{
//     cout<<"this is iden"<<endl;
// }


// }

// upper traingle////////

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c;
//     cout<<"enter r row ";
//     cin>>r;
//     cout<<"enter c coulm";
//     cin>>c;
//    int mat[r][c];
//     cout<<"enter matrix values "<<endl;

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];


//         }
//     }

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(j<i){
//                 cout<<mat[i][j]<<" ";
//             }else{
//                 cout<<"-"<<" ";
//             }
//         }
//         cout<<endl;

//     }
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c;
//     cout<<"enter r row";
//     cin>>r;
//     cout<<"enter c colum";
//     cin>>c;
//     int mat[r][c];

//     cout<<"enter matrix values "<<endl;

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//     }

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(j<=i){
//                  cout<<"-"<<" ";
                 
//             }else{
              
//                    cout<<mat[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }



// #include <iostream>
// using namespace std ;
// int main(){
//     int i,j,r,c;
//      cout<<"enter r row";
//      cin>>r;
//      cout<<"enter c colum";
//      cin>>c;
//      int mat[r][c];
//      int temp=0;
//      int count=c-1;


//      cout<<"enter matrix value"<<endl;

//      for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//      }
// cout<<"matrix are "<<endl;

// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }


// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         if(i==j){
//         temp=mat[i][j];
//         mat[i][j]=mat[i][count];
//         mat[i][count]=temp;}
//     }
//     count--;
// }


// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         cout<<mat[i][j]<<" ";

//     }

     
//  cout<<endl;
// }
// }


// sum of main tianagol;
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,sum=0;
//     cout<<"enter r row";
//     cin>>r;
//     cout<<"enter c colum";
//     cin>>c;
//     int mat[r][c];
//     cout<<"enter 1st matrix values";

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//     }


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }

//         cout<<endl;
//     }

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(i==j){
//                 sum=sum+mat[i][j];
//             }
//         }
      
     
//     }
//      cout<<"sum is "<<sum;
//       cout<<endl;



// }



// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,sum=0;

//     cout<<"enter r row";
//     cin>>r;
//     cout<<"enter c colum";
//     cin>>c;
     
//      int mat[r][c];

//      for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//      }


//      for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//      }

//      for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             if(i+j==2){
//            sum=sum+mat[i][j];}
//         }
       
//      }

//      cout<<"sum is "<<sum<<" ";
//      cout<<endl;


// }

// #include <iostream>
// using namespace std;
// int main(){
//    int i,j,r,c,flag=0;
//       cout<<"enter r row";
//       cin>>r;
//       cout<<"enter c colum";
//       cin>>c;
//       int mat[r][c];
//       cout<<"enter frist matrix value "<<endl;
//    for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         cin>>mat[i][j];
//     }
//    }


//    cout<<"entered matrix are "<<endl;
//    for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
//    }


// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         if(i==j&&mat[i][j]!=1){
//             flag=1;
//             break;
//         }else if(i!=j&&mat[i][j]!=0){
//             flag=1;
//             break;

//         }
//     }
// }
// if(flag==1){
//     cout<<"not identi";
// }else{
//     cout<<"yes";
// }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,count;

//     cout<<"enter a row ";
//     cin>>r;
//     cout<<"enter  colum";
//     cin>>c;
//     int mat[r][c];

//     cout<<"enter matrix values "<<endl;
//     for(i=0;i<r;i++){
//         for(j=0;j<r;j++){
//             cin>>mat[i][j];
//         }
//     }

//     cout<<"enterd matrix are "<<endl;

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//            if(mat[i][j]==0){
//             count++;
//            }
//         }
//     }

//     if(count>(r*c)/2){
//         cout<<"this is sparc";
//     }else{
//         cout<<"no sparx";
//     }
// }

// symmatric 

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,r,c,count=0;

//     cout<<"enter row value "<<endl;
//     cin>>r;
//     cout<<"enter  colum value "<<endl;
//     cin>>c;
//     int mat[r][c];

//     cout<<"enter matrix values "<<endl;

//     for(i=0;i<r;i++){
//         for(j=0;j<r;j++){
//             cin>>mat[i][j];
//         }
//     }
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }

// cout<<"traspose are "<<endl;

// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         cout<<mat[j][i]<<" ";
//     }
//     cout<<endl;
// }

// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         if(mat[i][j]!=mat[j][i]){
//             count++;
//         }
//     }
// }

// if(count==0){
//     cout<<"this is symmatric";
// }else{
//     cout<<"this not symmatric";
// }

// }



#include <iostream>
 using namespace std ;
 int main(){
    int i,j,r,c;
       
    cout<<"enter r row "<<endl;
    cin>>r;
    cout<<"enter c colum"<<endl;
    cin>>c;
    int mat[r][c];
    int sumr=0;
    int sumc=0;

    cout<<"enter  matrix are "<<endl;

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
        sumr=0;
        for(j=0;j<c;j++){
          
          sumr=sumr+mat[i][j];
         

        }
        cout<<"row is "<<" "<<i<<" "<<"sum is : "<<sumr;
        cout<<endl;
    }



    for(i=0;i<r;i++){
        sumc=0;
        for(j=0;j<c;j++){
           sumc=sumc+mat[j][i];
        }
         cout<<"colum is "<<" "<<i<<" "<<"sum is :"<<sumc;
         cout<<endl;
    }
 }