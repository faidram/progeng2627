#include <iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<sstream>
#include<iomanip>
std::vector<double> string_to_vector(std:: string s){
    std::stringstream ss;
    std:: vector<double> out;
    std::string tmp;
    ss<< s;
    while(ss>> tmp){
        out.push_back(std::stod(tmp));
    }
    return out;

}

std:: vector<std::vector<double>> read_matrix_from_file( std:: string input_file){
    std:: ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout<<"error opnening input file"<<std::endl;
        std::exit(EXIT_FAILURE);
    }
    std:: string line;
    std:: vector<std::vector<double>> out;
    while(std::getline(infile,line)){
        out.push_back(string_to_vector(line));

    }
    return out;
}

std:: vector<std::vector<double>> matrix_mult ( const std::vector<std::vector<double>>& m1, const std::vector<std::vector<double>>& m2){
    std:: vector<std::vector<double>> m4;
    for (int i=0; i<m1.size(); i++ ){
    
    std:: vector<double> row;
    for (int k=0; k<m2[0].size(); k++){
        double sum=0;

        for(int j=0; j<m1[0].size(); j++){
        sum= sum+ (m1[i][j]*m2[j][k]);
        

    }
    row.push_back(sum);
    
    }
    m4.push_back(row);
   
   
    }
    
 return m4;
}
 std:: string matrix_to_string (std::vector<std::vector<double>> m){
    std:: stringstream out;
    out <<std:: fixed <<std:: setprecision(2);
    for (int i=0; i<m.size(); i++){
        for(int j=0; j<m[0].size(); j++){
            out<<(m[i][j])<<"\t";

        }
        out << "\n";
    }
    return out.str();



 }

int main(int argc, char*argv[]){
    if(argc!=3){
        std::cout<<" tqo arguments needed"<<std::endl;
        return EXIT_FAILURE;
    }
    std:: vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std:: vector <std::vector<double>> m2 = read_matrix_from_file(argv[2]);
    std:: vector<std:: vector<double>> m3= matrix_mult(m1, m2);
    std::cout<< matrix_to_string(m1);
    std::cout<<" * "<< std::endl;
    std::cout<< matrix_to_string(m2);
    std::cout<< " = "<<std::endl;
    std::cout<<matrix_to_string(m3);
}