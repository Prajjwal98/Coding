#include<iostream>
using namespace std;


 
void dispcode(char ine[100] , char out[100], int i, int j){
     char s[] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int t;
   // BASE CASE
    if(ine[i] == '\0'){
        out[j] = '\0';
        for(int k=0;k<j;++k){
           t=out[k]-'0';
           cout<<s[t];
           // t = out[k];      
            //cout<<s[t];
        }
        cout<<" , ";
        return;
    }

   // RECURSIVE CASE

   //one char selected
   out[j] = ine[i];
   dispcode(ine,out,i+1,j+1);

   //two char selected
   if(ine[i+1] != '\0' ){
      out[j] = (ine[i]*10)+ine[i+1];
      dispcode(ine,out,i+2,j+1);
   }
 return;
}

int main() {
    char ine[100] , out[100];
    cin>>ine;
    dispcode(ine,out,0,0);
	return 0;
}