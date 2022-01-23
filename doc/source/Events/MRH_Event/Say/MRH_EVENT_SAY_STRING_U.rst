MRH_EVENT_SAY_STRING_U
======================
MRH_EVENT_SAY_STRING_U contains either a full or part of an output string to be
recieved by the user.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Size (Bytes)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - The type of string contained.
    * - 1
      - MRH_Uint32 (4)
      - The ID of the output string this string belongs to.
    * - 5
      - MRH_Uint32 (4)
      - The part in regards to the string order this string belongs to.
    * - 9
      - char (Variable)
      - The UTF-8 string bytes.


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
None.

Remarks
-------
* String characters are expected to be in UTF-8 format.
* The string is required to be null terminated unless the length of the 
  string in addition to the string part info data is equal to 
  :doc:`../../../Macros/MRH_Event/MRH_EVENT_DATA_SIZE_MAX`.