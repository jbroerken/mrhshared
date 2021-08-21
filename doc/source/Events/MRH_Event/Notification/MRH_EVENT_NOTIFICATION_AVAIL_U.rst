MRH_EVENT_NOTIFICATION_AVAIL_U
==============================
MRH_EVENT_NOTIFICATION_AVAIL_U is used to request the availablility state of 
all notification services.

Data Buffer
-----------
This event has no data.

Sender
------
User applications.

Reciever
--------
Notification platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_NOTIFICATION_AVAIL_S`.

Remarks
-------
* Not recieving a response indicates that no notification services exist.