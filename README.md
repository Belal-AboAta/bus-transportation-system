# 🚌 Bus Transit System Workshop

![Bus Transit System Banner](./Generated%20Image%20October%2011,%202025%20-%203_31PM.png)

## Overview

This repository is part of a **hands-on C++ workshop**.  
Your mission is to design and implement a **Bus Transit System** using suitable **data structures**.  

Participants are expected to **analyze**, **design**, and **code** the solution themselves — no pre-written solutions are provided.  

The system will simulate a simple public transit network consisting of **Buses**, **Stations**, **Passengers**, and **Parks**.

---

## 🧱 Prerequisites

Before you start, make sure you have:

- A C++ compiler (e.g., `g++`, `clang++`)
- **CMake** installed (for project configuration and building)

---

## 🚏 System Explanation

The **Bus Transit System** models a simplified city bus network where:
- Buses move between stations and carry passengers.
- Stations act as hubs connected to other stations.
- Passengers board and leave buses.
- When buses have no passengers, they move to the **Park**.

The project will help you reason about which data structures best suit each entity’s needs — performance, search efficiency, and operation order.

---

## 🧩 Entities

### **Bus**
- **ID**
- **Name:** (e.g., 400, 401, …)
- **Price**
- **Passengers**
- `move()`
- `insert_passenger()`
- `delete_passenger()`

### **Station**
- **ID**
- **Name**
- **Buses**
- **Linked Stations**
- `insert_bus()`
- `delete_bus()`

### **Passenger**
- **ID**

### **Park**
- **Buses**
- `insert_bus()`
- `delete_bus()`

---

## 🎯 Objectives

The goal is to identify **which data structure** best fits each case:

| Scenario | Requirement | Ideal Data Structure (to decide) | Expected Behavior |
|-----------|--------------|----------------------------------|-------------------|
| **Station buses** | Store current buses and determine which bus leaves first | ? | First arrives first leaves |
| **Bus passengers** | Hold passengers, allow search/add/remove by ID | ? | O(n) insert/delete/search |
| **Bus prices** | Hold prices and related buses, enable searching by price | ? | O(log n) search |
| **Station links** | Represent connections between stations and compute shortest path | ? | -- |
| **Park buses** | Hold parked buses, remove the last arrived first | ? | First arrives last leaves |

Your task is to **choose, justify, and implement** the appropriate data structures for each.

---

## 🧮 Input Sample

### Stations
- Alexandria Bus Terminal (Moharam Bek)
- Sidi Gaber Train Station
- Grinfel Bus Stop
- Sidi Bishr
- El Ibrahimia
- Alexandria Corniche
- Stanley
- Bahary
- King Mariout
- El Amria

### Buses
- From **400** to **415**

---

## 🛠️ Build Instructions

```bash
# Clone the repo
git clone https://github.com/<your-username>/bus-transit-system.git
cd bus-transit-system

# Configure with CMake
cmake -B build

# Build the project
cmake --build build
