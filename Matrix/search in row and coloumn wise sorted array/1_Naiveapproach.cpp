#include<iostream>
using namespace std;
void search(int mat[3][2],int x){
    int R=3,C=2;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mat[i][j]==x){
                cout<<"Element found at "<<i<<"   "<<j<<endl;
                return;
            }
           
        }
    }
     cout<<"Element not found"<<endl;
   
}
int main(){
    int mat[3][2]={{1,2},{3,40},{5,6}};
 
    search(mat,40);
    return 0;
   
    
}