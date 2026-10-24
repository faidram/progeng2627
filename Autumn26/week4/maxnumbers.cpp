#include <iostream>
double mymax( double n1, double n2, double n3){
double max;
if(n1>=n2){
    if(n1>=n3){
        max= n1;
    }
    else{
        max= n3;}

}
else if(n2>=n3){
    max=n2;
}
else{
    max=n3;
}
return max;

}
int main(){
    std::cout << (mymax(2,5, 1)==5)<< std::endl;
    std::cout << (mymax(2, -3,4)==4)<<std::endl;
    std::cout<< (mymax(3,3, 3)==3)<<std::endl;
    std:: cout <<(mymax(3,3,2)==3)<<std::endl;
    std::cout<< (mymax(2,5,2)==5)<<std::endl;
    std::cout<<(mymax(7,10,10)==10)<<std::endl;

}