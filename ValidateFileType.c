#include <stdio.h>
#include <sys/stat.h>
 
int main() {
    const char* path = "路径"; // 替换为你要判断的路径
 
    struct stat st;
    if (stat(path, &st) == 0) {
        if (S_ISDIR(st.st_mode)) {
            printf("路径是一个文件夹\n");
        } else if (S_ISREG(st.st_mode)) {
            printf("路径是一个文件\n");
        } else {
            printf("路径是其他类型\n");
        }
    } else {
        printf("路径不存在\n");
    }
 
    return 0;
}
 
