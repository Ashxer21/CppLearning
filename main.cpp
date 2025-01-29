#include <iostream>


enum Device {
    OFF,
    ON,
    STANDBY
};


void updateDeviceStandby(Device *state, Device newState);

void printDeviceState(const Device *state);


int main() {
    Device lampstate = OFF;

    Device *statePtr = &lampstate;

    printDeviceState(statePtr);

    updateDeviceStandby(statePtr, ON);
    printDeviceState(statePtr);


    updateDeviceStandby(statePtr, STANDBY);
    printDeviceState(statePtr);


    statePtr = nullptr;
    updateDeviceStandby(statePtr, OFF);
    printDeviceState(statePtr);


    return 0;
}


void updateDeviceStandby(Device *state, Device newState) {
    if (state) {
        *state = newState;
    } else {
        std::cout << "Invalide device pointer! " << std::endl;
    }
}



void printDeviceState(const Device* state) {
    if (!state) {
        std::cout << "Invalide device pointer! " << std::endl;
        return;
    }

    switch (*state) {
        case OFF:
            std::cout << "Device is  OFF" << std::endl;
            break;
        case ON:
            std::cout << "Device is  ON" << std::endl;
            break;
        case STANDBY:
            std::cout << "Device is in STANDBY mode" << std::endl;
            break;
        default:
            std::cout << "Unknow state!" << std::endl;
    }

}



