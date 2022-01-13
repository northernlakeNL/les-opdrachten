import RPi.GPIO as GPIO
import time
GPIO.setmode( GPIO.BCM )
GPIO.setwarnings( 0 )

print( "binair walk" )

led_pins = [ 18, 4, 17, 27, 22 ]

for gpio in led_pins:
   GPIO.setup( gpio, GPIO.OUT )

def leds( pins, value, delay ):
    for gpio in pins:
        if value % 2 == 1:
           GPIO.output( gpio, GPIO.HIGH )
        else:
           GPIO.output( gpio, GPIO.LOW )
        value = value // 2
    time.sleep( delay )

def kitt(pins, delay):
   for i in range(0, len(pins)):
      value = 2 ** i
      leds( led_pins, value, delay )
   for i in range(len(pins)-1, 0, -1):
      value = 2 ** i
      leds( led_pins, value, delay )

leds(led_pins, 0, 0)
delay = 0.2
while True:
   kitt( led_pins, delay )