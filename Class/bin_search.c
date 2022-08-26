#include <stdio.h>
#include <string.h>

int main(void)
{
    //存放顺序的数的数组：
    int arr[10] = {-1, 0, 90, 91, 99, 101, 109, 120, 130, 200};
    //求数组长度：
    int length = sizeof(arr) / sizeof(arr[0]);
    //动态左右下标：
    int left = 0;
    int right = length - 1;
    //查找的目标：
    int target = 0;
    printf("请输入要查找的数字：\n");
    scanf("%d", &target);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else if(arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了下标是：%d， 结果是%d。\n", mid, arr[mid]);
            break;
        }

    }
    if (left > right)
    {
        printf("找不到：\n");
    }
}