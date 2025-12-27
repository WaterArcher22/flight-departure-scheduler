# ✈️ Flight Departure Scheduler (C)

A priority-based flight departure scheduling system implemented in **C**.  
This project simulates how flights are scheduled for departure based on predefined **priority levels**, while preserving **FIFO (First-In, First-Out)** order within each priority class.

The system is designed with a **modular architecture**, clearly separating data models, data structures, and scheduling logic.

---

## 🚀 Features

- **Priority-based scheduling**
  - Emergency flights have the highest priority
  - Followed by International flights
  - Domestic flights have the lowest priority
- FIFO order preserved within each priority level
- Modular design with clear separation of concerns
- Linked list–based queue implementation
- Clean API design using header (`.h`) and source (`.c`) files
- No global variables
- Explicit memory management (`malloc` / `free`)

---

## 🧠 Design Overview

### Flight Module
Represents a single flight entity with the following attributes:
- Flight ID
- Priority level
- Arrival time
- Service time

The flight module is responsible only for defining the flight data model and related utility functions.

---

### Queue Module
- Implemented as a **linked list**
- Uses both `head` and `tail` pointers for **O(1)** enqueue and dequeue operations
- Abstracted through a clean interface
- Memory management is fully encapsulated inside the queue implementation

---

### Scheduler Module
- Acts as the decision-making component of the system
- Internally manages three queues:
  - Emergency queue
  - International queue
  - Domestic queue
- Selects the next flight based on priority rules
- Completely independent from the internal implementation of the queue

---

### 📁 Project Structure
  flight-departure-scheduler/
  ├── CMakeLists.txt
  ├── README.md
  └── src/
      ├── main.c
      ├── flight.h
      ├── flight.c
      ├── queue.h
      ├── queue.c
      ├── scheduler.h
      └── scheduler.c
      

---
### 🎯 What This Project Demonstrates

  -Modular C programming
  -Linked list–based queue implementation
  -Priority scheduling logic
  -Memory management (malloc / free)
  -API design and abstraction
  
---

### 📌 Notes

  -This project was developed as part of an academic assignment and later refined to follow clean code and modular design principles suitable for public presentation.
  
---

## 🛠 Build and Run

This project uses **CMake** for building.

### Build steps:

```bash
mkdir build
cd build
cmake ..
make
```
Run the program:
```bash
./flight_departure_scheduler
```
🧪 Example Output
```bash
Flight departure order:
Flight ID: 3 | Priority: Emergency | Arrival Time: 2 | Service Time: 3
Flight ID: 5 | Priority: Emergency | Arrival Time: 4 | Service Time: 2
Flight ID: 2 | Priority: International | Arrival Time: 1 | Service Time: 4
Flight ID: 1 | Priority: Domestic | Arrival Time: 0 | Service Time: 5
Flight ID: 4 | Priority: Domestic | Arrival Time: 3 | Service Time: 6

