#include "irobot.h"
#include <vector>
#include <tuple>
class T800 : public IRobot
{

public:
    int year;
    T800(std::string name, int year_, ISpeech &speech_) : IRobot(name, speech_), year(year_){};
    virtual void Walk() override{std::cout << "T-800 is walking...\n";};
    auto GetData(){
        std::vector<std::tuple<std::string,double>> data;
        data.push_back(std::make_tuple("book", 1.5));
        data.push_back(std::make_tuple("table", 2.5));
        data.push_back(std::make_tuple("wall", 3.5));
        return data;
    }
};
