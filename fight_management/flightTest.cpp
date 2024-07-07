/*
 * Flighttest.cpp
 *
 *  
 *      Author: Santosh
 */
#include <gtest/gtest.h>
#include <iostream>
#include "flightmanagementsystem.h"
#include "flighttrip.h"

namespace {
class FlightTripTest : public ::testing ::Test {
 protected:
  void SetUp() override {
    FlightTrip t1("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  }
  void TearDown() override { delete ptr; }
  FlightTrip *ptr;
};

class FlightDatabaseTest : public ::testing ::Test {
 protected:
  void SetUp() override {
    FlightTripDatabase t;
    t.addTrip("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  }
  void TearDown() override { delete ptr; }
  FlightTrip *ptr;
};

TEST_F(FlightTripTest, DefaultConstructor) {
  FlightTrip a;
  EXPECT_EQ("XX-XXX", a.getId());
  EXPECT_EQ("DUMMY", a.getOrgCity());
  EXPECT_EQ(0.0, a.getDistance());
}

TEST_F(FlightTripTest, ParaConstructor) {
  FlightTrip a("IN-124", "Pune", "Mumbai", 150.0, "AirLines");
  EXPECT_EQ("IN-124", a.getId());
  EXPECT_EQ("Pune", a.getOrgCity());
  EXPECT_EQ("Mumbai", a.getDesCity());
  EXPECT_EQ(150.0, a.getDistance());
  EXPECT_EQ("AirLines", a.getFlightOperator());
}

TEST_F(FlightDatabaseTest, AddTrip) {
  FlightTripDatabase t1;
  t1.addTrip("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  EXPECT_EQ("IN-125", t1.findFlightByOriginCity("Pune").getId());
}
TEST_F(FlightDatabaseTest, FindByName) {
  FlightTripDatabase t1;
  t1.addTrip("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  EXPECT_EQ("IN-125", t1.findFlightByNumber("IN-125").getId());
}

TEST_F(FlightDatabaseTest, FindByOperator) {
  FlightTripDatabase t1;
  t1.addTrip("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  EXPECT_EQ("IN-125", t1.findFlightByOperator("SpiceJet").getId());
}

TEST_F(FlightDatabaseTest, FindByOrgCity) {
  FlightTripDatabase t1;
  t1.addTrip("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  EXPECT_EQ("IN-125", t1.findFlightByOriginCity("Pune").getId());
}

TEST_F(FlightDatabaseTest, FindByDesCity) {
  FlightTripDatabase t1;
  t1.addTrip("IN-125", "Pune", "Mumbai", 150.0, "SpiceJet");
  EXPECT_EQ("IN-125", t1.findFlightByDestinationCity("Mumbai").getId());
}

}  // namespace
