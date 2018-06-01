#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <string>

using namespace std;

int main () {

    int x, y;
    vector<double> response_vec;
    vector<double> arr_1;
    int numbers[x][y];

    ifstream myfile;
    myfile.open("/home/karis/CLionProjects/LinearReg/data.txt");

    // Tests if the file opens successfully.
    if (!myfile.is_open()) {
        cout << "File failed to open!" << endl;
    }

    myfile >> x;
    //cout << x << endl; // no. of rows
    myfile >> y;
    //cout << y << endl; // no. of cols

    // Design matrix X.
    int numbers_t[y][x];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            numbers[i][0] = 1;
            myfile >> numbers[i][j+1];
            cout << numbers[i][j] << " ";
            if (j+1 > y) {
                numbers[i][0] = 1;
                break;
            }
            // Transpose of the design matrix X.
            numbers_t[j][i] = numbers[i][j];
        }
        cout << '\n' << endl;
    }


    // Response vector Y. ???


    // Continuation of Transpose of Design matrix X.
    cout << "Transpose of Matrix: " << '\n' << endl;
    for(int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << " " << numbers_t[i][j];
            if (j == x - 1) {
                cout << '\n' << endl;
            }
        }
    }

}






















/*
    double mean_x, mean_y;
    double N = arr_x.size();

    // calculating the mean of x
    mean_x = sum_x / N;
    cout << "The mean of x is: " << mean_x << endl;

    /* calculating the errors of x by subtracting individual initial x-values by the mean of x
    for (double z : arr_x) {
        z -= mean_x;
        cout << z << endl;
    }*/

    /*// calculating the mean of y
    mean_y = sum_y / N;
    cout << "The mean of y is: " << mean_y << endl;

    /* calculating the errors of y by subtracting individual initial y-values by the mean of y
    for (double q : arr_y) {
        q -= mean_y;
        cout << q << endl;
    }*/
/*
    double xMinusMean, yMinusMean, xy, sum_xy, xMinusMean2, sum_xMinusMean2;

    sum_xy = 0;
    sum_xMinusMean2 = 0;

    for (int i = 0; i < arr_x.size(); i++) {
        // x - mean(x)
        xMinusMean = arr_x[i] - mean_x;
        // y - mean(y)
        yMinusMean = arr_y[i] - mean_y;
        // (x - mean(x)) * (y - mean(y))
        xy = xMinusMean * yMinusMean;
        // Sum of all elements of (x - mean(x)) * (y - mean(y))
        sum_xy += xy;
        // (x - mean(x))^2
        xMinusMean2 = xMinusMean * xMinusMean;
        // Sum of all elements of (x - mean(x))^2
        sum_xMinusMean2 += xMinusMean2;
        // cout << "The xminusmean: " << xMinusMean << endl;
        // cout << "The yminusmean: " << yMinusMean << endl;
        // cout << "Multiplication: " << xy << endl;
        // cout << "The sum of errors is: " << sum_xy << endl;
        // cout << "The sum of square of x errors is: " << sum_xMinusMean2 << endl;
    }
    */
/*
    double B1, B0;

    // y = B0 + B1 * x
    // Getting value of B1
    B1 = sum_xy / sum_xMinusMean2;
    cout << "The value of B1 is: " << B1 << endl;

    // Getting value of B0
    B0 = mean_y - (B1 * mean_x);
    cout << "The value of B0 is: " << B0 << endl;

    // Making predictions
    cout << "y = " << B0 << " + " << B1 << "x" << endl;

}
*/