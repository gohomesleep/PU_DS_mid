#include <stdio.h>


int main()
{
    int ii, jj, i, j;
    while(scanf("%d %d", &ii, &jj)==2){
        if(jj>ii){
            i=ii;
            j=jj;
        }else{
            i=jj;
            j=ii;
        }///這裡是要把數字小的往前擺，而最後答案要印出原本的順序所以用一個新的參數進去來記錄
        
    int n, c;
    int max=0;
    for(int k=i; k<=j; k++){
        n=k;
        c=1;
        
        while(n!=1){///題目規則
            if(n%2!=0)
            n=3*n+1;
            else
            n/=2;
            c++;
        }
        if(c>max) max=c;
    
    }
    printf("%d %d %d\n", ii, jj, max);
    }
}
