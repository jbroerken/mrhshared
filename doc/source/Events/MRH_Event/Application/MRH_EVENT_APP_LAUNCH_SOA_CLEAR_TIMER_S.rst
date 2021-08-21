MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_S
======================================
MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_S is sent to confirm a timed application 
launches clear request for the currently running application.

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
:doc:`MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_U`.

Response Event
--------------
None.

Remarks
-------
* This event is always returned as a confirmation that the requested timed 
  launches should be cleared, even if a timed launch is currently in progress.