#include<stdio.h>
int binary_search(int arr[], int n, int value){
    int left = 0 , right = n - 1;
    while (left<=right){
        int mid = (left + right) / 2;
        if( arr[mid] == value){
            return 1; 
        } else if ( arr[mid] < value){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;
}
int main(){

    int arr[100];
    long long n, max, value, choice, isPrime;
    long long soChan = 0;
    long long soLe = 0;
    long long pos = 0;
    long long index = 0;
    do
    {
        printf("---MENU---\n");
        printf(" 1. Nhap vao so phan tu va gia tri cho mang\n");
        printf(" 2. In ra cac phan tu trong mang\n");
        printf(" 3. Dem so luong ca phan tu chan le trong mang\n");
        printf(" 4. Tim gia tri lon thu hai trong mang\n");
        printf(" 5. Them mot phan tu vao dau mang\n");
        printf(" 6. Xoa mot phan tu\n");
        printf(" 7. Sap xep mang theo thu tu giam dan( Insertion sort)\n");
        printf(" 8. Tim kiem phan tu trong mang\n");
        printf(" 9. In ra toan bo so nguyen to da duoc binh phuong\n");
        printf(" 10. Sap xep mang theo thu tu giam dan (Bubble sort)\n");
        printf(" 11. Thoat \n");
        printf(" Lua chon cua ban:\n");
        scanf(" %lld", &choice);
        switch (choice)
        {
        case 1: 
            printf(" Nhap vao so phan tu cua mang\n");
            scanf("%lld", &n);
            for (int i = 0; i < n; i++){
                printf(" Nhap gia tri tai phan tu thu arr[%d]", i);
                scanf(" %d", &arr[i]);
            }
            printf("\n");

            break;
        case 2 : 
            for (int i = 0; i < n; i++){
                printf(" arr[%d] = %d, ", i, arr[i]);
            }           
            printf("\n");
            break;
        case 3 : 
            for (int i = 0; i < n; i++){
                if( arr[i] % 2 == 0){
                    soChan++;
                } else {
                    soLe++;
                }
            }
            printf(" So luong so chan trong mang la : %lld\n", soChan);
            printf(" So luong so le trong mang la : %lld\n", soLe);
            break;
        case 4 : 
            max = arr[0];
            for (int i = 0; i < n; i++){
                if(arr[i]> max){
                   max = arr[i];
                }
            }
            value = arr[0];
            for (int i = 0; i < n ; i++){
                    if ( value != max){
                    if(value < arr[i] && arr[i] < max){
                        value = arr[i];
                    }
                }
            }
            printf(" Gia tri lon thu 2 trong mang la :%d\n", value);
            break;
        case 5 : 
            printf(" Nhap gia tri muon them moi: \n");
            scanf(" %lld", &value); 
            for( int i = n; i > pos; i--){
                arr[i] = arr[i-1];
            }
            arr[pos] = value;
            n++;   
            printf(" Mang sau khi them phan tu moi la\n");
            for(int i = 0; i < n; i++){
                printf(" %lld\t", arr[i]);
            }
            printf("\n");
            break;              
        case 6 :  
            printf(" Nhap vao vi tri arr[] ban muon xoa\n");
            scanf("%lld",&pos );
            if( pos<0 || pos>n){
                printf(" So ban nhap khong hop le, vui long nhap lai\n");
            } else {
                for ( int i = pos; i < n - 1; i++){
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            printf(" Mang sau khi xoa gia tri la :\n");
            for (int i = 0; i < n; i++){
                printf(" %lld\t", arr[i]);
            }
            printf("\n");            
            break; 
        case 7 : 
            for (int i = 1; i < n ; i++){
                int temp = arr[i], pos = i - 1; 
                while(pos>=0 && temp < arr[pos]){
                arr[pos + 1] = arr[pos];
                pos --; 
                }   
            arr[pos + 1] = temp;
            }
            printf(" Mang sau khi duoc sap xep giam dan la:\n");
            for (int i = n-1; i >= 0; i--){
                printf("%lld\t", arr[i]);
            }
            printf("\n");
        case 8 : 
            printf(" Nhap gia tri ban muon tim \n");
            scanf(" %lld", &value);
            if( binary_search(arr, n, value)){
                printf(" Phan tu co ton tai trong mang\n ");
            } else {
                printf(" Phan tu khong ton tai trong mang\n");
            }
            break;
        
        case 11 : 
            printf(" Thoat chuong trinh \n");
            break;

        default:
            printf(" Gia tri nhap vao khong hop le\n");
            break;
        }
    } while (choice != 11);
    

    return 0;
}
