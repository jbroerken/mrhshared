MRH_EVENT_NOTIFICATION_CREATE_APP_S
===================================
MRH_EVENT_NOTIFICATION_CREATE_APP_S is used to respond to a create notification 
request.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the notification was created successfully, 1 if not.
    * - 1
      - MRH_Uint32 (4)
      - The key for the newly created notification.


Sender
------
Notification platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_NOTIFICATION_CREATE_APP_U`.

Response Event
--------------
None.

Remarks
-------
* The returned notification key is bound to the application creating the 
  notification.