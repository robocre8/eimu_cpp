
#include <sstream>
#include <iostream>
#include <unistd.h>

#include <chrono>

#include <iomanip>

#include "eimu.hpp"

EIMU eimu;

void delay_ms(unsigned long milliseconds)
{
  usleep(milliseconds * 1000);
}

int main(int argc, char **argv)
{

  float r, p, y, ax, ay, az, gx, gy, gz;

  auto prevTime = std::chrono::system_clock::now();
  std::chrono::duration<double> duration;
  auto currentTime = std::chrono::system_clock::now();

  std::string port = "/dev/ttyACM0";
  eimu.connect(port);

  // wait for the eimu to fully setup
  for (int i = 1; i <= 4; i += 1)
  {
    delay_ms(1000);
    std::cout << "configuring controller: " << i << " sec" << std::endl;
  }

  eimu.clearDataBuffer();

  int worldFrameId = 1;
  eimu.setWorldFrameId(worldFrameId);
  worldFrameId = eimu.getWorldFrameId();
  if(worldFrameId == 1) std::cout << "ENU Frame" << std::endl;
  else if(worldFrameId == 0) std::cout << "NWU Frame" << std::endl;
  else if(worldFrameId == 2) std::cout << "NED Frame" << std::endl;

  prevTime = std::chrono::system_clock::now();

  while (true)
  {
    currentTime = std::chrono::system_clock::now();

    bool success = eimu.readImuData(r, p, y, ax, ay, az, gz, gy, gz);
    if (success) {

    }

    duration = currentTime - prevTime;
    std::cout << "duration: " << duration.count() << std::endl;

    prevTime = currentTime;
  }
    
}