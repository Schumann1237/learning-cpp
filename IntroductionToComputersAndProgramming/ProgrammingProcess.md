## The Programming Process
### Designing and Creating a Program
These are the steps recommended for the process of writing a program.

~~~
1. Clearly define what the program is to do
2. Visualise the program running on the computer
3. Use design tools such as a hierarchy chart, flowcharts, or pseudocode to create a model of the program.
4. Check the model for logical errors
5. Type the code, save it, and compile it.
6. Correct any errors found during compilation. Repeat Steps 5 and 6 as many times as necessary.
7. Run the program with test data for input
8. Correct any errors found while running the program. Repeat Steps 5 through 8 as many times as necessary.
9. validate the results of the program.
~~~
#### Clearly define what the program is to do.
|Requirement||
|---|---|
|*Purpose*| To calculate the user's gross pay.|
|*Input*| Number of hours worked, hourly pay rate.|
|*Process*|Multiply number of hours worked by hourly pay rate. The result is the user's gross pay.|
|*Output*|Display a message indicating the user's gross pay.|

#### Visualise the program running on the computer.
Try to imagine what the computer screen looks like while the program is running. What messages should the program display? What questions should it ask? By addressing these concerns, you will have already determined most of the program's output.

#### Use design tools such as hierarchy chart, flowcharts, or pseudocode to create a model of the program.
A *hierarchy chart* is a diagram that graphically depicts the structure of a program. It has boxes that represent each step in the program.

![hierarchy chart](https://images.slideplayer.com/27/9092198/slides/slide_6.jpg)

A hierarchy chart begins with the overall task and then refines it into smaller subtasks. Each of the subtasks is then refined into even smaller sets of subtasks, until each is small enough to be easily performed.

A *flowchart* is a diagram that shows the logical flow of a program. It is a useful tool for planning each operation a program performs and the order in which the operations are to occur.

*Psuedocode* is a cross between human language and a programming language. Although the computer can't understand pseudocode, programmers often find it helpful to write an algorithm in a language that's "almost" a programming language, but still very similar to natural language. For example: 
~~~
Get payroll data
Calculate gross pay
Display gross pay
~~~
Though, the pseudocode doesn't reveal all the program's details. A more detailed version of the pseudocode follows.
~~~
Display "How many hours did you work?"
Input hours.
Display "How much do you get paid per hour?"
Input rate
Store the value of hours times rate in the pay variable
Display the value in the pay variable.
~~~
#### Check the model for logical errors
*Logical errors* are mistakes that cause the program to produce erroneous results. A hierarchy chart, flowchart, or pseudocode model should be checked for errors after assembly. The programmer should trace through the charts or pseudocode, checking the logic and correcting if an error is found.

#### Type the code, save it, and compile it.
The programmer saves the source code to a file and begins the process of translating it to machine language. During this step the compiler will find any syntax errors that may exist in the program.

#### Correct any errors found during compilation. Repeat Steps 5 and 6 as many times as necessary.

#### Run the program with test data for input
The program is ready to be tested for run-time error, which is an error that occurs while the program is running. These are usually logical errors, such as mathematical mistakes.

Testing for run-time errors requires that the program be executed with sample data or sample input, this allows programmers to predict correct outputs and identify logical errors if the program does not produce the correct output.

#### Correct any errors found while running the program.
Desk-checking is a process that can help locate run-time errors. The term *desk-checking* means the programmer starts reading the program, or a portion of the program, and steps through each statement. A paper is often used in this process to jot down the current contents of all variables and sketch what the screen looks like after each output operation.

When a variable's contents change, or information is displayed on the screen, this is noted. By stepping through each statement, many errors can be located and corrected. If an error is a result of incorrect logic (such as an improperly stated math formula), you must correct the statement of statements involved in the logic.

#### Validate the results of the program.
When you believe you have corrected all the run-time errors, enter test data and determine whether the program solves the original problem.

#### What is Software Engineering?
The field encompasses the whole process of crafting computer software. Software engineers use a number of tools in their craft. Examples:
- Program specifications
- Charts and diagrams of screen output
- Hierarchy charts and flowcharts
- Pseudocode
- Examples of expected input and desired output
- Special software designed for testing programs
  
In step 3 of the programming process, hierarchy charts were introduced as a tool for top-down design. The subtasks that are identified in a top-down design can easily become modules, or separate components of a program. If the program is very large or complex, a team of software engineers can be assigned to work on the individual modules and combine them to make a single software application.