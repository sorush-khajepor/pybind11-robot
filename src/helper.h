#include "irobot.h"

void Move(IRobot& robot){
    std::cout<< robot.name <<"\n";
    robot.Walk();
}