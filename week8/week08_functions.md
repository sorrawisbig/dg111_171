# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้  ทำ                                                       | Returns                           |
| ------------------------------------------- | ---------------------------------------------------------------------------- | --------------------------------- |
| `int clamp(int value, int min, int max)`  | จำกั ดค่   value ใหอยู่  ระหว่  ง min และ max | ค่  ทำ                    |
| clamp แลว่                             |                                                                              |                                   |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่  ง a และ b ตม t                     |                                   |
| ค่  ทำค่  น้ว่ ณได      |                                                                              |                                   |
| `int randomRange(int min, int max)`       | สุ่   มต ว่ เลขระหว่  ง min และ max                   | ค่  สุ่  ม              |
| `float percentOf(int current, int total)` | ค่ าน้ว่ ณเปอร!เซ็ #น้ ต!                                  | ค่  เปอร!เซ็ #น้ ต! |
| ##ค่  ถม Reflection — Exercise 2    |                                                                              |                                   |

### 2.1 `clamp` — Pass by Value

**ค่  ถม:** ทำไม `hp` ใน้ `main()` ถ%งยู่ งเป#น้ 150 ทำ งทำ `value` ใน้ `clamp()` ถกั เขยู่น้ ทำบเป#น้ 100 ไป
แลว่ ?
**ค่  ตอบ:** เพราะเป็น HP เดิม ก่อนถูกทับให้เป็น 100

### 2.2 `lerp` — Local Scope

**ค่  ถม:** ทำไม `main()` ถ%งมองไมเห#น้ ต ว่ แปร `result` ทำ งทำม น้ ถกั ประกั ศไว่  ใน้ ไฟล!เดยู่ว่กั น้ ?
**ค่  ตอบ: เพราะใน scope ของ main() ไม่มีตัวแปรชื่อ result**

### 2.3 `randomRange` — Pass by Value

**ค่  ถม:** ทำไม `diceMin` ใน้ `main()` ถ%งยู่ งเป#น้ 1 ทำ งทำ `min` ใน้ `randomRange()` ถกั บว่กั เพิ่*  มเป#น้
101 ไปแลว่ ?
**ค่  ตอบ:** เพราะ randomRange() เอา min ที่ถูกแก้ไปคำนวณ

### 2.4 `percentOf` — Pass by Value

**ค่  ถม:** ทำไม `score` ใน้ `main()` ถ%งไมเปลยู่น้ เป#น้ 0 ตม `current` ทำ งทำ `percentOf()` แกั 
`current = 0;` ไปแลว่ ?
**ค่  ตอบ: เพราะ main ถูกเฟรมเอาไว้**
