#include <stdio.h>
#include<string.h>

int main() {
	struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
    };
    struct SinhVien sv1 = {"Pham Thanh Dat", 18, "0123456789"};
    printf("Ten: %s\n", sv1.name);
    printf("Tuoi: %d\n", sv1.age);
    printf("Sdt: %s\n", sv1.phoneNumber);

    return 0;
}
