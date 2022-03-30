MRH_EVENT_SAY_NOTIFICATION_APP_S
================================
MRH_EVENT_SAY_NOTIFICATION_APP_S contains the result of a application 
notification event.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the notification was sent, 1 if not.


Sender
------
Say platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_SAY_NOTIFICATION_APP_U`.

Response Event
--------------
None.

Remarks
-------
None.