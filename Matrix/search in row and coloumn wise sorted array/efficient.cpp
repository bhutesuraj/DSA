#include<iostream>
using namespace std;
void searcheff(int mat[3][2],int x){
    int R=3,C=2;
    int i=0,j=C-1;
    while(i<R && j>=0){
        if(mat[i][j]==x){
            cout<<"Element found at "<<++i<<"   "<<++j<<endl;
            return;
        }
        else if(mat[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }

}
  
int main(){
    int mat[3][2]={{1,2},{3,40},{5,6}};
 
    searcheff(mat,40);
    return 0;
   
    
}