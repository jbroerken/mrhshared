MRH_EVENT_NOTIFICATION_DESTROY_APP_U
====================================
MRH_EVENT_NOTIFICATION_DESTROY_APP_U is used to request the destruction of a 
notification of the currently running user application.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint32 (4)
      - The key of the notification to destroy.


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
* The given notification key is bound to the application creating the 
  notification. Notifications of other applications with the same key will 
  not be destroyed.