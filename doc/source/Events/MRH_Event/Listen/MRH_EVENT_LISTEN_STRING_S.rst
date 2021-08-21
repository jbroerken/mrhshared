MRH_EVENT_LISTEN_STRING_S
=========================
MRH_EVENT_LISTEN_STRING_S contains either a full or part of an input string 
given by the user.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - The type of string contained.
    * - 1
      - MRH_Uint32 (4)
      - The ID of the input string this string belongs to.
    * - 5
      - MRH_Uint32 (4)
      - The part in regards to the string order this string belongs to.
    * - 9
      - char (Variable)
      - The UTF-8 string bytes.


Sender
------
Listen platform services.

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
* The wide strings recieved by this event are null terminated unless the length 
  of the string in addition to the string part info data is equal to 
  :doc:`../../../Macros/MRH_Event/MRH_EVENT_DATA_SIZE_MAX`.