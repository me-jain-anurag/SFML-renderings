# SFML Renderings  

This repository contains **SFML-based renderings** of projects from my [Algorithm-Based Projects](https://github.com/me-jain-anurag/algorithmBasedProjects) repository. Each rendering visualizes an algorithm or computational concept using **SFML 3.0 in C++**.  

---

## 🚀 Overview  

The renderings in this repository provide **graphical representations of algorithms**. The original projects are developed in the **algorithmBasedProjects** repository, and this repo focuses on their **visual outputs using SFML**.  

### **🔗 Related Repository:**  
📌 **[Algorithm-Based Projects](https://github.com/me-jain-anurag/algorithmBasedProjects)**  

---

## 📂 Structure  

Each folder in this repo corresponds to a rendering of a project from **algorithmBasedProjects**.  

<!-- ```
SFML-renderings/
│── SortingVisualizer/   # SFML rendering of sorting algorithms
│── MazeSolver/          # SFML visualization of a maze solver
│── Pathfinding/         # A* or Dijkstra's algorithm visualized
│── Fractals/            # Renderings of fractal generation
│── README.md            # This file
``` -->

---

## 🛠️ Setup & Installation  

### **1️⃣ Prerequisites**  
Before running the renderings, install:  
- **C++ Compiler** (MSVC, MinGW, or Clang)  
- **SFML 3.0** ([Download SFML](https://www.sfml-dev.org/download.php))  
- **Visual Studio** (Recommended for easier setup)  
- **Git** (for version control)  

### **2️⃣ Cloning the Repository**  
Run the following commands:  
```sh
git clone https://github.com/me-jain-anurag/SFML-renderings.git
cd SFML-renderings
```

### **3️⃣ Setting Up SFML in Visual Studio**  
1. Open the `.sln` file in **Visual Studio**.  
2. Go to **Project** → **Properties** → **C/C++** → **Additional Include Directories**.  
   - Add the path to **SFML’s `include/` folder**.  
3. Go to **Project** → **Properties** → **Linker** → **Additional Library Directories**.  
   - Add the path to **SFML’s `lib/` folder**.  
4. Under **Linker → Input**, add these libraries to "Additional Dependencies":  
   ```
   sfml-graphics.lib
   sfml-window.lib
   sfml-system.lib
   sfml-audio.lib
   sfml-network.lib
   ```
5. Copy **SFML DLL files** to the output directory (`Debug/` or `Release/`).
6. If you need more help Setting up check out [this link](https://www.sfml-dev.org/tutorials/3.0/getting-started/visual-studio/#creating-and-configuring-an-sfml-project) or [this video](https://www.youtube.com/watch?v=lftcRWAIycg) by [Mesos Aurum](https://www.youtube.com/@MesosAurum).

---

## ▶️ Running the Renderings  

1. **Build** the project (`Ctrl + Shift + B`).  
2. **Run** the `.exe` from the output folder (`Debug/` or `Release/`).  
3. If you get **DLL errors**, make sure SFML’s **DLL files** are in the same directory as the `.exe`.  

---

## 📦 Dependencies  
- **SFML 3.0** (Graphics, Window, and System modules)  

---

## ❗ Troubleshooting  
### **🔴 SFML DLL Errors?**  
- Copy `sfml-graphics.dll`, `sfml-window.dll`, and `sfml-system.dll` into your executable directory.  

### **🔴 Black Screen on Running?**  
- Make sure your rendering code is inside a **game loop**.  

---

## 📚 References & Help  

I took help from the following sources while working on this project:  
- 📌 **[MesosAurum YouTube Channel](https://www.youtube.com/@MesosAurum)**  
- 📌 **[Official SFML Website](https://www.sfml-dev.org/)**  

---

## 📝 License  
This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.  

---

## ✨ Author  
**Anurag Jain**  
📌 [GitHub](https://github.com/me-jain-anurag/)  
