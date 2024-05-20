
# Cricket Team Management System

## Problem Statement

Develop a simple cricket team management system in C programming language. The system should allow users to input team names and details of individual cricketers including their names, ODI stats, highest score, and number of matches played. Use structures to organize the data for teams and cricketers.

## Instructions

1. Create a C program that implements the cricket team management system.
2. Prompt the user to input the team name and details of a cricketer (name, ODI stats, highest score, and number of matches played).
3. Display the entered data back to the user.
4. Compile and run the program on your system to ensure it functions as expected.

## Additional Notes

- The program currently supports input for only one cricketer per team. Additional functionality can be added to support multiple cricketers per team and to enhance the user interface.
- You're encouraged to contribute to this project by adding new features, improving existing code, or fixing any bugs.




# Employee Management System with Salary Validation

## Problem Statement

You are tasked with developing a simple Employee Management System in C. The program should allow users to input employee details such as ID, name, and salary. However, there's a requirement to validate the salary to ensure it is above a certain threshold.

### Requirements

1. **Employee Structure**: Define a structure named `emp` that holds the following information about an employee:
   - `ID` (integer): Represents the unique identification number of the employee.
   - `name` (array of characters): Represents the name of the employee (limited to 10 characters).
   - `salary` (float): Represents the salary of the employee.

2. **Main Function**:
   - Declare an array of `emp` structures named `s1` capable of holding details of up to 10 employees.
   - Declare a pointer `p` of type `emp`.
   - Prompt the user to input a salary.
   - Validate the entered salary to ensure it is greater than 25000. If not, display an error message indicating that the salary is not valid.
   - If the salary is valid, prompt the user to input the number of employees (`e`) they want to enter details for.
   - Using a loop, prompt the user to input the details (ID, name, and salary) for each employee.
   - After inputting all employee details, display the details of each employee entered.
   - Ensure to use pointer arithmetic to navigate through the array of structures.

3. **Requirements**:
   - The program should not allow the user to input details for more than 8 employees.
   - Ensure that the program terminates gracefully after displaying the employee details.
   - Validate user inputs wherever necessary to prevent erroneous data entry.
   - Make use of functions where applicable to improve code readability and modularity.

<<<<<<< HEAD

# Infix to Postfix Conversion using Stack

This repository contains a C program that converts an infix expression to a postfix expression using a stack data structure.

## Problem Statement

You are tasked with developing a program in C that converts an infix expression to a postfix expression using a stack data structure. The program should accept an infix expression as input, process it, and output the equivalent postfix expression.

### Requirements

1. **Input**: Your program should prompt the user to enter an infix expression.
2. **Output**: The program should display the equivalent postfix expression derived from the input infix expression.
3. **Operators and Operands**: The infix expression will consist of single-character operands (variables) and operators (+, -, *, /). Parentheses may also be present in the expression.
4. **Stack Implementation**: Utilize a stack data structure to aid in the conversion process. Implement stack operations for push and pop.
5. **Operator Precedence**: The program should consider operator precedence while converting infix to postfix. The precedence order should be as follows:
   - Parentheses '()' have the highest precedence.
   - Multiplication (*) and division (/) have higher precedence than addition (+) and subtraction (-).
   - Operators with the same precedence should be evaluated from left to right.
6. **Functionality**: Ensure that your program correctly handles infix expressions of varying complexities, including multiple operators and parentheses.
=======
# Basic Queue Implementation in C

This repository contains a simple C program that implements a basic queue data structure using an array.

## Problem Statement

You are tasked with implementing a basic queue data structure in C. The queue should support the following operations:

1. **Insertion**: Allows inserting elements into the queue.
2. **Display**: Displays the elements currently present in the queue.

### Requirements

1. **Queue Implementation**: Implement a queue using an array with a fixed size.
2. **Insertion Operation (`insert()`)**: 
   - Prompt the user to enter an integer element to insert into the queue.
   - Check for queue overflow condition.
   - Insert the element at the rear end of the queue.
3. **Display Operation (`display()`)**:
   - Display the elements currently present in the queue.
   - Check for an empty queue condition.
>>>>>>> origin/main
