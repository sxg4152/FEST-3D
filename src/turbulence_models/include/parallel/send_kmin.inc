! include in paralle module, send_recv_i subroutine

      select case (turbulence)

          case ("none")
              !include nothing
              continue

          case ("sst")
              include "turbulence_models/sst/parallel/send_kmin.inc"

          case DEFAULT
              call dmsg(5, "turbulence_models/include/parallel", "send_kmin", &
                        "ERROR: Turbulence model not recognised")
              STOP

      end select