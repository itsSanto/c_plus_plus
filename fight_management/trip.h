/*
 * trip.h
 *
 *  
 *      Author: Santosh
 */

#ifndef TRIP_H_
#define TRIP_H_
#include <string>

class Trip {
  std ::string orgCity;  // Origin City
  std ::string desCity;  // Destination City
  // double fair;
  double distance;  // Distance in KMs

  // Fare Per KM
 public:
  Trip();
  Trip(std ::string t_orgCity, std ::string t_desCity, double t_distance);
  Trip(const Trip &ref);

  std ::string getOrgCity();
  std ::string getDesCity();
  double getDistance();

  virtual double fareCal() = 0;
};

#endif /* TRIP_H_ */
