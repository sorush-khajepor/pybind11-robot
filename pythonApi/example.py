from robot import *

s1 = SpeechV1("model_V1_ab")
s2 = SpeechV2("model_V2_yz")

t800 = T800("Jack", 2020, s1)
t1000 = T1000("Kate", 0, s2)

print("t800:")
print(t800.GetData())
t800.Talk()

print("t1000:")
t1000.Talk()

t1000.height=1.90
print(t1000.height)

Move(t800)
Move(t1000)
