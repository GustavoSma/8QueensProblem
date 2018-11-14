#include <stdio.h>

void eQueens(){
	int matrix[8][8],i=0,j=0, numRainhas=8;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++) matrix[i][j]=0; //0 marca posicao como vazia
	}
	i=0;
	j=0;
	while (numRainhas>=0 && j<8){
		for(i=0;i<8;i++){
			if(i==0&&j==0 && matrix[0][0]!=1) matrix[i][j]==1;
			else{
				if(matrix[i][j]==0 && matrix[i-1][j-1]!=1) {
					matrix[i][j]=1;
					j++;
					numRainhas--;
				}
			}
		}
	}
	for(i=0;i<8;i++){
		for(j=0;j<8;j++) printf("%d ",matrix[i][j]);
		printf("\n");
	}
	
}

int main(){
	eQueens();
	return 0;
}
