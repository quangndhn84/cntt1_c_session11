#include <stdio.h>

int main(){
	//1. Khai bao cac bien
	int i,j;
	int originalSize, searchSize;
	int isExist,result=0;
	int indexSearch;
	//2. Khai bao va nhap du lieu cho cac chuoi
	printf("Nhap vao so ky tu trong chuoi goc:");
	scanf("%d",&originalSize);
	char originalArr[originalSize];
	printf("Nhap cac ky tu cua chuoi goc:\n");
	for(i=0; i<originalSize; i++){
		fflush(stdin);
		printf("originalArr[%d]=",i);
		scanf("%c",&originalArr[i]);
	}
	printf("Nhap vao so ky tu trong chuoi tim kiem:");
	scanf("%d",&searchSize);
	char searchArr[searchSize];
	printf("Nhap cac ky tu cua chuoi tim kiem:\n");
	for(i=0; i<searchSize; i++){
		fflush(stdin);
		printf("searchArr[%d]=",i);
		scanf("%c",&searchArr[i]);
	}
	//3. Tim chuoi nhap vao co ton tai trong chuoi goc khong
	//-Duyet tung ky tu trong chuoi goc	
	for(i=0; i<originalSize ;i++){		
		if(originalArr[i]==searchArr[0]){	
			isExist = 1;//Co ton tai		
			//Duyet tu ky thu 2 cua chuoi tim kiem		
			for(j=1; j<searchSize; j++){								
				if(originalArr[i+j] != searchArr[j]){
					isExist = 0;//Khong ton tai
					break;
				}
			}	
			if(isExist){
				//Co ton tai chuoi tim kiem trong chuoi goc
				result = 1;
				indexSearch = i;
				break;
			}	
		}		
	}
	if(result){
		printf("Co tim thay chuoi %s trong chuoi %s tai chi so %d\n",searchArr, originalArr, indexSearch);
	}
}
