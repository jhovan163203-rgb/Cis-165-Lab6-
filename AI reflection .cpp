Ai reflection 

I used gemini to check my code and fix what was wrong with my code. One mistake it found was in the BMI code, I had made an error in the rounding which caused the code to jump from 18.496 to 18.5 and it read it as optimal weight when it should have been underweight. I had gemini correct the code and it came out to be 

// CORRECT: Using the unrounded double for category evaluation
double bmi = weight * 703.0 / (height * height);

cout << fixed << setprecision(2);
cout << "BMI: " << bmi << " - ";

// Evaluates the full precision double directly
if (bmi < 18.5) 
{cout << "Underweight" << endl; // Correct outcome for 18.496!} 
else if (bmi <= 25.0) 
{cout << "Optimal weight" << endl;} 
else 
{cout << "Overweight" << endl;}

This was a great help and made me actually understand where my mistake was instead of just having Gemini correct it without learning. 
 
