#include <iostream>
bool rectang (double a, double b, double& per, double& area){
    bool realsol;
   
    if(a>0 && b>0){
        realsol=true;
         area= a*b;
         per=2*a+2*b;
    }
    else{
        realsol= false;
         
    }
    return realsol;

}
int main(){
    double per=0, area=0;
    bool realsol;

    realsol = rectang( 2,3, per, area);
    std::cout << (realsol =true && per==10 && area==6)<<std::endl;
    realsol = rectang( 0.5,0.5, per, area);
    std::cout << (realsol=true && per==2 && area==0.25)<<std::endl;
    realsol = rectang (0, 5, per,area);
    std::cout<<(realsol ==false)<<std::endl;



}