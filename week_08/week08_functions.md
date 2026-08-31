# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ:** เพราะ hp = 150 ไม่เปลี่ยนตาม value ที่ถูกแก้ใน clamp() เลย

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: จะได้ error ทันที (ประมาณ No symbol
"result" in current context) เพราะตอนนี้อยู่ใน scope ของ main() ซึ่งไม่มีตัวแปรชื่อ result เลย**

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: เพราะภาษา ซี ใช้ในการส่ง**ค่าแบบ Pass by Value ตอนคลิกเฟรม main ใน CALL STACK ตอน pause
ครั้งถัดไป → เห็น diceMin ยังเป็น 1 เหมือนเดิม ไม่เปลี่ยนตาม min ที่แก้ในฟังก์ชัน

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ:เพราะ สกอร์ ถูกส่งค่าเข้าไปแบบ Pass by Value ที่ฟังก์ชันไปแก้ค่า current = 0 จึงเปลี่ยน แค่ตัวเลขสำเนาของฟังก์ชันไม่กระทบกับตัวแปร**
