#include <stdio.h>

// Define a constant for the maximum size of the array
#define MAX_SIZE 100

int main()
{
  // Declare an array of integers
  int arr[MAX_SIZE];

  // Get the number of elements from the user
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Read the elements of the array from the user
  printf("Enter the elements: ");
  for (int i = 0; i < n; i++)
  {
      scanf("%d", &arr[i]);

  }

  // Print the array
  printf("The array is: ");
  for (int i = 0; i < n; i++)
  {
      printf("%d", arr[i]);

  }
  printf("\n");

  // Find the sum of all the elements
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
      sum += arr[i];

  }
  printf("The sum of all elements is: %d\n", sum);

  // Find the maximum element in the array
  int max = arr[0];
  for (int i = 1; i < n; i++)
  {
      if (arr[i] > max)
      {
          max = arr[i];
      }
  }
  printf("The maximum element in the array is: %d\n", max);

  // Find the minimum element in the array
  int min = arr[0];
  for (int i = 1; i < n; i++)
  {
      if (arr[i] < min)
      {
          min = arr[i];
      }
  }
  printf("The maximum element in the array is: %d\n", min);

  // Sort the array in ascending order using bubble sort
  for (int i = 0; i < n - 1; i++)
  {
      for (int j = 0; j < n - i - 1; j++)
      {
          if(arr[j] > arr[j+1])
          {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
      }
  }

  // Print the sorted array
  printf("The sorted array in ascending order is: ");
  for (int i = 0; i < n; i++)
  {
      printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
