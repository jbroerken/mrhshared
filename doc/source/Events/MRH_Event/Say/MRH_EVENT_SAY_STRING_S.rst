MRH_EVENT_SAY_STRING_S
======================
MRH_EVENT_SAY_STRING_S contains information about the last performed 
output string.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Size (Bytes)
      - Description
    * - 0
      - MRH_Uint32 (4)
      - The ID of the output string performed.


Sender
------
Say platform services.

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
* This event will only be returned for finished strings which were 
  successfully completed as output.