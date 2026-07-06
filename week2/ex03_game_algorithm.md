โจทย์A

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ player_attack, enemy_defense,
enemy_hp/]
Input --> Calc["damage = max(player_attack - enemy_defense,
1)"]
Calc --> Reduce["enemy_hp = enemy_hp - damage"]
Reduce --> D1{enemy_hp <= 0?}
D1 -->|Yes| Win[/แสดง Victory!/]
D1 -->|No| Show[/แสดง enemy_hp ที่เหลือ/]
Win & Show --> End([End])
```

โจทย์B

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ current_xp,xp_need,level/]
Input --> a{current_xp>=xp_need?}
a -->|Yes| b[level = level + 1]
b --> d[xp_need = xp_needed x 1.5]
d --> e[current_xp = 0]
e --> c
a -->|No| c[/แสดง level และ current_xp/]
c-->End([End])
```

โจทย์C

```mermaid
flowchart TD
Start([Start]) --> Input[pos = A,dir = forward]
Input --> a{ระยะถึง player < 100?}
a --> |Yes| b[/chase player/]
b-->End([End])
a --> |No| c[เลื่อน enemy ตาม dir]
c --> d{ถึงจุด B?}
d --> |Yes| e[dir = กลับไป A]
e -->  a
d --> |No| f{ถึงจุด A?}
f -->|Yes| g[dir = ไปข้างหน้า B]
f --> |No| a
g --> a
```
