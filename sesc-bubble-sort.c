#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int *arr = (int*)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (int i = n; i-->1;)
    for (int j = 0; j < i; j++)
      if (arr[j] < arr[j + 1])
        arr[j] ^= arr[j + 1] ^= arr[j] ^= arr[j + 1];
  
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  free(arr);
  
  return 0;
}
