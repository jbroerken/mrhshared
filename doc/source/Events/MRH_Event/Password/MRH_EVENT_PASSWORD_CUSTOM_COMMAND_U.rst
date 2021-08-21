MRH_EVENT_PASSWORD_CUSTOM_COMMAND_U
===================================
MRH_EVENT_PASSWORD_CUSTOM_COMMAND_U is used to send custom commands to password 
services which support custom commands.

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
Password platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_PASSWORD_CUSTOM_COMMAND_S`.

Remarks
-------
* Services which do not support custom commands should respond with 
  :doc:`../System/MRH_EVENT_NOT_IMPLEMENTED_S`.