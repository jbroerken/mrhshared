MRH_EVENT_SAY_REMOTE_NOTIFICATION_S
===================================
MRH_EVENT_SAY_REMOTE_NOTIFICATION_S contains the result for sending 
a remote notification to a user device.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the request succeeded, 1 if not.


Sender
------
Say platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_SAY_REMOTE_NOTIFICATION_U`.

Response Event
--------------
None.

Remarks
-------
None.