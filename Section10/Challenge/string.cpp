#include <iostream>
#include <string>


int main(){

    std::string name{"suri"};

    std::string name1{};
    name1[0]= name[0];
    name1[1]=name[1];
    name1[2]=name[2];
    name1[3]= name[3];
 
    std::cout<<name1<<std::endl;
}