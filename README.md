# Finding Nearest Point
 Prompts the user by asking x and y coordinate of a point P, then finds the index of the nearest point in the stored arrays. <br /> 
### Specifications

1. Points are stored in two integer arrays which one array stores x coordinates and other stores y coordinates. 

In this representation, the coordinates of the first point is stored in xcoors[0] and ycoors[0] in a corresponding manner and other points similarly. <br /> 

2.  Euclidean distance will be used as distance metric. <br /> 

### Output
Prints the output in the following order: point P, then nearest array index and distance between point P and this index. <br /> 

#### Sample output:

P = (12,30), nearest point index = 7, distance = 4.0
### Examples
##### Input 1:
3 4 2 1 0 9 0 1 5 6<br /> 
3 3 1 6 2 9 8 9 3 7<br /> 
9<br /> 
8<br /> 
##### Output 1:<br /> 
P = (9,8), nearest point index = 5, distance = 1.0<br /> 

##### Input 2:<br /> 
38 7 0 40 48 29 36 17 3 6<br /> 
45 10 31 43 21 20 14 29 27 26<br /> 
25<br /> 
25<br /> 
##### Output 2:<br /> 
P = (25,25), nearest point index = 5, distance = 6.4<br /> 

##### Input 3:<br /> 
68 49 98 0 76 61 92 18 31 14<br /> 
40 84 50 65 53 43 32 20 7 9<br /> 
22<br /> 
45<br /> 
##### Output 3:<br /> 
P = (22,45), nearest point index = 7, distance = 25.3<br /> 


##### Input 4:<br /> 
99 116 160 187 122 122 74 143 135 188<br /> 
22 128 163 195 11 15 187 31 166 196<br /> 
122<br /> 
13<br /> 
##### Output 4:<br /> 
P = (122,13), nearest point index = 4, distance = 2.0
