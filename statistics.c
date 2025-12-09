#include "statistics.h"
#include <math.h>
#include <stdio.h>

// Helper function to sort array for median calculation
void sort_array(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double calculate_mean(double arr[], int n) {
    if (n <= 0) {
        printf("Error: Array must have at least one element\n");
        return 0;
    }
    
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

double calculate_median(double arr[], int n) {
    if (n <= 0) {
        printf("Error: Array must have at least one element\n");
        return 0;
    }
    
    // Create a copy to avoid modifying original array
    double temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    
    sort_array(temp, n);
    
    if (n % 2 == 0) {
        return (temp[n/2 - 1] + temp[n/2]) / 2.0;
    } else {
        return temp[n/2];
    }
}

double calculate_variance(double arr[], int n) {
    if (n <= 0) {
        printf("Error: Array must have at least one element\n");
        return 0;
    }
    
    double mean = calculate_mean(arr, n);
    double variance = 0;
    
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    
    return variance / n;
}

double calculate_std_deviation(double arr[], int n) {
    return sqrt(calculate_variance(arr, n));
}

double find_max(double arr[], int n) {
    if (n <= 0) {
        printf("Error: Array must have at least one element\n");
        return 0;
    }
    
    double max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double find_min(double arr[], int n) {
    if (n <= 0) {
        printf("Error: Array must have at least one element\n");
        return 0;
    }
    
    double min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double calculate_sum(double arr[], int n) {
    if (n <= 0) {
        printf("Error: Array must have at least one element\n");
        return 0;
    }
    
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
