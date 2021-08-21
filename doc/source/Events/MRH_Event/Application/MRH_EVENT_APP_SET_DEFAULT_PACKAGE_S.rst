MRH_EVENT_APP_SET_DEFAULT_PACKAGE_S
===================================
MRH_EVENT_APP_SET_DEFAULT_PACKAGE_S contains a full package path update result
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
      - 0 if the package path update was successfull, 1 if not.
    * - 1
      - MRH_Uint8 (1)
      - The default application type which was updated.


Sender
------
Application platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_APP_SET_DEFAULT_PACKAGE_U`.

Response Event
--------------
None.

Remarks
-------
* The application type identifier depends on the identification used by the 
  application service.