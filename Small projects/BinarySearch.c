#include <stdio.h>

int main(void)
{
    //一個順序排放整數的數組
    int arr[] = {-100, -80, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 200, 100000};
    //計算數組的長度
    int size = sizeof arr / sizeof arr[0];
    //定義左下標、右下標和中間的下標
    int left = 0;
    int right = size - 1;
    int mid = 0;
    //要查找的目標數字
    int target = 0;

    //提示用戶輸入
    printf("請輸入要查找的數：\n");
    scanf("%d", &target);

    //查找數字
    while (right >= left)
    {
        //由於數組內的整數順序排列，可以用折半查找來判斷
        //若是目標數在mid下標左邊則將右側下標左移
        //若是目標數在mid下標右邊則將左側下標右移
        mid = (right + left) / 2;
        if (target > arr[mid])
            left = mid + 1;
        else if (target < arr[mid])
            right = mid - 1;
        //目標數字等於arr[mid]則是查找成功
        else
        {
            printf("找到了arr[%d] = %d\n", mid, arr[mid]);
            //成功後需要退出循環
            break;
        }
    }

    //如果左右下標交叉，則判斷爲找不到該數字
    if (right < left)
        printf("找不到。\n");

    return 0;
}
