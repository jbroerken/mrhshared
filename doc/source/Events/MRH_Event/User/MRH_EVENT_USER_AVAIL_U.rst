MRH_EVENT_USER_AVAIL_U
======================
MRH_EVENT_USER_AVAIL_U is used to request the availablility state of all user 
services.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
User platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_USER_AVAIL_S`.

Remarks
-------
* Not recieving a response indicates that no user services exist.