#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
     const int COLOR_SIZE = 20;

        char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter the first primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter the second primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> second_color;


    bool is_first_valid = (strcmp(first_color, "red") == 0 ||
                          strcmp(first_color, "blue") == 0 ||
                          strcmp(first_color, "yellow") == 0);

    bool is_second_valid = (strcmp(second_color, "red") == 0 ||
                           strcmp(second_color, "blue") == 0 ||
                           strcmp(second_color, "yellow") == 0);

      if (!is_first_valid || !is_second_valid) {
        cout << "Error: Invalid color entered. Please enter red, blue, or yellow." << endl;
        return 1;}

    string result_color;

    if (strcmp(first_color, second_color) == 0) {
    
        result_color = first_color;} 
        else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "blue") == 0) ||
               (strcmp(first_color, "blue") == 0 && strcmp(second_color, "red") == 0)) {
        result_color = "purple";} 
        else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "yellow") == 0) ||
               (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "red") == 0)) {
        result_color = "orange";}
 else if ((strcmp(first_color, "blue") == 0 && strcmp(second_color, "yellow") == 0) ||
               (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "blue") == 0)) {
        result_color = "green";}

    cout << "Resulting color: " << result_color << endl;

    return 0;}
