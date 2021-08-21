MRH_EVENT_APP_LAUNCH_SOA_CLEAR_U
================================
MRH_EVENT_APP_LAUNCH_SOA_CLEAR_U is to clear a currently requested application 
launch request.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
Application platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_APP_LAUNCH_SOA_CLEAR_S`.

Remarks
-------
* This event only stops requested launches if the requested launch is not
  already being performed.