MRH_EVENT_APP_GET_DEFAULT_PACKAGE_U
===================================
MRH_EVENT_APP_GET_DEFAULT_PACKAGE_U is used to request the full package path 
for a default application type.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - The default application type to request the full package path for.


Sender
------
User applications.

Reciever
--------
Application platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_APP_GET_DEFAULT_PACKAGE_S`.

Remarks
-------
* The application type identifier depends on the identification used by the 
  application service.