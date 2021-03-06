/*****************************************************************************

 @(#) src/snmp/gmiMIB.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_GMIMIB_H__
#define __LOCAL_GMIMIB_H__

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */

extern const char sa_program[];
extern int sa_fclose;			/* default close files between requests */
extern int sa_changed;			/* indication to reread MIB configuration */
extern int sa_stats_refresh;		/* indications that statistics, the mib or its tables need to be refreshed */
extern int sa_request;			/* request number for per-request actions */

/* our storage structure(s) */
struct gmiMIB_data {
	struct gmiMIB_data *gmiMIB_old;
	uint gmiMIB_rsvs;
	uint gmiMIB_tsts;
	uint gmiMIB_sets;
	uint gmiMIB_request;
};
struct applicationProcessTable_data {
	struct applicationProcessTable_data *applicationProcessTable_old;
	uint applicationProcessTable_rsvs;
	uint applicationProcessTable_tsts;
	uint applicationProcessTable_sets;
	uint applicationProcessTable_request;
	uint applicationProcessTable_refs;
	uint applicationProcessTable_id;
	uint8_t *applicationProcessId;	/* NoAccess */
	size_t applicationProcessIdLen;
	oid *applicationProcessTitle;	/* ReadOnly */
	size_t applicationProcessTitleLen;
	uint8_t *supportEntityNames;	/* ReadOnly */
	size_t supportEntityNamesLen;
	long applicationProcessOpState;	/* ReadOnly */
};
struct communicationsEntityTable_data {
	struct communicationsEntityTable_data *communicationsEntityTable_old;
	uint communicationsEntityTable_rsvs;
	uint communicationsEntityTable_tsts;
	uint communicationsEntityTable_sets;
	uint communicationsEntityTable_request;
	uint communicationsEntityTable_refs;
	uint communicationsEntityTable_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
	uint8_t *communicationsEntityId;	/* NoAccess */
	size_t communicationsEntityIdLen;
	uint8_t *localSapNames;		/* ReadOnly */
	size_t localSapNamesLen;
	long communicationsEntityOpState;	/* ReadOnly */
};
struct communicationsInfoRecordTable_data {
	struct communicationsInfoRecordTable_data *communicationsInfoRecordTable_old;
	uint communicationsInfoRecordTable_rsvs;
	uint communicationsInfoRecordTable_tsts;
	uint communicationsInfoRecordTable_sets;
	uint communicationsInfoRecordTable_request;
	uint communicationsInfoRecordTable_refs;
	uint communicationsInfoRecordTable_id;
	uint8_t *logId;			/* NoAccess */
	size_t logIdLen;
	uint8_t *logRecordId;		/* NoAccess */
	size_t logRecordIdLen;
	oid *informationType;		/* ReadOnly */
	size_t informationTypeLen;
	uint8_t *informationData;	/* ReadOnly */
	size_t informationDataLen;
};
struct clProtocolMachineTable_data {
	struct clProtocolMachineTable_data *clProtocolMachineTable_old;
	uint clProtocolMachineTable_rsvs;
	uint clProtocolMachineTable_tsts;
	uint clProtocolMachineTable_sets;
	uint clProtocolMachineTable_request;
	uint clProtocolMachineTable_refs;
	uint clProtocolMachineTable_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
	uint8_t *communicationsEntityId;	/* NoAccess */
	size_t communicationsEntityIdLen;
	uint8_t *clProtocolMachineId;	/* NoAccess */
	size_t clProtocolMachineIdLen;
	long clProtocolMachineOpState;	/* ReadOnly */
	struct counter64 totalRemoteSAPs;	/* ReadOnly */
};
struct coProtocolMachineTable_data {
	struct coProtocolMachineTable_data *coProtocolMachineTable_old;
	uint coProtocolMachineTable_rsvs;
	uint coProtocolMachineTable_tsts;
	uint coProtocolMachineTable_sets;
	uint coProtocolMachineTable_request;
	uint coProtocolMachineTable_refs;
	uint coProtocolMachineTable_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
	uint8_t *communicationsEntityId;	/* NoAccess */
	size_t communicationsEntityIdLen;
	uint8_t *coProtocolMachineId;	/* NoAccess */
	size_t coProtocolMachineIdLen;
	long coProtocolMachineOpState;	/* ReadOnly */
};
struct sap1Table_data {
	struct sap1Table_data *sap1Table_old;
	uint sap1Table_rsvs;
	uint sap1Table_tsts;
	uint sap1Table_sets;
	uint sap1Table_request;
	uint sap1Table_refs;
	uint sap1Table_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
	uint8_t *communicationsEntityId;	/* NoAccess */
	size_t communicationsEntityIdLen;
	uint8_t *sap1Id;		/* NoAccess */
	size_t sap1IdLen;
	ulong sap1Address;		/* ReadOnly */
	uint8_t *sap1UserEntityNames;	/* ReadOnly */
	size_t sap1UserEntityNamesLen;
};
struct sap2Table_data {
	struct sap2Table_data *sap2Table_old;
	uint sap2Table_rsvs;
	uint sap2Table_tsts;
	uint sap2Table_sets;
	uint sap2Table_request;
	uint sap2Table_refs;
	uint sap2Table_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
	uint8_t *sap2Id;		/* NoAccess */
	size_t sap2IdLen;
	uint8_t *sap2Address;		/* ReadOnly */
	size_t sap2AddressLen;
	uint8_t *sap2UserEntityNames;	/* ReadOnly */
	size_t sap2UserEntityNamesLen;
	uint8_t *sap2providerEntityNames;	/* ReadOnly */
	size_t sap2providerEntityNamesLen;
};
struct singlePeerConnectionTable_data {
	struct singlePeerConnectionTable_data *singlePeerConnectionTable_old;
	uint singlePeerConnectionTable_rsvs;
	uint singlePeerConnectionTable_tsts;
	uint singlePeerConnectionTable_sets;
	uint singlePeerConnectionTable_request;
	uint singlePeerConnectionTable_refs;
	uint singlePeerConnectionTable_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
	uint8_t *communicationsEntityId;	/* NoAccess */
	size_t communicationsEntityIdLen;
	uint8_t *coProtocolMachineId;	/* NoAccess */
	size_t coProtocolMachineIdLen;
	uint8_t *connectionId;		/* NoAccess */
	size_t connectionIdLen;
	uint8_t *underlyingConnectionNames;	/* ReadOnly */
	size_t underlyingConnectionNamesLen;
	uint8_t *supportedConnectionNames;	/* ReadOnly */
	size_t supportedConnectionNamesLen;
};
struct subsystemTable_data {
	struct subsystemTable_data *subsystemTable_old;
	uint subsystemTable_rsvs;
	uint subsystemTable_tsts;
	uint subsystemTable_sets;
	uint subsystemTable_request;
	uint subsystemTable_refs;
	uint subsystemTable_id;
	uint8_t *subsystemId;		/* ReadOnly */
	size_t subsystemIdLen;
};

