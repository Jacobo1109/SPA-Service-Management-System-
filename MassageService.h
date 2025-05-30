#ifndef MASSAGESERVICE_H
#define MASSAGESERVICE_H

#include "Service.h"
#include <iostream>
#include <iomanip>

class MassageService : public Service {
private:
    std::string time;
    std::string clientType;

public:
    MassageService(std::string name, int dur, float price, std::string timeSlot);
    MassageService(std::string name, int dur, float price, std::string timeSlot, std::string type);

    void displayDetails() const override;
    float calculateFinalPrice(std::string clientType) const override;
    void confirmBooking() const;
};

#endif
