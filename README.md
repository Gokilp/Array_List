# Array_List

This program is written in C++ and allows users to perform various operations on an integer array through a menu-driven interface. The operations include inserting values at the end of the array, inserting values at a specified position, deleting values at a specified position, displaying the array contents, and exiting the program.

The program initializes the array to a maximum size of 100 and defines the display, insert_pos, and delete_pos functions. However, the program has several issues that need to be fixed. For instance, the loop conditions in the insert_pos and delete_pos functions are incorrect and can cause the program to loop infinitely or not execute at all. Additionally, the delete_pos function should return the deleted value, but it returns nothing. Moreover, the program declares a local arr array inside the main function, which can cause unexpected behavior, and does not handle the case where the user selects option 4 to display the array before any values have been inserted.

To improve the program, you could revise the loop conditions in the insert_pos and delete_pos functions, correct the return type of the delete_pos function, remove the local arr array declaration from the main function, and handle the case where the user selects option 4 before any values have been inserted.
