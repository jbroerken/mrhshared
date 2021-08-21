MRH_EVENT_LISTEN_AVAIL_S
========================
MRH_EVENT_LISTEN_AVAIL_S contains the availability state of the listen service 
sending the event.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the service is available to use, 1 if not.
    * - 1
      - MRH_Uint32 (4)
      - The service supplier ID.
    * - 5
      - MRH_Uint32 (4)
      - The service binary ID.
    * - 9
      - MRH_Uint32 (4)
      - The service version.


Sender
------
Listen platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_LISTEN_AVAIL_U`.

Response Event
--------------
None.

Remarks
-------
None.