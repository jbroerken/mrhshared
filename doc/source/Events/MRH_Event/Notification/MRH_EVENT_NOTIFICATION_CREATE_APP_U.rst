MRH_EVENT_NOTIFICATION_CREATE_APP_U
===================================
MRH_EVENT_NOTIFICATION_CREATE_APP_U is used to create a notification from a 
user application.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint64 (8)
      - The notification trigger time point.
    * - 8
      - char (Variable)
      - The UTF-8 notification message string.


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
:doc:`MRH_EVENT_NOTIFICATION_CREATE_APP_S`.

Remarks
-------
None.