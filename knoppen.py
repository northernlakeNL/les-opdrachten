import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(0)
def twee_knopjes():

   print("input copy")

   led = 18
   switch = 23
   switch2 = 24

   GPIO.setup(led, GPIO.OUT)
   GPIO.setup(switch, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
   GPIO.setup(switch2, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
   while True:
      if( GPIO.input(switch)):
         GPIO.output(led, GPIO.HIGH)
      elif(GPIO.input(switch2)):
         GPIO.output(led, GPIO.LOW)
      time.sleep(0.1)

def aan_uit():
   print("input copy")

   led = 18
   switch = 23
   switch2 = 24

   GPIO.setup(led, GPIO.OUT)
   GPIO.setup(switch, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
   GPIO.setup(switch2, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
   toggled = True
   while True:
      if toggled:
         GPIO.output(led, GPIO.HIGH)
      else:
         GPIO.output(led, GPIO.LOW)
      if GPIO.input(switch):
         toggled = toggled == False
         while GPIO.input(switch):
            time.sleep(0.00001)
      


check = input('Welke wil je checken? \n 1: twee_knopjes \n 2: aan_uit \n' )

if check == '1':
   twee_knopjes()
elif check == '2':
   aan_uit()