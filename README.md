#Conditionals
Conditionals are a way to give your robot decision making abilities. We do this by 
evaluating an expression to be either TRUE or FALSE. In computers, true or false is 
indicated by either 0 (false) or anything that is not 0 (true).

In order to "evaluate" an expression, we need to know what "operators" are. Here's the 
list we'll start with (Relational Operators):

Operator  |  Meaning          |   Example     | Result of Example
--------- | ----------------- | ------------- | -------------
==     |  Equal to         |  5 == 5  | this is true, because 5 is "equal to" 5
!=     |  Not Equal to     |  5 != 3  | this is also true, 5 does not equal 3
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
true, then we continue inside the curly brackets.