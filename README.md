# Implement-an-Embassy-Consulate-Line-System
Problem Scenario and Context 
You are tasked with designing a solution for an Embassy Consulate Service system that processes visa 
applications. There are four types of visas offered: 
1. Travel Visa (TR) 
2. Medical Visa (MED) 
3. Business Visa (BS) 
4. Government Officials Visa (GO) 
Requirements 
➢ Daily Applicant Limit 
A maximum of 25 applicants per visa type can receive service daily, making a total of 100 
applicants per day combing all the visa types. 
➢ Token Assignment: 
Tokens are issued sequentially across all categories (e.g., TR-1, BS- 2, MED-3) starting at 1 and 
incrementing globally, regardless of the Visa category. (See the sample output section named 
issuing tokens for more details) 
➢ Counter Management 
In the Embassy total 4 counters are available. Counters are primarily designated to each visa type: 
• Counter 1: for TR (Travel Visa) 
• Counter 2: for MED (Medical) 
• Counter 3: for BS (Business) 
• Counter 4: for GO (Government Officials) 
If a counter has less than 25 applicants for its primary visa type on a given day, it can serve applicants 
from the longest-remaining line of other visa types to optimize the service. 
Page 1 of 4 
➢ Calling Customers 
• Customers are served in the order of their tokens, ensuring fairness. 
• If multiple lines are eligible for serving at a counter, priority is given to the longest line. 
Day Summary Report (Bonus Task) 
A new functionality should be implemented which will generate summary report of the total applicants served 
by each counter at the end of the day. The summary must include 
• Total applicants served per visa type. 
• Applicants served by each counter (primary and reallocated categories). 
• Number of idle counters of the day (if any).
