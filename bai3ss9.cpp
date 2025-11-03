#inculde <stdio.h>
int main 0(){
	int numlist[5] = { 1,2,3,4,5};
	int flag = 0;
	#include <stdio.h>
void clearInputBuffer(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF); 
} 

int main(){
	int n;
	printf ("---NHAP VAO KICH THUOC MANG N x N---\n");
	do{
		printf("Moi ban nhap vao kich thuoc n (n > 0): ");
		if(scanf("%d", &n) != 1 || n <= 0){
			printf("Loi nhap lieu");
			clearInputBuffer();
			n = 0; 
		}
		clearInputBuffer();
	} while (n <= 0);
	
	printf ("---NHAP GIA TRI CHO TUNG PHAN TU---\n");
	int a[n][n];
	for (int i = 0;  i < n; i++){
		for (int j = 0; j < n; j++){
			do{
				printf("Moi ban nhap vao gia tri phan tu a[%d][%d]: ", i, j);
					if (scanf("%d", &a[i][j]) != 1){
						printf ("Loi nhap lieu");
						clearInputBuffer();
						continue;
					}
				clearInputBuffer();
				break; 
			} while (1); 
		} 
	} 
	
	//tien hanh in ra man hinh
	
	printf("---MA TRAN HINH VUONG BAN DA NHAP---\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf ("%5d", a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
