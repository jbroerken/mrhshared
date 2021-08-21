MRH_EVENT_LISTEN_AVAIL_U
========================
MRH_EVENT_LISTEN_AVAIL_U is used to request the availablility state of all 
listen services.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
Listen platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_LISTEN_AVAIL_S`.

Remarks
-------
* Not recieving a response indicates that no listen services exist.