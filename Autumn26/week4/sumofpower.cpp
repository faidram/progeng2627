#include <iostream>

double mypow(double base, int exp){
    double result=1; 
   
    
    for(int i=0; i<std::abs(exp); i++){
        result= result* base;
    }
  
    if(exp>=0){

    return result;
    }
    else{
        return 1/result;
    }
    
}

int main(){
    double sum=0, y;
    int n;
    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>>y>> n;
    for(int x=1; x<n+1; x++){
        sum= sum + mypow(y, x );

    }
    std:: cout<<sum;
}