MRH_EVENT_CUSTOM_AVAIL_U
========================
MRH_EVENT_CUSTOM_AVAIL_U is used to request the availablility state of all 
custom services.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
Custom platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_CUSTOM_AVAIL_S`.

Remarks
-------
* Not recieving a response indicates that no custom services exist.