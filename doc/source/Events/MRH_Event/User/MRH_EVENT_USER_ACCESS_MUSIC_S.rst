MRH_EVENT_USER_ACCESS_MUSIC_S
=============================
MRH_EVENT_USER_ACCESS_MUSIC_S contains the result of a user music content access 
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
      - 0 if the content access was granted, 1 if not.


Sender
------
User platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_USER_ACCESS_MUSIC_U`.

Response Event
--------------
None.

Remarks
-------
* Access to the user content is granted the moment the user platform service 
  handles the event.