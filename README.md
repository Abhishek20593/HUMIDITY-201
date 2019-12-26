# HUMIDITY-201
* A Humidity sensor HR201 is interface with the Arduino. For this―
1. Arduino Uno R3
2. HR201 humidity sensor
3. A Breadboard
4. A 500KΩ resistance
5. Some Male to Male Connecting Wire
6. A Computer and
7. A USB A-to-B cable ― are needed.
* Step 1: The three male to male connectors are connected with the bread board, 
          where a 500KΩ resistance is used as a pull up resistance to get the output pin 
* Step 2: Then the humidity sensor is connected to the Arduino Uno:
--> Connect sensor’s one leg to +5v on the Arduino board.
--> Connect sensor’s another leg to 500kΩ resistance
--> From there one leg connected to data pin A0 and another to the GND pin of the Arduino
* Step 3: After that the Sketch of humidity sensor will uploaded to the Arduino Board.
          The Analog to Digital Converter (ADC) has a precision of 10 bits, so converts 
          analog values into a digital approximation based on the formula
          ADC_Value = (Analog_value /1024) X 500
          Use this formula to convert the digital value to a standard value
* Step 4: After everything is done, compile the code and upload it to the board. 
          Then start the Serial monitor to view the output values.
* In this way a humidity sensor is interfaced with the controller board.

#------------THANK YOU-------------
