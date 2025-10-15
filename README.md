## Easy IMU Cpp Library
This library helps communicate with the already setup **`Easy IMU Module`** (**`MPU9250 EIMU Module`**) in your PC or microcomputer-based cpp projects, after successful setup with the [eimu_setup_application](https://github.com/samuko-things-company/eimu_setup_application).

> you can use it in your microcomputer robotics project **running on linux** (e.g Raspberry Pi, PC, etc.)

A simple way to get started is simply to try out and follow the example code in the src folder

## Dependencies
- you'll need to install the `libserial` library
  ```shell
    sudo apt-get update
    sudo apt install libserial-dev
  ```

## How to Use the Library
-- Download (by clicking on the green Code button above) or clone the repo into your PC using **`git clone`**
> [!NOTE]  
> you can use this command if you want to clone the repo:
> 
>  ```git clone https://github.com/samuko-things-company/eimu_cpp.git```

- Ensure you have the **Easy IMU Module** is already calibrated.

- Connect the **Easy IMU Module** to your PC or microcomputer

- A simple way to get started is simply to try out and follow the example `read_rpy.cpp` code in the src folder.

- make, build and run the example code.
  > cd into the root directory
  >
  > mkdir build (i.e create a folder named build)
  >
  > enter the following command in the terminal in the root folder:
    ````
    cmake -B ./build/
    ````
    ````
    cmake --build ./build/
    ````
    ````
    ./build/read_imu
    ````

- You can follow the pattern used in the example `read_imu.cpp` in your own code and use the cpp library as fit.