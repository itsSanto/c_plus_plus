/*
 * trip.cpp
 *
 *  
 *      Author: Santosh
 */

#include "trip.h"
#include <iostream>
#include <string>

Trip ::Trip() : orgCity("DUMMY"), desCity("DUMMY"), distance(0.00) {}
Trip ::Trip(std ::string t_orgCity, std ::string t_desCity, double t_distance)
    : orgCity(t_orgCity), desCity(t_desCity), distance(t_distance) {}
Trip ::Trip(const Trip &ref)
    : orgCity(ref.orgCity), desCity(ref.desCity), distance(ref.distance) {}

std ::string Trip ::getOrgCity() { return orgCity; }
std ::string Trip ::getDesCity() { return desCity; }
double Trip ::getDistance() { return distance; }
