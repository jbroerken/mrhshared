MRH_EVENT_USER_ACCESS_CLEAR_S
=============================
MRH_EVENT_USER_ACCESS_CLEAR_S contains the result of a user content access
clear request.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if all content access was cleared, 1 if not.


Sender
------
User platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_USER_ACCESS_CLEAR_U`.

Response Event
--------------
None.

Remarks
-------
* The access to user content is cleared the moment the user platform service 
  handles the event. Some content access might still be removed even if the 
  event result indicates failure.