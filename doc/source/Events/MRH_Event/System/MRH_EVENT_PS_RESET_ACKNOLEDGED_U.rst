MRH_EVENT_PS_RESET_ACKNOLEDGED_U
================================
MRH_EVENT_PS_RESET_ACKNOLEDGED_U is used to signal that a reset request from 
a newly started user application has been recieved.

Data Buffer
-----------
This event has no data.

Sender
------
mrhcore.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_PS_RESET_REQUEST_U`.

Response Event
--------------
None.

Remarks
-------
* This event is recieved by the application parent before the user application
  starts.