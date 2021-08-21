MRH_EVENT_PASSWORD_AVAIL_U
==========================
MRH_EVENT_PASSWORD_AVAIL_U is used to request the availablility state of all 
password services.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
Password platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_PASSWORD_AVAIL_S`.

Remarks
-------
* Not recieving a response indicates that no password services exist.