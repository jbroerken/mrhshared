MRH_EVENT_PASSWORD_CHECK_S
==========================
MRH_EVENT_PASSWORD_CHECK_S contains the result of a password verification 
request.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the password matches, 1 if not.


Sender
------
Password platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_PASSWORD_CHECK_U`.

Response Event
--------------
None.

Remarks
-------
None.