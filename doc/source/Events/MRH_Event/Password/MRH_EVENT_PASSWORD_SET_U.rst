MRH_EVENT_PASSWORD_SET_U
========================
MRH_EVENT_PASSWORD_SET_U is used to update the user password. 

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - char (Variable)
      - The UTF-8 password string to update with.

Sender
------
User applications.

Reciever
--------
Password platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_PASSWORD_SET_S`.

Remarks
-------
* Password strings are required to be in plain text ASCII (char) format. 
* The string is required to be null terminated unless the length of the string 
  is equal to :doc:`../../../Macros/MRH_Event/MRH_EVENT_DATA_SIZE_MAX`.