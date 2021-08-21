MRH_EVENT_SAY_GET_METHOD_S
==========================
MRH_EVENT_SAY_GET_METHOD_S contains the current say output method.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the request succeeded, 1 if not.
    * - 1
      - MRH_Uint8 (1)
      - The current output method.


Sender
------
Say platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_SAY_GET_METHOD_U`.

Response Event
--------------
None.

Remarks
-------
* The returned say output identifier depends on the identification used by the
  say service.