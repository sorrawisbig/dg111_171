```mermaid
flowchart TD
Start([Start]) --> Input[/รับ N/]
Input --> D1[ i = 1 ]
D1 --> D2{i = N?}
D2 -->|Yes| A[/พิมพ์ i/]
D2 -->|No| b([End])
A --> c[i = i+1]
c --> D2
```
