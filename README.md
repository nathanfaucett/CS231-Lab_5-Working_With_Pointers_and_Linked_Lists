Part A: Pointers
#####

As part of Lab #4, you were asked to create a function which performs the following tasks:

- Reads twenty integer values (entered by the user at the keyboard) into two ten-element arrays,
- Iterates through both arrays in parallel, one element at a time, adding and multiplying the corresponding values together,
- Saves the sums of the values into a third ten-element array, and the products into a fourth ten-element array,
- Prints all the values in all four arrays to the screen.

Your task in this assignment is to implement the same algorithm, only this time, you must dynamically allocate the memory for all four arrays using the new operator, and then use the delete operator to release this memory after you have printed the final values. See the "Pointers and Memory, Part 1" lecture notes, and the corresponding sections of your textbook, for examples of how to create dynamically-allocated arrays.


Part B: Linked Lists
#####

In the "Pointers and Memory, Part 1" lecture notes, you were provided with some example code which illustrates one way to create a series of data types to represent a deck of playing cards. These types included: an enum definition for the four possible suits, a struct definition for the individual playing cards, and a struct definition for a deck of cards that includes a constructor which creates and populates a complete deck of 52 playing cards. (For your convenience, this sample code is provided in the attached file.)

The example code stores the deck of cards into a dynamically-allocated array. Your task in this assignment is to modify this sample code to store the cards into a dynamically-allocated linked list instead, with each link in the list representing a single playing card. After you create the linked list, your program should traverse the entire list and print all 52 cards to the screen. Use a switch statement for the enum values so that they will be printed to the screen as strings; for example, the ace of diamonds should be printed to the screen as "A/DIAMOND".

See the sample code at the end of the "Linked Structures" lecture notes for an example of how to create and traverse a linked list.  (This sample code describes data types for Scrabble™ tiles, but once you understand it, you should easily be able to adapt it to playing cards.)


This assignment is worth 100 points and is due by the end of the day on Friday, December 4th, the last class day of the semester.  As with Lab #4, you should implement the two parts of this assignment as separate functions; your main() function should contain only the two calls to these functions.
