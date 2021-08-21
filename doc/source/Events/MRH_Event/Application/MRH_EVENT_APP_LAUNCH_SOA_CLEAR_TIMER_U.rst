MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_U
=======================================
MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_U is to clear all currently waiting timed 
application launches set by the running application.

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
:doc:`MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_S`.

Remarks
-------
* This event only stops requested launches if the requested timed launches are 
  not already being performed.