from machine import Pin, PWM
from utime import sleep

speaker = PWM(Pin(2))

freq = 220
volume = 0.5 # 0.0 to 1.0

speaker.duty_u16(int(volume * 32767))
speaker.freq(freq) 
sleep(1) # wait a second
speaker.duty_u16(0)
