MRH_EVENT_SAY_AVAIL_U
=====================
MRH_EVENT_SAY_AVAIL_U is used to request the availablility state of all say 
services.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
Say platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_SAY_AVAIL_S`.

Remarks
-------
* Not recieving a response indicates that no say services exist.