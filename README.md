#Conditionals
Conditionals are a way to give your robot decision making abilities. We do this by 
evaluating an expression to be either TRUE or FALSE. 

In order to "evaluate" an expression, we need to know what "operators" are. Here's the 
list we'll start with (Relational Operators):

Operator  |  Meaning          |   Example     | Result of Example
--------- | ----------------- | ------------- | -------------
==     |  Equal to         |  5 == 5  | this is true, because 5 is "equal to" 5
!=     |  Not Equal to     |  5 != 3  | this is also true, 5 does "not equal" 3
>      |  Greater than     |  5 > 3   | this is true, 5 is "greater than" 3
<      |  Less than        |  5 < 3   | this is NOT true, 5 is not "less than" 3
>=     |  Greater than or equal to  |  5 >= 5  | this is true, 5 is "equal to" 5
<=     |  Less than or equal to    |  5 <= 6  | this is true, 5 is "less than" 6

We'll start with an "if" conditional. "If" is a keyword that will help us to evaluate our 
statement.  For example, when you play Simon Says, in your mind, you're making the decision 
whether to carry out the command based on "if" the caller says "Simon Says" before they say 
the command.  We would write that like this:

  	if (caller says "Simon Says") 
  	{
      	do the command
  	}

So, we're "evaluating" the part in parentheses - we call this the "expression". If that is 
true, then we continue inside the curly brackets. Otherwise, we skip what's in the curly 
brackets and continue on after that.

The way we write this in actual code is:

    if (TRUE)
    {
        doThisCommand();
    }
    
or

    if ( 5 == 5 ) // which evaluates to TRUE
    {
        doThisCommand();
    }

The program in the `main.c` file will test some expressions and move the robot either 
forward or backward. The robot will start behind the start line on Mat A. Read through the 
code and try to predict which blocks will be executed and which will be ignored. Then, 
determine if the robot will end up back in the starting box, or somewhere past the starting 
line on the game board. _If you don't have the Jr. Botball game boards, you can just put the 
robot down in front of a line and see if the robot ends up back on the same side of the line
that it started._

After running the program, take a look at the console on the robot. You'll see which blocks 
were actually executed by reading the output on the console.


*Note:*

The code used in these tutorials is intended to run on the KIPR Link controller and written in 
the KISS Platform. You can find information about the KIPR Link and KISS Platform at 
http://www.kipr.org/hardware-software. The KISS Platform includes a simulator, so you can run 
the code on your computer without a robot. Our Botball team currently participates in the Junior 
Botball Challenge sponsored by KIPR. You can view more information for the challenge at 
http://www.juniorbotballchallenge.org.
