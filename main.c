/**
 *  CONDITIONALS
 *
 *  Newcastle Robotics Junior Botball Team
 *  2nd - 5th Grade
 *
 *  Conditionals are a way to give your robot decision making abilities. We do this by 
 *  evaluating an expression to be either TRUE or FALSE. 
 *
 *  In order to "evaluate" an expression, we need to know what "operators" are. Here's the 
 *  list we'll start with (Relational Operators):
 *
 *    Operator  :  Meaning          :   Example
 *       ==     :  Equal to         :  5 == 5  // this is true, because 5 is "equal to" 5
 *       !=     :  Not Equal to     :  5 != 3  // this is also true, 5 does not equal 3
 *       >      :  Greater than     :  5 > 3   // this is true, 5 is "greater than" 3
 *       <      :  Less than        :  5 < 3   // this is NOT true, 5 is not "less than" 3
 *       >=     :  Greaer than or   :  5 >= 5  // this is true, 5 is "equal to" 5
 *                 equal to
 *       <=     :  Less than or     :  5 <= 6  // this is true, 5 is "less than" 6
 *                 equal to
 *
 *  We'll start with an "if" conditional. "If" is a keyword that will help us to evaluate our 
 *  statement.  For example, when you play Simon Says, in your mind, you're making the decision 
 *  whether to carry out the command based on "if" the caller says "Simon Says" before they say 
 *  the command.  We would write that like this:
 *
 *  	if (caller says "Simon Says") 
 *  	{
 *      	do the command
 *  	}
 *
 *  So, we're "evaluating" the part in parentheses - we call this the "expression". If that is 
 *  true, then we continue inside the curly brackets.
 * 
 *  OK, so below is a program that will help us evaluate some expressions. We'll start with the 
 *  robot in the starting block of Mat A. Then, we'll run the program and the robot will move 
 *  forward or backward based on the "if" conditionals that we run in the program.
 *
 *  Before running the program, read through the code and try to predict if the robot will end 
 *  up behind the start line or past it on the game board.
 *
 */
int main()
{
	
	if ( 5 == 5 ) 
	{
		// move forward 1 second
		printf("Moving forward because: 5 == 5 \n");
		motor(0, 100);
		motor(3, 100);
		msleep(1000);
	}
	
	if ( 5 != 5 )
	{
		// move backward 1 second
		printf("Moving backward because: 5 != 5 \n");
		motor(0, -100);
		motor(3, -100);
		msleep(1000);
	}
	
	if ( 5 > 6 ) 
	{
		// move forward 1 second
		printf("Moving forward because: 5 > 6 \n");
		motor(0, 100);
		motor(3, 100);
		msleep(1000);
	}
	
	if ( 5 < 6 )
	{
		// move forward 1 second
		printf("Moving forward because: 5 < 6 \n");
		motor(0, 100);
		motor(3, 100);
		msleep(1000);
	}
	
	if ( 5 >= 7 )
	{
		// move backward 1 second
		printf("Moving backward because: 5 >= 7 \n");
		motor(0, -100);
		motor(3, -100);
		msleep(1000);
	}	
	
	if ( 5 >= 5 ) 
	{
		// move forward 1 second
		printf("Moving forward because: 5 >= 5 \n");
		motor(0, 100);
		motor(3, 100);
		msleep(1000);
	}
	
	if ( 5 <= 7 )
	{
		// move backward 1 second
		printf("Moving backward because: 5 <= 7 \n");
		motor(0, -100);
		motor(3, -100);
		msleep(1000);
	}
	
	if ( 5 <= 4 ) 
	{
		// move backward 1 second
		printf("Moving backward because: 5 <= 4 \n");
		motor(0, -100);
		motor(3, -100);
		msleep(1000);
	}
	
	if ( 5 <= 5 ) 
	{
		// move backward 1 second
		printf("Moving backward because: 5 <= 5 \n");
		motor(0, -100);
		motor(3, -100);
		msleep(1000);
	}
	
	ao(); // turn off all motors
	return 0;
}
