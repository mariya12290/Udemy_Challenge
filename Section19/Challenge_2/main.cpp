// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
    
    std::ifstream in_file{};
    in_file.open("responses.txt");
    std::map<std::string, int>m{};
    std::string answer{};
    std::string name{};
    std::string grade{};
    bool flag{true};
    bool name_flag{true};
    if(in_file.is_open()){
        while(!in_file.eof()){
        if(flag){
        in_file>>answer;
        flag = false;
        }else if (name_flag){
            in_file>>name;
            name_flag = false;
        }else{
            in_file>>grade;
            int count{};
            for(int i{0};i<grade.size();++i){
                if(grade[i]==answer[i]){
                    count +=1;
                }
            }
            m[name] = count;
        name ="";
        count =0;
        grade ="";
        name_flag = true;
        }
        }
    }
    std::cout<<"----------------------------"<<std::endl;
   int total {};
   std::cout<<"Student                     Score"<<std::endl;
   for(const auto &i:m){
       std::cout<<i.first<<"                     "<<i.second<<std::endl;
       total += i.second;
   }
   std::cout<<"--------------------------"<<std::endl;
   std::cout<<"Avergae Score    "<<(double(total)/m.size())<<std::endl;

    return 0;
}

