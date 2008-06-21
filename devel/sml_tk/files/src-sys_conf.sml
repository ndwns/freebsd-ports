(* ***************************************************************************
 
   $Source$

   System configuration.  
   
   The environment variables controlling the configuration of sml_tk,
   and more importantly, their default values. 

   These values can, and are meant to be changed (in particular the
   default values).

   $Date$
   $Revision$
   Author: cxl/stefan (Last modification by $Author$)

   (C) 1996, Bremen Institute for Safe Systems (BISS), University of Bremen. 

  ************************************************************************** *)


signature SYS_CONF =
sig
    type envVar = {name: string, default: string}

    val logfileVar : envVar
    val libVar     : envVar
    val wishVar    : envVar
end;


structure SysConf : SYS_CONF =
struct
    type envVar = {name: string, default: string}

    (* Probably the most important setting: the correct path to the
     * wish at your site *) 
    val wishVar = {name= "SMLTK_TCL",
		   default= "%%WISH%%"}

    (* This default value for SMLTK_LIB assumes the curent directory
     * is the sml_tk source directory. You may want to replace this
     * with the actual path at your installation. *)
    val libVar  = {name= "SMLTK_LIB",
		   default= "%%SMLTKLIB%%"}
	

    (* the logfile doesn't need a default; if it is not set, 
     * the logging is turned off
     *)
    val logfileVar   = {name= "SMLTK_LOGFILE",
			default= ""}

end
