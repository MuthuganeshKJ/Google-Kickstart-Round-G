
#include<stdio.h>

int main(){
    
    int t, m, n, p;
    
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &m, &n, &p);
        int arr[m][n];
        for(int x=0; x<m; x++)
            for(int y=0; y<n; y++)
                scanf("%d", &arr[x][y]);
          
        int mc=0, dc=0;  
        for(int x=0; x<n; x++){
            mc=0;
            for(int y=0; y<m; y++){
                if(arr[y][x]>mc){
                    mc = arr[y][x];
                }
            }
            int tc = (mc-arr[p-1][x]);
            if(tc>0)
                dc+=tc;
        }
        printf("Case #%d: %d\n", i+1, dc);
    }
}
