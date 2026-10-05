#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(){
    

    int intA;
    int intB;
    std::string sIntA;
    std::string sIntB;

    std::stringstream convertA;
    std::stringstream convertB;
    std::stringstream ss;
    std::string text;

    std::ifstream file;
    file.open("data.csv");
    std::string line;

    while(getline(file,line)){

        ss.clear();
        ss.str("");
        convertA.clear();
        convertA.str("");
        convertB.clear();
        convertB.str("");
        
        ss.str(line);

        getline(ss,sIntA,',');
        getline(ss,sIntB,',');
        getline(ss,text);

        convertA<<sIntA;
        convertB<<sIntB;
        convertA>>intA;
        convertB>>intB;

        for(int i=0;i<(intA+intB);i++){
            printf("%s",text.c_str());
            //
        }
        std::cout<<std::endl;

    }
    file.close();
    std::cout<<std::endl;



}
