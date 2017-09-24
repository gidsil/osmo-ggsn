/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>		/* for FILE */

#ifdef __cplusplus
extern "C" {
#endif				/* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#ifdef PACKAGE_NAME
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE_NAME
#else
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE
#endif
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
	struct gengetopt_args_info {
		const char *help_help;
			 /**< @brief Print help and exit help description.  */
		const char *version_help;
			    /**< @brief Print version and exit help description.  */
		int debug_flag;
			/**< @brief Run in debug mode (default=off).  */
		const char *debug_help;
			  /**< @brief Run in debug mode help description.  */
		char *conf_arg;
			/**< @brief Read configuration file.  */
		char *conf_orig;
			/**< @brief Read configuration file original value given at command line.  */
		const char *conf_help;
			 /**< @brief Read configuration file help description.  */
		char *pidfile_arg;
			/**< @brief Filename of process id file (default='./sgsnemu.pid').  */
		char *pidfile_orig;
			/**< @brief Filename of process id file original value given at command line.  */
		const char *pidfile_help;
			    /**< @brief Filename of process id file help description.  */
		char *statedir_arg;
			/**< @brief Directory of nonvolatile data (default='./').  */
		char *statedir_orig;
			/**< @brief Directory of nonvolatile data original value given at command line.  */
		const char *statedir_help;
			     /**< @brief Directory of nonvolatile data help description.  */
		char *dns_arg;
			/**< @brief DNS Server to use.  */
		char *dns_orig;
			/**< @brief DNS Server to use original value given at command line.  */
		const char *dns_help;
			/**< @brief DNS Server to use help description.  */
		char *listen_arg;
			/**< @brief Local interface.  */
		char *listen_orig;
			/**< @brief Local interface original value given at command line.  */
		const char *listen_help;
			   /**< @brief Local interface help description.  */
		char *remote_arg;
			/**< @brief Remote host.  */
		char *remote_orig;
			/**< @brief Remote host original value given at command line.  */
		const char *remote_help;
			   /**< @brief Remote host help description.  */
		int contexts_arg;
			/**< @brief Number of contexts (default='1').  */
		char *contexts_orig;
			/**< @brief Number of contexts original value given at command line.  */
		const char *contexts_help;
			     /**< @brief Number of contexts help description.  */
		int timelimit_arg;
			/**< @brief Exit after timelimit seconds (default='0').  */
		char *timelimit_orig;
				/**< @brief Exit after timelimit seconds original value given at command line.  */
		const char *timelimit_help;
			      /**< @brief Exit after timelimit seconds help description.  */
		int gtpversion_arg;
			/**< @brief GTP version to use (default='1').  */
		char *gtpversion_orig;
				/**< @brief GTP version to use original value given at command line.  */
		const char *gtpversion_help;
			       /**< @brief GTP version to use help description.  */
		char *apn_arg;
			/**< @brief Access point name (default='internet').  */
		char *apn_orig;
			/**< @brief Access point name original value given at command line.  */
		const char *apn_help;
			/**< @brief Access point name help description.  */
		int selmode_arg;
			/**< @brief Selection mode (default='0x01').  */
		char *selmode_orig;
			/**< @brief Selection mode original value given at command line.  */
		const char *selmode_help;
			    /**< @brief Selection mode help description.  */
		int rattype_arg;
			/**< @brief Radio Access Technology Type (default='1').  */
		char *rattype_orig;
			/**< @brief Radio Access Technology Type original value given at command line.  */
		const char *rattype_help;
			    /**< @brief Radio Access Technology Type help description.  */
		char *userloc_arg;
			/**< @brief User Location Information (default='02509946241207').  */
		char *userloc_orig;
			/**< @brief User Location Information original value given at command line.  */
		const char *userloc_help;
			    /**< @brief User Location Information help description.  */
		char *rai_arg;
			/**< @brief Routing Area Information (default='02509946241207').  */
		char *rai_orig;
			/**< @brief Routing Area Information original value given at command line.  */
		const char *rai_help;
			/**< @brief Routing Area Information help description.  */
		char *mstz_arg;
			/**< @brief MS Time Zone (default='0').  */
		char *mstz_orig;
			/**< @brief MS Time Zone original value given at command line.  */
		const char *mstz_help;
			 /**< @brief MS Time Zone help description.  */
		char *imeisv_arg;
			/**< @brief IMEI(SV) International Mobile Equipment Identity (and Software Version) (default='2143658709214365').  */
		char *imeisv_orig;
			/**< @brief IMEI(SV) International Mobile Equipment Identity (and Software Version) original value given at command line.  */
		const char *imeisv_help;
			   /**< @brief IMEI(SV) International Mobile Equipment Identity (and Software Version) help description.  */
		int norecovery_flag;
			/**< @brief Do not send recovery (default=off).  */
		const char *norecovery_help;
			       /**< @brief Do not send recovery help description.  */
		char *imsi_arg;
			/**< @brief IMSI (default='240010123456789').  */
		char *imsi_orig;
			/**< @brief IMSI original value given at command line.  */
		const char *imsi_help;
			 /**< @brief IMSI help description.  */
		int nsapi_arg;
			/**< @brief NSAPI (default='0').  */
		char *nsapi_orig;
			/**< @brief NSAPI original value given at command line.  */
		const char *nsapi_help;
			  /**< @brief NSAPI help description.  */
		char *msisdn_arg;
			/**< @brief Mobile Station ISDN number (default='46702123456').  */
		char *msisdn_orig;
			/**< @brief Mobile Station ISDN number original value given at command line.  */
		const char *msisdn_help;
			   /**< @brief Mobile Station ISDN number help description.  */
		int qos_arg;
		/**< @brief Requested quality of service (default='0x000b921f').  */
		char *qos_orig;
			/**< @brief Requested quality of service original value given at command line.  */
		const char *qos_help;
			/**< @brief Requested quality of service help description.  */
		unsigned long long int qose1_arg;
			/**< @brief Requested quality of service Extension 1 (default='0x9396404074f9ffff').  */
		char *qose1_orig;
			/**< @brief Requested quality of service Extension 1 original value given at command line.  */
		const char *qose1_help;
			  /**< @brief Requested quality of service Extension 1 help description.  */
		int qose2_arg;
			/**< @brief Requested quality of service Extension 2 (default='0x11').  */
		char *qose2_orig;
			/**< @brief Requested quality of service Extension 2 original value given at command line.  */
		const char *qose2_help;
			  /**< @brief Requested quality of service Extension 2 help description.  */
		int qose3_arg;
			/**< @brief Requested quality of service Extension 3 (default='0x0101').  */
		char *qose3_orig;
			/**< @brief Requested quality of service Extension 3 original value given at command line.  */
		const char *qose3_help;
			  /**< @brief Requested quality of service Extension 3 help description.  */
		int qose4_arg;
			/**< @brief Requested quality of service Extension 4 (default='0x4040').  */
		char *qose4_orig;
			/**< @brief Requested quality of service Extension 4 original value given at command line.  */
		const char *qose4_help;
			  /**< @brief Requested quality of service Extension 4 help description.  */
		int charging_arg;
			/**< @brief Charging characteristics (default='0x0800').  */
		char *charging_orig;
			/**< @brief Charging characteristics original value given at command line.  */
		const char *charging_help;
			     /**< @brief Charging characteristics help description.  */
		char *uid_arg;
			/**< @brief Login user ID (default='mig').  */
		char *uid_orig;
			/**< @brief Login user ID original value given at command line.  */
		const char *uid_help;
			/**< @brief Login user ID help description.  */
		char *pwd_arg;
			/**< @brief Login password (default='hemmelig').  */
		char *pwd_orig;
			/**< @brief Login password original value given at command line.  */
		const char *pwd_help;
			/**< @brief Login password help description.  */
		int createif_flag;
			/**< @brief Create local network interface (default=off).  */
		const char *createif_help;
			     /**< @brief Create local network interface help description.  */
		char *net_arg;
			/**< @brief Network address for local interface.  */
		char *net_orig;
			/**< @brief Network address for local interface original value given at command line.  */
		const char *net_help;
			/**< @brief Network address for local interface help description.  */
		int defaultroute_flag;
				/**< @brief Create default route (default=off).  */
		const char *defaultroute_help;
				 /**< @brief Create default route help description.  */
		char *ipup_arg;
			/**< @brief Script to run after link-up.  */
		char *ipup_orig;
			/**< @brief Script to run after link-up original value given at command line.  */
		const char *ipup_help;
			 /**< @brief Script to run after link-up help description.  */
		char *ipdown_arg;
			/**< @brief Script to run after link-down.  */
		char *ipdown_orig;
			/**< @brief Script to run after link-down original value given at command line.  */
		const char *ipdown_help;
			   /**< @brief Script to run after link-down help description.  */
		char *pinghost_arg;
			/**< @brief Ping remote host.  */
		char *pinghost_orig;
			/**< @brief Ping remote host original value given at command line.  */
		const char *pinghost_help;
			     /**< @brief Ping remote host help description.  */
		int pingrate_arg;
			/**< @brief Number of ping req per second (default='1').  */
		char *pingrate_orig;
			/**< @brief Number of ping req per second original value given at command line.  */
		const char *pingrate_help;
			     /**< @brief Number of ping req per second help description.  */
		int pingsize_arg;
			/**< @brief Number of ping data bytes (default='56').  */
		char *pingsize_orig;
			/**< @brief Number of ping data bytes original value given at command line.  */
		const char *pingsize_help;
			     /**< @brief Number of ping data bytes help description.  */
		int pingcount_arg;
			/**< @brief Number of ping req to send (default='0').  */
		char *pingcount_orig;
				/**< @brief Number of ping req to send original value given at command line.  */
		const char *pingcount_help;
			      /**< @brief Number of ping req to send help description.  */
		int pingquiet_flag;
			/**< @brief Do not print ping packet info (default=off).  */
		const char *pingquiet_help;
			      /**< @brief Do not print ping packet info help description.  */

		unsigned int help_given;
				/**< @brief Whether help was given.  */
		unsigned int version_given;
				/**< @brief Whether version was given.  */
		unsigned int debug_given;
				/**< @brief Whether debug was given.  */
		unsigned int conf_given;
				/**< @brief Whether conf was given.  */
		unsigned int pidfile_given;
				/**< @brief Whether pidfile was given.  */
		unsigned int statedir_given;
				/**< @brief Whether statedir was given.  */
		unsigned int dns_given;
				/**< @brief Whether dns was given.  */
		unsigned int listen_given;
				/**< @brief Whether listen was given.  */
		unsigned int remote_given;
				/**< @brief Whether remote was given.  */
		unsigned int contexts_given;
				/**< @brief Whether contexts was given.  */
		unsigned int timelimit_given;
					/**< @brief Whether timelimit was given.  */
		unsigned int gtpversion_given;
					/**< @brief Whether gtpversion was given.  */
		unsigned int apn_given;
				/**< @brief Whether apn was given.  */
		unsigned int selmode_given;
				/**< @brief Whether selmode was given.  */
		unsigned int rattype_given;
				/**< @brief Whether rattype was given.  */
		unsigned int userloc_given;
				/**< @brief Whether userloc was given.  */
		unsigned int rai_given;
				/**< @brief Whether rai was given.  */
		unsigned int mstz_given;
				/**< @brief Whether mstz was given.  */
		unsigned int imeisv_given;
				/**< @brief Whether imeisv was given.  */
		unsigned int norecovery_given;
					/**< @brief Whether norecovery was given.  */
		unsigned int imsi_given;
				/**< @brief Whether imsi was given.  */
		unsigned int nsapi_given;
				/**< @brief Whether nsapi was given.  */
		unsigned int msisdn_given;
				/**< @brief Whether msisdn was given.  */
		unsigned int qos_given;
				/**< @brief Whether qos was given.  */
		unsigned int qose1_given;
				/**< @brief Whether qose1 was given.  */
		unsigned int qose2_given;
				/**< @brief Whether qose2 was given.  */
		unsigned int qose3_given;
				/**< @brief Whether qose3 was given.  */
		unsigned int qose4_given;
				/**< @brief Whether qose4 was given.  */
		unsigned int charging_given;
				/**< @brief Whether charging was given.  */
		unsigned int uid_given;
				/**< @brief Whether uid was given.  */
		unsigned int pwd_given;
				/**< @brief Whether pwd was given.  */
		unsigned int createif_given;
				/**< @brief Whether createif was given.  */
		unsigned int net_given;
				/**< @brief Whether net was given.  */
		unsigned int defaultroute_given;
					/**< @brief Whether defaultroute was given.  */
		unsigned int ipup_given;
				/**< @brief Whether ipup was given.  */
		unsigned int ipdown_given;
				/**< @brief Whether ipdown was given.  */
		unsigned int pinghost_given;
				/**< @brief Whether pinghost was given.  */
		unsigned int pingrate_given;
				/**< @brief Whether pingrate was given.  */
		unsigned int pingsize_given;
				/**< @brief Whether pingsize was given.  */
		unsigned int pingcount_given;
					/**< @brief Whether pingcount was given.  */
		unsigned int pingquiet_given;
					/**< @brief Whether pingquiet was given.  */

	};

/** @brief The additional parameters to pass to parser functions */
	struct cmdline_parser_params {
		int override;
		/**< @brief whether to override possibly already present options (default 0) */
		int initialize;
		  /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
		int check_required;
		      /**< @brief whether to check that all required options were provided (default 1) */
		int check_ambiguity;
		       /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
		int print_errors;
		    /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
	};

/** @brief the purpose string of the program */
	extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
	extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
	extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
	extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
	int cmdline_parser(int argc, char **argv,
			   struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
	int cmdline_parser2(int argc, char **argv,
			    struct gengetopt_args_info *args_info,
			    int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
	int cmdline_parser_ext(int argc, char **argv,
			       struct gengetopt_args_info *args_info,
			       struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
	int cmdline_parser_dump(FILE * outfile,
				struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
	int cmdline_parser_file_save(const char *filename,
				     struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
	void cmdline_parser_print_help(void);
/**
 * Print the version
 */
	void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
	void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
	struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
	void cmdline_parser_init(struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
	void cmdline_parser_free(struct gengetopt_args_info *args_info);

/**
 * The config file parser (deprecated version)
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_config_file() instead
 */
	int cmdline_parser_configfile(const char *filename,
				      struct gengetopt_args_info *args_info,
				      int override, int initialize,
				      int check_required);

/**
 * The config file parser
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
	int cmdline_parser_config_file(const char *filename,
				       struct gengetopt_args_info *args_info,
				       struct cmdline_parser_params *params);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
	int cmdline_parser_required(struct gengetopt_args_info *args_info,
				    const char *prog_name);

#ifdef __cplusplus
}
#endif				/* __cplusplus */
#endif				/* CMDLINE_H */
