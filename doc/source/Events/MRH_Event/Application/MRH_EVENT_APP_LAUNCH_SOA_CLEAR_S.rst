MRH_EVENT_APP_LAUNCH_SOA_CLEAR_S
================================
MRH_EVENT_APP_LAUNCH_SOA_CLEAR_S is sent to confirm a application launch 
clear request.

Data Buffer
-----------
This event has no data.

Sender
------
Application platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_APP_LAUNCH_SOA_CLEAR_U`.

Response Event
--------------
None.

Remarks
-------
* This event is always returned as a confirmation that the requested launch
  should be cleared, even if the launch is currently in progress.