#include "MassageService.h"

int main() {
    MassageService booking1("Personalized therapeutic massage", 75, 1400.0f, "3:00 PM");
    booking1.confirmBooking();

    MassageService booking2("Personalized therapeutic massage", 60, 1200.0f, "4:00 PM", "Returning");
    booking2.confirmBooking();

    return 0;
}
