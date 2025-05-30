#include "MassageService.h"

MassageService::MassageService(std::string name, int dur, float price, std::string timeSlot)
    : Service(name, dur, price), time(timeSlot), clientType("New") {}

MassageService::MassageService(std::string name, int dur, float price, std::string timeSlot, std::string type)
    : Service(name, dur, price), time(timeSlot), clientType(type) {}

void MassageService::displayDetails() const {
    std::cout << "Service: " << serviceName << std::endl;
    std::cout << "Duration: " << duration << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Base Price: $" << basePrice << std::endl;
    std::cout << "Time: " << time << std::endl;
    if (clientType != "New") {
        std::cout << "Client Type: " << clientType << std::endl;
    }
}

float MassageService::calculateFinalPrice(std::string clientType) const {
    float finalPrice = basePrice;
    if (duration > 60) {
        std::cout << "\nNote: Duration exceeds 60 minutes. Surcharge applied: $200" << std::endl;
        finalPrice += 200.0f;
    }
    if (clientType == "Returning") {
        std::cout << "Note: Returning client discount applied: 10%" << std::endl;
        finalPrice *= 0.90f;
    }
    return finalPrice;
}

void MassageService::confirmBooking() const {
    displayDetails();
    float finalPrice = calculateFinalPrice(clientType);
    std::cout << "Final Price: $" << std::fixed << std::setprecision(2) << finalPrice << std::endl;
    std::cout << "Booking Confirmed" << std::endl;
    std::cout << "==========================================" << std::endl;
}
