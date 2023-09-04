#include <stdio.h>
#include <string.h>
#include "md5.h"

int main(int argc, char** argv) 
{
    //存放md5加密后数据
    char md5_code[33];
    
    //对任何数据进行md5加密
    //1.目标数据地址   2.目标数据长度   3.存放加密数据
    //md5_data(argv[1], strlen(argv[1]), md5_code);
    
    //对文件内容进行md5加密
    //1.目标文件路径   2.存放加密数据
    md5_file(argv[1],md5_code);

    printf("%s\n",md5_code);

    return 0;
 }
