# cheep-sync
CCheepSync: A Time Synchronization Service for Resource Constrained Bluetooth LE Advertisers
--------------------------------------------------------------------------------------------

Bluetooth Low Enegy (BLE) is a subset of the Bluetooth v4:0 stack, and is designed for low-power applications interested in knowing the state of the physical world.
BLE has inherited several technical features from Classic Bluetooth that provide for robust, reliable connections. However, the most significant difference is its asymmetric design. While the standard
mode of operation is typically based on a master device connected to a number of slave devices, it offers a new feature in the form of an ‘advertisement’ (configurable through the broadcast/peripheral mode of BLE).
BLE provides a range of broadcast advertising modes, of which the most energy efficient is the non-connectable undirected advertising mode (ADV_NONCONN_IND): a transmit-only, broadcaster mode without any listen window.

CheepSync is an open source time synchronization service for BLE advertisers in ADV_NONCONN_IND mode.
Designed on top of the existing Bluetooth v4.0 standard, the CheepSync framework utilizes low-leveltimestamping and comprehensive error compensation mechanisms
for overcoming uncertainties in message transmission, clock drift and other system specific constraints. 

The current implementation of CheepSync is on custom designed nRF24Cheep beacon platforms (as broadcasters) and commercial off-the-shelf Android ported
smartphones (as passive listeners).
