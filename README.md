 Banking Transaction Queue System

 A simple **Banking Transaction Management System** using **Queue (Array Implementation)** in C

**Queue | FIFO | Menu-Driven | Transaction Processing**


##  About the Project

The **Banking Transaction Queue System** is a console-based application developed in **C** that simulates how banking transactions are processed in real life.

It uses the concept of **Queue (FIFO – First In First Out)** where:

* The first transaction entered is processed first
* Ensures fairness in transaction handling

---

##  Features

| Feature                 | Description                               |
| ----------------------- | ----------------------------------------- |
| **Add Transaction**     | Insert new customer transaction (enqueue) |
| **Process Transaction** | Remove & process transaction (dequeue)    |
| **Display Queue**       | View all pending transactions             |
| **Transaction Types**   | Deposit / Withdraw handling               |
| **Menu Driven**         | User-friendly interaction                 |

---

##  Tech Stack

```
+------------------+------------------+------------------+
|   Programming    | Data Structure   |    Approach      |
+------------------+------------------+------------------+
|        C         |      Queue       |  Menu Driven     |
|    Language      |   (Array Based)  |  Step-by-Step    |
+------------------+------------------+------------------+
```

* **Language**: C
* **Compiler/IDE**: Dev-C++
* **Data Structure**: Queue (Array Implementation)
* **Concept Used**: FIFO

---

## Data Structure Used

### Queue (FIFO)

```
FRONT → [Customer1] [Customer2] [Customer3] ← REAR
```

Each customer contains:

```
┌────────────┬──────────────┬──────────────┬────────────┐
│ acc_no     │ name         │ type         │ amount     │
├────────────┼──────────────┼──────────────┼────────────┤
│ int        │ char[50]     │ char[10]     │ float      │
└────────────┴──────────────┴──────────────┴────────────┘
```

---

##  Key Concepts Applied

*  **Queue Operations** — enqueue & dequeue
*  **FIFO Principle** — First transaction processed first
*  **Structures** — organized data using `struct`
*  **Menu Driven Programming**
---

## ⚙️ Installation & Usage (Dev-C++)

### Step 1: Open Dev-C++

* Create new **C file**

### Step 2:Write Code

* Write your program into editor

### Step 3: Compile & Run

* Press **F11** or click **Compile & Run**

---

## Sample Output

```
Menu
1-Enqueue Transaction
2-Dequeue (Process)
3-Display
4-Exit
Enter choice: 1

Enter Account No: 1233456
Enter Name: Laveena
Enter Transaction Type: deposit
Enter Amount: 5000

Transaction Added
```

---

## Project Workflow

```
           ┌───────────────────────────┐
           │        MAIN MENU          │
           │ 1-Enqueue 2-Dequeue       │
           │ 3-Display 4-Exit          │
           └────────────┬──────────────┘
                        │
        ┌───────────────┼───────────────┐
        ▼               ▼               ▼
   ┌──────────┐   ┌──────────┐   ┌──────────┐
   │ ENQUEUE  │   │ DEQUEUE  │   │ DISPLAY  │
   │ Add Data │   │ Process  │   │ Show All │
   └──────────┘   └──────────┘   └──────────┘
```

