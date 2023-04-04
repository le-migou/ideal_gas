isto::ideal_gas
===========

A C++20 headers-only library


Requirements
------------

To run the tests:

- `GNU Make <https://www.gnu.org/software/make/>`_.
- The `onqtam/doctest library <https://github.com/onqtam/doctest>`_.


Installation
------------

This is a headers-only library. Just put it where your compiler can find it.


Tests
-----

The tests require the `onqtam/doctest library`_.
Edit the ``config.mk`` file to make the ``DOCTEST_HEADERS`` variable point to 
the directory containing ``doctest/doctest.h``. 

To execute the tests run

    $ make check

in the root directory of the project.


License
-------

SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception


Affiliation
-----------

This material is developed by the Scientific Computations and Modelling
platform at the Institut des Sciences de la Terre d'Orléans
(https://www.isto-orleans.fr/), a joint laboratory of the University of Orléans
(https://www.univ-orleans.fr/), the french National Center For Scientific
Research (https://www.cnrs.fr/) and the french Geological Survey
(https://www.brgm.eu/).

+-------------+-----------+-------------+-------------+
| |logo_isto| | |logo_uo| | |logo_cnrs| | |logo_brgm| |
+-------------+-----------+-------------+-------------+

.. |logo_isto| image:: https://calcul-isto.cnrs-orleans.fr/logos/isto-156.png
   :width: 156px
   :target: https://www.isto-orleans.fr/
   :align: middle
.. |logo_uo| image:: https://calcul-isto.cnrs-orleans.fr/logos/uo-180.png
   :width: 180px
   :target: https://www.univ-orleans.fr/
   :align: middle
.. |logo_cnrs| image:: https://calcul-isto.cnrs-orleans.fr/logos/cnrs-128.png
   :width: 128px
   :target: https://www.cnrs.fr/
   :align: middle
.. |logo_brgm| image:: https://calcul-isto.cnrs-orleans.fr/logos/brgm-256.png
   :width: 256px
   :target: https://www.brgm.fr/
   :align: middle
