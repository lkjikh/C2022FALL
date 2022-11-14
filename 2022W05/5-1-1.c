 int  is_sorted (int arr[], int left, int right);
 {
     int i;
     for (i = left; i < right; i++) {
         if (arr[i] <= arr[i + 1]) {

         }
         else {
             printf("该数组不是单调递增\n");
             return -1;
         }
     }
     printf("该数组是单调递增\n");
     return 0;
 }

int main() 
{
    int arr[5] = { 1, 2, 2, 4, 5 };

    int ret;

    is_sorted(arr, 1, 5);

    return 0;
}