/*
 * flighttrip.cpp
 *
 *  
 *      Author: Santosh
 */
/*

*/

#include "flighttrip.h"
#include <iostream>
#include <string>
#include "trip.h"

FlightTrip ::FlightTrip()
    : Trip("DUMMY", "DUMMY", 0.00), id("XX-XXX"), flightOperator("DUMMY") {}

FlightTrip ::FlightTrip(std ::string t_id, std ::string t_orgCity,
                        std ::string t_desCity, double t_distance)
    : Trip(t_orgCity, t_desCity, t_distance), id(t_id) {}

FlightTrip ::FlightTrip(std ::string t_id, std ::string t_orgCity,
                        std ::string t_desCity, double t_distance,
                        std ::string t_flightOperator)
    : Trip(t_orgCity, t_desCity, t_distance),
      id(t_id),
      flightOperator(t_flightOperator) {}
FlightTrip ::FlightTrip(std ::string t_id, std ::string t_orgCity,
                        std ::string t_desCity, double t_distance,
                        std ::string t_flightOperator, double t_taxPercentage)
    : Trip(t_orgCity, t_desCity, t_distance),
      id(t_id),
      flightOperator(t_flightOperator),
      taxPercentage(t_taxPercentage) {}

/*FlightTrip ::FlightTrip(const FlightTrip& ref)
    : Trip(ref.getOrgCity(), ref.getDesCity(), ref.getDistance()),
      id(ref.id),
      flightOperator(ref.flightOperator),
      taxPercentage(ref.taxPercentage) {}*/
std ::string FlightTrip ::getId() { return id; }

std ::string FlightTrip ::getFlightOperator() { return flightOperator; }
double FlightTrip ::getTax() { return taxPercentage; }
double FlightTrip ::fareCal() {
  return ((getDistance() * farePerKm) +
          ((getDistance() * farePerKm * taxPercentage / 100)));
}

void FlightTrip ::displayTrip() {
  std ::cout << "Flight Number : \t" << id << "\nOrigin City : \t"
             << getOrgCity() << "\nDestination City : \t" << getDesCity()
             << "\nDistance : \t" << getDistance() << "\nOperator : \t"
             << getFlightOperator() << "\nTax : \t" << getTax() << " %"
             << "\nFare : \t" << fareCal() << "\n";
}
