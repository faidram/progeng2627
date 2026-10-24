#include <iostream>
int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ 
            return cf;
        }
        

    }
    return 0 ;
    
}
int main(){
    int x,y;
    std::cout<<"Enter two numbers to give a range: "<< std::endl;
    std::cin>> x >>y;
    while(x<=y){
        if( smallest_factor(x)== 0){
            std::cout<< x<<std::endl;
            
        }
        x=x+1;

    }

}