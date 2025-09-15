Pattern Printing Programs – For Loops

This directory contains C programs that demonstrate the use of **nested `for` loops** to generate different text-based patterns.  
The programs progressively cover basic to complex designs such as triangles, pyramids, diamonds, and menu-driven pattern selection.

---

## 📚 Contents

- **Triangle Patterns**

  - Left-aligned increasing triangle
  - Right-aligned increasing triangle
  - Left-aligned decreasing triangle
  - Right-aligned decreasing triangle

- **Pyramids & Variants**

  - Centered pyramid
  - Inverted pyramid
  - Diamond
  - Hourglass
  - Vertical hourglass

- **Alternative Symbols**

  - Same patterns as above, but using `#` instead of `*`. (or any symbol the user inputs)

- **Menu-driven Program**
  - A combined program that allows the user to **select any pattern** interactively.
  - Implemented using a **switch–case menu**.
  - Enter `0` to exit.

---

## ▶️ How to Compile & Run

1. Clone the repository:

   ```bash
   git clone https://github.com/namanyt/C_PGM_B34_590027386.git
   cd C_PGM_B34_590027386/hw_code/for-loops
   ```

2. Compile a program, for example the menu:

   ```bash
   gcc star_patterns.c -o star_patterns
   ```

3. Run it:

   ```bash
   ./star_patterns
   ```

4. Select a pattern by number (1–9). Example:

   ```
   Enter your choice: 5
   ```

   Prints a **pyramid**.

## 📝 Example Output

### Left-aligned triangle

```
*
* *
* * *
* * * *
```

### Pyramid

```
      *
    * * *
  * * * * *
* * * * * * *
```

### Diamond

```
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
```

## 🛠️ Notes

- Programs are written in **C (C22 standard)**.
- Work with any standard C compiler (tested with `gcc`).
- Patterns are modular: each can exist as a standalone `.c` file, or combined in the **menu program**.

## 📌 Author

- **Namanyt (B34 - 590027386)**
- Homework submission for **For Loops – C Programming**
