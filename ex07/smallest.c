#include<stdio.h>
int main(int c,char**v){return c-3?0:(printf("%s %s\n",v[1],v[2]), 2);}
