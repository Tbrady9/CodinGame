# CodinGame

## Overview ##

This repository will hold all of my solutions to coding puzzles posted on codingame.com. Descriptions of each puzzle will be listed in this readme file in the order in which I completed them.

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
