#ifndef SPEECH_H
#define SPEECH_H

#include <iostream>

class ISpeech
{
protected:
    std::string model;

public:
    ISpeech(std::string model_) : model(model_){};

    virtual void Talk() = 0;
};

class SpeechV1 : public ISpeech
{
public:
    SpeechV1(std::string model_) : ISpeech(model_){};
    void Talk() override { std::cout << "Talking with Speech version 1.0. \n"; }
};

class SpeechV2 : public ISpeech
{
public:
    SpeechV2(std::string model_) : ISpeech(model_){};
    void Talk() override { std::cout << "Talking with Speech version 2.0. \n"; }
};

#endif // SPEECH_H
