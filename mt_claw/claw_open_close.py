import serial
import time
port="/dev/ttyACM0"
arduinoData=serial.Serial(port,9600)
time.sleep(1)
while True:
    msg=input("Plaese press w/s")
    if(msg=="w"):
        msg=0
    elif(msg=='s'):
        msg=1
    
    arduinoData.write(msg.to_bytes(1,'little'))
    
    while(arduinoData.inWaiting()>0):
        data=arduinoData.readline()
        print(data)
