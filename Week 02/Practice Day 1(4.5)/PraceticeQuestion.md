## Week 02

## Module 4.5(Practice Day)

Note: WAP = Write a program

**1**
```
WAP that takes n integer numbers, and sum up all the integers in that array.

Sample input 01
5
1  2  3  4  5
Sample input 02
6
5 6 7 8 0 1
Sample output 01
15
Sample output 02
27
```
**2**
```
WAP that takes n integer numbers, and multiply all the numbers in the odd indexed position. Indexing starts from 0.

Sample input 01
5
1  2  3  4  5
Sample input 02
6
5 6 7 8 0 1
Sample output 01
8
Sample output 02
48
```
**3**
```
WAP that takes a string as input, and shifts all the characters in the even indexed position by the following rule.
‘a’ becomes ‘b’
‘b’ becomes  ‘c’
.............
‘z’ becomes  ‘a’

Sample input 01
abcdefg

Sample input 02
zfth

Sample output 01
bbddffh

Sample output 02
afuh

```
**4**
```
WAP that takes 2 integer arrays as input, then computes the intersection of the two arrays.

Sample input 01
4
1 2 3 5
5
1 6 2 7 3
Sample input 02
5
1 2 3 4 5
3
6 7 8
Sample output 01
1 2 3

Sample output 02


```
**5**
```
WAP that takes 2 integer arrays as input, then computes the union of the two arrays. 

Sample input 01
4
1 2 3 5
5
1 6 2 7 3
Sample input 02
5
1 2 3 4 5
3
6 7 8
Sample output 01
1 2 3 5 6 7

Sample output 02
1 2 3 4 5 6 7 8

```
**6**
```
*Write a class named ‘Cuboid’.
1.Create 3 private variables in the class. length, width and height.
2.Create 2 constructor. One is an empty constructor that takes nothing as input and initializes length, width and height as 0. Another constructor takes 3 values as input and initializes length, width and height as the given values.
3.Write a public function named ‘getVolume’ that calculates the volume of the Cuboid and returns the desired Volume.
4.Write a public function named ‘getSurfaceArea’ that calculates the surface area of the Cuboid and returns the desired value.
5.Create an array of ‘Cuboid’ objects(like 4 or 5 objects) and initialize length, width and height with any value you like. But make sure to give different length, width, height to different objects.
6.Sort the ‘Cuboid’ objects in the increasing order of Volume by writing a custom comparator.
7.Sort the ‘Cuboid’ objects in the increasing order of surface area by writing a custom comparator.

	Note: Volume = l*w*h
	          Surface Area = 2*l*w+2*l*h+2*h*w
	          l = length, w = width , h = height

```