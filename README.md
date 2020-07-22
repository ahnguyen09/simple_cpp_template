# A Simple C++ Template Project

<!--- 
![Build Status](https://https://travis-ci.org/github/ahnguyen09/simple_start_cpp.svg?branch=master)](https://travis-ci.org/github/ahnguyen09/simple_start_cpp)
-->

## Overview

This repository is a small template to get started with C++, make and CMake. This repository will start with Linux setup and configurations.
Building on Windows will be secondary, because there doesn't seem to be a simple way to a starter project that is similar for both Linux and Windows.

This project was created based on these bigger projects:
- [Oxford Template C++ Project](https://github.com/OxfordRSE/template-project-cpp)
- [Jason Turner C++ Starter Project](https://github.com/lefticus/cpp_starter_project)

Will Use (Minimum Starter):
- C++17 Standard
- Clang Format
- Clang Tidy
- CMake

Will Include as extras(options): 
- TODO: Include the following compoments later
- Boost
- TravisCI (Can link github to Travis CI -- free for public repositories)

```
Project Structure:
    -> Root
        -> src
            - cpp files
        -> test
            - test cpp files
        -> include
            - header files
```

## Getting Started

You could copy what is important for your project, however, the minimum starter is recommended. Copy the files to your git repository 
so you can keep track of changes.

#### New Linux Install
Choose the commands that matches your system.
<detials>
<summary>Apt Package Manager (Ubuntu base):</summary>

```bash 
sudo apt update
sudo apt upgrade
sudo apt install build-essential
sudo apt install clang

pip install cmake-format
```

</details>

<detials>
<summary>Dnf Package Manager (Fedora/RHLE?):</summary>

```bash 
sudo dnf update --refresh
sudo dnf upgrade
sudo dnf groupinstall "Development Tools and Libraries"
sudo dnf install clang

pip install cmake-format
```

</details>
    


