 #include <stdio.h>
 #include <math.h>

float percentOf(int current, int total);
// การคานวณ:
// result = (current / total) * 100.0
// (ต้อง cast current หรือ total เป็น float ก่อนหาร ไม่งั้นจะได้ integer division)
//
// ตัวอย่าง:
// percentOf(35, 100) → 35.0 ( (35.0/100) * 100.0 = 35.0 )

#include <stdio.h>

float percentOf(int current, int total);

int main(void) {
int score = 35, total = 100;
float percent = percentOf(score, total);
printf("score/total เดิม = %d/%d\n", score, total);
printf("percent = %.1f%%\n", percent);
return 0;
}

float percentOf(int current, int total) {
return (float)current / total * 100.0f;
}