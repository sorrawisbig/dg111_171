#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char HP [100] = "150";
int Attack = 75;
float DEfense = 40.0f;
char Level[100] = "1";
// แสดงค่าและขนาด
printf(" ===สร้างตัวละคร===\n");
printf("ชื่อ:");
scanf("%s", HP);
printf("โจมตี:75");
scanf("%d", &Attack);
printf("การป้องกัน:40.0");
scanf("%f", &DEfense);
printf("ระดับ:1");
scanf("%s", Level);
printf(" ===สรุปข้อมูลตัวละคร===\n");
printf("ชื่อ: %s (size: %zu bytes)\n", HP, sizeof(HP));
printf("พลังชีวิต: %s (size: %zu bytes)\n", HP, sizeof(HP));
printf("โจมตี: %d (size: %zu bytes)\n", Attack, sizeof(Attack));
printf("การป้องกัน: %.2f (size: %zu bytes)\n", DEfense, sizeof(DEfense));
printf("ระดับ: %s (size: %zu bytes)\n", Level, sizeof(Level));
return 0;
}