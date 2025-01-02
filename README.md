# CodinGame

## Overview ##

During my pursuit of my bachelors degree for computer science, I had a class in which the professor recommended a website (codingame.com) to all of his students. This website holds many different coding challenges and puzzles for many coding languages and many skill levels. This repository will hold all of my solutions to the puzzles that I have done so far. This readme file will hold the descriptions of each challenge in the order in which I completed them starting with the earliest completed in my second year of school.

## The Descent ##

Completed: Oct 17, 2022

### The Goal ###
Destroy the mountains before your starship collides with one of them. For that, shoot the highest mountain on your path.
### Rules ###
At the start of each game turn, you are given the height of the 8 mountains from left to right.
By the end of the game turn, you must fire on the highest mountain by outputting its index (from 0 to 7).

Firing on a mountain will only destroy part of it, reducing its height. Your ship descends after each pass. 
### Input ###
Within an infinite loop, read the heights of the mountains from the standard input and print to the standard output the index of the mountain to shoot.
### Output ###
A single line with one integer for the index of which mountain to shoot.

## Power of Thor ##

Completed: Oct 17, 2022

### The Goal ###
Your program must allow Thor to reach the light of power.
### Rules ###
Thor moves on a map which is 40 wide by 18 high. Note that the coordinates (X and Y) start at the top left! This means the most top left cell has the coordinates "X=0,Y=0" and the most bottom right one has the coordinates "X=39,Y=17".
Once the program starts you are given:
the variable lightX: the X position of the light of power that Thor must reach.
the variable lightY: the Y position of the light of power that Thor must reach.
the variable initialTX: the starting X position of Thor.
the variable initialTY: the starting Y position of Thor.
At the end of the game turn, you must output the direction in which you want Thor to go among: 
### Input ###
The program must first read the initialization data from the standard input, then, in an infinite loop, provides on the standard output the instructions to move Thor.
### Output ###
A single line providing the move to be made: N NE E SE S SW W or NW

## Temperatures ##

Completed: Nov 11, 2022

### The Goal ###
In this exercise, you have to analyze records of temperature to find the closest to zero.
### Rules ###
Write a program that prints the temperature closest to 0 among input data. If two numbers are equally close to zero, positive integer has to be considered closest to zero (for instance, if the temperatures are -5 and 5, then display 5).
### Input ###
Your program must read the data from the standard input and write the result on the standard output.
### Output ###
Display 0 (zero) if no temperatures are provided. Otherwise, display the temperature closest to 0.
