#pragma once

#include <string>
#include <vector>
#include <mutex>

#include "Models.h"

class Controller{
public:
	Controller() = default;

	float getTargetTemperature() {
		return targetTemperature;
	}

private:
	float targetTemperature;
	PinStatus pinStatus;
	PinStatus usable;
	std::vector<SensorStatus> sensorStatus;
  //std::vector<int> history; // TODO make this not an int
  
	mutable std::mutex m_mutex;
};

