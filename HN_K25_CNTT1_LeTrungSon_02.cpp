#include <stdio.h> 
#include <stdlib.h> 

int main() {
    int a[100];
    int i, n, j, x ;
    int choice;
    int currentIndex; 
    int temp; 
    int max;
    int pos;
    int found =0;
	int reverse = 0;
	int number; 

    do {
        printf("\n==================MENU==================\n");
     	printf("\n1. Nhap so luong phan tu va gia tri tung phan tu.");
    	printf("\n2. In ra cac gia tri cac phan tu trong mang."); 
    	printf("\n3. In ra cac so la so hoan hao trong mang.");
    	printf("\n4. Tim gia tri lon nhat trong mang.");
    	printf("\n5. Them moi mot phan tu vao dau mang."); 
    	printf("\n6. Xoa phan tu tai vi tri cu the.");
    	printf("\n7. Sap xep mang theo thu tu giam dan.");
    	printf("\n8. Tim kiem va hien thi vi tri cua 1 phan tu.");
    	printf("\n9. In mang cho so chan dung truoc so le dung sau.");
    	printf("\n10. Sap xep mang theo thu tu nguoc lai.");
    	printf("\n11. Thoat.");
    	printf("\nLua chon cua ban: ");
    	scanf("%d", &choice); 
      
        switch(choice) {
           case 1:
                printf("Nhap so phan tu can nhap gia tri: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++) {
                	printf("a[%d] = ", currentIndex -1); 
                	scanf("%d", &a[currentIndex]);
					currentIndex++;
				}
                break;
            case 2:
                printf("Gia tri cac phan tu cua mang la: ");
                for(int i = 0; i < n; i++) {
                    printf("%d\t", a[i]);
                 }
			    break;
		    case 3:
		    	printf("Cac so hoan hao trong mang la: ");
			    break;
			case 4:
				 for(i = 0; i < n; i++) {
                    if(a[i] > max)
                    max = a[i];
                }
                printf("So lon nhat trong mang la: ", max ) 
			    break;
			case 5: 
                printf("Nhap gia tri can them: ");
                scanf("%d", &x);
                printf("Nhap vi tri muon chen (0 -> %d): ", n);
                scanf("%d", &pos);

                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = n; i > pos; i--) {
                        a[i] = a[i - 1];
                    }
                    a[pos] = x;
                    n++;
                    printf("Da them thanh cong!\n");
                }
                break;
            }
			case 6:
				int pos;
                printf("Nhap vi tri muon xoa (0 -> %d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                    printf("Da xoa thanh cong!\n");
                }
                break;
            }

			    break;
			case 7:
			for(int i = 1; i < n; i++) {
                int k = a[i];
                int j = i - 1;
       
                while(j >= 0 && a[j] > k) {
                    a[j + 1] = a[j];
                    j--;
                }
                a[j + 1] = k; 
            }
                printf("\nMang sau khi sap xep : ");
                for(int i = 0; i < n; i++) {
                printf("%d ", a[i]);
           }
			    break;
			case 8:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (a[i] == x) {
                        printf("Tim thay %d tai vi tri %d\n", x, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay gia tri %d trong mang.\n", x);
                }
                break;
            }
			case 9:
			    break;
		    case 10:
		    	int n, reverse = 0, number; 

                while (n != 0) {
                number  = n % 10;           
                reverse = reverse * 10 + number; 
                n /= 10;                   
            }

            printf("So dao nguoc cua mang la: %d\n", reverse);

			    break; 
			case 11:
		    	printf("Ket thuc chuong trinh");
		    	exit(0); 
		    default:
                printf("Lua chon khong hop le!\n");
        }
    } while(1);
    return 0;
}


