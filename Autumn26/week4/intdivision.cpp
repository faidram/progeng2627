#include <iostream>
void division( int a, int b, double& res, double& rem){
    res=a/b;
    rem= a % b;
}
int main(){
    double res=0, rem=0;
    division( 3,2, res, rem);
    std::cout <<(res==1 && rem==1)<<std::endl;
    division( 1,2, res, rem);
    std::cout <<(res==0&& rem==1)<<std::endl;

}