#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char name[100] = "Somsak";
int age = 20;
float gpa = 3.75f;
char sub[100] = "Programming";
// แสดงค่าและขนาด
printf("ชื่อ:");
scanf("%s", name);
printf("อายุ: ");
scanf("%d", &age);
printf("GPA: ");
scanf("%f", &gpa);
printf("วิชาโปรด: ");
scanf("%s", sub);
printf(" ===ข้อมูลส่วนตัว===\n");
printf("ชื่อ: %s (size: %zu bytes)\n", name, sizeof(name));
printf("อายุ: %d (size: %zu bytes)\n", age, sizeof(age));
printf("GPA: %.2f (size: %zu bytes)\n", gpa, sizeof(gpa));
printf("วิชาโปรด: %s (size: %zu bytes)\n", sub, sizeof(sub));
return 0;
}
