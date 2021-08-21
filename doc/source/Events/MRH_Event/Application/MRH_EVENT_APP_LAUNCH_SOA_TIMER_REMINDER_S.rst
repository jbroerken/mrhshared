MRH_EVENT_APP_LAUNCH_SOA_TIMER_REMINDER_S
=========================================
MRH_EVENT_APP_LAUNCH_SOA_TIMER_REMINDER_S is sent to inform a currently running 
application that a requested timed launch is imminent.

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
:doc:`MRH_EVENT_APP_LAUNCH_SOA_TIMER_U`.

Response Event
--------------
None.

Remarks
-------
* This event is sent at the time when the application should be launched.