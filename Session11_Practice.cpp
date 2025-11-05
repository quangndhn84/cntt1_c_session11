#include <stdio.h>
#include <stdlib.h>

int main(){
	//Khai bao cac bien
	int i,choice, n, sortChoice, j, indexMax;
	int sum, min, max, temp, valueInsert;
	int isSorted=0, left, right, mid;
	int valueSearch;
	int currentIndex = 0;//Chi so nho nhat cua phan tu chua duoc khoi tao gia tri
	//Khai bao mang
	int numbers[100];
	do{
		printf("\n**************MENU***************");
		printf("\n1. Nhap gia tri phan tu");
		printf("\n2. In cac phan tu");
		printf("\n3. Tong va trung binh cong cac phan tu");
		printf("\n4. Phan tu lon nhat va nho nhat");
		printf("\n5. Sap xep mang");
		printf("\n6. Tim kiem phan tu");
		printf("\n7. Xoa phan tu theo chi so");
		printf("\n8. Chen phan tu");
		printf("\n9. Xoa phan tu theo gia tri");
		printf("\n10. Thoat");
		printf("\nLua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu can nhap gia tri:");
				scanf("%d",&n);
				for(i=0; i<n;i++){
					printf("numbers[%d]=",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(i=0; i<currentIndex; i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				sum = 0;
				for(i=0; i<currentIndex; i++){
					sum+=numbers[i];
				}
				printf("Tong cac phan tu: %d - Trung binh cong: %d\n",sum, sum/currentIndex);
				break;
			case 4:
				min = numbers[0];
				max = numbers[0];
				for(i=1; i<currentIndex; i++){
					if(min>numbers[i]){
						min = numbers[i];
					}
					if(max<numbers[i]){
						max = numbers[i];
					}
				}
				printf("Gia tri lon nhat: %d - Nho nhat: %d\n",max,min);
				break;
			case 5:				
				printf("\n1. Bubble sort ASC");
				printf("\n2. Selection sort DESC");
				printf("\n3. Insertion sort ASC");
				printf("\nLua chon cua ban:");
				scanf("%d",&sortChoice);
				switch(sortChoice){
					case 1:
						for(i=0; i< currentIndex-1; i++){
							for(j=0; j<currentIndex-1-i; j++){
								if(numbers[j]>numbers[j+1]){
									temp = numbers[j];
									numbers[j] = numbers[j+1];
									numbers[j+1] = temp;
								}
							}
						}
						isSorted =1;
						break;
					case 2:
						for(i=0; i<currentIndex-1; i++){
							indexMax = i;
							for(j=i+1; j<currentIndex; j++){
								if(numbers[indexMax]<numbers[j]){
									indexMax = j;
								}
							}
							if(indexMax != i){
								//Doi cho phan tu i va phan tu indexMax
								temp = numbers[i];
								numbers[i] = numbers[indexMax];
								numbers[indexMax] = temp;
							}
						}
						isSorted =1;
						break;
					case 3:
						for(i=1;i<currentIndex; i++){
							//Luu gia tri phan tu can chen vao phan da duoc sap xep
							valueInsert = numbers[i];
							j = i-1;//Chi so phan tu da duoc sap xep
							while(valueInsert<numbers[j] && j>=0){
								numbers[j+1] = numbers[j];
								j--;
							}
							numbers[j+1] = valueInsert;
						}
						isSorted =1;
						break;
					default:
						printf("Khong co lua chon %d\n",sortChoice);
				}
				break;
			case 6:
				printf("Nhap vao gia tri can tim:");
				scanf("%d",&valueSearch);
				if(isSorted){
					//Tim kiem nhi phan
					left = 0;
					right = currentIndex-1;
					do{
						mid = left + (right-left)/2;
						
					}while(numbers[mid]!=valueSearch && left != right)
					
				}else{
					//Tim kiem tuyen tinh
				}
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				exit(0);
			default:
				printf("Vui long nhap tu 1-10");
		}
	}while(1);
}
