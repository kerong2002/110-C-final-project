/* **************************************/
/*  Problem: UVa 11038                  */
/*  Language: C Language                */
/*  Result: AC (0.000s) on Online Jedge */
/*  Author: 陳科融 2022-05-28 05:54:47  */
/* **************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max(a,b) ((a>=b)?(a):(b))
#define min(a,b) ((a>=b)?(b):(a))
long long int count(long long int number){
    long long int total=0;
    long long int set=number;
    long long int run;
    long long int bonus=1;
    while(set>=10){
        run=set%10;
        set/=10;
        total+=(run>0)?(set*bonus):((set-1)*bonus+number%bonus+1);
        bonus*=10;
    }
    return total;
}
int main(){
    long long int f,s,m,n;
    while(scanf("%lld%lld",&f,&s)!=EOF){
        if(f==-1 && s==-1){
            break;
        }
        n=max(f,s);
        m=min(f,s);
        long long int answer=count(n)-count(m-1);
        if(m==0){
            answer+=1;
        }
        printf("%lld\n",answer);
    }
    return 0;
}
