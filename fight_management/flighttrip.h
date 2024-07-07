/*
 * flighttrip.h
 *
 *  
 *      Author: Santosh
 */

#ifndef FLIGHTTRIP_H_
#define FLIGHTTRIP_H_
#include <iostream>
#include <string>
#include "trip.h"

class FlightTrip : public Trip {
  std ::string id;
  std ::string flightOperator;
  double taxPercentage = 8;
  const double farePerKm = 150;

 public:
  FlightTrip();
  FlightTrip(std ::string t_id, std ::string t_orgCity, std ::string t_desCity,
             double t_distance);
  FlightTrip(std ::string t_id, std ::string t_orgCity, std ::string t_desCity,
             double t_distance, std ::string t_flightOperator);
  FlightTrip(std ::string t_id, std ::string t_orgCity, std ::string t_desCity,
             double t_distance, std ::string t_flightOperator,
             double t_taxPercentage);
  // FlightTrip(const FlightTrip& ref);

  std ::string getId();

  std ::string getFlightOperator();
  double getTax();
  double fareCal();

  void displayTrip();
};

#endif /* FLIGHTTRIP_H_ */
