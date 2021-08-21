MRH_EVENT_NOTIFICATION_DESTROY_APP_S
====================================
MRH_EVENT_NOTIFICATION_DESTROY_APP_S contains the result of a destroy app 
notification request.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the notification was destroyed, 1 if not.
    * - 1
      - MRH_Uint32 (4)
      - The key of the destroyed notification.


Sender
------
Notification platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_NOTIFICATION_DESTROY_APP_U`.

Response Event
--------------
None.

Remarks
-------
* The returned notification key is bound to the application creating the 
  notification.