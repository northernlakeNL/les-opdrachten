import RPi.GPIO as GPIO
import time
GPIO.setmode( GPIO.BCM )
GPIO.setwarnings( 0 )

print ( "GPIO Pulse" )

def pulse( pin_nr, high_time, low_time ):
    """
    Geef een puls op de pin:
    Maak de pin pin_nr hoog, wacht high_time,
    maak de pin laag, en wacht nog low_time
    """
    # implementeer dez<e functie
    GPIO.pulse(pin_nr, 1, high_time)
    time.sleep(high_time)
    GPIO.pulse(pin_nr, 0, low_time)
    time.sleep(low_time)

led = 18
GPIO.setup( led, GPIO.OUT )
while True:
   pulse( led, 0.2, 0.2 )