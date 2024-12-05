#include <stdio.h>
int main(){
	int arr[50];
	int i, n, choice, max, min, sum, element, issprime, row, col;
	do {
	
	printf("---MENU---");	
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Tim gia tri nho nhat va lon nhat trong mang\n");
	printf("4.In ra tong ua tat ca cac phan tu\n");
	printf("5.Them mot phan tu vao cuoi mang\n");
	printf("6.Xoa phan tu tai mot vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Tim kiem phan tu co ton tai trong mang hay khong\n");
	printf("9.In ra toan bo so nguyen trong bang\n");
	printf("10.Sap xep mang theo thu tu tang dan\n");
	printf("11.Thoat\n");
	printf("Lua chon cua ban la : ");
	scanf("%d &choice");
	printf("\n")
    switch (choice)
    {
   
		case 1:
		        printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
		case 2:
		
		        for(int n = 0; i < row; i++){
                    for( int n = 0; n < col; n++){
                        printf(" %d\t ", n);
                    }
                    printf("\n");
                }
		        break;
		 
		case 3: 
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                
                    }
                }    
                printf("Gia tri lon nhat cua mang: %d\n", max);

                int min = arr[0]
                 for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                printf("Gia tri nho nhat cua mang: %d\n", min);
                    }
                }    
                break;
		case 4: 

		case 5: 
                int element;
                printf("Nhap gia tri phan tu can them: ");
                scanf("%d", &element);
                n = addElement(arr, n, element);
                break;
            
        case 6: 
                int index;
                printf("Nhap chi so phan tu can xoa: ");
                scanf("%d", &index);
                n = deleteElement(arr, n, index);
                break;
            
		case 7: 



		case 8: 
                int numberFind, findIndex = -1;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &numberFind);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == numberFind) {
                        findIndex = i;
                        break;
                    }
                }
                if (findIndex != -1) {
                    printf("Gia tri %d o vi tri index: %d\n", numberFind, findIndex);
                } else {
                    printf("Gia tri can tim khong co trong mang\n");
                }
                break;
            

		case 9:



		case 10:


	
    } while (choice != 11);
	
	
	return 0;
}

	
               
           
