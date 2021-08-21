MRH_EVENT_NOT_IMPLEMENTED_S
===========================
MRH_EVENT_NOT_IMPLEMENTED_S is used to signal that a platform service does not
support the event it recieved.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint32 (4)
      - The event type id of the event which is not implemented.
      

Sender
------
All platform services.

Reciever
--------
User applications.

Request Event
-------------
Any event not implemented.

Response Event
--------------
None.

Remarks
-------
None.