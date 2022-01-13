import RPi.GPIO as GPIO
import time
GPIO.setmode( GPIO.BCM )
GPIO.setwarnings( 0 )

print( "servo wave" )

def pulse( pin, delay1, delay2 ):
   # copieer hier je implementatie van de pulse functie
    GPIO.output(pin, GPIO.HIGH)
    time.sleep(delay1)
    GPIO.output(pin, GPIO.LOW)
    time.sleep(delay2)

def servo_pulse( pin_nr, position ):
    """
    Send a servo pulse on the specified gpio pin 
    that causes the servo to turn to the specified position, and
    then waits 20 ms.
    
    The position must be in the range 0 .. 100.
    For this range, the pulse must be in the range 0.5 ms .. 2.5 ms
    
    Before this function is called, 
    the gpio pin must be configured as output.
    """
    p = ((0.0002*position)+0.0005)
    pulse(pin_nr, p, p)

servo = 25
GPIO.setup(servo, GPIO.OUT)
while True:
   for i in range( 0, 100, 1 ):
      servo_pulse( servo, i )
   for i in range( 100, 0, -1 ):
      servo_pulse( servo, i )
   time.sleep(0.5)