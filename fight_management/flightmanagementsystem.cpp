/*
 * flightmanagementsystem.cpp
 *
 *  
 *      Author: Santosh
 */
#include "flightmanagementsystem.h"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include "flighttrip.h"

void FlightTripDatabase::addTrip(const FlightTrip& ref) {
  trips.push_back(ref);
}

void FlightTripDatabase::addTrip(std ::string t_id, std ::string t_orgCity,
                                 std ::string t_desCity, double t_distance) {
  trips.emplace_back(t_id, t_orgCity, t_desCity, t_distance);
}

void FlightTripDatabase::addTrip(std ::string t_id, std ::string t_orgCity,
                                 std ::string t_desCity, double t_distance,
                                 std ::string t_flightOperator) {
  trips.emplace_back(t_id, t_orgCity, t_desCity, t_distance, t_flightOperator);
}
void FlightTripDatabase::addTrip(std ::string t_id, std ::string t_orgCity,
                                 std ::string t_desCity, double t_distance,
                                 std ::string t_flightOperator,
                                 double t_taxPercentage) {
  trips.emplace_back(t_id, t_orgCity, t_desCity, t_distance, t_flightOperator,
                     t_taxPercentage);
}

void FlightTripDatabase ::display() {
  for (auto itr = trips.begin(); itr != trips.end(); ++itr) {
    itr->displayTrip();
  }
}
FlightTrip& FlightTripDatabase::findFlightByNumber(std ::string keyId) {
  auto itr = std ::find_if(trips.begin(), trips.end(), [keyId](FlightTrip ref) {
    return (ref.getId() == keyId);
  });
  return *itr;
} /*
 bool FlightTripDatabase::removeTrip(std ::string keyId) {
   auto itr = std ::find_if(trips.begin(), trips.end(), [keyId](FlightTrip ref)
 { return (ref.getId() == keyId);
   });
   if (itr == trips.end())
     return 0;
   else {
     trips.remove(*itr);
     return 0;
   }
 }*/

FlightTrip& FlightTripDatabase::findFlightByOriginCity(
    std ::string keyOrgCity) {
  auto itr =
      std ::find_if(trips.begin(), trips.end(), [keyOrgCity](FlightTrip ref) {
        return (ref.getOrgCity() == keyOrgCity);
      });
  return *itr;
}
FlightTrip& FlightTripDatabase::findFlightByDestinationCity(
    std ::string keyDesCity) {
  auto itr =
      std ::find_if(trips.begin(), trips.end(), [keyDesCity](FlightTrip ref) {
        return (ref.getDesCity() == keyDesCity);
      });
  return *itr;
}
FlightTrip& FlightTripDatabase::findFlightByOperator(std ::string keyOperator) {
  auto itr =
      std ::find_if(trips.begin(), trips.end(), [keyOperator](FlightTrip ref) {
        return (ref.getFlightOperator() == keyOperator);
      });
  return *itr;
}
/*
double FlightTripDatabase::findMaxFareByOperator(std ::string Operator) {
  auto itr = findFlightByOperator(Operator);
   auto fair = max_element( itr.begin(), itr.end(),cmp);

}
*/
/*
FlightTrip& FlightTripDatabase::removeTrip(std :: stri) {
auto itr}

double FlightTripDatabase::findAverageCostOfAllTrips() {}
double FlightTripDatabase::findMinFareBetweenCities() {}
double FlightTripDatabase::findMaxFareByOperator() {}
 */

/*












#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include "bank.h"

void Bank ::addAccount(const Account &ref) { accounts.push_back(ref); }

void Bank ::addAccount(int id, std ::string name, int balance) {
        //accounts.push_back(Account(id,name,balance));
  accounts.emplace_back(id, name, balance);
}

void Bank ::displayAll() const {
  for (auto itr = accounts.begin(); itr != accounts.end(); ++itr) {
    itr->display();
  }
}
Account &Bank ::findById(int keyId) {
  // std ::list<Account>::iterator itr = std ::find_if(
  // accounts.begin(), accounts.end(),
  //[keyId](const Account &ref) { return (ref.getId() == keyId); });
  // return itr;
  std ::list<Account>::iterator itr = std ::find_if(
      accounts.begin(), accounts.end(),
      [keyId](const Account &ref) { return (ref.getId() == keyId); });
  //if(itr == accounts.end())
        //  return ;
  return *itr;
}
Account &Bank ::findByName(std ::string keyName) {
  std ::list<Account>::iterator itr = std ::find_if(
      accounts.begin(), accounts.end(),
      [keyName](const Account &ref) { return (ref.getName() == keyName); });
  return *itr;
}

bool cmp(const Account &a, const Account &b) { return a.getId() < b.getId(); }

bool cmps(const Account &a, const Account &b) {
  return a.getName() < b.getName();
}
void Bank ::sortById() {
  // std ::sort(accounts.begin(), accounts.end(), cmp);
  accounts.sort(cmp);
}
void Bank ::sortByName() { accounts.sort(cmps); }
bool compareById(const Account &ref1, const Account &ref2) {
  return ref1.getId() > ref2.getId();
}


int Bank ::getLowestBalance() { return 0; }

bool Bank ::removeAccount(int keyId) { return false; }


 */
