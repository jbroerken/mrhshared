MRH_EVENT_NOTIFICATION_GET_NEXT_U
=================================
MRH_EVENT_NOTIFICATION_GET_NEXT_U is used recieve next notification of all user 
applications and services which is ready to be recieved.

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
:doc:`MRH_EVENT_NOTIFICATION_GET_NEXT_S`.

Remarks
-------
* The notification recieved is removed from the notification service.