# HW_11
 
Drawing of the Finite State Machine for your password.
![GkB6nl.jpg](https://imgpile.com/images/GkB6nl.jpg)

Description of your logic and the correct steps necessary for a successful sequence.
The correct steps for a successful sequence are: 
1. Press button
2. Turn on switch 1, press button
3. Move potentiometer all the way the the right, press button
4. Turn on switch 3, press button
The logic used for the code uses a value called pNum which increments as the user follows the correct steps of the sequence. Finally, when pNum =4, it indicates that the right sequence has been followed throughout and the yellow light lights up. On the contrary, if at any of these steps, the wrong input is entered, pNum becomes 100 and the red light turns on. After any output, the value of pNum goes back to 0 such that the loop restarts, giving the user the chance to re-enter the password. 
https://imgpile.com/i/GkBcth
https://imgpile.com/i/GkBlSr
https://imgpile.com/i/GkBYOa

A schematic drawing of your circuit.
![GkBExw.jpg](https://imgpile.com/images/GkBExw.jpg)
