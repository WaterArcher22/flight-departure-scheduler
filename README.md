✈️ Flight Departure Scheduler (C)
  A priority-based flight departure scheduling system implemented in C, designed with a modular and clean architecture.
  The project simulates how flights are scheduled for departure based on priority levels while preserving FIFO order within each priority class.

🚀 Features
  -Priority-based scheduling
  -Emergency flights have the highest priority
  -Followed by International and Domestic flights
  -FIFO (First-In, First-Out) order preserved within each priority
  -Modular design using separate components for:
  -Flight data model
  -Queue (linked list based)
  -Scheduler (decision logic)
  -Clean separation of interface (.h) and implementation (.c)
  -No global variables

🧠 Design Overview
  -Flight
  -Represents a single flight with:
  -Flight ID
  -Priority
  -Arrival time
  -Service time
  -Queue
  -Implemented as a linked list
  -Uses head and tail pointers for O(1) enqueue and dequeue
  -Abstracted via a clean API
  -Scheduler
  -Manages three internal queues:
  -Emergency
  -International
  -Domestic
  -Selects the next flight based on priority rules
  -Independent from queue implementation details

📁 Project Structure
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
      
🛠 Build & Run
  This project uses CMake.
    mkdir build
    cd build
    cmake ..
    make
    ./flight_departure_scheduler
    
🧪 Example Output
  Flight departure order:
  Flight ID: 3 | Priority: Emergency | Arrival Time: 2 | Service Time: 3
  Flight ID: 5 | Priority: Emergency | Arrival Time: 4 | Service Time: 2
  Flight ID: 2 | Priority: International | Arrival Time: 1 | Service Time: 4
  Flight ID: 1 | Priority: Domestic | Arrival Time: 0 | Service Time: 5
  Flight ID: 4 | Priority: Domestic | Arrival Time: 3 | Service Time: 6

🎯 What This Project Demonstrates
  -Modular C programming
  -Linked list–based queue implementation
  -Priority scheduling logic
  -Memory management (malloc / free)
  -API design and abstraction

📌 Notes
This project was developed as part of an academic assignment and later refined to follow clean code and modular design principles suitable for public presentation.

