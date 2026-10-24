#include <iostream>
void myswap(double& n1, double& n2){

    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}
void sort_three_numbers(double& s1, double& s2, double&s3){
    if(s1>=s2 && s1>s3){
        myswap(s1,s3);}
       
    if(s2>s1 && s2>s3){
        myswap(s2,s3);
        }
    if(s1>s2){
        myswap(s1,s2);
    }
    
}


int main(){
    double a=2,b=3,c=2;
    sort_three_numbers(a,b,c);
    std::cout<<(a==2&& b==2 && c==3)<<std::endl;

    a=1,b=2,c=3;
    sort_three_numbers(a,b,c);
    std::cout<<(a==1&& b==2 && c==3)<<std::endl;
     a=3,b=2,c=1;
    sort_three_numbers(a,b,c);
    std::cout<<(a==1&& b==2 && c==3)<<std::endl;
     a=4,b=4,c=1;
    sort_three_numbers(a,b,c);
    std::cout<<(a==1&& b==4 && c==4)<<std::endl;
    a=4.5,b=2,c=2;
    sort_three_numbers(a,b,c);
    std::cout<<(a==2&& b==2 && c==4.5)<<std::endl;
     a=2,b=3,c=1;
    sort_three_numbers(a,b,c);
    std::cout<<(a==1&& b==2 && c==3)<<std::endl;

}