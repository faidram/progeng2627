#include<iostream>
#include<string>
int main(){
    int n,x,y, out, diff, minterm, maxterm, calc;
    std::string answer, feedback;
    std::cout<< "enter two numbers to give me the range"<<std::endl;
    std::cin>>x >>y;
    if(x>y){
        diff=x-y;
        calc=diff/2;
        out= y+calc;
        minterm=y;
        maxterm=x;
    }

    else if(y>x){
        diff=y-x;
        calc=diff/2;
        out= x+calc;
        minterm=x;
        maxterm=y;  
    }

    else if(x==y){
        out=y;

    }

    std::cout<< "Is your number: "<<out<<std::endl;
    std::cin>> answer;

    while(answer != "yes"){

        std::cout<< "Is your number larger or smaller than "<< out<<std::endl;
        std::cin>> feedback;
        if( feedback == "larger" ){
            minterm=out+1;
        }

        if( feedback == "smaller"){
            maxterm=out-1;
        }
        
            diff= maxterm-minterm;
            calc=diff/2;
            out=minterm+calc;
     
    
    std::cout<< "Is your number: "<< out<<std::endl;
    std::cin>> answer;

}

}