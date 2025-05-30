#ifndef SERVICE_H
#define SERVICE_H

#include <string>

class Service {
protected:
    std::string serviceName;
    int duration;
    float basePrice; 

public:
    Service(std::string name, int dur, float price);

    virtual void displayDetails() const = 0;
    virtual float calculateFinalPrice(std::string clientType) const = 0;
    virtual ~Service() {}
};

#endif
