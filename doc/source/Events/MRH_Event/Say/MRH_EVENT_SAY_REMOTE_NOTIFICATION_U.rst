MRH_EVENT_SAY_REMOTE_NOTIFICATION_U
===================================
MRH_EVENT_SAY_REMOTE_NOTIFICATION_U is used to send a notification to a
user communication device.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - The type of notification to send.
      

Sender
------
User applications.

Reciever
--------
Say platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_SAY_REMOTE_NOTIFICATION_S`.

Remarks
-------
* The available notification types might differ depending 
  on the used say service.