/* storage declarations */
extern struct gmiMIB_data *gmiMIBStorage;
extern struct header_complex_index *applicationProcessTableStorage;
extern struct header_complex_index *communicationsEntityTableStorage;
extern struct header_complex_index *communicationsInfoRecordTableStorage;
extern struct header_complex_index *clProtocolMachineTableStorage;
extern struct header_complex_index *coProtocolMachineTableStorage;
extern struct header_complex_index *sap1TableStorage;
extern struct header_complex_index *sap2TableStorage;
extern struct header_complex_index *singlePeerConnectionTableStorage;
extern struct header_complex_index *subsystemTableStorage;

/* enum definitions from the covered mib sections */

#define APPLICATIONPROCESSOPSTATE_DISABLED       0
#define APPLICATIONPROCESSOPSTATE_ENABLED        1

#define COMMUNICATIONSENTITYOPSTATE_DISABLED     0
#define COMMUNICATIONSENTITYOPSTATE_ENABLED      1

#define CLPROTOCOLMACHINEOPSTATE_DISABLED        0
#define CLPROTOCOLMACHINEOPSTATE_ENABLED         1

#define COPROTOCOLMACHINEOPSTATE_DISABLED        0
#define COPROTOCOLMACHINEOPSTATE_ENABLED         1

