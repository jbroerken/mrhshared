MRH_EVENT_CUSTOM_CUSTOM_COMMAND_U
=================================
MRH_EVENT_CUSTOM_CUSTOM_COMMAND_U is used to send custom commands to custom 
services.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - Variable (Variable)
      - The custom command event data.


Sender
------
User applications.

Reciever
--------
Custom platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_CUSTOM_CUSTOM_COMMAND_S`.

Remarks
-------
None.