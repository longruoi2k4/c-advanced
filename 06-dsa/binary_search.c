#include <stdio.h>

// Hàm thực hiện tìm kiếm nhị phân
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Nếu phần tử ở giữa là phần tử cần tìm
        if (arr[mid] == target)
            return mid;
        
        // Nếu phần tử cần tìm nhỏ hơn, tìm ở nửa bên trái
        if (arr[mid] > target)
            right = mid - 1;
        else // Nếu lớn hơn, tìm ở nửa bên phải
            left = mid + 1;
    }
    return -1; // Không tìm thấy
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = binarySearch(arr, 0, size - 1, target);
    if (result != -1)
        printf("Phần tử %d được tìm thấy tại chỉ số %d.\n", target, result);
    else
        printf("Phần tử %d không tồn tại trong mảng.\n", target);
    
    return 0;
}
