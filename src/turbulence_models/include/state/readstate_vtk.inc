!should be included in state state, in subroutine with same name.

      select case (turbulence)

          case ("none")
              !include nothing
              continue
          
          case ("sst")
              include "turbulence_models/sst/state/readstate_vtk.inc"

          case DEFAULT
              call dmsg(5, "turbulence_models/include/state", "readstate_vtk", &
                        "ERROR: Turbulence model not recognised")
              STOP

      end select