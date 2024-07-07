/*
 * flightmanagementsystem.h
 *
 *  
 *      Author: Santosh
 */

#ifndef FLIGHTMANAGEMENTSYSTEM_H_
#define FLIGHTMANAGEMENTSYSTEM_H_
#include <list>
#include "flighttrip.h"

class FlightTripDatabase {
  std ::list<FlightTrip> trips;

 public:
  void addTrip(const FlightTrip& ref);

  void addTrip(std ::string t_id, std ::string t_orgCity,
               std ::string t_desCity, double t_distance);

  void addTrip(std ::string t_id, std ::string t_orgCity,
               std ::string t_desCity, double t_distance,
               std ::string t_flightOperator);
  void addTrip(std ::string t_id, std ::string t_orgCity,
               std ::string t_desCity, double t_distance,
               std ::string t_flightOperator, double t_taxPercentage);

  void display();
  FlightTrip& findFlightByNumber(std ::string keyId);

  FlightTrip& findFlightByOriginCity(std ::string keyOrgCity);
  FlightTrip& findFlightByDestinationCity(std ::string keyDesCity);
  FlightTrip& findFlightByOperator(std ::string keyOperator);
  double findMaxFareByOperator(std ::string Operator);
 // bool FlightTripDatabase::removeTrip(std ::string keyId);

  /*FlightTrip& removeTrip();
  FlightTrip& findFlightByNumber();
  FlightTrip& findFlightByOriginCity();
  FlightTrip& findFlightByDestinationCity();
  FlightTrip& findFlightByOperator();
  double findAverageCostOfAllTrips();
  double findMinFareBetweenCities();
  double findMaxFareByOperator();*/
};

#endif /* FLIGHTMANAGEMENTSYSTEM_H_ */
