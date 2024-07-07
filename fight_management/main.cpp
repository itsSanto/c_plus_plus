/*
 * main.cpp
 *
 *  
 *      Author: Santosh
 */
#include <iostream>
#include <string>
#include "flightmanagementsystem.h"
#include "flighttrip.h"
//#include "trip.h"

int main() {
  FlightTrip *ptr;
  FlightTrip t1("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");

  ptr = &t1;

  // ptr->displayTrip();

  FlightTripDatabase data;

  data.addTrip(t1);
  data.addTrip("IN-456", "Aurangabad", "Mumbai", 250.0, "JetAir");

  data.display();

  std :: cout << "\n\n FIND:- ";

  data.findFlightByNumber("IN-125").displayTrip();
  data.findFlightByOriginCity("Aurangabad").displayTrip();

  return 0;
}
