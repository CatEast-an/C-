#include <stdio.h>

int main(){

    //printf(��������,����)
    //%s string�ַ�������

    char *name="���";

    printf("%s\n",name);

    //%d int����,short������

    int age=20;
    printf("%d\n",age);

    short money=0;
    printf("%d\n",money);

    //�з�������signed

    signed int m=-100;
    printf("%d\n",m);

    //�޷�������unsigned

    unsigned int n=100;
    printf("%u\n",n);

    //%ld long������
    //%lld long long

    long long a=5000000000L;
    printf("%lld\n",a);

    //%c char�ַ�����

    char gender='B';
    printf("%c\n",gender);

    //%f float������
    //%.xf xΪ������С��λ��

    double tall=180.;
    printf("%.2f\n",tall);

    printf("%s������Ϊ%d�꣬�Ա�%c�����%.2f",name,age,gender,tall);//���ʱҪ����˳�����

    return 0;

}