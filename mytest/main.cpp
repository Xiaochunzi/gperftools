#include <iostream>
#include <gperftools/tcmalloc.h>

int main() {
    // 使用 tcmalloc 分配内存
    int* arr = static_cast<int*>(tc_malloc(10 * sizeof(int)));

    // 初始化数组
    for (int i = 0; i < 10; ++i) {
        arr[i] = i * 10;
    }

    // 打印数组内容
    for (int i = 0; i < 10; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // 释放内存
    tc_free(arr);
    return 0;
}