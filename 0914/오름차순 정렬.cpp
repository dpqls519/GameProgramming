#include <stdio.h>

int main()
{
    int num[5]; 
    int temp;    
    int i,j,k;               

    for(i = 0; i<5; i++){
	printf("%d 번째 값을 입력하세요: ",i+1); 
	scanf("%d", &num[i]); //입력 받아서 num[i]에 넣는다
	printf("\n");}

    for(j=0;j<5;j++){
		for(k=0;k<4;k++)
        {
            if(num[k] > num[k+1]) 
            {
                temp = num[k];   
                num[k]=num[k+1];
                num[k+1] = temp;
            }
        }
    }

    printf("정렬 결과 : ");
	for (i = 0 ; i<5;i++)
    printf("%d ", num[i]);
        
}

