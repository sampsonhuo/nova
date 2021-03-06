.. -*- rst -*-
.. needs:example_verification
.. needs:body_verification

==============================
 Hypervisors (os-hypervisors)
==============================

Lists all hypervisors, shows summary statistics for all hypervisors over
all compute nodes, shows details for a hypervisor, and shows the uptime
for a hypervisor.

List Hypervisors
================

.. rest_method:: GET /os-hypervisors

Lists hypervisors.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403)

Request
-------

.. rest_parameters:: parameters.yaml

  - limit: hypervisor_limit
  - marker: hypervisor_marker

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisors: hypervisors
  - hypervisor_hostname: hypervisor_hostname
  - id: hypervisor_id_body
  - state: hypervisor_state
  - status: hypervisor_status

**Example List Hypervisors: JSON response**

.. literalinclude:: ../../doc/api_samples/os-hypervisors/hypervisors-list-resp.json
   :language: javascript

List Hypervisors Details
========================

.. rest_method:: GET /os-hypervisors/detail

Lists hypervisors details.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403)

Request
-------

.. rest_parameters:: parameters.yaml

  - limit: hypervisor_limit
  - marker: hypervisor_marker

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisors: hypervisors
  - cpu_info: cpu_info
  - current_workload: current_workload
  - status: hypervisor_status
  - state: hypervisor_state
  - disk_available_least: disk_available_least
  - host_ip: host_ip
  - free_disk_gb: hypervisor_free_disk_gb
  - free_ram_mb: free_ram_mb
  - hypervisor_hostname: hypervisor_hostname
  - hypervisor_type: hypervisor_type_body
  - hypervisor_version: hypervisor_version
  - id: hypervisor_id_body
  - local_gb: local_gb
  - local_gb_used: local_gb_used
  - memory_mb: memory_mb
  - memory_mb_used: memory_mb_used
  - running_vms: running_vms
  - service: hypervisor_service
  - service.host: host_name_body
  - service.id: service_id_body
  - service.disable_reason: service_disable_reason
  - vcpus: hypervisor_vcpus
  - vcpus_used: hypervisor_vcpus_used

**Example List Hypervisors Details: JSON response**

.. note::

   This API sample is actual since microversion v2.28

.. literalinclude:: ../../doc/api_samples/os-hypervisors/v2.28/hypervisors-detail-resp.json
   :language: javascript

Show Hypervisor Statistics
==========================

.. rest_method:: GET /os-hypervisors/statistics

Shows summary statistics for all hypervisors over all compute nodes.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403)

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisor_statistics: hypervisor_statistics
  - count: hypervisor_count
  - current_workload: current_workload
  - disk_available_least: disk_available_least
  - free_disk_gb: hypervisor_free_disk_gb
  - free_ram_mb: free_ram_mb
  - local_gb: local_gb
  - local_gb_used: local_gb_used
  - memory_mb: memory_mb
  - memory_mb_used: memory_mb_used
  - running_vms: running_vms_total
  - vcpus: hypervisor_vcpus
  - vcpus_used: hypervisor_vcpus_used

**Example Show Hypervisor Statistics: JSON response**

.. literalinclude:: ../../doc/api_samples/os-hypervisors/hypervisors-statistics-resp.json
   :language: javascript

Show Hypervisor Details
=======================

.. rest_method:: GET /os-hypervisors/{hypervisor_id}

Shows details for a hypervisor.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - hypervisor_id: hypervisor_id

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisor: hypervisor
  - cpu_info: cpu_info
  - state: hypervisor_state
  - status: hypervisor_status
  - current_workload: current_workload
  - disk_available_least: disk_available_least
  - host_ip: host_ip
  - free_disk_gb: hypervisor_free_disk_gb
  - free_ram_mb: free_ram_mb
  - hypervisor_hostname: hypervisor_hostname
  - hypervisor_type: hypervisor_type_body
  - hypervisor_version: hypervisor_version
  - id: hypervisor_id_body
  - local_gb: local_gb
  - local_gb_used: local_gb_used
  - memory_mb: memory_mb
  - memory_mb_used: memory_mb_used
  - running_vms: running_vms
  - service: hypervisor_service
  - service.host: host_name_body
  - service.id: service_id_body
  - service.disable_reason: service_disable_reason
  - vcpus: hypervisor_vcpus
  - vcpus_used: hypervisor_vcpus_used

**Example Show Hypervisor Details: JSON response**

.. note::

   This API sample is actual since microversion v2.28

.. literalinclude:: ../../doc/api_samples/os-hypervisors/v2.28/hypervisors-show-resp.json
   :language: javascript

Show Hypervisor Uptime
======================

.. rest_method:: GET /os-hypervisors/{hypervisor_id}/uptime

Shows the uptime for a hypervisor.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404), NotImplemented(501)

Request
-------

.. rest_parameters:: parameters.yaml

  - hypervisor_id: hypervisor_id

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisor: hypervisor
  - hypervisor_hostname: hypervisor_hostname
  - id: hypervisor_id_body
  - state: hypervisor_state
  - status: hypervisor_status
  - uptime: uptime

**Example Show Hypervisor Uptime: JSON response**

.. literalinclude:: ../../doc/api_samples/os-hypervisors/hypervisors-uptime-resp.json
   :language: javascript

Search Hypervisor
=================

.. rest_method:: GET /os-hypervisors/{hypervisor_id}/search

Search hypervisor by given hypervisor id.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response code: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - hypervisor_id: hypervisor_id

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisors: hypervisors
  - hypervisor_hostname: hypervisor_hostname
  - id: hypervisor_id_body
  - state: hypervisor_state
  - status: hypervisor_status

**Example Search Hypervisor: JSON response**

.. literalinclude:: ../../doc/api_samples/os-hypervisors/hypervisors-search-resp.json
   :language: javascript

List Hypervisor Servers
=======================

.. rest_method:: GET /os-hypervisors/{hypervisor_id}/servers

List all servers belong to given hypervisor.

Policy defaults enable only users with the administrative role to perform
this operation. Cloud providers can change these permissions through
the ``policy.json`` file.

Normal response code: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - hypervisor_id: hypervisor_id

Response
--------

.. rest_parameters:: parameters.yaml

  - hypervisors: hypervisors
  - hypervisor_hostname: hypervisor_hostname
  - id: hypervisor_id_body
  - state: hypervisor_state
  - status: hypervisor_status
  - servers: servers
  - servers.uuid: server_uuid
  - servers.name: server_name

**Example List Hypervisor Servers: JSON response**

.. literalinclude:: ../../doc/api_samples/os-hypervisors/hypervisors-with-servers-resp.json
   :language: javascript
