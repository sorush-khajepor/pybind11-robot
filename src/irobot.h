#if !defined(IROBOT_H)
#define IROBOT_H

#include "speech.h"
#include <iostream>

class IRobot
{
public:
  std::string name;
  ISpeech &speech;

  IRobot(std::string name_, ISpeech &speech_) : name(name_), speech(speech_){};

  virtual void Walk() = 0;
  void Talk() { speech.Talk(); }
};

#endif // IROBOT_H
