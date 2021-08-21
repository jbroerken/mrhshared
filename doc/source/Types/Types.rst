****************
Type Definitions
****************
mrhshared includes custom types with explicit sizes. These types are also used 
by the MRH platform components.

Header
------
The definition of the various data types can be found in the following file:

.. code-block:: c

  #include <MRH_Typedefs.h>


Types
-----
**Unsigned Integer**

.. list-table::
    :header-rows: 1

    * - Type Name
      - Size (Bytes)
      - Range
    * - MRH_Uint8
      - 1
      - 0 to 255
    * - MRH_Uint16
      - 2
      - 0 to 65535
    * - MRH_Uint32
      - 4
      - 0 to 4294967295
    * - MRH_Uint64
      - 8
      - 0 to 18446744073709551615


**Signed Integer**

.. list-table::
    :header-rows: 1

    * - Type Name
      - Size (Bytes)
      - Range
    * - MRH_Sint8
      - 1
      - -128 to 127
    * - MRH_Sint16
      - 2
      - -32768 to 32767
    * - MRH_Sint32
      - 4
      - -2147483648 to 2147483647
    * - MRH_Sint64
      - 8
      - -9223372036854775808 to 9223372036854775807


**Signed Float**

.. list-table::
    :header-rows: 1

    * - Type Name
      - Size (Bytes)
      - Range
    * - MRH_Sfloat32
      - 4
      - -3.4E+38 to 3.4E+38
    * - MRH_Sfloat64
      - 8
      - -1.7E+308 to 1.7E+308