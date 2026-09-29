# C-programming-practice
## 1. Basic Output
*Source:* Chapter 3, Exercise 3.39  
*What it does:* Prints an 8 x 8 checkerboard of asterisks.  
*Concepts:* printf, puts, nested for loops  
*How it works:* The outer loop prints each row. Even rows start with a space. The inner loop prints "* " eight times.  
## 2. Input – Process – Output
*Source:* Chapter 2, Exercise 2.17  
*What it does:* Reads velocity, acceleration and time, then shows final velocity and distance.  
*Concepts:* scanf, double, arithmetic  
*How it works:* Final velocity = u + a*t. Distance = u*t + 0.5*a*t*t.  
## 3. Decisions
*Source:* Chapter 3, Exercise 3.43  
*What it does:* Checks whether three sides can form a triangle.  
*Concepts:* if...else, &&  
*How it works:* Every pair of sides must add up to more than the third side.  
## 4. Basic Loop
*Source:* Chapter 3, Exercise 3.24  
*What it does:* Prints N, N², N³ and N⁴ for N = 1 to 10.  
*Concepts:* for loop, printf  
*How it works:* n goes from 1 to 10. Each pass prints n and its powers.  
## 5. Loop with Calculation
*Source:* Chapter 4, Exercise 4.11  
*What it does:* Adds up the multiples of 7 from 1 to 100.  
*Concepts:* for loop, accumulator, %  
*How it works:* If i % 7 == 0, i is added to sum.  
## 6. Loop with User Input
*Source:* Chapter 4, Exercise 4.9  
*What it does:* Reads a set of numbers and shows their sum and average.  
*Concepts:* for loop, scanf, accumulator  
*How it works:* The loop reads one number per pass and adds it to sum. Average = sum / count.  
## 7. Loop with Decision
*Source:* Chapter 3, Exercise 3.38  
*What it does:* Counts the 9s in an integer.  
*Concepts:* while loop, if, counter  
*How it works:* % 10 gets the last digit and / 10 removes it. The counter goes up for each 9.  
## 8. Interactive Program
*Source:* Chapter 4, Exercise 4.28  
*What it does:* Calculates weekly pay by worker type until the user enters -1.  
*Concepts:* while loop, switch, sentinel value  
*How it works:* A switch picks the pay formula for each code. The loop repeats until -1.  
