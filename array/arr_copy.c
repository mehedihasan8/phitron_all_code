#include <stdio.h> // Include the standard input/output library

int main() {
    int n; 
    scanf("%d", &n); // Read the size of the first array
    
    int arr[n]; // Declare the first array with 'n' elements
    
    // Loop to input elements of the first array
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]); // Read each element into the array
    }
    
    int m;
    scanf("%d", &m); // Read the size of the second array
    int arr_two[m]; // Declare the second array with 'm' elements
    
    // Loop to input elements of the second array
    for(int i = 0; i < m; i++){
        scanf("%d", &arr_two[i]); // Read each element into the array
    }
   
    int ans[n + m]; // Declare a new array to store the merged result
    
    // Copy elements from the first array to 'ans'
    for(int i = 0; i < n; i++){
        ans[i] = arr[i];
    }
    
    int i = n; // Initialize 'i' to the next position after the last element of the first array
    
    // Copy elements from the second array to 'ans'
    for(int j = 0; j < m; j++){
        ans[i] = arr_two[j];
        i++; // Move to the next position in 'ans'
    }
    
    // Print the merged array
    for(int i = 0; i < n + m; i++){
        printf("%d ", ans[i]); // Print each element separated by a space
    }

    return 0; // Return 0 to indicate successful execution
}