/* notifications */
extern oid communicationsInformation_oid[12];

/* scalars accessible only for notify */
extern oid tmnInformationType_oid[12];
extern oid tmnInformationData_oid[12];

/* object id definitions */
extern oid communicationsInformationType_oid[12];
extern oid gmiApplicationProcessP1Package_oid[12];
extern oid gmiCommunicationsEntityP1Package_oid[12];
extern oid gmiCommunicationsInfoRecordP1Pkg_oid[12];
extern oid gmiInformationDataPackagePackage_oid[12];
extern oid gmiClProtocolMachineP1Package_oid[12];
extern oid gmiClProtocolMachineP2Package_oid[12];
extern oid gmiCoProtocolMachineP1Package_oid[12];
extern oid gmiSap1P1Package_oid[12];
extern oid gmiSap2P1Package_oid[12];
extern oid gmiSinglePeerConnectionP1Package_oid[12];
extern oid gmiSinglePeerConnectionP2Package_oid[12];
extern oid gmiSubsystemP1Package_oid[12];
extern oid gmiParametersGroup_oid[12];
extern oid gmiNotificationsGroup_oid[12];
extern oid gmiBasicCompliance_oid[12];

/* function prototypes */
/* trap function prototypes */
extern void send_communicationsInformation_v2trap(struct variable_list *);

