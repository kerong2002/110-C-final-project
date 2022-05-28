/* **************************************/
/*  Problem: UVa 138                    */
/*  Language: C Language                */
/*  Result: AC (0.270s) on Online Jedge */
/*  Author: 陳科融 2022-05-23 11:35:58  */
/* **************************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    for(long long int x=8;x<=65918161;x++){
        long long int pick=(pow(x,2)+x)/2;
        long long int pick_int=(int)sqrt(pick);
        if(sqrt(pick)-pick_int==0){
            printf("%10d%10d\n",pick_int,x);
        }
    }
    return 0;
}
