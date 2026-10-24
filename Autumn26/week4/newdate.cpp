#include <iostream>

bool leap_year(int year){
    bool ly;
    if( year%4 ==0){
        if(year%100==0){
            if(year%400==0){
                ly= true;
            }
            else{
                ly= false;
            }
        
        }
        else{
            ly=true;
        }

    }
    else{
        ly=false;
    }

  

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    m2=m1;
    y2=y1;
    d2=d1+1;
    if(m1==2){
        if(leap_year(y1)){
            if(d1== 29){
                d2=1;
                m2=3;
                y2=y1;
            }
            


    }
    else{
                if(d1==28){
                    d2=1;
                    m2=3;
    
                }
            }
}
    if(m1==1 || m1==3 || m1==5|| m1==7|| m1==8 || m1==10|| m1==12){
        if(d1==31){
            d2=1;
            if(m1==12){
                m2=1;
                y2=y1+1;
            }
            else{
                m2=m1+1;
            }
        }
  
    
}
if( m1==4 || m1==6 || m1== 9|| m1==11){
    if(d1==30){
        d2=1;
        m2=m1+1;
    }
}
    }

int main(){
    int d2, m2, y2;
   next_date(15, 3, 2025, d2, m2, y2);
    std::cout << (d2 == 16 && m2 == 3 && y2 == 2025) << std::endl;
    next_date(31, 1, 2025, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 2 && y2 == 2025) << std::endl;

    next_date(30, 4, 2025, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 5 && y2 == 2025) << std::endl;

    next_date(28, 2, 2025, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 3 && y2 == 2025) << std::endl;


    next_date(28, 2, 2024, d2, m2, y2);
    std::cout << (d2 == 29 && m2 == 2 && y2 == 2024) << std::endl;

    next_date(29, 2, 2024, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 3 && y2 == 2024) << std::endl;

    next_date(28, 2, 1900, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 3 && y2 == 1900) << std::endl;

    next_date(28, 2, 2000, d2, m2, y2);
    std::cout << (d2 == 29 && m2 == 2 && y2 == 2000) << std::endl;

    next_date(30, 12, 2025, d2, m2, y2);
    std::cout << (d2 == 31 && m2 == 12 && y2 == 2025) << std::endl;

    next_date(31, 12, 2025, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 1 && y2 == 2026) << std::endl;
}