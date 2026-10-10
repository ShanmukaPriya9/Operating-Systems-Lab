# Operating Systems Laboratory

**Institution:** VNR Vignana Jyothi Institute of Engineering and Technology (VNRVJIET)  
**Laboratory:** OPERATING SYSTEMS  
**Student Roll No:** 25071A6227  

---

## Table of Contents

1. [Experiment 1: FCFS and SJF Scheduling Algorithms](#experiment-1-fcfs-and-sjf-scheduling-algorithms)
   - [1.1 FCFS Scheduling - Without Arrival Times](#11-fcfs-scheduling---without-arrival-times)
   - [1.2 FCFS Scheduling - With Arrival Times](#12-fcfs-scheduling---with-arrival-times)
   - [1.3 SJF Scheduling - Non-preemptive](#13-sjf-scheduling---non-preemptive)
   - [1.4 SJF Scheduling - Preemptive (SRTF)](#14-sjf-scheduling---preemptive-srtf)
2. [Experiment 2: Priority and Round Robin Scheduling Algorithms](#experiment-2-priority-and-round-robin-scheduling-algorithms)
   - [2.1 Priority Scheduling - Non-preemptive](#21-priority-scheduling---non-preemptive)
   - [2.2 Priority Scheduling - Preemptive](#22-priority-scheduling---preemptive)
   - [2.3 Round Robin Scheduling - Time Quantum = 2](#23-round-robin-scheduling---time-quantum--2)
   - [2.4 Round Robin Scheduling - Time Quantum = 10](#24-round-robin-scheduling---time-quantum--10)
3. [Experiment 3: Banker's Algorithm and CPU Scheduling Analysis](#experiment-3-bankers-algorithm-and-cpu-scheduling-analysis)
   - [3.1 Banker's Algorithm (Deadlock Avoidance)](#31-bankers-algorithm-deadlock-avoidance)
   - [3.2 Comparative Analysis of Scheduling Algorithms](#32-comparative-analysis-of-scheduling-algorithms)
4. [Experiment 4: Implementation of Memory Allocation Methods](#experiment-4-implementation-of-memory-allocation-methods)
   - [4.1 First Fit Allocation](#41-first-fit-allocation)
   - [4.2 Worst Fit Allocation](#42-worst-fit-allocation)
   - [4.3 Best Fit Allocation](#43-best-fit-allocation)
5. [Experiment 5: Paging Technique Memory Management](#experiment-5-paging-technique-memory-management)
   - [5.1 Paging Technique & Address Translation](#51-paging-technique--address-translation)
6. [Experiment 7: Frame Allocation Methods](#experiment-7-frame-allocation-methods)
   - [6.1 Minimum Number of Frames Allocation](#61-minimum-number-of-frames-allocation)
   - [6.2 Equal Frame Allocation](#62-equal-frame-allocation)
   - [6.3 Proportional Frame Allocation](#63-proportional-frame-allocation)
7. [Experiment 8: Disk Scheduling Algorithms (FCFS, SSTF, SCAN)](#experiment-8-disk-scheduling-algorithms-fcfs-sstf-scan)
   - [7.1 FCFS Disk Scheduling](#71-fcfs-disk-scheduling)
   - [7.2 SSTF Disk Scheduling](#72-sstf-disk-scheduling)
   - [7.3 SCAN Disk Scheduling](#73-scan-disk-scheduling)
8. [Experiment 9: Disk Scheduling Algorithms (C-SCAN, LOOK, C-LOOK)](#experiment-9-disk-scheduling-algorithms-c-scan-look-c-look)
   - [8.1 C-SCAN Disk Scheduling](#81-c-scan-disk-scheduling)
   - [8.2 LOOK Disk Scheduling](#82-look-disk-scheduling)
   - [8.3 C-LOOK Disk Scheduling](#83-c-look-disk-scheduling)
9. [Experiment 10: File Allocation Strategies](#experiment-10-file-allocation-strategies)
   - [9.1 Sequential File Allocation](#91-sequential-file-allocation)
   - [9.2 Indexed File Allocation](#92-indexed-file-allocation)
   - [9.3 Linked File Allocation](#93-linked-file-allocation)

---

# Experiment 1: FCFS and SJF Scheduling Algorithms

**Date:** 23-07-2026  
**Aim:** Write a C program for FCFS scheduling algorithm A. without arrival times, B. with arrival times, and SJF scheduling algorithm A. Non-preemptive, B. Preemptive.

---

## 1.1 FCFS Scheduling - Without Arrival Times

- **Heading in Manual:** `A. without arrival times`
- **Source Code:** [Exp01_FCFS_and_SJF_Scheduling/01_fcfs_without_arrival_time.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp01_FCFS_and_SJF_Scheduling/01_fcfs_without_arrival_time.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$).
3. Input the Burst Time ($BT$) for each process.
4. Initialize $WT[0] = 0$, $total\_wt = 0$, and $total\_tat = 0$.
5. For each process:
   - Calculate $WT$ using the previous process's burst time: $WT[i] = WT[i - 1] + BT[i - 1]$
   - Calculate $TAT = WT + BT$.
   - Add $WT$ and $TAT$ to their respective totals.
6. Calculate:
   - $\text{Average Waiting Time} = \frac{\text{Total } WT}{n}$
   - $\text{Average Turnaround Time} = \frac{\text{Total } TAT}{n}$
7. Display $BT$, $WT$, $TAT$, Average $WT$, and Average $TAT$.
8. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Burst Time for P1: 24
Enter Burst Time for P2: 3
Enter Burst Time for P3: 3

Process	BT	WT	TAT
P1	24	0	24
P2	3	24	27
P3	3	27	30

Avg WT = 17.00 | Avg TAT = 27.00
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Burst Time for P1: 2
Enter Burst Time for P2: 10
Enter Burst Time for P3: 4
Enter Burst Time for P4: 7

Process	BT	WT	TAT
P1	2	0	2
P2	10	2	12
P3	4	12	16
P4	7	16	23

Avg WT = 7.50 | Avg TAT = 13.25
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Burst Time for P1: 2
Enter Burst Time for P2: 4
Enter Burst Time for P3: 6
Enter Burst Time for P4: 8

Process	BT	WT	TAT
P1	2	0	2
P2	4	2	6
P3	6	6	12
P4	8	12	20

Avg WT = 5.00 | Avg TAT = 10.00
```

---

## 1.2 FCFS Scheduling - With Arrival Times

- **Heading in Manual:** `B. with arrival times`
- **Source Code:** [Exp01_FCFS_and_SJF_Scheduling/02_fcfs_with_arrival_time.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp01_FCFS_and_SJF_Scheduling/02_fcfs_with_arrival_time.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$).
3. Input the Arrival Time ($AT$) and Burst Time ($BT$) for each process.
4. Initialize $current\_time = 0$, $total\_wt = 0$, and $total\_tat = 0$.
5. For each process:
   - If $current\_time < AT$, set $current\_time = AT$.
   - Calculate $CT = current\_time + BT$.
   - Calculate $TAT = CT - AT$.
   - Calculate $WT = TAT - BT$.
   - Update $current\_time = CT$.
6. Add $WT$ and $TAT$ to their respective totals.
   - $\text{Average Waiting Time} = \frac{\text{Total } WT}{n}$
   - $\text{Average Turnaround Time} = \frac{\text{Total } TAT}{n}$
7. Display $AT$, $BT$, $CT$, $WT$, $TAT$, Average $WT$, and Average $TAT$.
8. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 24
Enter Arrival Time and Burst Time for P2: 1 3
Enter Arrival Time and Burst Time for P3: 2 3

Process	AT	BT	CT	WT	TAT
P1	0	24	24	0	24
P2	1	3	27	23	26
P3	2	3	30	25	28

Average Waiting Time = 16.00
Average Turnaround Time = 26.00
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 1 4
Enter Arrival Time and Burst Time for P2: 2 3
Enter Arrival Time and Burst Time for P3: 10 2

Process	AT	BT	CT	WT	TAT
P1	1	4	5	0	4
P2	2	3	8	3	6
P3	10	2	12	0	2

Average Waiting Time = 1.00
Average Turnaround Time = 4.00
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 24
Enter Arrival Time and Burst Time for P2: 0 3
Enter Arrival Time and Burst Time for P3: 0 3

Process	AT	BT	CT	WT	TAT
P1	0	24	24	0	24
P2	0	3	27	24	27
P3	0	3	30	27	30

Average Waiting Time = 17.00
Average Turnaround Time = 27.00
```

---

## 1.3 SJF Scheduling - Non-preemptive

- **Heading in Manual:** `A. non-preemptive`
- **Source Code:** [Exp01_FCFS_and_SJF_Scheduling/03_sjf_non_preemptive.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp01_FCFS_and_SJF_Scheduling/03_sjf_non_preemptive.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), Arrival Time ($AT$), and Burst Time ($BT$).
3. Initialize $current\_time = 0$ and mark all processes as unvisited.
4. Repeat until all processes are completed:
   - Select the arrived process ($AT \le current\_time$) with the smallest Burst Time ($BT$).
   - If no process has arrived, increase $current\_time$ by 1.
5. Otherwise:
   - Execute the selected process.
   - Calculate $CT$, $TAT$, and $WT$.
   - Update $current\_time = CT$.
   - Mark the process as completed.
6. Calculate the Average Waiting Time (AWT) and Average Turnaround Time (ATAT).
7. Display $AT$, $BT$, $CT$, $WT$, $TAT$, AWT, and ATAT.
8. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 3
Enter Arrival Time and Burst Time for P2: 5 6
Enter Arrival Time and Burst Time for P3: 6 2

Process	AT	BT	CT	WT	TAT
P1	0	3	3	0	3
P2	5	6	11	0	6
P3	6	2	13	5	7

Average Waiting Time = 1.67
Average Turnaround Time = 5.33
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Arrival Time and Burst Time for P1: 0 7
Enter Arrival Time and Burst Time for P2: 2 4
Enter Arrival Time and Burst Time for P3: 4 1
Enter Arrival Time and Burst Time for P4: 5 4

Process	AT	BT	CT	WT	TAT
P1	0	7	7	0	7
P2	2	4	12	6	10
P3	4	1	8	3	4
P4	5	4	16	7	11

Average Waiting Time = 4.00
Average Turnaround Time = 8.00
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 24
Enter Arrival Time and Burst Time for P2: 0 3
Enter Arrival Time and Burst Time for P3: 0 3

Process	AT	BT	CT	WT	TAT
P1	0	24	30	6	30
P2	0	3	3	0	3
P3	0	3	6	3	6

Average Waiting Time = 3.00
Average Turnaround Time = 13.00
```

---

## 1.4 SJF Scheduling - Preemptive (SRTF)

- **Heading in Manual:** `B. preemptive`
- **Source Code:** [Exp01_FCFS_and_SJF_Scheduling/04_sjf_preemptive.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp01_FCFS_and_SJF_Scheduling/04_sjf_preemptive.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), Arrival Time ($AT$), and Burst Time ($BT$). Set Remaining Time ($RT$) = $BT$ for each process.
3. Initialize $time = 0$ and $completed = 0$.
4. Repeat until all processes are completed:
   - Select the arrived process ($AT \le time$) with the smallest Remaining Time ($RT$).
   - If no process is ready, increase $time$ by 1.
   - Otherwise:
     - Execute the selected process for 1 time unit.
     - Decrease $RT$ by 1 and increase $time$ by 1.
     - If $RT = 0$, calculate $CT$, mark the process as completed, and increment $completed$.
5. Calculate $TAT$, $WT$, Average Waiting Time (AWT), and Average Turnaround Time (ATAT).
6. Display $AT$, $BT$, $CT$, $WT$, $TAT$, AWT, and ATAT.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 8
Enter Arrival Time and Burst Time for P2: 1 4
Enter Arrival Time and Burst Time for P3: 2 2

Process	AT	BT	CT	WT	TAT
P1	0	8	14	6	14
P2	1	4	7	2	6
P3	2	2	4	0	2

Average Waiting Time = 2.67
Average Turnaround Time = 7.33
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Arrival Time and Burst Time for P1: 0 8
Enter Arrival Time and Burst Time for P2: 1 4
Enter Arrival Time and Burst Time for P3: 2 9
Enter Arrival Time and Burst Time for P4: 3 5

Process	AT	BT	CT	WT	TAT
P1	0	8	17	9	17
P2	1	4	5	0	4
P3	2	9	26	15	24
P4	3	5	10	2	7

Average Waiting Time = 6.50
Average Turnaround Time = 13.00
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 24
Enter Arrival Time and Burst Time for P2: 0 3
Enter Arrival Time and Burst Time for P3: 0 3

Process	AT	BT	CT	WT	TAT
P1	0	24	30	6	30
P2	0	3	3	0	3
P3	0	3	6	3	6

Average Waiting Time = 3.00
Average Turnaround Time = 13.00
```

---

# Experiment 2: Priority and Round Robin Scheduling Algorithms

**Date:** 30-07-2026  
**Aim:** Write a C program for Priority scheduling algorithm A. Non-preemptive, B. Preemptive, and Round Robin scheduling algorithm A. Time Quantum=2, B. Time Quantum=10.

---

## 2.1 Priority Scheduling - Non-preemptive

- **Heading in Manual:** `A. non-preemptive`
- **Source Code:** [Exp02_Priority_and_Round_Robin/01_priority_non_preemptive.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp02_Priority_and_Round_Robin/01_priority_non_preemptive.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), Arrival Time ($AT$), Burst Time ($BT$), and Priority ($Pr$).
3. Initialize $current\_time = 0$ and mark all processes as unvisited.
4. Repeat until all processes are completed:
   - Select the arrived process ($AT \le current\_time$) with the highest priority (lowest Priority value).
   - If no process is ready, increase $current\_time$ by 1.
   - Otherwise:
     - Execute the selected process.
     - Calculate $CT$, $TAT$, and $WT$.
     - Update $current\_time = CT$.
     - Mark the process as completed.
5. Calculate Average Waiting Time (AWT) and Average Turnaround Time (ATAT).
6. Display $AT$, $BT$, Priority, $CT$, $WT$, $TAT$, AWT, and ATAT.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time, Burst Time and Priority for P1: 0 10 3
Enter Arrival Time, Burst Time and Priority for P2: 1 1 1
Enter Arrival Time, Burst Time and Priority for P3: 2 2 2

Process	AT	BT	Pr	CT	WT	TAT
P1	0	10	3	10	0	10
P2	1	1	1	11	9	10
P3	2	2	2	13	9	11

Average Waiting Time = 6.00
Average Turnaround Time = 10.33
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Arrival Time, Burst Time and Priority for P1: 0 11 2
Enter Arrival Time, Burst Time and Priority for P2: 1 3 1
Enter Arrival Time, Burst Time and Priority for P3: 2 5 4
Enter Arrival Time, Burst Time and Priority for P4: 3 2 3

Process	AT	BT	Pr	CT	WT	TAT
P1	0	11	2	11	0	11
P2	1	3	1	14	10	13
P3	2	5	4	21	14	19
P4	3	2	3	16	11	13

Average Waiting Time = 8.75
Average Turnaround Time = 14.00
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time, Burst Time and Priority for P1: 0 24 3
Enter Arrival Time, Burst Time and Priority for P2: 0 3 1
Enter Arrival Time, Burst Time and Priority for P3: 0 3 2

Process	AT	BT	Pr	CT	WT	TAT
P1	0	24	3	30	6	30
P2	0	3	1	3	0	3
P3	0	3	2	6	3	6

Average Waiting Time = 3.00
Average Turnaround Time = 13.00
```

---

## 2.2 Priority Scheduling - Preemptive

- **Heading in Manual:** `B. preemptive`
- **Source Code:** [Exp02_Priority_and_Round_Robin/02_priority_preemptive.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp02_Priority_and_Round_Robin/02_priority_preemptive.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), Arrival Time ($AT$), Burst Time ($BT$), and Priority ($Pr$). Set Remaining Time ($RT$) = $BT$ for each process.
3. Initialize $time = 0$ and $completed = 0$.
4. Repeat until all processes are completed:
   - Select the arrived process ($AT \le time$) with the highest priority (lowest Priority value).
   - If no process is ready, increase $time$ by 1.
   - Otherwise:
     - Execute the selected process for 1 time unit.
     - Decrease $RT$ by 1 and increase $time$ by 1.
     - If $RT = 0$, calculate $CT$, mark the process as completed, and increment $completed$.
5. Calculate $TAT$, $WT$, Average Waiting Time (AWT), and Average Turnaround Time (ATAT).
6. Display $AT$, $BT$, Priority, $CT$, $WT$, $TAT$, AWT, and ATAT.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time, Burst Time and Priority for P1: 0 7 3
Enter Arrival Time, Burst Time and Priority for P2: 1 4 1
Enter Arrival Time, Burst Time and Priority for P3: 2 1 2

Process	AT	BT	Pr	CT	WT	TAT
P1	0	7	3	12	5	12
P2	1	4	1	5	0	4
P3	2	1	2	6	3	4

Average Waiting Time = 2.67
Average Turnaround Time = 6.67
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Arrival Time, Burst Time and Priority for P1: 0 10 3
Enter Arrival Time, Burst Time and Priority for P2: 1 1 1
Enter Arrival Time, Burst Time and Priority for P3: 2 2 4
Enter Arrival Time, Burst Time and Priority for P4: 3 1 2

Process	AT	BT	Pr	CT	WT	TAT
P1	0	10	3	12	2	12
P2	1	1	1	2	0	1
P3	2	2	4	14	10	12
P4	3	1	2	4	0	1

Average Waiting Time = 3.00
Average Turnaround Time = 6.50
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time, Burst Time and Priority for P1: 0 24 3
Enter Arrival Time, Burst Time and Priority for P2: 0 3 1
Enter Arrival Time, Burst Time and Priority for P3: 0 3 2

Process	AT	BT	Pr	CT	WT	TAT
P1	0	24	3	30	6	30
P2	0	3	1	3	0	3
P3	0	3	2	6	3	6

Average Waiting Time = 3.00
Average Turnaround Time = 13.00
```

---

## 2.3 Round Robin Scheduling - Time Quantum = 2

- **Heading in Manual:** `A. Time Quantum=2`
- **Source Code:** [Exp02_Priority_and_Round_Robin/03_round_robin_tq2.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp02_Priority_and_Round_Robin/03_round_robin_tq2.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), Arrival Time ($AT$), and Burst Time ($BT$). Set Time Quantum ($TQ$) = 2 and Remaining Time ($RT$) = $BT$ for each process.
3. Initialize $time = 0$ and $completed = 0$.
4. Repeat until all processes are completed:
   - Select the first process from the Ready Queue.
   - Execute the process for 2 units or until it finishes.
   - Update $RT$ and $time$.
   - Add any newly arrived processes to the Ready Queue.
   - If $RT > 0$, add the process back to the Ready Queue; otherwise, calculate $CT$ and mark it as completed.
5. Calculate $TAT$, $WT$, Average Waiting Time (AWT), and Average Turnaround Time (ATAT).
6. Display $AT$, $BT$, $CT$, $WT$, $TAT$, AWT, and ATAT.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 5
Enter Arrival Time and Burst Time for P2: 1 3
Enter Arrival Time and Burst Time for P3: 2 1

Process	AT	BT	CT	WT	TAT
P1	0	5	9	4	9
P2	1	3	8	4	7
P3	2	1	5	2	3

Average Waiting Time = 3.33
Average Turnaround Time = 6.33
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Arrival Time and Burst Time for P1: 0 5
Enter Arrival Time and Burst Time for P2: 1 4
Enter Arrival Time and Burst Time for P3: 2 2
Enter Arrival Time and Burst Time for P4: 4 1

Process	AT	BT	CT	WT	TAT
P1	0	5	12	7	12
P2	1	4	11	6	10
P3	2	2	6	2	4
P4	4	1	9	4	5

Average Waiting Time = 4.75
Average Turnaround Time = 7.75
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 24
Enter Arrival Time and Burst Time for P2: 0 3
Enter Arrival Time and Burst Time for P3: 0 3

Process	AT	BT	CT	WT	TAT
P1	0	24	30	6	30
P2	0	3	9	6	9
P3	0	3	10	7	10

Average Waiting Time = 6.33
Average Turnaround Time = 16.33
```

---

## 2.4 Round Robin Scheduling - Time Quantum = 10

- **Heading in Manual:** `B. Time Quantum=10`
- **Source Code:** [Exp02_Priority_and_Round_Robin/04_round_robin_tq10.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp02_Priority_and_Round_Robin/04_round_robin_tq10.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), Arrival Time ($AT$), and Burst Time ($BT$). Set Time Quantum ($TQ$) = 10 and Remaining Time ($RT$) = $BT$ for each process.
3. Initialize $time = 0$ and $completed = 0$.
4. Repeat until all processes are completed:
   - Select the first process from the Ready Queue.
   - Execute the process for 10 units or until it finishes.
   - Update $RT$ and $time$.
   - Add any newly arrived processes to the Ready Queue.
   - If $RT > 0$, add the process back to the Ready Queue; otherwise, calculate $CT$ and mark it as completed.
5. Calculate $TAT$, $WT$, Average Waiting Time (AWT), and Average Turnaround Time (ATAT).
6. Display $AT$, $BT$, $CT$, $WT$, $TAT$, AWT, and ATAT.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 25
Enter Arrival Time and Burst Time for P2: 2 6
Enter Arrival Time and Burst Time for P3: 4 12

Process	AT	BT	CT	WT	TAT
P1	0	25	43	18	43
P2	2	6	16	8	14
P3	4	12	38	22	34

Average Waiting Time = 16.00
Average Turnaround Time = 30.33
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter Arrival Time and Burst Time for P1: 0 15
Enter Arrival Time and Burst Time for P2: 1 8
Enter Arrival Time and Burst Time for P3: 3 22
Enter Arrival Time and Burst Time for P4: 5 5

Process	AT	BT	CT	WT	TAT
P1	0	15	38	23	38
P2	1	8	18	9	17
P3	3	22	50	25	47
P4	5	5	33	23	28

Average Waiting Time = 20.00
Average Turnaround Time = 32.50
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 24
Enter Arrival Time and Burst Time for P2: 0 3
Enter Arrival Time and Burst Time for P3: 0 3

Process	AT	BT	CT	WT	TAT
P1	0	24	30	6	30
P2	0	3	13	10	13
P3	0	3	16	13	16

Average Waiting Time = 9.67
Average Turnaround Time = 19.67
```

---

# Experiment 3: Banker's Algorithm and CPU Scheduling Analysis

**Date:** 23-07-2026  
**Aim:** Write a C program for Banker's algorithm and make the analysis of all scheduling algorithms.

---

## 3.1 Banker's Algorithm (Deadlock Avoidance)

- **Heading in Manual:** `Program: Banker’s algorithm`
- **Source Code:** [Exp03_Bankers_Algorithm/bankers_algorithm.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp03_Bankers_Algorithm/bankers_algorithm.c)

### Algorithm
1. Start.
2. Input the number of processes ($n$), resource types ($m$), Allocation, Max, and Available matrices.
3. Calculate the Need Matrix:
   - $\text{Need} = \text{Max} - \text{Allocation}$
4. Initialize:
   - $\text{Work} = \text{Available}$
   - Mark all processes as unfinished ($\text{finish}[i] = 0$).
5. Repeat until all processes are finished:
   - Select an unfinished process whose $\text{Need} \le \text{Work}$.
   - If found:
     - $\text{Work} = \text{Work} + \text{Allocation}$
     - Mark the process as finished ($\text{finish}[i] = 1$).
     - Add it to the Safe Sequence.
   - If no suitable process is found, stop.
6. Check the result:
   - If all processes are finished, the system is in a Safe State and display the Safe Sequence.
   - Otherwise, the system is in an Unsafe State.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of processes: 3
Enter number of resource types: 3
Enter Allocation Matrix:
0 1 0
2 0 0
3 0 2
Enter Max Matrix:
7 5 3
3 2 2
9 0 2
Enter Available Resources:
3 3 2

System is in an UNSAFE STATE (Deadlock possible).
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter number of resource types: 3
Enter Allocation Matrix:
0 1 0
2 0 0
3 0 2
2 1 1
Enter Max Matrix:
7 5 3
3 2 2
9 0 2
2 2 2
Enter Available Resources:
3 3 2

System is in a SAFE STATE.
Safe Sequence: P2 P4 P1 P3
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of processes: 4
Enter number of resource types: 3
Enter Allocation Matrix:
1 0 1
2 1 1
0 1 3
3 2 1
Enter Max Matrix:
5 4 4
4 3 3
2 2 5
4 3 3
Enter Available Resources:
1 1 0

System is in an UNSAFE STATE (Deadlock possible).
```

---

## 3.2 Comparative Analysis of Scheduling Algorithms

*(From Page 25–26 of the Lab Manual)*

For the standardized test input ($n=3$ with processes having $BT = [24, 3, 3]$ and $AT = [0, 0, 0]$):

| Algorithm | Average Waiting Time (WT) | Average Turnaround Time (TAT) |
| :--- | :---: | :---: |
| **FCFS (No Arrival)** | 17.00 ms | 27.00 ms |
| **FCFS (With Arrival)** | 17.00 ms | 27.00 ms |
| **SJF (Non-Preemptive)** | 3.00 ms | 13.00 ms |
| **SRTF (Preemptive SJF)** | 3.00 ms | 13.00 ms |
| **Priority (Non-Preemptive)** | 3.00 ms | 13.00 ms |
| **Priority (Preemptive)** | 3.00 ms | 13.00 ms |
| **Round Robin (Q = 2)** | 6.33 ms | 16.33 ms |
| **Round Robin (Q = 10)** | 9.67 ms | 19.67 ms |

---

# Experiment 4: Implementation of Memory Allocation Methods

**Date:** 27-08-2026  
**Aim:** Implementation of the following Memory Allocation Methods for fixed partition: a) First Fit, b) Worst Fit, c) Best Fit.

---

## 4.1 First Fit Allocation

- **Heading in Manual:** `A. First Fit`
- **Source Code:** [Exp04_Memory_Allocation_Methods/01_first_fit.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp04_Memory_Allocation_Methods/01_first_fit.c)

### Algorithm
1. Start.
2. Input the number of memory partitions ($m$) and their sizes, and the number of processes ($n$) and their memory requirements.
3. Initialize all processes as unallocated.
4. For each process:
   - Search the partitions from the first partition.
   - If an unallocated partition is large enough, allocate it to the process.
   - Mark the partition as allocated and stop searching.
5. Calculate the Internal Fragmentation for each allocated partition:
   - $\text{Fragmentation} = \text{Partition Size} - \text{Process Size}$
6. Display the process, allocated partition, partition size, and internal fragmentation.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of blocks: 5
Enter block sizes: 100 500 200 300 600
Enter number of processes: 4
Enter process sizes: 212 417 112 426

Process	Process Size	Block No.	Block Size	Internal Frag
P1	212		2		500		288
P2	417		5		600		183
P3	112		3		200		88
P4	426		Not Allocated	-		-
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of blocks: 4
Enter block sizes: 200 400 600 500
Enter number of processes: 4
Enter process sizes: 150 350 450 100

Process	Process Size	Block No.	Block Size	Internal Frag
P1	150		1		200		50
P2	350		2		400		50
P3	450		3		600		150
P4	100		4		500		400
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of blocks: 5
Enter block sizes: 300 150 200 350 600
Enter number of processes: 4
Enter process sizes: 120 290 180 550

Process	Process Size	Block No.	Block Size	Internal Frag
P1	120		1		300		180
P2	290		4		350		60
P3	180		3		200		20
P4	550		5		600		50
```

---

## 4.2 Worst Fit Allocation

- **Heading in Manual:** `B. Worst Fit`
- **Source Code:** [Exp04_Memory_Allocation_Methods/02_worst_fit.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp04_Memory_Allocation_Methods/02_worst_fit.c)

### Algorithm
1. Start.
2. Input the number of memory partitions ($m$) and their sizes, and the number of processes ($n$) and their memory requirements.
3. Initialize all processes as unallocated.
4. For each process:
   - Search all unallocated partitions.
   - Find the largest partition that is large enough for the process.
   - If a suitable partition is found, allocate it to the process and mark it as allocated.
5. Calculate the Internal Fragmentation:
   - $\text{Fragmentation} = \text{Partition Size} - \text{Process Size}$
6. Display the process, allocated partition, partition size, and internal fragmentation.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of blocks: 5
Enter block sizes: 100 500 200 300 600
Enter number of processes: 4
Enter process sizes: 212 417 112 426

Process	Process Size	Block No.	Block Size	Internal Frag
P1	212		5		600		388
P2	417		2		500		83
P3	112		4		300		188
P4	426		Not Allocated	-		-
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of blocks: 4
Enter block sizes: 200 400 600 500
Enter number of processes: 4
Enter process sizes: 150 350 450 100

Process	Process Size	Block No.	Block Size	Internal Frag
P1	150		3		600		450
P2	350		4		500		250
P3	100		2		400		300
P4	300		Not Allocated	-		-
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of blocks: 5
Enter block sizes: 300 150 200 350 600
Enter number of processes: 4
Enter process sizes: 120 290 180 100

Process	Process Size	Block No.	Block Size	Internal Frag
P1	120		5		600		480
P2	290		4		350		60
P3	180		1		300		120
P4	100		3		200		100
```

---

## 4.3 Best Fit Allocation

- **Heading in Manual:** `C. Best Fit`
- **Source Code:** [Exp04_Memory_Allocation_Methods/03_best_fit.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp04_Memory_Allocation_Methods/03_best_fit.c)

### Algorithm
1. Start.
2. Input the number of memory partitions ($m$) and their sizes, and the number of processes ($n$) and their memory requirements.
3. Initialize all processes as unallocated.
4. For each process:
   - Search all unallocated partitions.
   - Find the smallest partition that is large enough for the process.
   - If a suitable partition is found, allocate it to the process and mark it as allocated.
5. Calculate the Internal Fragmentation:
   - $\text{Fragmentation} = \text{Partition Size} - \text{Process Size}$
6. Display the process, allocated partition, partition size, and internal fragmentation.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of blocks: 5
Enter block sizes: 100 500 200 300 600
Enter number of processes: 4
Enter process sizes: 212 417 112 426

Process	Process Size	Block No.	Block Size	Internal Frag
P1	212		4		300		88
P2	417		2		500		83
P3	112		3		200		88
P4	426		5		600		174
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of blocks: 4
Enter block sizes: 200 400 600 500
Enter number of processes: 4
Enter process sizes: 150 350 450 100

Process	Process Size	Block No.	Block Size	Internal Frag
P1	150		1		200		50
P2	350		2		400		50
P3	450		4		500		50
P4	100		Not Allocated	-		-
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of blocks: 5
Enter block sizes: 300 150 200 350 600
Enter number of processes: 4
Enter process sizes: 120 290 180 550

Process	Process Size	Block No.	Block Size	Internal Frag
P1	120		2		150		30
P2	290		1		300		10
P3	180		3		200		20
P4	550		5		600		50
```

---

# Experiment 5: Paging Technique Memory Management

**Date:** 27-08-2026  
**Aim:** Implementation of Paging Technique of Memory Management.

---

## 5.1 Paging Technique & Address Translation

- **Heading in Manual:** `Program: Paging Technique Memory Management`
- **Source Code:** [Exp05_Paging_Technique/paging_technique.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp05_Paging_Technique/paging_technique.c)

### Algorithm
1. Start.
2. Input the main memory size ($MS$) and page size ($PS$), then calculate the Total Frames.
3. Input the process size and calculate the Total Pages required.
4. If $\text{Total Pages} > \text{Total Frames}$, display "Memory insufficient" and stop.
5. Input the frame number for each page and create the Page Table.
6. Input the Logical Address ($LA$) and calculate:
   - $\text{Page Number} = \frac{LA}{PS}$
   - $\text{Offset} = LA \pmod{PS}$
7. If the page number is valid:
   - Find the Frame Number from the Page Table.
   - Calculate:
     - $\text{Physical Address} = (\text{Frame Number} \times PS) + \text{Offset}$
   - Display the Page Number, Offset, Frame Number, and Physical Address.
8. Otherwise, display "Invalid Logical Address".
9. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter main memory size (in bytes): 1024
Enter page size (in bytes): 128
Total frames available in memory: 8

Enter process size (in bytes): 350
Total pages required for process: 3
Enter frame numbers allocated to each page:
Page 0 -> Frame No: 5
Page 1 -> Frame No: 2
Page 2 -> Frame No: 7

Enter Logical Address to translate: 200

--- Address Translation Details ---
Page Number (p) : 1
Page Offset (d) : 72
Allocated Frame No : 2
Physical Address : 328
```

#### Output 2
```text
Roll no: 25071A6227
Enter main memory size (in bytes): 2048
Enter page size (in bytes): 256
Total frames available in memory: 8

Enter process size (in bytes): 600
Total pages required for process: 3
Enter frame numbers allocated to each page:
Page 0 -> Frame No: 1
Page 1 -> Frame No: 4
Page 2 -> Frame No: 6

Enter Logical Address to translate: 900

Invalid Logical Address! (Page number 3 exceeds allocated pages)
```

#### Output 3
```text
Roll no: 25071A6227
Enter main memory size (in bytes): 512
Enter page size (in bytes): 64
Total frames available in memory: 8

Enter process size (in bytes): 700

Memory Allocation Failed: Not enough frames available.
```

---

# Experiment 7: Frame Allocation Methods

**Date:** 3-09-2026  
**Aim:** Simulate frame allocation Methods: A) minimum number of frames, B) equal allocation, C) proportional allocation.

---

## 6.1 Minimum Number of Frames Allocation

- **Heading in Manual:** `A. minimum number of frames`
- **Source Code:** [Exp07_Frame_Allocation_Methods/01_minimum_frame_allocation.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp07_Frame_Allocation_Methods/01_minimum_frame_allocation.c)

### Algorithm
1. Start.
2. Input total available frames and minimum frames required per process.
3. Input number of processes and their page requirements.
4. Check whether available frames are sufficient for all processes.
5. Allocate the minimum required frames to each process.
6. Calculate and display the remaining unallocated frames.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227

Enter total frames in physical memory: 10
Enter minimum frames required per process (by architecture): 2
Enter number of processes: 3

Enter page requirements for each process:
Process P1: 5
Process P2: 2
Process P3: 4

--- Minimum Frame Allocation Result ---
Process	Page Req	Allocated Frames	Status
P1	5		2			Needs Swap Space
P2	2		2			Satisfied
P3	4		2			Needs Swap Space

Total Frames Allocated: 6 / 10
Remaining Unallocated Frames: 4
```

#### Output 2
```text
Roll no: 25071A6227

Enter total frames in physical memory: 5
Enter minimum frames required per process (by architecture): 2
Enter number of processes: 3
Enter page requirements for each process:
Process P1: 10
Process P2: 6
Process P3: 8

--- Minimum Frame Allocation Result ---
Process	Page Req	Allocated Frames	Status
P1	10		2			Needs Swap Space
P2	6		2			Needs Swap Space
P3	8		2			Needs Swap Space

Total Frames Allocated: 6 / 5
Remaining Unallocated Frames: -1
```

#### Output 3
```text
Roll no: 25071A6227

Enter total frames in physical memory: 12
Enter minimum frames required per process (by architecture): 2
Enter number of processes: 3
Enter page requirements for each process:
Process P1: 2
Process P2: 2
Process P3: 2

--- Minimum Frame Allocation Result ---
Process	Page Req	Allocated Frames	Status
P1	2		2			Satisfied
P2	2		2			Satisfied
P3	2		2			Satisfied

Total Frames Allocated: 6 / 12
Remaining Unallocated Frames: 6
```

---

## 6.2 Equal Frame Allocation

- **Heading in Manual:** `B. equal allocation`
- **Source Code:** [Exp07_Frame_Allocation_Methods/02_equal_frame_allocation.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp07_Frame_Allocation_Methods/02_equal_frame_allocation.c)

### Algorithm
1. Start.
2. Input total number of available frames and number of processes $m$.
3. Calculate frames allocated to each process:
   - $\text{Frames per Process} = \frac{\text{Total Frames}}{m}$
4. Calculate remaining frames:
   - $\text{Leftover} = \text{Total Frames} \pmod m$
5. Display frames allocated to each process and the leftover frames.
6. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227

Enter total frames in physical memory: 63
Enter number of processes: 3
Enter page requirements for each process:
Process P1: 10
Process P2: 127
Process P3: 18

--- Equal Frame Allocation Result ---
Process	Page Req	Allocated Frames	Unmet Pages
P1	10		21			0
P2	127		21			106
P3	18		21			0

Total Allocated Frames: 63 / 63
Leftover System Frames: 0
```

#### Output 2
```text
Roll no: 25071A6227

Enter total frames in physical memory: 100
Enter number of processes: 3
Enter page requirements for each process:
Process P1: 40
Process P2: 25
Process P3: 60

--- Equal Frame Allocation Result ---
Process	Page Req	Allocated Frames	Unmet Pages
P1	40		33			7
P2	25		33			0
P3	60		33			27

Total Allocated Frames: 99 / 100
Leftover System Frames: 1
```

#### Output 3
```text
Roll no: 25071A6227

Enter total frames in physical memory: 60
Enter number of processes: 3
Enter page requirements for each process:
Process P1: 15
Process P2: 12
Process P3: 18

--- Equal Frame Allocation Result ---
Process	Page Req	Allocated Frames	Unmet Pages
P1	15		20			0
P2	12		20			0
P3	18		20			0

Total Allocated Frames: 60 / 60
Leftover System Frames: 0
```

---

## 6.3 Proportional Frame Allocation

- **Heading in Manual:** `C. proportional allocation`
- **Source Code:** [Exp07_Frame_Allocation_Methods/03_proportional_frame_allocation.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp07_Frame_Allocation_Methods/03_proportional_frame_allocation.c)

### Algorithm
1. Start.
2. Input total number of frames $m$ and number of processes $n$.
3. Input page requirement $s[i]$ for each process and calculate total requirement $S = \sum s[i]$.
4. Calculate frames allocated to each process:
   - $\text{Allocation}[i] = \left\lfloor\frac{s[i]}{S} \times m\right\rfloor$
5. Calculate total allocated frames and remaining unallocated frames.
6. Display process requirements, allocated frames, and remaining frames.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227

Enter total frames available in physical memory: 62
Enter number of processes: 2
Enter size (in pages/virtual memory) for each process:
Process P1 size: 10
Process P2 size: 127

--- Proportional Frame Allocation Result ---
Total Virtual Memory Required (S) = 137 pages

Process	Size (s_i)	Allocated Frames (a_i)	Percentage
P1	10		4			7.30%
P2	127		57			92.70%

Total Frames Allocated: 61 / 62
Unallocated Buffer Frames: 1
```

#### Output 2
```text
Roll no: 25071A6227

Enter total frames available in physical memory: 100
Enter number of processes: 3
Enter size (in pages/virtual memory) for each process:
Process P1 size: 50
Process P2 size: 50
Process P3 size: 50

--- Proportional Frame Allocation Result ---
Total Virtual Memory Required (S) = 150 pages

Process	Size (s_i)	Allocated Frames (a_i)	Percentage
P1	50		33			33.33%
P2	50		33			33.33%
P3	50		33			33.33%

Total Frames Allocated: 99 / 100
Unallocated Buffer Frames: 1
```

#### Output 3
```text
Roll no: 25071A6227

Enter total frames available in physical memory: 60
Enter number of processes: 3
Enter size (in pages/virtual memory) for each process:
Process P1 size: 20
Process P2 size: 30
Process P3 size: 50

--- Proportional Frame Allocation Result ---
Total Virtual Memory Required (S) = 100 pages

Process	Size (s_i)	Allocated Frames (a_i)	Percentage
P1	20		12			20.00%
P2	30		18			30.00%
P3	50		30			50.00%

Total Frames Allocated: 60 / 60
Unallocated Buffer Frames: 0
```

---

# Experiment 8: Disk Scheduling Algorithms (FCFS, SSTF, SCAN)

**Date:** 10-09-2026  
**Aim:** Simulate the following Disk scheduling algorithms: A) FCFS, B) SSTF, C) SCAN.

---

## 7.1 FCFS Disk Scheduling

- **Heading in Manual:** `A) FCFS`
- **Source Code:** [Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/01_fcfs_disk.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/01_fcfs_disk.c)

### Algorithm
1. Start.
2. Input the number of disk requests ($n$), request sequence, and initial head position.
3. Initialize Total Head Movement ($\text{THM}$) = 0.
4. For each request:
   - Calculate the distance between the current head and the request: $|req[i] - head|$
   - Add the distance to $\text{THM}$.
   - Move the head to the requested position.
5. Calculate:
   - $\text{Average Seek Time} = \frac{\text{THM}}{n}$
6. Display the Total Head Movement and Average Seek Time.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of requests: 8
Enter request sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 53

Seek Sequence: 53 -> 98 -> 183 -> 37 -> 122 -> 14 -> 124 -> 65 -> 67
Total Head Movement = 640
Average Seek Time = 80.00
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of requests: 5
Enter request sequence: 176 79 34 60 92
Enter initial head position: 50

Seek Sequence: 50 -> 176 -> 79 -> 34 -> 60 -> 92
Total Head Movement = 328
Average Seek Time = 65.60
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of requests: 6
Enter request sequence: 10 150 20 140 30 130
Enter initial head position: 100

Seek Sequence: 100 -> 10 -> 150 -> 20 -> 140 -> 30 -> 130
Total Head Movement = 710
Average Seek Time = 118.33
```

---

## 7.2 SSTF Disk Scheduling

- **Heading in Manual:** `B) SSTF`
- **Source Code:** [Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/02_sstf_disk.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/02_sstf_disk.c)

### Algorithm
1. Start.
2. Input number of requests $n$, request sequence, and initial head position.
3. Initialize $\text{THM} = 0$ and mark all requests as unvisited.
4. Repeat $n$ times:
   - Find the unvisited request closest to the current head.
   - Mark it as visited.
   - Add the distance to $\text{THM}$.
   - Move the head to that request.
5. Calculate:
   - $\text{Average Seek Time} = \frac{\text{THM}}{n}$
6. Display Total Head Movement and Average Seek Time.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of requests: 8
Enter request sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 53

Seek Sequence: 53 -> 65 -> 67 -> 37 -> 14 -> 98 -> 122 -> 124 -> 183
Total Head Movement = 236
Average Seek Time = 29.50
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of requests: 5
Enter request sequence: 176 79 34 60 92
Enter initial head position: 50

Seek Sequence: 50 -> 60 -> 34 -> 79 -> 92 -> 176
Total Head Movement = 178
Average Seek Time = 35.60
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of requests: 6
Enter request sequence: 10 150 20 140 30 130
Enter initial head position: 100

Seek Sequence: 100 -> 130 -> 140 -> 150 -> 30 -> 20 -> 10
Total Head Movement = 190
Average Seek Time = 31.67
```

---

## 7.3 SCAN Disk Scheduling

- **Heading in Manual:** `C) SCAN`
- **Source Code:** [Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/03_scan_disk.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/03_scan_disk.c)

### Algorithm
1. Start.
2. Input number of requests $n$, request sequence, initial head position, disk size, and direction (1 for RIGHT, 0 for LEFT).
3. Sort the request sequence in ascending order.
4. Initialize $\text{THM} = 0$ and divide requests based on the current head position.
5. If direction is RIGHT:
   - Service requests to the right in ascending order.
   - Move the head to $disk\_size - 1$.
   - Reverse direction and service remaining requests in descending order.
6. If direction is LEFT:
   - Service requests to the left in descending order.
   - Move the head to 0.
   - Reverse direction and service remaining requests in ascending order.
7. Calculate $\text{Average Seek Time} = \frac{\text{THM}}{n}$ and display Total Head Movement and Average Seek Time.
8. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of requests: 8
Enter request sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 53
Enter total disk size: 200
Enter direction (1 for High/Right, 0 for Low/Left): 1

Seek Sequence: 53 -> 65 -> 67 -> 98 -> 122 -> 124 -> 183 -> 199 -> 37 -> 14
Total Head Movement = 331
Average Seek Time = 41.38
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of requests: 5
Enter request sequence: 176 79 34 60 92
Enter initial head position: 50
Enter total disk size: 200
Enter direction (1 for High/Right, 0 for Low/Left): 1

Seek Sequence: 50 -> 60 -> 79 -> 92 -> 176 -> 199 -> 34
Total Head Movement = 314
Average Seek Time = 62.80
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of requests: 6
Enter request sequence: 10 150 20 140 30 130
Enter initial head position: 100
Enter total disk size: 200
Enter direction (1 for High/Right, 0 for Low/Left): 1

Seek Sequence: 100 -> 130 -> 140 -> 150 -> 199 -> 30 -> 20 -> 10
Total Head Movement = 288
Average Seek Time = 48.00
```

---

# Experiment 9: Disk Scheduling Algorithms (C-SCAN, LOOK, C-LOOK)

**Date:** 17-09-2026  
**Aim:** Simulate the following Disk scheduling algorithms: A) C-SCAN, B) LOOK, C) C-LOOK.

---

## 8.1 C-SCAN Disk Scheduling

- **Heading in Manual:** `C) C-SCAN` *(under Aim A)*
- **Source Code:** [Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/01_cscan_disk.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/01_cscan_disk.c)

### Algorithm
1. Start.
2. Input number of requests $n$, request sequence, initial head position, and disk size.
3. Sort the request sequence in ascending order.
4. If direction is RIGHT:
   - Service requests from the current head towards $disk\_size - 1$.
   - Move the head directly to 0.
   - Continue servicing the remaining requests in ascending order.
5. Calculate Total Head Movement and Average Seek Time.
6. Display the results.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of requests: 8
Enter request sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 53
Enter total disk size: 200

Seek Sequence: 53 -> 65 -> 67 -> 98 -> 122 -> 124 -> 183 -> 199 -> 0 -> 14 -> 37
Total Head Movement = 382
Average Seek Time = 47.75
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of requests: 5
Enter request sequence: 176 79 34 60 92
Enter initial head position: 50
Enter total disk size: 200

Seek Sequence: 50 -> 60 -> 79 -> 92 -> 176 -> 199 -> 0 -> 34
Total Head Movement = 382
Average Seek Time = 76.40
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of requests: 6
Enter request sequence: 10 150 20 140 30 130
Enter initial head position: 100
Enter total disk size: 200

Seek Sequence: 100 -> 130 -> 140 -> 150 -> 199 -> 0 -> 10 -> 20 -> 30
Total Head Movement = 378
Average Seek Time = 63.00
```

---

## 8.2 LOOK Disk Scheduling

- **Heading in Manual:** `C) LOOK` *(under Aim B)*
- **Source Code:** [Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/02_look_disk.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/02_look_disk.c)

### Algorithm
1. Start.
2. Input number of requests $n$, request sequence, initial head position, and direction.
3. Sort the request sequence in ascending order.
4. If direction is RIGHT:
   - Service requests to the right up to the maximum requested track.
   - Reverse direction and service the remaining requests to the left.
5. If direction is LEFT:
   - Service requests to the left up to the minimum requested track.
   - Reverse direction and service the remaining requests to the right.
6. Calculate Total Head Movement and Average Seek Time.
7. Display the results.
8. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of requests: 8
Enter request sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 53

Seek Sequence: 53 -> 65 -> 67 -> 98 -> 122 -> 124 -> 183 -> 37 -> 14
Total Head Movement = 299
Average Seek Time = 37.38
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of requests: 5
Enter request sequence: 176 79 34 60 92
Enter initial head position: 50

Seek Sequence: 50 -> 60 -> 79 -> 92 -> 176 -> 34
Total Head Movement = 268
Average Seek Time = 53.60
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of requests: 6
Enter request sequence: 10 150 20 140 30 130
Enter initial head position: 100

Seek Sequence: 100 -> 130 -> 140 -> 150 -> 30 -> 20 -> 10
Total Head Movement = 190
Average Seek Time = 31.67
```

---

## 8.3 C-LOOK Disk Scheduling

- **Heading in Manual:** `C) C-LOOK`
- **Source Code:** [Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/03_clook_disk.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/03_clook_disk.c)

### Algorithm
1. Start.
2. Input number of requests $n$, request sequence, initial head position, and direction.
3. Sort the request sequence in ascending order.
4. If direction is RIGHT:
   - Service requests to the right up to the maximum requested track.
   - Jump directly to the minimum requested track.
   - Service the remaining requests up to the track before the starting head.
5. Calculate Total Head Movement and Average Seek Time.
6. Display the results.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of requests: 8
Enter request sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 53

Seek Sequence: 53 -> 65 -> 67 -> 98 -> 122 -> 124 -> 183 -> 14 -> 37
Total Head Movement = 322
Average Seek Time = 40.25
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of requests: 5
Enter request sequence: 176 79 34 60 92
Enter initial head position: 50

Seek Sequence: 50 -> 60 -> 79 -> 92 -> 176 -> 34
Total Head Movement = 268
Average Seek Time = 53.60
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of requests: 6
Enter request sequence: 10 150 20 140 30 130
Enter initial head position: 100

Seek Sequence: 100 -> 130 -> 140 -> 150 -> 10 -> 20 -> 30
Total Head Movement = 210
Average Seek Time = 35.00
```

---

# Experiment 10: File Allocation Strategies

**Date:** 24-09-2026  
**Aim:** Simulate all file allocation strategies: A. Sequential, B. Indexed, C. Linked.

---

## 9.1 Sequential File Allocation

- **Heading in Manual:** `A. Sequential`
- **Source Code:** [Exp10_File_Allocation_Strategies/01_sequential_file_allocation.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp10_File_Allocation_Strategies/01_sequential_file_allocation.c)

### Algorithm
1. Start.
2. Input disk block status, total number of blocks, starting block, and file length.
3. Check whether all blocks from $start$ to $start + length - 1$ are free.
4. If all blocks are free, allocate them to the file.
5. Display the allocation status and allocated block numbers.
6. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter start block and length of file: 12 4
File allocated successfully. Blocks: 12 13 14 15
```

#### Output 2
```text
Roll no: 25071A6227
Enter start block and length of file: 0 5
File allocated successfully. Blocks: 0 1 2 3 4
```

#### Output 3
```text
Roll no: 25071A6227
Enter start block and length of file: 20 6
File allocated successfully. Blocks: 20 21 22 23 24 25
```

---

## 9.2 Indexed File Allocation

- **Heading in Manual:** `B. Indexed`
- **Source Code:** [Exp10_File_Allocation_Strategies/02_indexed_file_allocation.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp10_File_Allocation_Strategies/02_indexed_file_allocation.c)

### Algorithm
1. Start.
2. Input index block number and number of file blocks $n$.
3. Check whether the index block is free.
4. Input the required block numbers and check whether all blocks are free.
5. If all blocks are free, allocate the index block and all required blocks.
6. Display the index block and its allocated block mapping.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter index block: 9
Enter number of blocks and block numbers: 4 14 18 23 29
Index Block 9 points to: 14 18 23 29 
File allocated successfully.
```

#### Output 2
```text
Roll no: 25071A6227
Enter index block: 5
Enter number of blocks and block numbers: 3 10 20 30
Index Block 5 points to: 10 20 30 
File allocated successfully.
```

#### Output 3
```text
Roll no: 25071A6227
Enter index block: 9
Enter number of blocks and block numbers: 3 4 11 15
Allocation failed: Index or data blocks already allocated.
```

---

## 9.3 Linked File Allocation

- **Heading in Manual:** `C. Linked`
- **Source Code:** [Exp10_File_Allocation_Strategies/03_linked_file_allocation.c](file:///C:/Users/shanm/.gemini/antigravity/scratch/Operating-Systems-Lab/Exp10_File_Allocation_Strategies/03_linked_file_allocation.c)

### Algorithm
1. Start.
2. Input starting block number and number of blocks $n$.
3. Input the block numbers forming the linked chain.
4. Check whether all required blocks are free.
5. Allocate the blocks and link them in sequence, ending with -1.
6. Display the linked block sequence.
7. Stop.

### Testcases & Outputs

#### Output 1
```text
Roll no: 25071A6227
Enter number of blocks and block sequence: 4 5 11 25 34
Linked Allocation Sequence: 5 -> 11 -> 25 -> 34 -> NULL
File allocated successfully.
```

#### Output 2
```text
Roll no: 25071A6227
Enter number of blocks and block sequence: 3 2 8 18
Linked Allocation Sequence: 2 -> 8 -> 18 -> NULL
File allocated successfully.
```

#### Output 3
```text
Roll no: 25071A6227
Enter number of blocks and block sequence: 4 1 5 12 20
Allocation failed: One or more blocks already allocated.
```
