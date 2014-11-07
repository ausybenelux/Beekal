Beekal
======


Beekal is a set of Drupal modules which facilitate working with iBeacons. Out of the box, they let you quickly set up a Drupal backend for managing iBeacon content which can be consumed by your IOS application. Beekal can also be plugged into any existing Drupal 7 site to serve data, even fully rendered HTML pages, from any source node(s).

## How it works
Beacons in Drupal are represented by nodes, with fields and validation rules describing the current generation of BLE iBeacons (Proximity UUID, Major & Minor version, …). An entity reference field lets you hook up a data source node to the beacon.

Included are 2 other modules to help you get started:
### Beacon data
Provides an example of a content type with some basic fields and a View which outputs a JSON feed that can be picked up by an IOS application. An "active time range" field allows you to serve different content depending on what time a user triggers the beacon (a "good morning" vs a "good evening" message at a building entrance).

Developers wishing to integrate Beekal with custom content types can use this module as a guide on how to get everything set up on the Drupal side of things.

### Battery status update
This module sets up a REST server to push data back to the CMS.