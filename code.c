#include <stdio.h>
int main()

{
    // Variables
    float cor_x_one, cor_y_one, cor_x_two, cor_y_two, slope, intercept;
    char answer;

    // Calculating the slope
    printf("This program will generate the equation of a linear function using 2 of its points.");
    printf("\nEnter coordinate of first x: ");
    scanf("\n%f", &cor_x_one);
    printf("Enter coordinate of first y: ");
    scanf("\n%f", &cor_y_one);
    printf("Enter coordinate of second x: ");
    scanf("\n%f", &cor_x_two);
    printf("Enter coordinate of second y: ");
    scanf("\n%f", &cor_y_two);
    printf("\nThose are the coordinates that have been designated. The first is (%.2f, %.2f) and the second is (%.2f, %.2f).", cor_x_one, cor_y_one, cor_x_two, cor_y_two);
    printf("\nDo you agree with this? Press Y to continue. Press N to quit.");
    scanf("\n%c", &answer);
    if (answer == 'y'){
            slope = (cor_y_two-cor_y_one)/(cor_x_two - cor_x_one);
            intercept = cor_y_one-(slope*cor_x_one);
            printf("\nThe slope is %.2f.\nThe y-intercept is %.2f.\nThe equation is: y = %.2fx + %.2f\n", slope, intercept, slope, intercept);
            return (0);
    }
    else (answer == 'n');{
        return (0);
        }
return (0);
}
