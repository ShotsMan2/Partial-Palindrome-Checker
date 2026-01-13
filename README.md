# Partial Palindrome Checker

This project implements a string analysis algorithm in C that checks for palindromic properties within a specific range constrained by user input $N$.

## ⚙️ Logic

1.  **Input:** Reads a string (`str`) and an offset (`n`).
2.  **Range Calculation:**
    * **Start Index:** $N - 1$
    * **End Index:** $Length - N$
3.  **Verification:**
    * The algorithm ignores the first $N-1$ characters and the last $N-1$ characters.
    * It checks if the *remaining middle section* reads the same forwards and backwards.

## 🚀 Example Output

Based on Question 2 (Example 1):
**Input:** `abcdcbt`, $N=2$

* **Logic:** Ignore 1st char ('a') and last char ('t').
* **Target Substring:** `b c d c b`
* **Result:** Palindrome (Yes)

```text
String ifadeyi giriniz: abcdcbt
Kesme indeksini (n) giriniz: 2

--- Analiz Sonucu ---
Kelime: abcdcbt
Sonuc: Secilen aralik PALINDROMDUR.
