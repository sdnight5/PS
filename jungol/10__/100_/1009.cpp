#include <stdio.h>
#include<string.h>

char arr[11][7];

int main()
{
    int i=0,j,sum=0,len;
    for (i = 0; ; i++){
        scanf("%s",arr[i]);
        if (arr[i][0] == '0') break;
        len = strlen(arr[i]);
        if (arr[i][len-1] == '0') arr[i][len-1] = '\0';
        else {
            printf("%c",arr[i][len-1]);
            sum += (int)arr[i][len-1] - 48;
        }
        for (j = len-2; j > -1; j--){
            if (arr[i][j] == '0' && arr[i][j+1] == '\0') arr[i][j] = '\0';
            else {
                printf("%c",arr[i][j]);
                sum += (int)arr[i][j] - 48;
            }
        }
        printf(" %d\n",sum);
        sum = 0;
    }

    return 0;
}