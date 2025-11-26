# 🧠 Pattern Printing Master Notes (C)

---

## ⚙️ Basic Concepts

- `rows` → outer loop → controls **number of lines**
- `cols` → inner loop → controls **what’s printed on each line**
- Use **nested loops**

  ```c
  for(int rows=1; rows<=n; rows++) {
      for(int cols=1; cols<=rows; cols++) {
          printf("* ");
      }
      printf("\n");
  }
  ```

- Think of each line as a **combination of spaces and symbols/numbers**

---

## ⭐ 1. Right-Angled Triangle (Stars)

**Logic:** Stars increase each row.

```c
for(int rows=1; rows<=n; rows++){
    for(int cols=1; cols<=rows; cols++){
        printf("*");
    }
    printf("\n");
}
```

**Output (n=4):**

```
*
**
***
****
```

**🔄 Modify:**

- Reverse (inverted): change `rows<=n` → `rows>=1` and inner loop `cols<=rows`
- Spaces before stars → make right aligned:

  ```c
  for(int rows=1; rows<=n; rows++){
      for(int s=rows; s<n; s++) printf(" ");
      for(int c=1; c<=rows; c++) printf("*");
      printf("\n");
  }
  ```

---

## 🔢 2. Number Triangle (Increasing Order)

```c
for(int rows=1; rows<=n; rows++){
    for(int cols=1; cols<=rows; cols++){
        printf("%d", cols);
    }
    printf("\n");
}
```

**Output (n=4):**

```
1
12
123
1234
```

**💡 Variations:**

- **Repeat row number** → `printf("%d", rows);`
- **Decreasing pattern**

  ```c
  for(int rows=n; rows>=1; rows--){
      for(int cols=1; cols<=rows; cols++){
          printf("%d", cols);
      }
      printf("\n");
  }
  ```

- **Right aligned numbers**

  ```c
  for(int rows=1; rows<=n; rows++){
      for(int s=rows; s<n; s++) printf(" ");
      for(int c=1; c<=rows; c++) printf("%d", c);
      printf("\n");
  }
  ```

---

## 🏔 3. Pyramid Pattern (Stars)

```c
for(int rows=1; rows<=n; rows++){
    for(int s=rows; s<n; s++) printf(" ");
    for(int c=1; c<=2*rows-1; c++) printf("*");
    printf("\n");
}
```

**Output (n=3):**

```
  *
 ***
*****
```

**🔄 Reverse Pyramid:**

```c
for(int rows=n; rows>=1; rows--){
    for(int s=rows; s<n; s++) printf(" ");
    for(int c=1; c<=2*rows-1; c++) printf("*");
    printf("\n");
}
```

**Output (n=3):**

```
*****
 ***
  *
```

---

## 🔢 4. Numeric Pyramid

```c
for(int rows=1; rows<=n; rows++){
    for(int s=rows; s<n; s++) printf(" ");
    for(int c=1; c<=rows; c++) printf("%d", c);
    for(int c=rows-1; c>=1; c--) printf("%d", c);
    printf("\n");
}
```

**Output (n=4):**

```
   1
  121
 12321
1234321
```

**💡 Tip:**
`2*rows-1` total columns per row. Left half is increasing, right half decreasing.

---

## 🪞 5. Mirror Patterns (Half Pyramid + Reverse)

**Left + Right joined**

```c
for(int rows=1; rows<=n; rows++){
    for(int c=1; c<=rows; c++) printf("*");
    for(int s=rows; s<n; s++) printf("  ");
    for(int c=1; c<=rows; c++) printf("*");
    printf("\n");
}
```

**Output (n=4):**

```
*      *
**    **
***  ***
********
```

---

## 🔄 6. Inverted Numeric Pyramid

```c
for(int rows=n; rows>=1; rows--){
    for(int c=1; c<=rows; c++){
        printf("%d", c);
    }
    printf("\n");
}
```

**Output (n=4):**

```
1234
123
12
1
```

---

## 🔢 7. Continuous Numbers

```c
int num = 1;
for(int rows=1; rows<=n; rows++){
    for(int cols=1; cols<=rows; cols++){
        printf("%d ", num++);
    }
    printf("\n");
}
```

**Output (n=4):**

```
1
2 3
4 5 6
7 8 9 10
```

---

## 🟰 8. Diamond Pattern

```c
// Upper pyramid
for(int i=1; i<=n; i++){
    for(int s=i; s<n; s++) printf(" ");
    for(int j=1; j<=2*i-1; j++) printf("*");
    printf("\n");
}
// Lower pyramid
for(int i=n-1; i>=1; i--){
    for(int s=i; s<n; s++) printf(" ");
    for(int j=1; j<=2*i-1; j++) printf("*");
    printf("\n");
}
```

**Output (n=3):**

```
  *
 ***
*****
 ***
  *
```

---

## ⚡ 9. Hollow Pyramid

```c
for(int i=1; i<=n; i++){
    for(int s=i; s<n; s++) printf(" ");
    for(int j=1; j<=2*i-1; j++){
        if(j==1 || j==2*i-1 || i==n) printf("*");
        else printf(" ");
    }
    printf("\n");
}
```

**Output (n=4):**

```
   *
  * *
 *   *
*******
```

---

## 🧩 10. Miscellaneous Ideas

| Variation             | What to Change                      |
| --------------------- | ----------------------------------- |
| **Stars → Numbers**   | Replace `*` with `%d` or `%c`       |
| **Upside Down**       | Reverse the outer loop              |
| **Mirror Right Side** | Add spaces before printing          |
| **Diamond**           | Combine pyramid + reverse pyramid   |
| **Hollow Shape**      | Use `if` for border conditions      |
| **Alphabet Patterns** | Use `'A'+cols-1` instead of numbers |

---

Excellent — that’s a **“Diamond Number Pattern (Half Pyramid Up & Down)”**, sometimes also called a _Hill number pattern_.

Let’s add this to your **Pattern Printing Master Notes**, continuing the same structured style.

---

## 🔢 11. Diamond Shape (Half Pyramid Up & Down)

**Pattern Output (n = 3):**

```
1
12
123
12
1
```

**Logic:**

- The first part (ascending) → numbers increase up to `n`.
- The second part (descending) → numbers decrease back down.

**Code:**

```c
for(int rows=1; rows<=n; rows++) {
    for(int cols=1; cols<=rows; cols++) {
        printf("%d", cols);
    }
    printf("\n");
}
for(int rows=n-1; rows>=1; rows--) {
    for(int cols=1; cols<=rows; cols++) {
        printf("%d", cols);
    }
    printf("\n");
}
```

**🧠 Logic Summary:**

- Outer loop 1 → builds upper half.
- Outer loop 2 → prints lower half by reversing row count.
- Total rows printed = `2n - 1`.

**🔄 Variations:**

| Variation                           | Change                                          |
| ----------------------------------- | ----------------------------------------------- |
| Print characters (`A`, `B`, `C`...) | Use `printf("%c", 'A' + cols - 1);`             |
| Print same number in each row       | Replace `cols` with `rows`                      |
| Add spaces before to center it      | Add an inner space loop before printing numbers |

---
