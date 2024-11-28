# Hospital Management System

This is a simple **Hospital Management System** project written in C++. It allows for basic management of hospital patients based on their specialization and urgency.

## Features

The program provides the following functionality:
1. **Add a new patient**: Users can input the patient's name, specialization, and urgency (emergency or regular).
2. **Print all patients**: Displays all patients grouped by their specialization.
3. **Get the next patient**: Retrieves and removes the patient with the highest priority from a specialization.
4. **Exit the program**: Safely exits the application.

## How It Works

- **Specializations**: The program handles up to 20 specializations.
- **Urgency Levels**: Patients with emergency status are given priority over regular patients.
- **Capacity**: Each specialization can accommodate up to 5 patients.

### Key Functions

- **Add New Patient**: Adds patient information to the corresponding specialization, prioritizing emergencies if necessary.
- **View All Patients**: Lists all patients with their corresponding specializations.
- **Next Patient**: Retrieves and removes the highest-priority patient for treatment.

### Interface

The program offers a simple text-based interface with the following options:
```plaintext
Enter Your Choice:
1) Add new patient
2) Print all patients
3) Get next patient
4) Exit
```
How to Use
Compile the program using a C++ compiler:
bash
Copy code
g++ -o hospital hospital_project.cpp
Run the program:
bash
Copy code
./hospital
Follow the on-screen instructions to interact with the system.
Example Interaction
```plaintext

Enter Your Choice:
1) Add new patient
2) Print all patients
3) Get next patient
4) Exit
1
Enter your name, specialization, and status
John 3 1
Enter Your Choice:
1) Add new patient
2) Print all patients
3) Get next patient
4) Exit
2
There are 1 patients in specialization 3
John
Enter Your Choice:
1) Add new patient
2) Print all patients
3) Get next patient
4) Exit
```
Requirements

A C++ compiler (e.g., GCC, Clang).

Basic knowledge of how to compile and run C++ code.

Limitations

The system handles up to 20 specializations and 5 patients per specialization.

The program does not save data after exiting.

Contributing

Feel free to fork this repository, submit issues, or create pull requests for enhancements.
