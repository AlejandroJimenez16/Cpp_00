# CPP Module 00 - Introduction to C++

## Objective

The goal of `cpp - module 00` is to introduce the user to **Object-Oriented Programming (OOP)**.  
In this project, you will learn about **class declaration**, **attributes**, **method declaration**, **namespaces**, **standard I/O streams**, and other fundamental C++ concepts.

## Project structure

```
CPP_Module_00/
├── ex00/          # Megaphone - Convert command-line arguments to uppercase
├── ex01/          # PhoneBook - Classes and I/O
├── ex02/          # The Job Of Your Dreams - Implement given .hpp in .cpp
└── README.md      # This file 
```

## Exercises

### ex00: Megaphone

**Description:**
This exercise consists of a program that receives command-line arguments, converts them to uppercase, and prints them. If no arguments are provided, it prints a default message.

**What you will learn:**
- Handling command-line arguments (`argc` and `argv`)
- Converting strings to uppercase
- Using `std::cout` for output

**Program functionality:**
- Converts provided command-line arguments to uppercase and prints them
- Prints a default message if no arguments are given

**Example usage:**
```bash
$ ./megaphone hello world
# Output: HELLOWORLD

$ ./megaphone
# Output: * LOUD AND UNBEARABLE FEEDBACK NOISE *
```

---

### ex01:  Phonebook

**Description:**  
This exercise consists of a program that allows the user to **store and display contacts**.  

**What you will learn:**
- Class design and encapsulation (private attributes, public getters)
- Formatted output using `std::setw()` and `std::setfill()`
- Handling user input/output in a loop
- Validating input and controlling program flow

**Program functionality:**
- Only allows `ADD`, `SEARCH`, and `EXIT` commands
- `ADD`: Add a new contact by filling all required fields.
- `SEARCH`: Show table and view details of one contact
- `EXIT`: Close the program

**Class design:**

**Contact**

*Private attributes:*
- `first_name`
- `last_name`
- `nickname`
- `phone_number`
- `darkest_secret`

*Public methods:*
- `get_first_name()`
- `get_last_name()`
- `get_nickname()`
- `get_phone_number()`
- `get_darkest_secret()`

**PhoneBook**

*Private attributes:*
- `index`
- `count`
- `Contact contact_list[8]`

*Public methods:*
- `addContact()`
- `searchContact()`

**Example usage:**

```bash
$ ./phonebook
WELCOME TO PHONEBOOK!!

Options:
        - ADD -> Add a new contact
        - SEARCH -> Show a specific contact
        - EXIT -> Exit the program

PhoneBook >> ADD
First name: Alejandro
Last name: Jimenez
Nickname: Alex
Phone number: 123
Darkest secret: (example)
✅ Contact added successfully!

PhoneBook >> SEARCH
+----------+----------+----------+----------+
|     Index|First_name| Last_name|  Nickname|
+----------+----------+----------+----------+
|         0| Alejandro|   Jimenez|      Alex|
+----------+----------+----------+----------+
Insert index: 0
First name: Alejandro
Last name: Jimenez
Nickname: Alex
Phone number: 123
Darkest secret: (example)

PhoneBook >> EXIT
Exiting... Bye 👋
```

---

### ex02:  The Job Of Your Dreams

**Description:**  
This exercise consists of implementing a .cpp file based on a given .hpp header file.
You are also provided with a tests.cpp file and an output log. The goal is to reproduce the expected behavior so that the program output matches the provided log.

**What you will learn:**
- Static member functions
- Object initialization and destruction
- Global state management
- Reading and reproducing expected program output
- Following a predefined class structure

**Program functionality:**
- Displays object creation and destruction messages
- Produces output that matches the provided log file

**Class design (provided in Account.hpp)**

**Account**

*Private attributes:*
- `_accountIndex`
- `_amount`
- `_nbDeposits`
- `_nbWithdrawals`

*Private static attributes:*
- `_nbAccounts`
- `_totalAmount`
- `_totalNbDeposits`
- `_totalNbWithdrawals`

*Private static methods:*
- `_displayTimestamp()`

*Public static methods:*
- `getNbAccounts()`
- `getTotalAmount()`
- `getNbDeposits()`
- `getNbWithdrawals()`
- `displayAccountsInfos()`

*Public methods:*
- `makeDeposit(int deposit)`
- `makeWithdrawal(int withdrawal)`
- `checkAmount() const`
- `displayStatus() const`

**Example usage:**

```bash
$ ./account_test
# Output example:
[20260217_182811] index:0;amount:42;created
[20260217_182811] accounts:8;total:20049;deposits:0;withdrawals:0
[20260217_182811] index:0;amount:42;deposits:0;withdrawals:0
[20260217_182811] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[20260217_182811] accounts:8;total:21524;deposits:8;withdrawals:0
[20260217_182811] index:0;amount:47;deposits:1;withdrawals:0
[20260217_182811] index:0;p_amount:47;withdrawal:refused
[20260217_182811] accounts:8;total:12442;deposits:8;withdrawals:6
[20260217_182811] index:0;amount:47;deposits:1;withdrawals:0
[20260217_182811] index:0;amount:47;closed
```