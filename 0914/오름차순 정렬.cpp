#include <stdio.h>

int main()
{
    int num[5]; 
    int temp;    
    int i,j,k;               

    for(i = 0; i<5; i++){
	printf("%d ��° ���� �Է��ϼ���: ",i+1); 
	scanf("%d", &num[i]); //�Է� �޾Ƽ� num[i]�� �ִ´�
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

    printf("���� ��� : ");
	for (i = 0 ; i<5;i++)
    printf("%d ", num[i]);
        
}

