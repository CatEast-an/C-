#include <stdio.h>

int main(){

    //printf(最终类型,数据)
    //%s string字符串类型

    char *name="你跌";

    printf("%s\n",name);

    //%d int整型,short短整型

    int age=20;
    printf("%d\n",age);

    short money=0;
    printf("%d\n",money);

    //有符号整型signed

    signed int m=-100;
    printf("%d\n",m);

    //无符号整型unsigned

    unsigned int n=100;
    printf("%u\n",n);

    //%ld long长整型
    //%lld long long

    long long a=5000000000L;
    printf("%lld\n",a);

    //%c char字符类型

    char gender='B';
    printf("%c\n",gender);

    //%f float浮点型
    //%.xf x为保留的小数位数

    double tall=180.;
    printf("%.2f\n",tall);

    printf("%s的年龄为%d岁，性别%c，身高%.2f",name,age,gender,tall);//输出时要按照顺序填充

    return 0;

}