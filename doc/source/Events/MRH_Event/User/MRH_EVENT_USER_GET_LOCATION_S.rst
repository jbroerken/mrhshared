MRH_EVENT_USER_GET_LOCATION_S
=============================
MRH_EVENT_USER_GET_LOCATION_S contains the location data for the user.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if location data is available, 1 if not.
    * - 1
      - MRH_Sfloat64 (8)
      - The users latitude coordinate.
    * - 9
      - MRH_Sfloat64 (8)
      - The users longtitude coordinate.
    * - 17
      - MRH_Sfloat64 (8)
      - The users elevation coordinate.
    * - 25
      - MRH_Sfloat64 (8)
      - The users facing direction.


Sender
------
User platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_USER_GET_LOCATION_U`.

Response Event
--------------
None.

Remarks
-------
None.