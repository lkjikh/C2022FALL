 int  is_sorted (int arr[], int left, int right);
 {
     int i;
     for (i = left; i < right; i++) {
         if (arr[i] <= arr[i + 1]) {

         }
         else {
             printf("�����鲻�ǵ�������\n");
             return -1;
         }
     }
     printf("�������ǵ�������\n");
     return 0;
 }

int main() 
{
    int arr[5] = { 1, 2, 2, 4, 5 };

    int ret;

    is_sorted(arr, 1, 5);

    return 0;
}