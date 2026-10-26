
Read ME 



Program/test
Inputs
Expected result
Actual result
Match or correction
BMI or Color Mixer
Your test inputs
Your prediction
What the program printed
Match, or explain the error and corrected result
COLOR
red, blue
Purple 
Purple
Match 
Color 
Red, yellow 
Orange 
Orange 
Match


Color 
Blue, Yellow 
Green 
Green
Match 
Color 
Blue red 
Purple 
Purple 
Match 
Color 
Red, Red 
Red
Red 
Match 
Color 
Orange blue 
Error 
Error: Invalid color entered. Please enter red, blue, or yellow.
 Match 
Color 
Red Orange 
Error 
Error: Invalid color entered. Please enter red, blue, or yellow.
Match 
BMI 
100,70
Underweight 
14.35 underweight 
Match 
BMI 
150,70
Optimal weight 
21.52 optimal 
Match 
BMI 
200,70
Overweight 
28.69 overweight 
Match 
BMI 
150, 0 
ERROR 
ERROR-Weight and height must be positive numbers greater than zero.


Match 
BMI 
200,0
Error 
Error- Weight and height must be positive numbers greater than zero.


Match 































1- bmi uses pounds and inches to find your bmi number to see where you stand on the bmi scale. Height is needed to calculate the relative weight to height because weight is different for each height. 

2- if bmi is exactly 18.5 then it does not fall into 18.5 it falls between 18.5 and 25.0 so its optimal and found between the scales 
If bmi is 25.0 then its not between 18.5 and 0, but its between 18.5 and 25.0 

3- Because without height and weight you cannot get bmi, and if one is 0 then the answer will be 0 and cause an error 

4- you don't round a value early because it will cause error in the final answer, you only round at the end with all the numbers completed 

5- strcmp (str1, str2) returns to 0 when the array contains terminated strings 
The == fails using c strings because it compares memory locations not their actual contents 

6- to make it work in any order you use OR combined with AND 
Like blue AND red OR red AND blue 

7- invalid colors are checked using !=0 and it makes sure that a valid color is in both positions before the code runs. 


8- The named constants make it easier to read and check because it gets rid of the chance of typos, and it represents exactly what the number means so you don't have to guess what it is 

