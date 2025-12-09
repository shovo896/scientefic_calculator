# Advanced Scientific Calculator in C (Modular Project)

## Project Overview
A comprehensive scientific calculator with advanced mathematical, trigonometric, and statistical functions.

## Modules:

### 1. **arithmetic.c/h**
- Basic operations: Addition (+), Subtraction (-), Multiplication (*), Division (/)

### 2. **scientific.c/h**
- Basic trigonometry: sin(x), cos(x)
- Natural logarithm: ln(x)
- Power function: a^b

### 3. **advanced.c/h** ⭐ NEW
- **Trigonometric Functions:**
  - tan(x), cot(x), sec(x), csc(x)
- **Inverse Trigonometric:**
  - arcsin(x), arccos(x), arctan(x)
- **Advanced Math:**
  - Square root, Cube root
  - Factorial (n!)
  - Exponential (e^x)
  - Absolute value
- **Logarithms:**
  - log₁₀(x), logₙ(x) with custom base

### 4. **statistics.c/h** ⭐ NEW
- Mean (average)
- Median
- Variance
- Standard Deviation
- Maximum/Minimum values
- Sum calculation

### 5. **utility.c/h**
- Enhanced menu system
- Input handling functions

## Features:
✅ 24+ mathematical functions  
✅ Error handling (division by zero, domain errors, etc.)  
✅ Statistical analysis for datasets  
✅ User-friendly menu interface  
✅ Modular and maintainable code structure  

## Setup Instructions:

### Method 1: Code::Blocks (Recommended)
1. Open Code::Blocks
2. Create a new Console Project
3. Add ALL files to the project:
   - **Source files (.c):** arithmetic.c, scientific.c, advanced.c, statistics.c, utility.c, main.c
   - **Header files (.h):** arithmetic.h, scientific.h, advanced.h, statistics.h, utility.h
4. Link the math library:
   - Go to: **Project > Build options**
   - Select your project name (not Debug/Release)
   - Go to: **Linker settings**
   - In "Other linker options", add: `-lm`
5. Build and run the project (F9)

### Method 2: GCC Command Line
```bash
gcc main.c arithmetic.c scientific.c advanced.c statistics.c utility.c -o calculator -lm
./calculator
```

### Method 3: Windows Command Prompt
```cmd
gcc main.c arithmetic.c scientific.c advanced.c statistics.c utility.c -o calculator.exe -lm
calculator.exe
```

## File Structure:
```
calculator/
├── main.c                 (Main program)
├── arithmetic.c/h         (Basic operations)
├── scientific.c/h         (Scientific functions)
├── advanced.c/h           (Advanced functions) ⭐ NEW
├── statistics.c/h         (Statistical functions) ⭐ NEW
├── utility.c/h            (Menu and utilities)
└── README.md              (This file)
```

## Usage Examples:

### Basic Operations:
```
Input: 15 + 25
Result: 40.00
```

### Trigonometry:
```
Input: sin(1.57)  [≈ π/2 radians]
Result: 1.0000
```

### Statistics:
Select option 23, enter your dataset, and get:
- Mean
- Median
- Standard Deviation
- Min/Max values
- And more!

## Notes:
- Trigonometric functions use **radians** (not degrees)
- To convert degrees to radians: `radians = degrees × π / 180`
- Some functions have domain restrictions (e.g., log(x) requires x > 0)
- Factorial is limited to prevent overflow (recommended n ≤ 20)

## Future Enhancements (Optional):
- [ ] Complex number support
- [ ] Matrix operations
- [ ] Equation solver
- [ ] Unit conversions
- [ ] History/Memory functions
- [ ] Graphing capabilities

## Credits:
Modular Scientific Calculator Project
Developed with Code::Blocks and GCC

---
**Version:** 2.0  
**Language:** C  
**Compiler:** GCC with `-lm` flag required