/* variable function prototypes */
void init_gmiMIB(void);
void deinit_gmiMIB(void);
int term_gmiMIB(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_gmiMIB;
struct gmiMIB_data *gmiMIB_create(void);
struct gmiMIB_data *gmiMIB_duplicate(struct gmiMIB_data *);
int gmiMIB_destroy(struct gmiMIB_data **);
int gmiMIB_add(struct gmiMIB_data *);
void parse_gmiMIB(const char *, char *);
SNMPCallback store_gmiMIB;
void refresh_gmiMIB(int);
FindVarMethod var_applicationProcessTable;
struct applicationProcessTable_data *applicationProcessTable_create(void);
struct applicationProcessTable_data *applicationProcessTable_duplicate(struct applicationProcessTable_data *);
int applicationProcessTable_destroy(struct applicationProcessTable_data **);
int applicationProcessTable_add(struct applicationProcessTable_data *);
int applicationProcessTable_del(struct applicationProcessTable_data *);
void parse_applicationProcessTable(const char *, char *);
SNMPCallback store_applicationProcessTable;
void refresh_applicationProcessTable(int);
FindVarMethod var_communicationsEntityTable;
struct communicationsEntityTable_data *communicationsEntityTable_create(void);
struct communicationsEntityTable_data *communicationsEntityTable_duplicate(struct communicationsEntityTable_data *);
int communicationsEntityTable_destroy(struct communicationsEntityTable_data **);
int communicationsEntityTable_add(struct communicationsEntityTable_data *);
int communicationsEntityTable_del(struct communicationsEntityTable_data *);
void parse_communicationsEntityTable(const char *, char *);
SNMPCallback store_communicationsEntityTable;
void refresh_communicationsEntityTable(int);
FindVarMethod var_communicationsInfoRecordTable;
struct communicationsInfoRecordTable_data *communicationsInfoRecordTable_create(void);
struct communicationsInfoRecordTable_data *communicationsInfoRecordTable_duplicate(struct communicationsInfoRecordTable_data *);
int communicationsInfoRecordTable_destroy(struct communicationsInfoRecordTable_data **);
int communicationsInfoRecordTable_add(struct communicationsInfoRecordTable_data *);
int communicationsInfoRecordTable_del(struct communicationsInfoRecordTable_data *);
void parse_communicationsInfoRecordTable(const char *, char *);
SNMPCallback store_communicationsInfoRecordTable;
void refresh_communicationsInfoRecordTable(int);
FindVarMethod var_clProtocolMachineTable;
struct clProtocolMachineTable_data *clProtocolMachineTable_create(void);
struct clProtocolMachineTable_data *clProtocolMachineTable_duplicate(struct clProtocolMachineTable_data *);
int clProtocolMachineTable_destroy(struct clProtocolMachineTable_data **);
int clProtocolMachineTable_add(struct clProtocolMachineTable_data *);
int clProtocolMachineTable_del(struct clProtocolMachineTable_data *);
void parse_clProtocolMachineTable(const char *, char *);
SNMPCallback store_clProtocolMachineTable;
void refresh_clProtocolMachineTable(int);
FindVarMethod var_coProtocolMachineTable;
struct coProtocolMachineTable_data *coProtocolMachineTable_create(void);
struct coProtocolMachineTable_data *coProtocolMachineTable_duplicate(struct coProtocolMachineTable_data *);
int coProtocolMachineTable_destroy(struct coProtocolMachineTable_data **);
int coProtocolMachineTable_add(struct coProtocolMachineTable_data *);
int coProtocolMachineTable_del(struct coProtocolMachineTable_data *);
void parse_coProtocolMachineTable(const char *, char *);
SNMPCallback store_coProtocolMachineTable;
void refresh_coProtocolMachineTable(int);
FindVarMethod var_sap1Table;
struct sap1Table_data *sap1Table_create(void);
struct sap1Table_data *sap1Table_duplicate(struct sap1Table_data *);
int sap1Table_destroy(struct sap1Table_data **);
int sap1Table_add(struct sap1Table_data *);
int sap1Table_del(struct sap1Table_data *);
void parse_sap1Table(const char *, char *);
SNMPCallback store_sap1Table;
void refresh_sap1Table(int);
FindVarMethod var_sap2Table;
struct sap2Table_data *sap2Table_create(void);
struct sap2Table_data *sap2Table_duplicate(struct sap2Table_data *);
int sap2Table_destroy(struct sap2Table_data **);
int sap2Table_add(struct sap2Table_data *);
int sap2Table_del(struct sap2Table_data *);
void parse_sap2Table(const char *, char *);
SNMPCallback store_sap2Table;
void refresh_sap2Table(int);
FindVarMethod var_singlePeerConnectionTable;
struct singlePeerConnectionTable_data *singlePeerConnectionTable_create(void);
struct singlePeerConnectionTable_data *singlePeerConnectionTable_duplicate(struct singlePeerConnectionTable_data *);
int singlePeerConnectionTable_destroy(struct singlePeerConnectionTable_data **);
int singlePeerConnectionTable_add(struct singlePeerConnectionTable_data *);
int singlePeerConnectionTable_del(struct singlePeerConnectionTable_data *);
void parse_singlePeerConnectionTable(const char *, char *);
SNMPCallback store_singlePeerConnectionTable;
void refresh_singlePeerConnectionTable(int);
FindVarMethod var_subsystemTable;
struct subsystemTable_data *subsystemTable_create(void);
struct subsystemTable_data *subsystemTable_duplicate(struct subsystemTable_data *);
int subsystemTable_destroy(struct subsystemTable_data **);
int subsystemTable_add(struct subsystemTable_data *);
int subsystemTable_del(struct subsystemTable_data *);
void parse_subsystemTable(const char *, char *);
SNMPCallback store_subsystemTable;
void refresh_subsystemTable(int);

#endif				/* __LOCAL_GMIMIB_H__ */
