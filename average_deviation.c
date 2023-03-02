#include <stdio.h>
//program to get the average and standard deviation of a vector

int receiveValues (int *v) {
    int i = 0; //variable to navigate the vector
    int value; //variable that receives values to be inserted in the vector

    do {
        printf("Insert a value (or 0 to exit): ");
        scanf("%d", &value);
        //the user inserts a value other than 0 to be inserted in the vector

        if (value != 0) {
            v[i] = value;
            i++;
        }
        //if the value is different than 0, the value is inserted and another value is requested
    } while (value != 0);
    //the loop only continues while the user doesn't insert the value 0

    return i;
    //the function returns the values to the vector
}

float calcAverage (int *v, int size) {
    int i; //variable to navigate the vector
    float sum = 0; //variable to receive the sum of the values in the vector

    for (i = 0; i < size; i++) {
        sum += v[i];
    } //loop to sum all the values in the vector

    return sum / size;
    //function returns the average of the values in the vector
}

float calcDeviation (int *v, float average, int size) {
    int i; //variable to navigate the vector
    float sum = 0; //variable to receive the sum of the values in the vector

    for (i = 0; i < size; i++) {
        sum += pow(v[i] - average, 2);
    } //loop to sum the distance of each value to the average to the power of 2

    return sqrt(sum / (size - 1));
} //function returns the standard deviation of the vector

int main() {
    int values[100]; //vector that receives the values
    int size; //variable that receives the size of the vector
    float average, standardDeviation; //variables that receive the average and the standard deviation of the vector


    size = receiveValues(values); //variable size receives a value equal to the size of the vector

    if (size == 0) {
        printf("There are no values.\n");
        return 0;
    } //verifies if values have been inserted into the vector

    average = calcAverage(values, size); //variable average receives the average of the vector
    standardDeviation = calcDeviation(values, average, size); //variavel standardDeviation receives the standard deviation of the vector

    printf("The average is: %f\n", average);
    printf("The deviation is: %f\n", standardDeviation);
    //program prints the average and standard deviation of the vector

    return 0;
}