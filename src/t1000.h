#include "irobot.h"

template <typename T>
class T1000 : public IRobot
{
    T height;

public:
    T1000(std::string name_, T height_, ISpeech &speech_)
        : IRobot(name_, speech_), height(height_){};

    const auto &GetHeight() { return height; }
    auto SetHeight(T height_) { height = height_ ;}
    virtual void Walk() override { std::cout << "T-1000 is walking...\n"; };
};
