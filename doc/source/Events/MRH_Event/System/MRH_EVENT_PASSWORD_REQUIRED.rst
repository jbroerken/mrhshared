MRH_EVENT_PASSWORD_REQUIRED
===========================
MRH_EVENT_PASSWORD_REQUIRED is used to signal a required password verification 
to enable using a event.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint32 (4)
      - The event type id of the event which permissions are missing for.
      

Sender
------
mrhcore.

Reciever
--------
User applications.

Request Event
-------------
None.

Response Event
--------------
None.

Remarks
-------
None.