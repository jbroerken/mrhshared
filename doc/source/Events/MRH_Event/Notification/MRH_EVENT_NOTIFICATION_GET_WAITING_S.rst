MRH_EVENT_NOTIFICATION_GET_WAITING_S
====================================
MRH_EVENT_NOTIFICATION_GET_WAITING_S contains the result of a check for a 
waiting notification from any user application or service.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if a notification is available, 1 if not.


Sender
------
Notification platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_NOTIFICATION_GET_WAITING_U`.

Response Event
--------------
None.

Remarks
-------
None.