#include <stdio.h>
//program to get the average and standard deviation of a array

int receiveValues (int *v) {
    int i = 0; //variable to navigate the array
    int value; //variable that receives values to be inserted in the array

    do {
        printf("Insert a value (or 0 to exit): ");
        scanf("%d", &value);
        //the user inserts a value other than 0 to be inserted in the array

        if (value != 0) {
            v[i] = value;
            i++;
        }
        //if the value is different than 0, the value is inserted and another value is requested
    } while (value != 0);
    //the loop only continues while the user doesn't insert the value 0

    return i;
    //the function returns the values to the array
}

float calcAverage (int *v, int size) {
    int i; //variable to navigate the array
    float sum = 0; //variable to receive the sum of the values in the array

    for (i = 0; i < size; i++) {
        sum += v[i];
    } //loop to sum all the values in the array

    return sum / size;
    //function returns the average of the values in the array
}

float calcDeviation (int *v, float average, int size) {
    int i; //variable to navigate the array
    float sum = 0; //variable to receive the sum of the values in the array

    for (i = 0; i < size; i++) {
        sum += pow(v[i] - average, 2);
    } //loop to sum the distance of each value to the average to the power of 2

    return sqrt(sum / (size - 1));
} //function returns the standard deviation of the array

int main() {
    int values[100]; //array that receives the values
    int size; //variable that receives the size of the array
    float average, standardDeviation; //variables that receive the average and the standard deviation of the array


    size = receiveValues(values); //variable size receives a value equal to the size of the array

    if (size == 0) {
        printf("There are no values.\n");
        return 0;
    } //verifies if values have been inserted into the array

    average = calcAverage(values, size); //variable average receives the average of the array
    standardDeviation = calcDeviation(values, average, size); //variavel standardDeviation receives the standard deviation of the array

    printf("The average is: %f\n", average);
    printf("The deviation is: %f\n", standardDeviation);
    //program prints the average and standard deviation of the array

    return 0;
}
