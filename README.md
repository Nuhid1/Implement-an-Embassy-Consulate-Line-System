# 🛂 Visa Token Management System (C++)

This C++ project implements a token-based queue system for managing visa applicants at a consulate or embassy. The program categorizes tokens by visa types and assigns them to available service counters dynamically based on demand and availability.

---

## 🔧 Features

### 🎫 Token Issuance for 4 Visa Categories:
- **Travel Visa (TR)**
- **Medical Visa (MED)**
- **Business Visa (BS)**
- **Government Officials Visa (GO)**

### 🪑 Counter Management:
- Four counters (1–4) serve applicants by their visa category.
- Each counter prioritizes its designated visa type but dynamically assists others based on load.

### 📊 Daily Summary Report:
- Total tokens issued per category.
- Applicants served per counter and category.
- Identifies idle counters.

---

## 🏗️ Visa Workflow

### Token Request Phase:
- Users input their visa type.
- A token like `TR-1`, `MED-2`, etc., is issued.
- Each category supports up to 25 tokens.

### Service Phase:
- Each counter calls the next applicant.
- If its own queue is empty, it serves from other categories based on queue size.

### Summary Report:
- Displays service breakdown by visa type and counters.
- Highlights any counters that remained idle.

---

## 📚 Concepts Used

- Arrays and control structures  
- Loops and conditionals  
- Dynamic service prioritization  
- Counters and token management  
- User input/output management

---

## 🧪 Example Flow

Request token for : 1
Your token is: TR-1

Request token for : 2
Your token is: MED-2

...

- Counter 1, Please served token number: TR-1
- Counter 2, Please served token number: MED-2


