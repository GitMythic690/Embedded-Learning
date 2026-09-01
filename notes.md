# Learning Notes

## Week 1 — C Fundamentals
### 01 Sep
- plan for next sessions; 
1. UART — next session. Sending serial data from the NUCLEO to my PC, gateway to printf-style debugging.(completed)
2. C intermediate — bitwise operators (the big one for register-level work), structs, multi-file projects.
3. Signal processing theory — sampling, filtering, noise.
4. Then into I2C/SPI protocols, now backed by both the bitwise skills and the theory.
- Ran UART code - worked, hello world was sent to PuTTY terminal. had to use explicit Run As -> STM32 C/C++ application. \r\n needed for real terminals and strlen needed for number of characters in string as no UART doesn't scan for null terminal.
### 19 Aug
- changed thwe simple button press-LED on code to an edge detection with state tracking so when the button is pressed the LED stays on and turns off when pressed again
### 14 Aug
- wrote and ran a simple button press-LED on code by reasoning the active low logic from the pull-up wiring, therefore reading and writing correctly to explicit pins
### 13 Aug
- looked into what the two lines of code in the stmIDE that make a LED on the board blink actually do, looked at it in stmMX and worked to understand GPIO output config
- Ran blink project on hardware succesfully 
- NExt step onboard USER button (B1/PC13) - first input, internal pull-up, no wiring needed -> read button, light LED when pressed
### 11 Aug
- retouched on GPIO pins electrically, sourcing/sinking and pull up and pull down resistors
### 9 Aug
- retouched on ohms ;aw, LED resistor sizing, series/parallel and voltage dividers using online simulation circuits and working out values in notebook
### 9 Aug
- STM32 toochain set up, blink_ld2 project generated, code added - waiting on Mini-B cable to flash
### 8 Aug
- completed nested loop mario pyramid code using nested for loops.
### 29 jul
- simploop file updated to include  while loop checker 
- finished lecture 1
### 25 Jul
- Created agree file; code asks user to input a y or Y if they agree and prints out agreed otherwise any other input will result in not agreed.
- Created a simple loop program called simploop, to show case a basic while loop with a condition.
- Video Paused at 1:30:55
### 24 Jul
- Created string file: input of basic string using scanf and then print output with user inputted string.
- reserve memory using char"VariableName(#)" beforehand, %#s in scanf line #-1 caps character input. %s inserts string in final printf.
- Created compare file, using comparison operators to compare 2 values and give out a answer.
### 19 Jul
- Toolchain setup: Anaconda's mingw was shadowing MSYS2's gcc — PATH order fixed it
- printf needs \n for a newline, doesn't add one automatically
- Stopped before lecture 1