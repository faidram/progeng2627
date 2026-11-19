#include<iostream>
#include<vector>
void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
 int count1=0;
 int count2=0;
      
    for(int i=0; i<v1.size()+v2.size(); i++){
        if(count1==v1.size()){
            merged.push_back(v2[count2]);
            count2++;
        }
        else if(count2==v2.size()){
            merged.push_back(v1[count1]);
            count1++;

        }
        else{
              if(v1[count1]<v2[count2]){
            merged.push_back(v1[count1]);
            
            if(count1<v1.size()){
                count1++;

            }
            
        }
        else{
            merged.push_back(v2[count2]);
            if(count2<v2.size()){
                count2++;

            }
            
        }

        }
      
    }

}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }


    
    v1 = {1, 2, 2, 10};
    v2 = {0, 2, 9};
    expected_output = {0, 1, 2, 2, 2, 9, 10};
    out.clear();

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}