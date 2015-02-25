#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Data declarations

extern char aDbsrv_dll[10]; // idb
extern char aSystem[8]; // weak
extern char aWb[3]; // weak
extern char aRt[3]; // weak
extern _UNKNOWN unk_4750D0; // weak
extern char aDDDDDDD[21]; // weak
extern char a4_4x2_2x2_2x2_[37]; // weak
extern char aSS[6]; // weak
extern char aS_0[3]; // weak
extern char aRb[3]; // weak
extern char aItemname_csv[13]; // weak
extern char Text[]; // idb
extern char Caption[]; // idb
extern char aTooLongItemNam[19]; // weak
extern char aSystem_0[7]; // weak
extern char aCheckMax_iteml[]; // idb
extern char aDSS[9]; // weak
extern char aItemname_bin[13]; // weak
extern char a____TmsrvRunS[19]; // weak
extern char aUnregisterdEff[]; // idb
extern char aD_D_D_D_D[15]; // weak
extern char aD_D[6]; // weak
extern char aDSSSDDDDDSDSDS[99]; // weak
extern char aCanTWriteExtra[]; // idb
extern char aError[]; // idb
extern char aExtraitem_bin[14]; // weak
extern char aEffect_hDefine[27]; // idb
extern char aSSSSS[15]; // weak
extern char aDefine[8]; // weak
extern char aSS_0[7]; // weak
extern char aInclude[9]; // weak
extern char aThereIsNoEffec[]; // idb
extern char a____TmsrvRunIt[29]; // weak
extern char aItemeffect_h[]; // idb
extern char aDDDD[12]; // weak
extern char aInititem_csv[]; // idb
extern char a____TmsrvRunIn[29]; // weak
extern char a_Inititem_csv[15]; // weak
extern char aD_D_D_D_D_D[18]; // weak
extern char aDDDDDDDDDDDDDS[69]; // weak
extern char aSkilldata_csv[]; // idb
extern char a____TmsrvRunSk[30]; // weak
extern char a_Skilldata_csv[16]; // weak
extern char aDDDSSSS[21]; // weak
extern char aCanTParseStr_0[]; // idb
extern char a_Guilds_bak[13]; // weak
extern char a_Guilds_txt[13]; // weak
extern char aDbdddzdidDDDDD[65]; // weak
extern char a_Serverlist_bi[17]; // weak
extern char aDDS[9]; // weak
extern char aCanTOpenServer[]; // idb
extern char aAddress[]; // idb
extern char a____Serverlist[21]; // weak
extern char a_Serverlist_tx[17]; // weak
extern char aAttributemap_d[]; // idb
extern char a____TmsrvRunAt[33]; // weak
extern char aD[3]; // weak
extern char a_NewaccountSS[19]; // weak
extern char aErrUpdateacc_0[29]; // weak
extern char aErrUpdateaccou[28]; // weak
extern char a_AccountSS[16]; // weak
extern char aErrUpdateLoc_0[35]; // weak
extern char aErrUpdateLockA[34]; // weak
extern char aTm_dba_error[13]; // weak
extern char aSS_1[8]; // weak
extern char aMsg_webfail[12]; // weak
extern char aMsg_weblogin[13]; // weak
extern char aDeleteCharS[17]; // weak
extern char aErrDeletecharL[24]; // weak
extern char aErrDeletecharP[20]; // weak
extern char a12346545[9]; // weak
extern char aErrDeletecharS[20]; // weak
extern char aCloSvrDConnDSa[28]; // weak
extern char aErrSavenquit3D[33]; // weak
extern char aErrSavenquit4D[33]; // weak
extern char aErrSavenquit1D[33]; // weak
extern char aCloSvrDConnD[19]; // weak
extern char aErrSavenquit2D[33]; // weak
extern char aErrSavemob3DDD[31]; // weak
extern char aErrSavemob4DDD[31]; // weak
extern char aErrSavemob2DDD[31]; // weak
extern char aErrSavemob1DDD[31]; // weak
extern char aCloSvrDConnDDo[31]; // weak
extern char aErrCharloginCh[40]; // weak
extern char aErrCharloginSl[27]; // weak
extern char aUncapsuleAccou[23]; // weak
extern char aErrUncapsuleCh[30]; // weak
extern char aErrUncapusleCr[32]; // weak
extern char aErrUncapusleEm[26]; // weak
extern char aDeleteCharSCap[35]; // weak
extern char aCargo2CapsuleD[33]; // weak
extern char aCargoCapsuleDD[31]; // weak
extern char aErrNewcharClas[33]; // weak
extern char aCreateCharacte[22]; // weak
extern char aErrNewcharFail[30]; // weak
extern char aErrNewcharAlre[28]; // weak
extern char aKing[5]; // weak
extern char aKingdom[8]; // weak
extern char aSumm[5]; // weak
extern char aRelo[5]; // weak
extern char aErrNewcharCom[18]; // weak
extern char aErrNewcharLeng[21]; // weak
extern char aErrNewcharSlot[30]; // weak
extern char aErrCharloginMo[28]; // weak
extern char aStaAccountLogi[24]; // weak
extern char aDba_error_clea[24]; // weak
extern char aDba_login[11]; // weak
extern char aRba_login_erro[18]; // weak
extern char a_BufferS_txt[16]; // weak
extern char aEtcNameSwapSS[20]; // weak
extern char aSysReq_previou[37]; // weak
extern char aErrWrongSvrOrI[20]; // weak
extern char aMoveNewAct[14]; // weak
extern char aMoveOldAct[14]; // weak
extern char aDDD[9]; // weak
extern char aDeleteGuildS[18]; // weak
extern char aErrDeleteGui_1[36]; // weak
extern char aErrDeleteGui_0[37]; // weak
extern char aErrDeleteGuild[37]; // weak
extern char aErrGuildUpda_0[22]; // weak
extern char aSys_0[4]; // weak
extern char aSubGuildSendTo[25]; // weak
extern char aDDDDS[15]; // weak
extern char aErrCreatesub_2[32]; // weak
extern char aErrCreatesub_1[27]; // weak
extern char aErrCreatesub_0[31]; // weak
extern char aErrCreatesubgu[32]; // weak
extern char aGuildSendToDba[21]; // weak
extern char aSDDDS[15]; // weak
extern char aErrUpdateGuild[39]; // weak
extern char aErrGuildUpdate[23]; // weak
extern char aErrCreateGuild[36]; // weak
extern char aGuildAllyReque[25]; // weak
extern char aGuildWarReques[24]; // weak
extern char aErrTransperI_0[45]; // weak
extern char aErrTransperBut[37]; // weak
extern char aErrTransperIdD[41]; // weak
extern char aDDDDDDDDDD[31]; // weak
extern char aErrRemoveSer_0[29]; // weak
extern char aErrRemoveServe[25]; // weak
extern char aErrAddaccountl[35]; // weak
extern char aErrCreatecharU[23]; // weak
extern char aErrCreatecha_3[22]; // weak
extern char aErrCreatecha_2[22]; // weak
extern char aErrCreatecha_1[22]; // weak
extern char aErrCreatecha_0[22]; // weak
extern char aErrCreatecharE[23]; // weak
extern char aSysTrans_class[24]; // weak
extern char a_CharSS[13]; // weak
extern char aGuildEnoent[13]; // weak
extern char aGuildEmfile[13]; // weak
extern char aGuildEinval[13]; // weak
extern char aGuildEacces[13]; // weak
extern char aGuildEexist[13]; // weak
extern char aGuildWriteFail[17]; // weak
extern char aErrWriteaccoun[28]; // weak
extern char aErrGuildUnknow[18]; // weak
extern char aErrGuildEnoent[17]; // weak
extern char aErrGuildEmfile[17]; // weak
extern char aErrGuildEinval[17]; // weak
extern char aErrGuildEacces[17]; // weak
extern char aErrGuildEexist[18]; // weak
extern char a_GuildD_bin[15]; // weak
extern char aCreateaccoun_3[21]; // weak
extern char aCreateaccoun_2[21]; // weak
extern char aCreateaccoun_1[21]; // weak
extern char aCreateaccoun_0[21]; // weak
extern char aCreateaccountE[21]; // weak
extern char aCreateaccountW[25]; // weak
extern char aErrWriteacco_5[25]; // weak
extern char aErrWriteacco_4[24]; // weak
extern char aErrWriteacco_3[24]; // weak
extern char aErrWriteacco_2[24]; // weak
extern char aErrWriteacco_1[24]; // weak
extern char aErrWriteacco_0[24]; // weak
extern char a_OldaccountSS[19]; // weak
extern char aErrReadaccou_1[24]; // weak
extern char aErrReadaccou_0[24]; // weak
extern char aErrReadaccount[23]; // weak
extern char aCreatecharUnkn[19]; // weak
extern char aErrCreatecha_8[25]; // weak
extern char aErrCreatecha_7[25]; // weak
extern char aErrCreatecha_6[25]; // weak
extern char aErrCreatecha_5[25]; // weak
extern char aErrCreatecha_4[25]; // weak
extern char a_CapsuleD[13]; // weak
extern char aErrGetcapsuleb[21]; // weak
extern char aEnoentD[10]; // weak
extern char aEmfileD[10]; // weak
extern char aEinvalD[10]; // weak
extern char aEaccesD[10]; // weak
extern char aEexistD[10]; // weak
extern char aWsaasyncselect[]; // idb
extern char aListenFail[]; // idb
extern char aBindingFail[]; // idb
extern char aInitializeSock[]; // idb
extern char aInitializeSo_0[]; // idb
extern char aErrSend2DDD[19]; // weak
extern char aErrSend1DDD[19]; // weak
extern int (__stdcall *off_4768AC)(); // weak
extern _UNKNOWN unk_4768B0; // weak
extern _UNKNOWN unk_4768B4; // weak
extern char a_SS_2_2d_2_2d_[42]; // weak
extern char aS_1[4]; // weak
extern char aTrans_txt[10]; // weak
extern char aDDD_0[10]; // weak
extern char aD_0[4]; // weak
extern char ClassName[]; // idb
extern char IconName[]; // idb
extern char WindowName[]; // idb
extern char a0[2]; // weak
extern char a1[2]; // weak
extern char aSD[7]; // weak
extern char asc_476990[2]; // weak
extern char aA[3]; // weak
extern char aDDDDD[15]; // weak
extern __int16 word_4769E8; // weak
extern char aAdmin_txt[10]; // weak
extern char aSD_0[7]; // weak
extern char aCantFindConfig[]; // idb
extern char aBootingError[]; // idb
extern char aConfig_txt[11]; // weak
extern char aCapsuleD[12]; // weak
extern char aVersionD[12]; // weak
extern char aMaxconcurrentD[18]; // weak
extern char aSapphireD[13]; // weak
extern char a2dIp3d_3d_3d_0[37]; // weak
extern char aAdminStatus[14]; // weak
extern char a2dIp3d_3d_3d_3[70]; // weak
extern char aServerZoneStat[20]; // weak
extern char aGameconfig_txt[15]; // weak
extern char aSysRedirection[33]; // weak
extern char aThereSRedirect[]; // idb
extern char aSDSS[12]; // weak
extern char aRedirect_txt[13]; // weak
extern char aCanTGetServe_0[]; // idb
extern char aCanTGetServerG[]; // idb
extern char aD_D_D_D[12]; // weak
extern char aCanTFindLocali[]; // idb
extern char aRebootingError[]; // idb
extern char aSD_1[6]; // weak
extern char aLocalip_txt[12]; // weak
extern char aErrWsainitiali[23]; // weak
extern char aStartLog[10]; // weak
extern char aDb[3]; // weak
extern char aNo_hunterFile[]; // idb
extern char a_X[6]; // weak
extern char aNo_beastmaster[]; // idb
extern _UNKNOWN unk_476CD8; // weak
extern char aNo_foremaFile[]; // idb
extern _UNKNOWN unk_476CFC; // weak
extern char aNo_transknight[]; // idb
extern char a_OKO[14]; // weak
extern char aNoHunterFile[]; // idb
extern char asc_476D48[5]; // weak
extern char aNoBeastmasterF[]; // idb
extern _UNKNOWN unk_476D68; // weak
extern char aNoForemaFile[]; // idb
extern _UNKNOWN unk_476D8C; // weak
extern char aNoTransknightF[]; // idb
extern char aOKO[13]; // weak
extern char pszFaceName[]; // idb
extern char aEtcTranper_f_0[37]; // weak
extern char aEtcTranper_suc[35]; // weak
extern char aEtcTranper_fai[36]; // weak
extern char aErrAdminclient[51]; // weak
extern char aErrPacketTypeD[44]; // weak
extern char aS_2[4]; // weak
extern char aThereSNoAccoun[42]; // weak
extern char aNplMobDPosDBef[36]; // weak
extern char aCasherror[10]; // weak
extern char aSDSD[12]; // weak
extern char aMsg_casherr[12]; // weak
extern char aErrCashS[13]; // weak
extern char aCashok[7]; // weak
extern char aSDS[9]; // weak
extern char aMsg_cashok[11]; // weak
extern char aStopgoldcoin1[16]; // weak
extern char aMsg_cashsrverr[15]; // weak
extern char aStopgoldcoin0[16]; // weak
extern char aMsg_cashreconn[18]; // weak
extern char aCheckSession_A[32]; // weak
extern char aSysSWritten[15]; // weak
extern char aSavingAccountS[28]; // weak
extern char aNplMob4CoinBef[33]; // weak
extern char aNplMobDBasicSc[60]; // weak
extern char aNplMobDExpBefo[33]; // weak
extern char aNplMobDCoinBef[34]; // weak
extern char aSetAdminLevelE[23]; // weak
extern char aForSavingAccou[40]; // weak
extern char aNotAllowed[12]; // weak
extern char aSSSSS_0[16]; // weak
extern char aThereSNoAcco_0[44]; // weak
extern char aSysMaxCurrentM[32]; // weak
extern char aSysAdminLogi_0[36]; // weak
extern char aSysAdminLoginS[36]; // weak
extern char aWrongSvrAndId[17]; // weak
extern char aSpecifiedUserN[49]; // weak
extern char aErrPacketDIdDS[39]; // weak
extern char a_LogS4_4d_2_2d[42]; // weak
extern char aLogfileCloseFa[21]; // weak
extern char aSSS_0[10]; // weak
extern char a2_2d2_2d2_2d2_[32]; // weak
extern char aSS_2[8]; // weak
extern char aErrcargoS[13]; // weak
extern char aCargo2S[11]; // weak
extern char aCargoS[10]; // weak
extern char aSenditemS[13]; // weak
extern char a_i__i_[8]; // weak
extern char aS_S_S[15]; // weak
extern char aDba_error_file[16]; // weak
extern char a_l__l_[8]; // weak
extern char aSSDD[12]; // weak
extern char a_p__p_[8]; // weak
extern char aSSDDD[15]; // weak
extern char a_a__a_[8]; // weak
extern char a_m__m_[8]; // weak
extern char aDSSSSDDDD[27]; // weak
extern char a_GuildS[11]; // weak
extern char FileName[]; // idb
extern char aImportItemSu_1[44]; // weak
extern char aImportItemSu_0[58]; // weak
extern char aImportItemCarg[41]; // weak
extern char aImportItemSucc[41]; // weak
extern char aImportNoSpaceF[36]; // weak
extern char aImportNoSpaceM[30]; // weak
extern char aImportNoAccoun[19]; // weak
extern char aImportItemRunt[28]; // weak
extern char aImportWrongCon[23]; // weak
extern char aImportStarting[17]; // weak
extern char aSDDDDDDD[26]; // weak
extern char aImportNoConten[20]; // weak
extern char aQServ2_2dErrS[20]; // weak
extern char aQServ2_2dItemS[21]; // weak
extern char aQServ2_2dItem_[22]; // weak
extern char aFormatNull[15]; // weak
extern char aSprintf_c[10]; // weak
extern char aStringNull[15]; // weak
extern char aFclose_c[9]; // weak
extern char aStrNull[12]; // weak
extern char aSscanf_c[9]; // weak
extern char aFgets_c[8]; // weak
extern char aMode_t0[18]; // weak
extern char aModeNull[13]; // weak
extern char aFile_t0[18]; // weak
extern char aFopen_c[8]; // weak
extern char aFileNull[13]; // weak
extern char aI386Chkesp_c[14]; // weak
extern char aTheValueOfEspW[220]; // weak
extern char aFseek_c[8]; // weak
extern char aErrorMemoryAll[50]; // weak
extern char aInvalidAllocat[36]; // weak
extern char aClientHookAl_0[33]; // weak
extern char aClientHookAllo[53]; // weak
extern char aDbgheap_c[10]; // weak
extern char a_crtcheckmemor[18]; // weak
extern char a_pfirstblockPo[26]; // weak
extern char a_plastblockPol[25]; // weak
extern char aFreallocFreall[50]; // weak
extern char a_block_typePol[58]; // weak
extern char aPoldblockNline[69]; // weak
extern char a_crtisvalidhea[34]; // weak
extern char aAllocationTooL[45]; // weak
extern char aClientHookRe_0[36]; // weak
extern char aClientHookReAl[56]; // weak
extern char a_pfirstblockPh[22]; // weak
extern char a_plastblockPhe[21]; // weak
extern char aPheadNblockuse[30]; // weak
extern char aPheadNlineIgno[61]; // weak
extern char aDamageAfterHsB[42]; // weak
extern char aDamageBeforeHs[43]; // weak
extern char a_block_type_is[39]; // weak
extern char aClientHookFree[27]; // weak
extern char aMemoryCheckErr[58]; // weak
extern char aHsLocatedAt0x0[41]; // weak
extern char aHsAllocatedAtF[32]; // weak
extern char aDamageOnTopOfF[41]; // weak
extern char aDamaged[8]; // weak
extern char a_heapchkFail_3[43]; // weak
extern char a_heapchkFail_2[34]; // weak
extern char a_heapchkFail_1[34]; // weak
extern char a_heapchkFail_0[35]; // weak
extern char a_heapchkFailsW[36]; // weak
extern char aBadMemoryBlock[35]; // weak
extern char a_crtmemcheckpo[40]; // weak
extern char aObjectDumpComp[23]; // weak
extern char aCrtBlockAt0x08[49]; // weak
extern char aNormalBlockAt0[40]; // weak
extern char aClientBlockAt0[52]; // weak
extern char aLd[7]; // weak
extern char aHsD[11]; // weak
extern char aFileErrorD[20]; // weak
extern char aDumpingObjects[20]; // weak
extern char aDataSS[16]; // weak
extern char a_2x[6]; // weak
extern char aDetectedMemory[24]; // weak
extern char aDbgdel_cpp[11]; // weak
extern char aFprintf_c[10]; // weak
extern char aOnexit_c[9]; // weak
extern _UNKNOWN unk_4787B0; // weak
extern char aFscanf_c[9]; // weak
extern char aStreamNull[15]; // weak
extern _UNKNOWN unk_4787D8; // weak
extern char aInconsistentIo[63]; // weak
extern char a_flsbuf_c[10]; // weak
extern char byte_478830[]; // weak
extern char aOutput_c[9]; // weak
extern char aCh_t0[15]; // weak
extern char aSDS_0[12]; // weak
extern char asc_4788E8[2]; // weak
extern char aSecondChanceAs[]; // idb
extern char ProcName[]; // idb
extern char LibFileName[]; // idb
extern char aMicrosoftVisua[35]; // weak
extern char aDebugSProgramS[83]; // weak
extern char asc_478A20[3]; // weak
extern char a___[4]; // weak
extern char aDbgrpt_c[9]; // weak
extern char aSzusermessageN[22]; // weak
extern char a_freebuf_c[11]; // weak
extern char aInput_c[8]; // weak
extern char a_filbuf_c[10]; // weak
extern char a_open_c[8]; // weak
extern char aFilenameNull[17]; // weak
extern char aStream_c[9]; // weak
extern char aIsprocessorfea[]; // idb
extern char ModuleName[]; // idb
extern char aFtell_c[8]; // weak
extern char aTzset_c[8]; // weak
extern char aTz[3]; // weak
extern char aIoinit_c[9]; // weak
extern char aOsfinfo_c[10]; // weak
extern _UNKNOWN unk_478BE0; // weak
extern _UNKNOWN unk_478BF0; // weak
extern _UNKNOWN unk_478C08; // weak
extern _UNKNOWN unk_478C18; // weak
extern _UNKNOWN unk_478C28; // weak
extern _UNKNOWN unk_478C40; // weak
extern char a_sftbuf_c[10]; // weak
extern char aFlag0Flag1[23]; // weak
extern char a_file_c[8]; // weak
extern char aStdenvp_c[10]; // weak
extern char aStdargv_c[10]; // weak
extern char aA_env_c[8]; // weak
extern char aMicrosoftVis_0[37]; // weak
extern char a_getbuf_c[10]; // weak
extern char aVsprintf_c[11]; // weak
extern char aGetlastactivep[]; // idb
extern char aGetactivewindo[]; // idb
extern char aMessageboxa[]; // idb
extern char aMbtowc_c[9]; // weak
extern char aMb_cur_max1Mb_[35]; // weak
extern char aUngetc_c[9]; // weak
extern char String2[]; // idb
extern const WCHAR SrcStr; // idb
extern _UNKNOWN unk_479000; // weak
extern _UNKNOWN unk_479018; // weak
extern char aChsize_c[9]; // weak
extern char aSize0[10]; // weak
extern char aWtombenv_c[11]; // weak
extern char aA_cmp_c[8]; // weak
extern char aCchcount10Cchc[61]; // weak
extern _UNKNOWN unk_4790B0; // weak
extern char aSetenv_c[9]; // weak
extern char aStrupr_c[9]; // weak
extern _UNKNOWN unk_4796E0; // weak
extern _UNKNOWN unk_47A000; // weak
extern _UNKNOWN unk_47A22C; // weak
extern _UNKNOWN unk_47A330; // weak
extern _UNKNOWN unk_47A648; // weak
extern _UNKNOWN unk_47A74C; // weak
extern _UNKNOWN unk_47A954; // weak
extern _UNKNOWN unk_47AA58; // weak
extern _UNKNOWN unk_47AC60; // weak
extern int dword_47AFB4; // weak
extern _UNKNOWN unk_47B8C4; // weak
extern int dword_47B904[]; // weak
extern int dword_47D450[]; // weak
extern int dword_47D454[]; // weak
extern int dword_47D458[]; // weak
extern int dword_47D45C[]; // weak
extern int dword_47D720[]; // weak
extern int dword_47D724[]; // weak
extern int dword_47D728[]; // weak
extern int dword_47D72C[]; // weak
extern char byte_480B58[]; // weak
extern char byte_480B59[]; // weak
extern int dword_480B80[]; // weak
extern char byte_482510[]; // weak
extern char byte_482511[]; // weak
extern int dword_4828AC; // weak
extern int dword_4828BC; // weak
extern int dword_4828C0; // weak
extern int dword_4828C4; // weak
extern int dword_4828E0; // weak
extern int (*off_4828F8)(void); // weak
extern int dword_482910; // weak
extern int dword_482914; // weak
extern int dword_482918; // weak
extern char byte_48291C; // weak
extern char byte_48291D; // weak
extern char byte_48291E; // weak
extern char *off_482920[5]; // weak
extern _DWORD dword_482934[7]; // idb
extern int (__cdecl *off_482950)(_DWORD); // weak
extern int dword_482954; // weak
extern char *off_482958; // weak
extern wchar_t *off_48295C; // weak
extern volatile LONG Addend; // idb
extern int dword_482964[]; // weak
extern HANDLE hFile; // idb
extern char *off_48297C[3]; // weak
extern char asc_482988[6]; // weak
extern char asc_482990[2]; // weak
extern char byte_482998[]; // weak
extern int dword_4829A0[]; // weak
extern __int16 word_4829A4[]; // weak
extern _UNKNOWN unk_4829B0; // weak
extern int (__cdecl *off_482A90)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // weak
extern int (__cdecl *off_482A94)(_DWORD); // weak
extern int (__cdecl *off_482A98)(_DWORD, _DWORD, _DWORD); // weak
extern int (__cdecl *off_482A9C)(_DWORD); // weak
extern int (*off_482AA0[2])(); // weak
extern int (*off_482AA4)(); // weak
extern __int16 off_482AA8[2]; // weak
extern __int16 word_482AB2[]; // weak
extern int cbMultiByte; // idb
extern char byte_482CB8; // weak
extern int dword_482CC0; // weak
extern int dword_482CC4; // weak
extern int dword_482CC8; // weak
extern LPSTR lpMultiByteStr; // idb
extern LPSTR off_482D50; // idb
extern int dword_482D58; // weak
extern int dword_482D5C; // weak
extern int dword_482D60; // weak
extern int dword_482D68; // weak
extern int dword_482D6C; // weak
extern int dword_482D70; // weak
extern int dword_482D78[]; // weak
extern int dword_482D7C[]; // weak
extern _UNKNOWN unk_482EE0; // weak
extern int (__cdecl *off_482EE8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // weak
extern int dword_482EF0; // weak
extern int (*off_482F04)(void); // weak
extern void *off_482F08; // weak
extern int dword_482F18[]; // weak
extern _UNKNOWN unk_482F28; // weak
extern _UNKNOWN unk_482F48; // weak
extern _UNKNOWN unk_483188; // weak
extern int dword_483190[]; // weak
extern int dword_483200; // weak
extern int dword_483204; // weak
extern int dword_483208; // weak
extern int dword_48320C; // weak
extern int dword_483210[]; // weak
extern LPCVOID lpBuffer; // idb
extern _UNKNOWN unk_4832A0; // weak
extern _UNKNOWN unk_4832B8; // weak
extern int dword_4832CC[]; // weak
extern int dword_4832D0[]; // weak
extern int dword_483300[]; // weak
extern int dword_483304[]; // weak
extern _UNKNOWN unk_483338; // weak
extern _UNKNOWN unk_483498; // weak
extern int dword_484258[]; // weak
extern int dword_484268[]; // weak
extern char byte_484320[]; // weak
extern _UNKNOWN unk_784320; // weak
extern char byte_786444[]; // weak
extern int dword_796A30[]; // weak
extern __int16 word_799138[]; // weak
extern __int16 word_79913A[]; // weak
extern __int16 word_79913C[]; // weak
extern __int16 word_79913E[]; // weak
extern char byte_7AD4A8; // weak
extern _UNKNOWN unk_800000; // weak
extern _UNKNOWN unk_8AD4A8; // weak
extern __int16 word_8AD4E8[]; // weak
extern __int16 word_8AD4EA[]; // weak
extern __int16 word_8AD4EC[]; // weak
extern __int16 word_8AD4EE[]; // weak
extern __int16 word_8AD4F0[]; // weak
extern __int16 word_8AD4F2[]; // weak
extern __int16 word_8AD4F4[]; // weak
extern __int16 word_8AD4F6[]; // weak
extern __int16 word_8AD4F8[]; // weak
extern __int16 word_8AD4FA[]; // weak
extern int dword_8AD528[]; // weak
extern __int16 word_8AD52C[]; // weak
extern __int16 word_8AD52E[]; // weak
extern __int16 word_8AD530[]; // weak
extern __int16 word_8AD532[]; // weak
extern char byte_98B758[]; // weak
extern int dword_98D5C4; // weak
extern char byte_A8F510[]; // weak
extern char byte_A8F51E[]; // weak
extern char byte_A8F51F[]; // weak
extern int dword_A8F520[]; // weak
extern int dword_A8F524[]; // weak
extern int dword_A8F528[]; // weak
extern int dword_A8F52C[]; // weak
extern int dword_A8F530[]; // weak
extern int dword_A8F534[]; // weak
extern int dword_A8F538[]; // weak
extern int dword_A8F53C[]; // weak
extern int dword_A8F540[]; // weak
extern int dword_A8F544[]; // weak
extern int dword_A8F548[]; // weak
extern _UNKNOWN unk_A93B60; // weak
extern int dword_A93F60; // weak
extern int dword_A94E44; // weak
extern int dword_A94E4C; // weak
extern HMENU hMenu; // idb
extern int dword_A94E5C; // weak
extern int dword_A94E60; // weak
extern int dword_A94E64; // weak
extern int dword_A94E68; // weak
extern int dword_A94E6C; // weak
extern int dword_A94E70; // weak
extern int dword_A94E74; // weak
extern int dword_A94E78; // weak
extern int dword_A94E7C; // weak
extern int dword_A94E80; // weak
extern int dword_A94E84; // weak
extern int dword_A94E88; // weak
extern int dword_A94E8C; // weak
extern int dword_A94E90; // weak
extern int dword_A94E94; // weak
extern int dword_A94E98; // weak
extern int dword_A94E9C; // weak
extern int dword_A94EA0; // weak
extern int dword_A94EA4; // weak
extern int dword_A94EA8; // weak
extern int dword_A94EAC; // weak
extern int dword_A94EB0; // weak
extern int dword_A94EB4; // weak
extern int dword_A94EB8; // weak
extern int dword_A94EBC; // weak
extern int dword_A94EC0; // weak
extern int dword_A94EC4; // weak
extern int dword_A94EC8; // weak
extern int dword_A94ECC; // weak
extern int dword_A94ED0; // weak
extern int dword_A94ED4; // weak
extern int dword_A94ED8; // weak
extern int dword_A94EDC; // weak
extern int dword_A94EE0; // weak
extern int dword_A95DFC; // weak
extern int dword_A95E00[]; // weak
extern int dword_A95E04[]; // weak
extern int dword_A95E08[]; // weak
extern int dword_A95E58[]; // weak
extern int dword_A95E5C[]; // weak
extern int dword_A95E60[]; // weak
extern char byte_A95E64[]; // weak
extern int dword_A95E74[]; // weak
extern int dword_A96940; // weak
extern _UNKNOWN unk_E0B000; // weak
extern _UNKNOWN unk_FF0000; // weak
extern _UNKNOWN unk_FFFFFF; // weak
extern _UNKNOWN unk_1010100; // weak
extern HWND hWnd; // idb
extern int dword_1216A90; // weak
extern int dword_1216B08; // weak
extern int dword_1216C58[]; // weak
extern _UNKNOWN unk_1312D00; // weak
extern int dword_1DB9778[]; // weak
extern _UNKNOWN unk_1DCD778; // weak
extern int dword_1DCD7C4; // weak
extern int dword_1DCD7C8; // weak
extern int dword_1DCD814[]; // weak
extern int dword_1DE1814[]; // weak
extern __int16 word_1DE1840[]; // weak
extern int dword_1E01840[]; // weak
extern int dword_1E01844[]; // weak
extern int dword_1E01848[]; // weak
extern int dword_1E01894[]; // weak
extern int dword_1E01CF0; // weak
extern __int16 word_1E01CF4[]; // weak
extern _UNKNOWN unk_1E13380; // weak
extern int dword_1E21CF8; // weak
extern int dword_1E21CFC[]; // weak
extern _UNKNOWN unk_1E21D00; // weak
extern _UNKNOWN unk_1E21DD0; // weak
extern int dword_1E229A0[]; // weak
extern int dword_1E229A4[]; // weak
extern _UNKNOWN unk_1E28500; // weak
extern _UNKNOWN unk_2000000; // weak
extern _UNKNOWN unk_2CF0000; // weak
extern _UNKNOWN unk_4000000; // weak
extern _UNKNOWN unk_5265C00; // weak
extern int dword_591B7A0[]; // weak
extern char byte_591B7A4[]; // weak
extern char byte_591B7B0[]; // weak
extern char byte_591B7B1[]; // weak
extern char byte_591B7BC[]; // weak
extern char byte_591B7BD[]; // weak
extern char byte_591B7C8[]; // weak
extern char byte_591B7C9[]; // weak
extern char byte_591B7D4[]; // weak
extern char byte_591B7D5[]; // weak
extern char byte_591B7D6[]; // weak
extern int dword_591B7D8[]; // weak
extern _UNKNOWN unk_5CDB7A0; // weak
extern _UNKNOWN unk_5CDB7C4; // weak
extern _UNKNOWN unk_5CDB7E0; // weak
extern _UNKNOWN unk_5CDBA94; // weak
extern _UNKNOWN unk_5CDBAB8; // weak
extern _UNKNOWN unk_5CDBAD4; // weak
extern _UNKNOWN unk_5CDBD88; // weak
extern _UNKNOWN unk_5CDBDAC; // weak
extern _UNKNOWN unk_5CDBDC8; // weak
extern _UNKNOWN unk_5CDC07C; // weak
extern _UNKNOWN unk_5CDC0A0; // weak
extern _UNKNOWN unk_5CDC0BC; // weak
extern _UNKNOWN unk_5CDC370; // weak
extern _UNKNOWN unk_5CDC394; // weak
extern _UNKNOWN unk_5CDC3B0; // weak
extern _UNKNOWN unk_5CDC664; // weak
extern _UNKNOWN unk_5CDC688; // weak
extern _UNKNOWN unk_5CDC6A4; // weak
extern _UNKNOWN unk_5CDC958; // weak
extern _UNKNOWN unk_5CDC97C; // weak
extern _UNKNOWN unk_5CDC998; // weak
extern _UNKNOWN unk_5CDCC4C; // weak
extern _UNKNOWN unk_5CDCC70; // weak
extern _UNKNOWN unk_5CDCC8C; // weak
extern char byte_5CDCF40; // weak
extern _UNKNOWN unk_5CDCF41; // weak
extern char byte_5CDCF42; // weak
extern char byte_5CDCF43; // weak
extern int dword_5CDCF44; // weak
extern int dword_5CDCF48; // weak
extern int dword_5CDCF4C; // weak
extern int dword_5CDCF50; // weak
extern int dword_5CDCF54; // weak
extern int dword_5CDCF58; // weak
extern __int64 qword_5CDCF70; // weak
extern int dword_5CDCF78; // weak
extern int dword_5CDCF84; // weak
extern HGDIOBJ h; // idb
extern int dword_5CDCF8C; // weak
extern _UNKNOWN unk_5F5E100; // weak
extern int dword_6D51CA0; // weak
extern int dword_6D51CA8; // weak
extern int dword_6D51CB0; // weak
extern __int64 qword_6D51CB4; // weak
extern int dword_6D51CBC; // weak
extern int dword_6D51CC0; // weak
extern int dword_6D51CC4; // weak
extern int dword_6D51CC8; // weak
extern int dword_6D51CCC; // weak
extern int dword_6D51CD0; // weak
extern int dword_6D51CD4; // weak
extern int dword_6D51CD8; // weak
extern int dword_6D51CDC; // weak
extern int dword_6D51CE0; // weak
extern int dword_6D51CE8; // weak
extern int dword_6D51CEC; // weak
extern int dword_6D51CF0; // weak
extern int dword_6D51CF8; // weak
extern char byte_6D51D00; // weak
extern int dword_6D51D04; // weak
extern int dword_6D51D08; // weak
extern int dword_6D51D0C; // weak
extern int dword_6D51D10; // weak
extern int dword_6D51D14; // weak
extern int dword_6D51D18; // weak
extern int dword_6D51D1C; // weak
extern int dword_6D51D20; // weak
extern int dword_6D51D24; // weak
extern int dword_6D51D2C; // weak
extern int (*dword_6D51D30)(_DWORD, const char *, ...); // weak
extern int dword_6D51D34; // weak
extern int dword_6D51D38; // weak
extern char byte_6D51D3C; // weak
extern int dword_6D51D40; // weak
extern char byte_6D51D44; // weak
extern int dword_6D51D48; // weak
extern struct _TIME_ZONE_INFORMATION TimeZoneInformation; // idb
extern int dword_6D51DFC; // weak
extern int dword_6D51E00; // weak
extern _DWORD dword_6D51E08[9]; // idb
extern int dword_6D51E2C; // idb
extern int dword_6D51E30; // weak
extern int dword_6D51E34; // weak
extern int dword_6D51E38; // weak
extern int (__cdecl *dword_6D51E3C)(_DWORD, _DWORD); // weak
extern int (*dword_6D51E40)(void); // weak
extern int dword_6D51E44[]; // weak
extern int dword_6D51E4C; // weak
extern int dword_6D51E50; // weak
extern char Filename[260]; // idb
extern int dword_6D51F58; // weak
extern int (*dword_6D51F5C)(void); // weak
extern int dword_6D51F60; // weak
extern int dword_6D51F64; // weak
extern int dword_6D51F68; // weak
extern int dword_6D51F6C; // weak
extern int (__stdcall *dword_6D51F74)(_DWORD, _DWORD, _DWORD, _DWORD); // weak
extern int (*dword_6D51F78)(void); // weak
extern int (__stdcall *dword_6D51F7C)(_DWORD); // weak
extern int dword_6D51F80; // weak
extern LCID dword_6D51F8C; // idb
extern UINT dword_6D51F9C; // idb
extern int dword_6D51FA4; // weak
extern int dword_6D51FA8; // weak
extern __int16 word_6D51FB0; // weak
extern char byte_6D51FB2; // weak
extern _UNKNOWN unk_6D51FB4; // weak
extern int dword_6D51FD0; // weak
extern int dword_6D51FD4; // weak
extern int dword_6D51FD8; // weak
extern int dword_6D51FDC; // weak
extern LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter; // idb
extern int dword_6D51FE4; // weak
extern int dword_6D51FE8; // weak
extern int dword_6D51FEC; // weak
extern int dword_6D53340; // weak
extern int dword_6D53344; // weak
extern int dword_6D53354; // weak
extern int dword_6D53358; // weak
extern int dword_6D5335C; // weak
extern int dword_6D53360; // weak
extern LPVOID lpMem; // idb
extern HANDLE hHeap; // idb
extern int dword_6D53380[]; // weak
extern UINT uNumber; // idb
extern UINT CodePage; // idb
extern __int16 word_6D53540[]; // weak
extern int dword_6D5354C; // weak
extern char byte_6D53560[]; // weak
extern char byte_6D53660[]; // weak
extern char byte_6D53661[]; // weak
extern LCID Locale; // idb
extern int (__cdecl *dword_6D53768)(_DWORD, _DWORD, _DWORD); // weak
extern int dword_6D53774; // weak
extern int (__cdecl *dword_6D53780)(_DWORD, _DWORD); // weak
extern int dword_6D5378C; // weak
extern int dword_6D5379C; // weak
extern int dword_6D537A0; // weak
extern int dword_6D537A4; // weak

//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

int sub_401019(void); // weak
_DWORD __cdecl sub_40101E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_401028(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_401037(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_401055(_DWORD); // weak
int __thiscall sub_40105F(_DWORD); // weak
_DWORD __stdcall sub_401073(_DWORD, LPCVOID lpBuffer); // weak
_DWORD __stdcall sub_40107D(_DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_4010A5(_DWORD, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_4010AA(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_4010BE(_DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_4010C3(HINSTANCE hInstance, _DWORD nCmdShow); // weak
int sub_4010C8(void); // weak
_DWORD __cdecl sub_4010D2(_DWORD, __int16, __int16); // weak
_DWORD __stdcall sub_4010DC(_DWORD, __int16, __int16, _DWORD); // weak
int sub_4010EB(void); // weak
int __thiscall sub_4010F5(_DWORD); // weak
int sub_401109(void); // weak
int sub_40110E(void); // weak
int sub_401113(void); // weak
_DWORD __stdcall sub_401122(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_401136(_DWORD); // weak
_DWORD __stdcall sub_401145(LPCVOID lpBuffer); // weak
int sub_401154(); // weak
_DWORD __cdecl sub_40115E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_401163(_DWORD); // weak
_DWORD __stdcall sub_401172(_DWORD); // weak
int __thiscall sub_401181(_DWORD); // weak
_DWORD __cdecl sub_401190(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_4011A9(_DWORD, __int16, __int16, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_4011BD(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_4011CC(_DWORD); // weak
_DWORD __stdcall sub_4011DB(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_4011E5(_DWORD, __int16, __int16); // weak
_DWORD __stdcall sub_401203(_DWORD); // weak
int __thiscall sub_401208(_DWORD); // weak
int __thiscall sub_40120D(_DWORD); // weak
_DWORD __stdcall sub_401230(_DWORD, _DWORD); // weak
int sub_401235(void); // weak
_DWORD __stdcall sub_401244(_DWORD, _DWORD); // weak
int sub_40124E(void); // weak
int __thiscall sub_401253(_DWORD); // weak
int sub_40125D(void); // weak
_DWORD __cdecl sub_401276(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_40127B(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_401280(LPCVOID lpBuffer, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_401285(_DWORD); // weak
int __thiscall sub_40128A(_DWORD); // weak
int sub_4012A8(void); // weak
int __thiscall sub_4012B2(_DWORD); // weak
_DWORD __stdcall sub_4012BC(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_4012C6(_DWORD); // weak
int __thiscall sub_4012CB(_DWORD); // weak
_DWORD __cdecl sub_4012D0(HINSTANCE hInstance); // weak
_DWORD __stdcall sub_4012DF(_DWORD, _DWORD); // weak
int __thiscall sub_4012E9(_DWORD); // weak
int __thiscall sub_4012F3(_DWORD); // weak
_DWORD __cdecl sub_4012F8(_DWORD, _DWORD, _DWORD); // weak
int __thiscall sub_4012FD(_DWORD); // weak
_DWORD __stdcall sub_401307(_DWORD); // weak
_DWORD __stdcall sub_40130C(_DWORD); // weak
_DWORD __cdecl sub_401311(_DWORD, __int16, _DWORD); // weak
_DWORD __cdecl sub_401316(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_40131B(_DWORD); // weak
_DWORD __stdcall sub_401325(_DWORD, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_40132A(_DWORD); // weak
_DWORD __cdecl sub_401334(_DWORD, LPCSTR lpMultiByteStr); // weak
_DWORD __cdecl sub_40133E(_DWORD); // weak
_DWORD __stdcall sub_401348(char *cp, u_short hostshort, _DWORD, u_int wMsg); // weak
_DWORD __stdcall sub_401352(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_401357(_DWORD); // weak
_DWORD __stdcall sub_40137A(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_40137F(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_401389(_DWORD); // weak
_DWORD __cdecl sub_40138E(_DWORD, LPCSTR lpMultiByteStr); // weak
_DWORD __stdcall sub_4013B6(_DWORD, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_4013C0(_DWORD, _DWORD); // weak
int sub_4013C5(void); // weak
_DWORD __stdcall sub_4013D4(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // weak
int sub_4013E8(void); // weak
_DWORD __stdcall sub_4013ED(_DWORD); // weak
_DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD); // weak
_DWORD __cdecl sub_401406(_DWORD, __int16, __int16, _DWORD); // weak
int sub_401410(void); // weak
_DWORD __stdcall sub_40141A(_DWORD, __int16, __int16, _DWORD, _DWORD); // weak
int sub_401424(void); // weak
_DWORD __stdcall sub_401429(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_40142E(_DWORD); // weak
_DWORD __stdcall sub_401438(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_40143D(_DWORD); // weak
_DWORD __cdecl sub_401447(_DWORD, _DWORD); // weak
int sub_401451(void); // weak
_DWORD __stdcall sub_401456(HWND hWnd, _DWORD, u_short hostshort, u_int wMsg); // weak
_DWORD __stdcall sub_401460(_DWORD, _DWORD, _DWORD, _DWORD); // weak
_DWORD __cdecl sub_401465(_DWORD, char); // weak
int __thiscall sub_401474(_DWORD); // weak
signed int __cdecl sub_401910();
int __cdecl sub_401E60(int a1, signed int a2);
// int __usercall sub_403E00<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
int __cdecl sub_404760(int a1, char a2);
int __cdecl sub_405D10(int a1, unsigned __int8 a2);
int __cdecl sub_406740(int a1);
int __cdecl sub_406C20(int a1);
int __cdecl sub_407310(int a1);
int __cdecl sub_407830(int a1, char a2);
int __cdecl sub_407CF0(int a1, char a2);
int __cdecl sub_4082A0();
// int __usercall sub_408460<eax>(int a1<ebx>);
int __cdecl sub_4085E0(int a1);
int __cdecl sub_408680(int a1);
int __cdecl sub_40BD40(int a1, int a2);
int __cdecl sub_40BF90(int a1);
int __cdecl sub_40C3B0(int a1);
bool __cdecl sub_40CA00(int a1, signed int a2);
int __cdecl sub_40CAA0(int a1, int a2, int a3, int a4);
int __cdecl sub_40CE20(void *a1, char a2);
// int __usercall sub_40DEE0<eax>(int a1<ebx>);
// int __usercall sub_40DFF0<eax>(int a1<ebx>, int a2<esi>, char a3);
// int __usercall sub_40E440<eax>(int a1<ebx>, int a2<esi>, char a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63);
// int __usercall sub_40EDA0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_410B90(int a1, int a2, int a3, int a4);
// int __usercall sub_4119E0<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_411CA0<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_412140<eax>(int a1<ebx>, int a2, int a3);
// int __usercall sub_4121C0<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
// int __usercall sub_412550<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_4129D0<eax>(int a1<ebx>, int a2<esi>);
signed int __cdecl sub_413E00(char a1, char a2);
int __cdecl sub_415AB0(signed int a1);
int __thiscall sub_415E20(void *this);
signed int __cdecl sub_415F30();
// int __userpurge sub_415F60<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
// int __userpurge sub_416600<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6, int a7);
// int __userpurge sub_416970<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4);
// int __userpurge sub_416FA0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, signed int a5);
int __thiscall sub_421090(void *this, int a2, __int16 a3, __int16 a4);
int __thiscall sub_421120(void *this, int a2, __int16 a3, __int16 a4, int a5);
int __thiscall sub_4211B0(void *this, int a2, __int16 a3, __int16 a4, int a5, int a6);
int __thiscall sub_421250(void *this, int a2, __int16 a3, __int16 a4, int a5, int a6, int a7);
int __thiscall sub_421390(void *this, signed int a2);
int __thiscall sub_421480(void *this, signed int a2);
// int __userpurge sub_4215B0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int lpBuffer, int a5, int a6);
// int __userpurge sub_4219F0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char *lpBuffer);
// int __userpurge sub_421EE0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4);
// int __userpurge sub_421F70<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5);
int __stdcall sub_422110(int a1, int a2);
int __thiscall sub_422240(void *this, int a2);
int __thiscall sub_4222F0(void *this, int a2);
int __thiscall sub_4223D0(void *this, signed int a2, int a3);
// int __userpurge sub_4224A0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int lpBuffer, int a5);
// int __userpurge sub_422980<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6);
// int __userpurge sub_422C40<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5);
int __thiscall sub_423530(void *this, int a2, int a3);
// int __userpurge sub_4237C0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5);
// int __userpurge sub_423A20<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5);
// int __userpurge sub_423D50<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6, int a7);
// int __userpurge sub_423F00<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5);
// int __userpurge sub_4241A0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4, signed int lpBuffer);
int __thiscall sub_4243F0(void *this);
// int __userpurge sub_424450<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4, int a5);
// int __userpurge sub_424630<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4);
// int __userpurge sub_4246C0<eax>(int a1<ecx>, int a2<ebx>, int a3);
// int __usercall sub_424890<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>);
// int __usercall sub_424990<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>);
int __thiscall sub_424A20(int this);
int __thiscall sub_424AD0(void *this);
// int __userpurge sub_424B40<eax>(int a1<ecx>, int a2<ebx>, HWND hWnd, int a4, u_short hostshort, u_int wMsg);
// int __userpurge sub_424D10<eax>(int a1<ecx>, int a2<ebx>, const char *cp, u_short hostshort, int a5, u_int wMsg);
int __thiscall sub_4256A0(int this);
int __thiscall sub_425750(void *this, int a2, int a3);
int __thiscall sub_426030(int this, int a2, int a3);
int __thiscall sub_4262A0(void *this, const void *a2, int a3, int a4);
int __thiscall sub_4265B0(void *this, const void *a2, unsigned int a3);
int __thiscall sub_426710(int this);
// int __usercall sub_4267C0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>);
int __thiscall sub_426B00(void *this, int a2, int a3);
int __thiscall sub_427140(void *this);
int __thiscall sub_4271D0(int this);
int __thiscall sub_427240(void *this);
int __thiscall sub_427290(void *this, SOCKET s, u_int wMsg);
int __thiscall sub_427390(void *this, int a2);
// int __userpurge sub_4273F0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4);
void *__thiscall sub_427460(void *this);
// int __userpurge sub_4274A0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, LPCSTR lpPathName);
// int __userpurge sub_427660<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4);
// int __usercall sub_4278B0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_4278F0();
// int __usercall sub_427950<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_4279A0();
// int __usercall sub_4279F0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427A30();
// int __usercall sub_427A90<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427AE0();
// int __usercall sub_427B30<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427B70();
// int __usercall sub_427BB0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427C00();
// int __usercall sub_427C40<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427C80();
// int __usercall sub_427CC0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427D10();
// int __usercall sub_427D50<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427D90();
// int __usercall sub_427DD0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427E20();
// int __usercall sub_427E60<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427EA0();
// int __usercall sub_427EE0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427F30();
// int __usercall sub_427F70<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_427FB0();
// int __usercall sub_427FF0<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_428040();
// int __usercall sub_428080<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_4280C0();
// int __usercall sub_428100<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_428150();
// int __usercall sub_428190<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_428320<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_428430(int a1, int a2);
int __cdecl sub_428580(int a1, __int16 a2, __int16 a3);
int __cdecl sub_428600(int a1, __int16 a2);
int __cdecl sub_428720(int a1, __int16 a2, __int16 a3, int a4);
// int __usercall sub_4287E0<eax>(int a1<ebx>, HINSTANCE hInstance);
// int __usercall sub_428900<eax>(int a1<ebx>, HINSTANCE hInstance, int nCmdShow);
// int __usercall sub_4289E0<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_428EF0<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_429130<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_429310<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_429430<eax>(int a1<ebx>, int a2);
// int __userpurge sub_429AB0<eax>(int a1<ebx>, HINSTANCE a2, int a3, int a4, int a5);
// int __usercall sub_42A550<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_42BF80<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
// int __usercall sub_42C180<eax>(int a1<ebx>, int a2<esi>, int a3, LPCSTR lpMultiByteStr);
// int __usercall sub_42C3B0<eax>(int a1<ebx>, int a2<esi>, int a3, LPCSTR lpMultiByteStr);
// int __usercall sub_42C570<eax>(int a1<ebx>, int a2<esi>, char a3, int a4, int a5, int a6, int a7);
// int __usercall sub_42C630<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
// int __usercall sub_42EB10<eax>(int a1<ebx>, int a2<esi>);
signed int __cdecl sub_42EBF0();
// int __usercall sub_42EC20<eax>(int a1<ebx>, int a2<esi>, char a3);
// int __usercall sub_42ED60<eax>(int a1<ebx>, int a2<esi>);
signed int __cdecl sub_42EE80(int a1);
signed int __cdecl sub_42EEF0(int a1);
// int __usercall sub_42F6A0<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5, int a6, int a7, int a8);
int __cdecl sub_42FBA0(int a1);
// int __usercall sub_42FD40<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5);
// int __usercall sub_4302E0<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_430650<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_433540(int a1);
int __cdecl sub_434200(int a1, int a2);
// int __stdcall closesocket(SOCKET s);
// int __stdcall WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
// int __stdcall WSAAsyncSelect(SOCKET s, HWND hWnd, u_int wMsg, __int32 lEvent);
// int __stdcall listen(SOCKET s, int backlog);
// int __stdcall bind(SOCKET s, const struct sockaddr *name, int namelen);
// u_short __stdcall htons(u_short hostshort);
// int __stdcall gethostname(char *name, int namelen);
// SOCKET __stdcall socket(int af, int type, int protocol);
// int __stdcall send(SOCKET s, const char *buf, int len, int flags);
// int __stdcall WSAGetLastError();
// int __stdcall connect(SOCKET s, const struct sockaddr *name, int namelen);
// unsigned __int32 __stdcall inet_addr(const char *cp);
// int __stdcall recv(SOCKET s, char *buf, int len, int flags);
// char *__stdcall inet_ntoa(struct in_addr in);
// SOCKET __stdcall accept(SOCKET s, struct sockaddr *addr, int *addrlen);
// int __usercall sub_4343B0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, char a3);
// unsigned int __usercall sub_4344B0<eax>(int a1<ebx>, int a2<esi>, const void *a3, unsigned int a4, unsigned int a5, int a6);
// signed int __usercall sub_4346D0<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_4347B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, char *a5, char a6);
// int __usercall sub_434870<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5);
// int __usercall sub_4349A0<eax>(int a1<ebx>, int a2<esi>, const CHAR *a3, int a4, int a5);
// int __usercall sub_434A90<eax>(int a1<ebx>, int a2<esi>, const CHAR *a3, int a4);
void *__cdecl sub_434AB0(void *a1, unsigned __int8 a2, unsigned int a3);
// int __usercall sub_434B10<eax>(char a1<zf>, int result<eax>, int a3<ebx>, char a4<dil>, int a5<esi>);
int __cdecl sub_434B60();
void __cdecl sub_434B90(int a1);
int __cdecl sub_434BA0(int a1, int a2);
int __cdecl loc_434C01(int, int); // weak
void *__cdecl sub_434C80(void *a1, const void *a2, unsigned int a3);
int __cdecl loc_434CDC(int, int, int); // weak
int __cdecl loc_434DD8(int, int, int); // weak
int __cdecl loc_434E64(int, int, int); // weak
int __cdecl sub_434FC0(int a1);
int __cdecl sub_435040(int a1, int a2);
int __cdecl sub_435110();
void __cdecl sub_435140();
void __cdecl sub_435150();
// signed __int64 __usercall sub_4351BC<edx:eax>(double a1<st0>);
int __cdecl sub_4351F0(int a1, int a2);
// int __usercall sub_4352B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4);
// int __usercall sub_4353B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4);
// unsigned int __usercall sub_435500<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, unsigned int a5, int a6);
// int __usercall sub_4356D0<eax>(int a1<ebx>, int a2<esi>, int a3, LONG lDistanceToMove, DWORD dwMoveMethod);
int __cdecl sub_435800(int a1, int a2, unsigned int a3);
signed int __cdecl sub_435900(int a1, int a2, signed int a3);
// int __usercall sub_435940<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4);
// int __usercall sub_435BA0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
unsigned int __cdecl sub_435D30();
// unsigned int __usercall sub_435D70<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT uExitCode);
// unsigned int __usercall sub_435D90<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT uExitCode);
// unsigned int __usercall sub_435DF0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT uExitCode, int a5, int a6);
unsigned int __cdecl sub_435ED0(unsigned int a1, unsigned int a2);
int __cdecl sub_435F00(signed int a1, signed int lpBuffer, DWORD nNumberOfBytesToWrite);
signed int __cdecl sub_4361B0(UINT a1, LONG lDistanceToMove, DWORD dwMoveMethod);
signed int __cdecl sub_4362A0(signed int a1);
// int __usercall sub_436340<eax>(int a1<ebx>, int a2<esi>, unsigned int a3);
// int __usercall sub_436360<eax>(int ebx0<ebx>, int esi0<esi>, unsigned int a1, int a2, int a3, int a4);
// int __usercall sub_4363B0<eax>(int ebx0<ebx>, int esi0<esi>, unsigned int a1, int a2, int a3, int a4, int a5);
// int __usercall sub_436420<eax>(int ebx0<ebx>, int esi0<esi>, unsigned int a1, int a2, int a3, int a4);
// int __usercall sub_436760<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5, int a6, int a7);
// int __usercall sub_4367E0<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, int a5, int a6, int a7);
// int __usercall sub_436810<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, int a5, int a6, int a7, int a8);
// int __usercall sub_436D50<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, int a5, int a6, int a7);
// void __usercall sub_436D80(int a1<ebx>, int a2<esi>, int a3);
// void __usercall sub_436DA0(int a1<ebx>, int a2<esi>, int a3, signed int a4);
// int __usercall sub_4371B0<eax>(int a1<ebx>, int a2<esi>, int a3, signed int a4);
// signed int __usercall sub_4373D0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, unsigned __int8 a2, int a3);
// signed int __usercall sub_437460<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_4377C0(int a1);
bool __cdecl sub_437850(const void *lp, UINT_PTR ucb, int a3);
signed int __cdecl sub_4378A0(int a1);
// int __usercall sub_437A20<eax>(int ebx0<ebx>, int a2<esi>, int a1);
// int __usercall sub_437CB0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
// int __usercall sub_437F60<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
// signed int __usercall sub_438080<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
int __cdecl sub_4381D0(int (*a1)(void), int a2);
_DWORD __cdecl sub_438210(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_438220(_DWORD, _DWORD); // weak
_DWORD __cdecl sub_438230(_DWORD, _DWORD); // weak
// PEXCEPTION_RECORD __userpurge sub_438240<eax>(int a1<eax>, PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord);
int __stdcall loc_43826C(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord); // weak
// int __usercall sub_4382A0<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, int a5, int a6, int a7, int a8);
// void __usercall sub_438310(int a1<edi>, int a2<esi>, int a3, int a4, int a5, int a6, int a7);
// int __usercall sub_438380<eax>(int ebx0<ebx>, int edi0<edi>, int esi0<esi>, void *a1, int a2, int a3);
// int __usercall sub_4383C0<eax>(int a1<ebx>, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
int __cdecl loc_43845A(int, int, int, int, int, int, int); // weak
// int __usercall sub_438490<eax>(int a1<ebp>, int a2<ebx>, int a3<edi>, int a4<esi>);
int __cdecl sub_438520(int a1, int a2, int a3, int a4, int a5);
void __cdecl sub_4385B0(PVOID TargetFrame);
int __cdecl loc_4385C8(PVOID TargetFrame); // weak
signed int __cdecl sub_4385D0(int a1, int a2, int a3, int a4);
// int __usercall sub_4385F2<eax>(int a1<ebp>, int a2, int a3);
signed int __thiscall sub_43865A(int this);
void __cdecl sub_43867D();
// int __userpurge sub_438686<eax>(int result<eax>, int a2<ebp>, int a3);
int __stdcall loc_438690(int); // weak
// void __usercall sub_4386A0(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_438730<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, char a5);
int __cdecl sub_4387E0(int a1, int a2, int a3, void (__thiscall *a4)(_DWORD));
// int __usercall sub_438851<eax>(int a1<ebp>);
// int __usercall sub_438880<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_438930<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_438950<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_4389A0(int a1, int a2, int a3, void (__thiscall *a4)(_DWORD));
// int __usercall sub_438A15<eax>(int a1<ebp>);
// int __userpurge sub_438A50<eax>(int a1<eax>, int a2, int a3, int a4, void (__thiscall *a5)(_DWORD));
// int __usercall sub_438AD0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
// int __usercall sub_438B00<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, char *a5, char a6);
_DWORD __cdecl sub_438B90(_DWORD); // weak
signed int __cdecl sub_438BF0(int a1);
signed int __cdecl sub_438CB0();
signed int __cdecl sub_438CC0(int a1);
int __cdecl sub_438DA0(int a1, int a2, unsigned int a3);
// signed int __usercall sub_438E50<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, LPCSTR lpFileName, int a5);
// signed int __usercall sub_438F90<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, HANDLE hFindFile, int a5);
int __cdecl sub_4390C0(HANDLE hFindFile); // idb
// signed int __usercall sub_4390F0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, const FILETIME *lpFileTime);
// LONG __usercall sub_439180<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>);
// unsigned int __usercall sub_4392BA<eax>(int a1<ebx>, int a2<ebp>, int a3<edi>, int a4<esi>);
// int __usercall sub_4392E0<eax>(int ebx0<ebx>, int a2<esi>, int a1);
// void __usercall sub_439310(int a1<ebx>, int a2<esi>, int a3);
// signed int __usercall sub_439340<eax>(int a1<ebx>, int esi0<esi>, unsigned __int8 Buffer, int a2);
// int __usercall sub_4395C0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3);
// signed int __usercall sub_43A2F0<eax>(int a1<ebx>, int esi0<esi>, unsigned __int8 Buffer, int a2, int a3);
// signed int __usercall sub_43A370<eax>(int a1<ebx>, int esi0<esi>, unsigned __int8 Buffer, int a2, int a3, int a4);
// signed int __usercall sub_43A3B0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3, int a4);
int __cdecl sub_43A400(int a1);
__int64 __cdecl sub_43A420(int a1);
__int16 __cdecl sub_43A440(int a1);
void __cdecl sub_43A460();
// signed int __usercall sub_43A570<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5, int a6, const char *a7, char a8);
// bool __usercall sub_43A900<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7, int a8);
signed int __cdecl sub_43AC10(UINT a1);
// int __usercall sub_43AD00<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_43ADA0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, char *a5, int a6);
// int __usercall sub_43C180<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4);
// signed int __usercall sub_43C1E0<eax>(int a1<ebx>, int a2<esi>, int a3);
// signed int __usercall sub_43C240<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
// signed int __usercall sub_43C260<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5);
// signed int __usercall sub_43C2A0<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_43C480<eax>(int a1<ebx>, int a2<esi>, LPCSTR lpFileName, int a4, int a5, int a6);
// int __usercall sub_43C810<eax>(int a1<ebx>, int a2<esi>);
// signed int __usercall sub_43C900<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT CodePage);
UINT __cdecl sub_43CC00(UINT a1);
signed int __cdecl sub_43CC60(int a1);
int __cdecl sub_43CCE0();
// BOOL __usercall sub_43CD60<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// signed int __usercall sub_43D090<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
int __cdecl sub_43D0D0(int a1, unsigned __int8 a2);
int __cdecl sub_43D190();
bool __cdecl sub_43D1B0();
bool __cdecl sub_43D210();
// int __usercall sub_43D260<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4);
int __cdecl sub_43D310(int a1);
bool __cdecl sub_43D3F0(int a1);
// int __usercall sub_43D420<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6);
int __cdecl sub_43D470(char *a1, int a2, int a3, int a4);
int __cdecl sub_43D630(char *a1, int a2, int a3);
int __cdecl sub_43D7C0(char *a1, int a2, int a3, int a4);
int __cdecl sub_43D8C0(char *a1, int a2, int a3, int a4);
int __cdecl sub_43D900(char *a1, int a2, int a3);
int __cdecl sub_43D930(char *a1, int a2, int a3, int a4, int a5);
void __cdecl sub_43D990(int a1, int a2);
// int __usercall sub_43D9C0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4, __int16 a5);
unsigned __int64 __stdcall sub_43DA80(__int64 a1, __int64 a2);
int __cdecl sub_43DAC0(int, int, DWORD nNumberOfBytesToRead); // idb
// int __usercall sub_43DF20<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_43E1B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// int __usercall sub_43E1E0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
bool __cdecl sub_43E560(int a1);
int __cdecl sub_43E860(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
_UNKNOWN *__cdecl sub_43EA60(signed int *a1);
// signed int __usercall sub_43EC30<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, signed int a5, int a6, int a7, int a8, int a9, int a10);
unsigned int __cdecl sub_43ED20(unsigned int a1);
// UINT __usercall sub_43EDB0<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_43F120<eax>(int a1<ebx>, int a2<esi>);
int __cdecl sub_43F250(int, HANDLE hHandle); // idb
signed int __cdecl sub_43F300(signed int a1);
signed int __cdecl sub_43F3D0(signed int a1);
bool __cdecl sub_43F550(int a1);
LPVOID __cdecl sub_43F580(int dwBytes);
LPVOID __cdecl sub_43F5A0(int dwBytes, int a2);
LPVOID __cdecl sub_43F600(int dwBytes);
signed int __cdecl sub_43F660();
LPVOID __cdecl sub_43F670(LPVOID lpMem, int dwBytes);
LPVOID __cdecl sub_43F700(int lpMem, int dwBytes);
void __cdecl sub_43F8D0(LPVOID lpMem);
signed int __cdecl sub_43F920();
signed int __cdecl sub_43F990(int a1);
signed int __cdecl sub_43FAB0();
unsigned int __cdecl sub_43FB10(int a1);
bool __cdecl sub_43FB70(int a1, int a2);
int __cdecl sub_43FBD0(unsigned int a1, int a2);
int __cdecl sub_4401A0(int a1);
char *__cdecl sub_4406E0();
signed int __cdecl sub_4407F0(int a1);
signed int __cdecl sub_4409E0(int a1, int a2, int a3);
signed int __cdecl sub_441100();
// int __usercall sub_441720<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int lp, int a5, int a6, int a7, int a8, int a9, int a10, char a11);
// int __usercall sub_441810<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int ExceptionRecord, int TargetFrame, int a6, int a7, int a8, char a9, int a10, int a11);
// int __usercall sub_441AB0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, PEXCEPTION_RECORD ExceptionRecord, int TargetFrame, int a6, int a7, int a8, int a9, int a10, int a11);
signed int __cdecl sub_441BD0(int a1, int a2, int a3);
// unsigned int __usercall sub_441C90<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, int a5, int a6, int a7, int a8);
// int __usercall sub_441D90<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
// int __usercall sub_441DC0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, PEXCEPTION_RECORD ExceptionRecord, int TargetFrame, int a6, int a7, int a8, unsigned int a9, int a10, int a11, int a12, void *a13);
// int __usercall sub_441E80<eax>(int a1<eax>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// int __usercall sub_441F53<eax>(int a1<ebp>);
bool __cdecl sub_441FD0(int a1);
// unsigned int __usercall sub_442020<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, int a5, int a6, unsigned int a7, int a8);
// int __usercall sub_4422A0<eax>(int result<eax>, int a2);
int __cdecl sub_442330(int a1, int a2);
// void __userpurge sub_442380(int a1<ebp>, int a2<edi>, int a3<esi>, int a4, int a5, int a6);
// unsigned int __usercall sub_4423D0<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>);
// unsigned int __usercall sub_44243A<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// unsigned int __usercall sub_442480<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>);
// unsigned int __usercall sub_4424EA<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>);
// signed int __usercall sub_442510<eax>(int a1<ebx>, int a2<esi>, int a3);
// int __usercall sub_442670<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
// signed int __usercall sub_44272C<eax>(int a1<ebp>);
signed int __cdecl sub_442810(UINT a1);
// int __usercall sub_4428C0<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_4429F0<eax>(int a1<ebx>, int a2<esi>);
LONG __cdecl sub_442A10(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo);
unsigned int __cdecl sub_442BC0(int a1);
// unsigned __int8 *__usercall sub_442C20<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// int __usercall sub_442CE0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// int __usercall sub_442E30<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
int __cdecl sub_442F10(int a1, int a2, int a3, int a4, int a5);
// int __usercall sub_443340<eax>(int a1<ebx>, int a2<esi>);
// signed int __usercall sub_443560<eax>(int a1<ebx>, int a2<esi>);
// signed int __usercall sub_4435B0<eax>(int ebx0<ebx>, int a2<esi>, int a1);
// int __usercall sub_4437C0<eax>(int ebx0<ebx>, int a2<esi>, int a1);
int __cdecl sub_443890(signed int a1);
int __cdecl sub_4438C0(LPSTR lpMultiByteStr, const WCHAR WideCharStr); // idb
__int64 __stdcall sub_443960(unsigned __int64 a1, unsigned int a2, unsigned int a3);
int __stdcall sub_4439D0(unsigned __int64 a1, __int64 a2);
int __cdecl sub_443A50(unsigned int a1, int a2, unsigned int a3);
int __cdecl sub_443AA0(unsigned int a1, int a2, unsigned int a3, int a4);
int __stdcall sub_443C20(__int64 a1, int a2, unsigned int a3, int a4);
// int __usercall sub_443D40<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3, char a4);
// int __usercall sub_443E40<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3, int a4);
signed int __stdcall sub_4440E0(int a1);
// signed int __usercall sub_444150<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
unsigned int __cdecl sub_444310(int a1);
int __cdecl sub_444370(int a1, int a2, int a3);
// signed int __usercall sub_444430<eax>(int a1<ebx>, int a2<esi>, LPWSTR lpWideCharStr, LPCSTR lpMultiByteStr, unsigned int a5);
// int __usercall sub_4446F0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4);
// int __usercall sub_444980<eax>(__int64 a1<edx:eax>, unsigned __int8 a2<cl>);
// signed int __usercall sub_4449A0<eax>(int a1<ebx>, int a2<esi>, int a3, int a4);
// int __usercall sub_444AE0<eax>(int a1<ebx>, int a2<esi>, LPCSTR lpFileName, __int16 a4, int a5);
// int __usercall sub_444B20<eax>(int a1<ebx>, int a2<esi>, LPCSTR lpFileName, __int16 a4, int a5, int a6);
// int __usercall sub_445010<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, LCID Locale, DWORD dwMapFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPSTR lpDestStr, int cchDest, UINT CodePage, int a12);
int __cdecl sub_445320(int a1, int a2);
// BOOL __usercall sub_445370<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, DWORD dwInfoType, LPCSTR lpMultiByteStr, int cbMultiByte, LPWORD lpCharType, UINT CodePage, LCID Locale, int a11);
int __cdecl sub_445570(int a1, int a2);
int __cdecl sub_4455C0(int a1, int a2);
signed int __cdecl sub_445640(__int16 a1);
signed __int16 __cdecl sub_4457C0(int a1);
signed int __cdecl sub_445920(char a1);
// int __usercall sub_4459E0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4);
signed int __cdecl sub_445B10(int a1, signed int a2);
signed int __cdecl sub_445BA0(int a1, signed int a2);
signed int __cdecl sub_445C50(int a1, signed int a2);
int __cdecl sub_445D30(int a1, int a2);
int __cdecl sub_445D80(int a1);
signed int __cdecl sub_445DB0(int a1);
int __cdecl sub_445DF0(int a1, signed int a2);
int __cdecl sub_445EE0(int a1, int a2, int a3);
int __cdecl sub_446130(int a1, int a2);
int __cdecl sub_446150(int a1, int a2);
signed int __cdecl sub_446170(int a1, int a2);
// int __usercall sub_446230<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5);
// int __usercall sub_4462B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5);
void *__cdecl sub_4462F0(int a1, int a2, int a3);
int *__cdecl sub_4463F0(char a1);
int __cdecl sub_446470(int a1, int a2);
void *__cdecl sub_4465E0(void *a1, const void *a2, unsigned int a3);
int __cdecl loc_44663C(int, int, int); // weak
int __cdecl loc_446738(int, int, int); // weak
int __cdecl loc_4467C4(int, int, int); // weak
// int __usercall sub_446920<eax>(int a1<ebx>, int a2<esi>);
// int __usercall sub_446930<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4);
// LONG __userpurge TopLevelExceptionFilter<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, struct _EXCEPTION_POINTERS *a4);
LONG (__stdcall *__cdecl sub_446A60())(struct _EXCEPTION_POINTERS *);
LPTOP_LEVEL_EXCEPTION_FILTER __cdecl sub_446A80();
signed int __cdecl sub_446AA0(const void *lp, UINT_PTR ucb);
int __cdecl sub_446AD0(LPVOID lp, UINT_PTR ucb); // idb
int __cdecl sub_446B00(FARPROC lpfn); // idb
// unsigned int __usercall sub_446B30<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// int __usercall sub_446B50<eax>(int a1<ebx>, int a2<esi>);
bool __cdecl sub_446D00(unsigned __int8 a1);
bool __cdecl sub_446D80(unsigned __int8 a1, int a2, char a3);
// signed int __usercall sub_446DF0<eax>(int a1<ebx>, int a2<esi>, signed int a3, LONG lDistanceToMove);
signed int __cdecl sub_447060(unsigned int a1, unsigned int a2, int a3);
signed int __cdecl sub_4470A0(int a1, int a2);
int __cdecl sub_447150(int a1);
int __cdecl sub_4471B0(int a1);
int __cdecl sub_447220(int a1, int a2, int a3);
// int __usercall sub_447360<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
signed int __cdecl sub_447EE0(unsigned int a1, unsigned int a2, __int16 a3, signed int a4, char a5, int a6);
// int __usercall sub_448400<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, PCNZCH lpMultiByteStr, PCNZCH lpString2, int cchCount2);
// signed int __usercall sub_448450<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
signed int __cdecl sub_448500(signed int a1, int a2);
int __cdecl sub_448600(int a1, int a2);
int __cdecl loc_4488FC(int, int); // weak
char *__cdecl sub_448A40(int a1, signed int a2, int a3);
// int __usercall sub_448B10<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, LCID Locale, DWORD dwCmpFlags, PCNZCH lpMultiByteStr, signed int cbMultiByte, PCNZCH lpString2, signed int cchCount2, UINT CodePage);
int __cdecl sub_448F10(int a1, int a2);
// signed int __usercall sub_448F60<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5);
// int __usercall sub_449240<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, const CHAR *a4, int a5);
// int *__usercall sub_4492C0<eax>(int a1<ebx>, int a2<esi>, int *a3);
// void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue);
// LPCSTR __usercall sub_449530<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, LPCSTR lpMultiByteStr);
// int __usercall sub_44FA00<eax>(int a1<ebp>);
// int __usercall SEH_427140<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7);
// int __usercall sub_44FA20<eax>(int a1<ebp>);
// LONG __usercall start<eax>(int a1<ebx>, int a2<edi>, int a3<esi>);
// HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h);
// COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color);
// BOOL __stdcall TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c);
// HGDIOBJ __stdcall GetStockObject(int i);
// HFONT __stdcall CreateFontA(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName);
// BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
// DWORD __stdcall GetLastError();
// int __stdcall CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2);
// int __stdcall CompareStringA(LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2);
// BOOL __stdcall SetEndOfFile(HANDLE hFile);
// BOOL __stdcall IsBadCodePtr(FARPROC lpfn);
// LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
// BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
// BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
// int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest);
// DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer);
// HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// int __stdcall MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
// LPWCH __stdcall GetEnvironmentStringsW();
// LPCH __stdcall GetEnvironmentStrings();
// BOOL __stdcall FreeEnvironmentStringsW(LPWCH);
// BOOL __stdcall FreeEnvironmentStringsA(LPCH);
// LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo);
// BOOL __stdcall FlushFileBuffers(HANDLE hFile);
// LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
// BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
// void __stdcall Sleep(DWORD dwMilliseconds);
// BOOL __stdcall MoveFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName);
// BOOL __stdcall DeleteFileA(LPCSTR lpFileName);
// DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize);
// int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest);
// BOOL __stdcall SetCurrentDirectoryA(LPCSTR lpPathName);
// HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize);
// BOOL __stdcall HeapDestroy(HANDLE hHeap);
// BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
// LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
// LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
// BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle);
// DWORD __stdcall GetFileType(HANDLE hFile);
// UINT __stdcall SetHandleCount(UINT uNumber);
// int __stdcall WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
// BOOL __stdcall ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
// UINT __stdcall GetOEMCP();
// UINT __stdcall GetACP();
// BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo);
// BOOL __stdcall CloseHandle(HANDLE hObject);
// LONG __stdcall InterlockedIncrement(volatile LONG *lpAddend);
// HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName);
// FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
// void __stdcall OutputDebugStringA(LPCSTR lpOutputString);
// LONG __stdcall InterlockedDecrement(volatile LONG *lpAddend);
// DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation);
// void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime);
// void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime);
// void __stdcall ExitProcess(UINT uExitCode);
// BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode);
// HANDLE __stdcall GetCurrentProcess();
// BOOL __stdcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
// DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
// BOOL __stdcall IsBadWritePtr(LPVOID lp, UINT_PTR ucb);
// BOOL __stdcall IsBadReadPtr(const void *lp, UINT_PTR ucb);
// BOOL __stdcall HeapValidate(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
// HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
// BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);
// BOOL __stdcall FindClose(HANDLE hFindFile);
// BOOL __stdcall FileTimeToSystemTime(const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime);
// BOOL __stdcall FileTimeToLocalFileTime(const FILETIME *lpFileTime, LPFILETIME lpLocalFileTime);
// HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
// void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo);
// LPSTR __stdcall GetCommandLineA();
// DWORD __stdcall GetVersion();
// void __stdcall DebugBreak();
// HANDLE __stdcall GetStdHandle(DWORD nStdHandle);
// BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue);
// int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
// LPSTR __stdcall CharNextA(LPCSTR lpsz);
// BOOL __stdcall SetWindowTextA(HWND hWnd, LPCSTR lpString);
// ATOM __stdcall RegisterClassA(const WNDCLASSA *lpWndClass);
// HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName);
// HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName);
// BOOL __stdcall UpdateWindow(HWND hWnd);
// BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow);
// HWND __stdcall CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);
// int __stdcall ReleaseDC(HWND hWnd, HDC hDC);
// HDC __stdcall GetDC(HWND hWnd);
// LRESULT __stdcall DispatchMessageA(const MSG *lpMsg);
// BOOL __stdcall TranslateMessage(const MSG *lpMsg);
// BOOL __stdcall GetMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
// UINT_PTR __stdcall SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc);


//----- (00401910) --------------------------------------------------------
signed int __cdecl sub_401910()
{
  return -858993460;
}

//----- (00401E60) --------------------------------------------------------
int __cdecl sub_401E60(int a1, signed int a2)
{
  int v2; // eax@3
  char v4; // [sp+0h] [bp-68h]@0
  int v5; // [sp+4h] [bp-64h]@0
  int v6; // [sp+8h] [bp-60h]@0
  char v7; // [sp+Ch] [bp-5Ch]@1
  int v8; // [sp+4Ch] [bp-1Ch]@111
  int v9; // [sp+50h] [bp-18h]@8
  int v10; // [sp+54h] [bp-14h]@8
  int v11; // [sp+58h] [bp-10h]@8
  int v12; // [sp+5Ch] [bp-Ch]@8
  int v13; // [sp+60h] [bp-8h]@6
  int v14; // [sp+64h] [bp-4h]@1

  memset(&v7, -858993460, 0x5Cu);
  v14 = *(_WORD *)a1;
  if ( v14 > 0 && v14 < 6500 )
  {
    if ( a2 < 500000 )
    {
      v13 = sub_4012C6(a1);
      if ( v13 < 3 )
      {
        v12 = word_8AD52E[70 * v14];
        v11 = sub_401190(a1, 60);
        v10 = sub_401190(a1, 2);
        v9 = sub_40133E(a1);
        if ( v12 != 64 && v12 != 192 )
        {
          if ( v11 >= 8 || v10 >= 12 )
          {
            v2 = 1;
            return sub_434B10(1, v2, v6, v4, v5);
          }
        }
        else
        {
          if ( v11 >= 12 || v10 >= 27 )
          {
            v2 = 1;
            return sub_434B10(1, v2, v6, v4, v5);
          }
        }
        if ( v9 <= 0
          && v14 != 419
          && v14 != 420
          && v14 != 657
          && (v14 < 470 || v14 >= 495)
          && (v14 < 3310 || v14 > 3999) )
        {
          if ( v14 < 2300 || v14 > 2386 )
          {
            if ( v14 >= 551
              && v14 <= 562
              && *(_BYTE *)(a1 + 2)
              && *(_BYTE *)(a1 + 2) != 59
              && *(_BYTE *)(a1 + 4)
              && *(_BYTE *)(a1 + 4) != 59 )
            {
              v2 = 1;
            }
            else
            {
              if ( v14 < 667 || v14 > 671 )
              {
                if ( v14 < 2391 || v14 > 2416 )
                {
                  if ( (v14 < 315 || v14 > 341) && (v14 < 2330 || v14 > 2388) && v14 != 3327 && v14 != 3140 )
                  {
                    if ( (v14 < 777 || v14 > 785) && (v14 < 3173 || v14 > 3190) )
                    {
                      if ( v14 != 4013 && v14 != 4014 )
                      {
                        if ( v14 < 4016 || v14 > 4025 )
                        {
                          if ( v14 < 4114 || v14 > 4116 )
                          {
                            if ( v14 == 4127 )
                            {
                              v2 = 1;
                            }
                            else
                            {
                              if ( v14 < 4128 || v14 > 4130 )
                              {
                                if ( v14 == 4110 )
                                {
                                  v2 = 1;
                                }
                                else
                                {
                                  if ( v14 == 3170 )
                                  {
                                    v2 = 1;
                                  }
                                  else
                                  {
                                    if ( v14 < 4051 || v14 > 4055 )
                                    {
                                      if ( v14 == 5338 )
                                      {
                                        v2 = 1;
                                      }
                                      else
                                      {
                                        if ( v14 != 412 && v14 != 413 )
                                        {
                                          if ( v14 < 1760 || v14 > 1763 )
                                          {
                                            switch ( v14 )
                                            {
                                              case 1742:
                                                v2 = 1;
                                                break;
                                              case 4010:
                                                v2 = 1;
                                                break;
                                              case 4011:
                                                v2 = 1;
                                                break;
                                              case 4900:
                                                v2 = 1;
                                                break;
                                              case 4901:
                                                v2 = 1;
                                                break;
                                              case 4902:
                                                v2 = 1;
                                                break;
                                              case 4007:
                                                v2 = 1;
                                                break;
                                              case 4104:
                                                v2 = 1;
                                                break;
                                              case 4140:
                                                v2 = 1;
                                                break;
                                              case 4049:
                                                v2 = 1;
                                                break;
                                              default:
                                                if ( v14 < 4152 || v14 > 4156 )
                                                {
                                                  if ( v14 == 4141 )
                                                  {
                                                    v2 = 1;
                                                  }
                                                  else
                                                  {
                                                    if ( v14 < 5110 || v14 > 5133 )
                                                    {
                                                      v8 = dword_8AD528[35 * v14];
                                                      v2 = v8 >= 500000;
                                                    }
                                                    else
                                                    {
                                                      v2 = 1;
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  v2 = 1;
                                                }
                                                break;
                                            }
                                          }
                                          else
                                          {
                                            v2 = 1;
                                          }
                                        }
                                        else
                                        {
                                          v2 = 1;
                                        }
                                      }
                                    }
                                    else
                                    {
                                      v2 = 1;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                v2 = 1;
                              }
                            }
                          }
                          else
                          {
                            v2 = 1;
                          }
                        }
                        else
                        {
                          v2 = 1;
                        }
                      }
                      else
                      {
                        v2 = 1;
                      }
                    }
                    else
                    {
                      v2 = 1;
                    }
                  }
                  else
                  {
                    v2 = 1;
                  }
                }
                else
                {
                  v2 = 1;
                }
              }
              else
              {
                v2 = 1;
              }
            }
          }
          else
          {
            v2 = 1;
          }
        }
        else
        {
          v2 = 1;
        }
      }
      else
      {
        v2 = 1;
      }
    }
    else
    {
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 401190: using guessed type _DWORD __cdecl sub_401190(_DWORD, _DWORD);
// 4012C6: using guessed type _DWORD __cdecl sub_4012C6(_DWORD);
// 40133E: using guessed type _DWORD __cdecl sub_40133E(_DWORD);
// 8AD528: using guessed type int dword_8AD528[];
// 8AD52E: using guessed type __int16 word_8AD52E[];

//----- (00403E00) --------------------------------------------------------
int __usercall sub_403E00<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  int v4; // eax@1
  char v6; // [sp+0h] [bp-68h]@0
  int v7; // [sp+4h] [bp-64h]@0
  int v8; // [sp+8h] [bp-60h]@0
  char v9; // [sp+Ch] [bp-5Ch]@1
  int v10; // [sp+4Ch] [bp-1Ch]@1
  int v11; // [sp+50h] [bp-18h]@1
  int v12; // [sp+54h] [bp-14h]@1
  int v13; // [sp+58h] [bp-10h]@1
  int v14; // [sp+5Ch] [bp-Ch]@1
  int v15; // [sp+60h] [bp-8h]@1
  int v16; // [sp+64h] [bp-4h]@1

  memset(&v9, -858993460, 0x5Cu);
  v16 = *(_WORD *)a3;
  LOBYTE(v15) = *(_BYTE *)(a3 + 2);
  LOBYTE(v14) = *(_BYTE *)(a3 + 3);
  LOBYTE(v13) = *(_BYTE *)(a3 + 4);
  LOBYTE(v12) = *(_BYTE *)(a3 + 5);
  LOBYTE(v11) = *(_BYTE *)(a3 + 6);
  LOBYTE(v10) = *(_BYTE *)(a3 + 7);
  v4 = sub_4343B0(a1, a2, a4, (int)" %4.4x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x", *(_WORD *)a3);
  return sub_434B10(1, v4, v8, v6, v7);
}

//----- (00404760) --------------------------------------------------------
int __cdecl sub_404760(int a1, char a2)
{
  int v2; // eax@3
  char v4; // [sp+0h] [bp-88h]@0
  int v5; // [sp+4h] [bp-84h]@0
  int v6; // [sp+8h] [bp-80h]@0
  char v7; // [sp+Ch] [bp-7Ch]@1
  int v8; // [sp+4Ch] [bp-3Ch]@162
  int v9; // [sp+50h] [bp-38h]@143
  int v10; // [sp+54h] [bp-34h]@114
  int k; // [sp+58h] [bp-30h]@104
  int v12; // [sp+5Ch] [bp-2Ch]@95
  int j; // [sp+60h] [bp-28h]@92
  int v14; // [sp+64h] [bp-24h]@80
  int v15; // [sp+68h] [bp-20h]@66
  int v16; // [sp+6Ch] [bp-1Ch]@66
  int v17; // [sp+70h] [bp-18h]@46
  int i; // [sp+74h] [bp-14h]@43
  int v19; // [sp+78h] [bp-10h]@4
  int v20; // [sp+7Ch] [bp-Ch]@4
  int v21; // [sp+80h] [bp-8h]@1
  int v22; // [sp+84h] [bp-4h]@1

  memset(&v7, -858993460, 0x7Cu);
  v22 = 0;
  v21 = *(_WORD *)a1;
  if ( v21 > 0 && v21 <= 6500 )
  {
    v20 = word_8AD52C[70 * v21];
    v19 = word_8AD52E[70 * v21];
    if ( (unsigned __int8)a2 != 67 && (unsigned __int8)a2 != 68 || v20 >= 41 && v20 <= 50 )
    {
      if ( (unsigned __int8)a2 == 42 && (*(_BYTE *)(a1 + 4) == 71 || *(_BYTE *)(a1 + 6) == 71) )
        a2 = 71;
      if ( (unsigned __int8)a2 == 2 && v19 == 32 && (*(_BYTE *)(a1 + 4) == 73 || *(_BYTE *)(a1 + 6) == 73) )
        a2 = 73;
      if ( (unsigned __int8)a2 == 46 && (*(_BYTE *)(a1 + 4) == 70 || *(_BYTE *)(a1 + 6) == 70) )
        a2 = 70;
      if ( (unsigned __int8)a2 == 45 && (*(_BYTE *)(a1 + 4) == 69 || *(_BYTE *)(a1 + 6) == 69) )
        a2 = 69;
      if ( (unsigned __int8)a2 == 53 && (*(_BYTE *)(a1 + 4) == 72 || *(_BYTE *)(a1 + 6) == 72) )
        a2 = 72;
      if ( (unsigned __int8)a2 == 1 )
        v22 += word_8AD4EE[70 * v21];
      if ( (unsigned __int8)a2 == 22 )
        v22 += word_8AD4F0[70 * v21];
      if ( (unsigned __int8)a2 == 23 )
        v22 += word_8AD4F2[70 * v21];
      if ( (unsigned __int8)a2 == 24 )
        v22 += word_8AD4F4[70 * v21];
      if ( (unsigned __int8)a2 == 25 )
        v22 += word_8AD4F6[70 * v21];
      if ( (unsigned __int8)a2 == 17 )
        v22 += (unsigned __int16)word_8AD52E[70 * v21];
      if ( (unsigned __int8)a2 != 78 )
      {
        for ( i = 0; i < 12; ++i )
        {
          if ( *(&word_8AD4F8[70 * v21] + 2 * i) == (unsigned __int8)a2 )
          {
            v17 = *(&word_8AD4FA[70 * v21] + 2 * i);
            if ( (unsigned __int8)a2 == 26 && v17 == 1 )
              v17 = 10;
            v22 += v17;
          }
        }
      }
      if ( (signed int)*(_WORD *)a1 < 2330 || (signed int)*(_WORD *)a1 >= 2390 )
      {
        if ( (signed int)*(_WORD *)a1 < 3980 || (signed int)*(_WORD *)a1 >= 4000 )
        {
          for ( j = 0; j < 3; ++j )
          {
            if ( *(_BYTE *)(a1 + 2 * j + 2) == (unsigned __int8)a2 )
            {
              v12 = *(_BYTE *)(a1 + 2 * j + 3);
              if ( (unsigned __int8)a2 == 26 && v12 == 1 )
                v12 = 10;
              v22 += v12;
            }
          }
          if ( (unsigned __int8)a2 == 49
            || (unsigned __int8)a2 == 50
            || (unsigned __int8)a2 == 51
            || (unsigned __int8)a2 == 52 )
          {
            for ( k = 0; k < 12; ++k )
            {
              if ( *(&word_8AD4F8[70 * v21] + 2 * k) == 54 )
                v22 += *(&word_8AD4FA[70 * v21] + 2 * k);
            }
            for ( k = 0; k < 3; ++k )
            {
              if ( *(_BYTE *)(a1 + 2 * k + 2) == 54 )
                v22 += *(_BYTE *)(a1 + 2 * k + 3);
            }
          }
          v10 = sub_4012C6(a1);
          if ( (signed int)*(_WORD *)a1 <= 40 )
            v10 = 0;
          if ( v10 >= 9 && v19 & 0xF00 )
            ++v10;
          if ( v10
            && (unsigned __int8)a2 != 33
            && (unsigned __int8)a2 != 18
            && (unsigned __int8)a2 != 17
            && (unsigned __int8)a2 != 21
            && (unsigned __int8)a2 != 27
            && (unsigned __int8)a2 != 1
            && (unsigned __int8)a2 != 22
            && (unsigned __int8)a2 != 23
            && (unsigned __int8)a2 != 24
            && (unsigned __int8)a2 != 25
            && (unsigned __int8)a2 != 38
            && (unsigned __int8)a2 != 78
            && (unsigned __int8)a2 != 84
            && (unsigned __int8)a2 != 86
            && (unsigned __int8)a2 != 112
            && (unsigned __int8)a2 != 87
            && (unsigned __int8)a2 != 88
            && (unsigned __int8)a2 != 48
            && (unsigned __int8)a2 != 47
            && (unsigned __int8)a2 != 113 )
          {
            if ( v10 > 10 )
            {
              if ( v10 >= 11 )
              {
                v9 = v10 - 10;
                if ( v10 == 11 )
                {
                  v9 = 220;
                }
                else
                {
                  switch ( v9 )
                  {
                    case 2:
                      v9 = 250;
                      break;
                    case 3:
                      v9 = 280;
                      break;
                    case 4:
                      v9 = 320;
                      break;
                    case 5:
                      v9 = 370;
                      break;
                  }
                }
                v22 *= 10;
                v22 = v9 * v22 / 100;
                v22 /= 10;
              }
            }
            else
            {
              v22 *= v10 + 10;
              v22 /= 10;
            }
          }
          if ( (unsigned __int8)a2 == 29 )
          {
            if ( v22 >= 3 )
              v22 = 2;
            if ( v22 > 0 && v10 >= 9 )
              ++v22;
          }
          if ( (unsigned __int8)a2 == 56 || (unsigned __int8)a2 == 57 )
          {
            LOBYTE(v8) = v22;
            v22 = (unsigned __int8)v22;
          }
          if ( (unsigned __int8)a2 == 48 || (unsigned __int8)a2 == 47 )
            v22 *= v10;
          if ( (unsigned __int8)a2 == 33 && (v22 < 0 || v22 > 7) )
            v22 = 0;
          v2 = v22;
        }
        else
        {
          v14 = *(_WORD *)a1 - 3980;
          switch ( a2 )
          {
            case 2:
              v2 = dword_47D720[6 * v14];
              break;
            case 0x3C:
              v2 = dword_47D724[6 * v14];
              break;
            case 0x28:
              v2 = dword_47D728[6 * v14];
              break;
            default:
              if ( (unsigned __int8)a2 != 49
                && (unsigned __int8)a2 != 50
                && (unsigned __int8)a2 != 51
                && (unsigned __int8)a2 != 52 )
                v2 = v22;
              else
                v2 = dword_47D72C[6 * v14];
              break;
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x50:
            v2 = *(_WORD *)(a1 + 2);
            break;
          case 0x51:
            v2 = *(_BYTE *)(a1 + 4);
            break;
          case 0x4F:
            v2 = *(_BYTE *)(a1 + 5);
            break;
          case 0x52:
            v2 = *(_BYTE *)(a1 + 6);
            break;
          default:
            if ( (unsigned __int8)a2 != 83 )
            {
              if ( (signed int)*(_WORD *)a1 >= 2362
                && (signed int)*(_WORD *)a1 < 2390
                && (signed int)*(_WORD *)(a1 + 2) > 0 )
              {
                v16 = *(_BYTE *)(a1 + 4);
                v15 = *(_WORD *)a1 - 2360;
                if ( (unsigned __int8)a2 == 2 )
                {
                  v2 = dword_47D450[6 * v15] * (v16 + 20) / 100;
                  return sub_434B10(1, v2, v6, v4, v5);
                }
                if ( (unsigned __int8)a2 == 60 )
                {
                  v2 = dword_47D454[6 * v15] * (v16 + 15) / 100;
                  return sub_434B10(1, v2, v6, v4, v5);
                }
                if ( (unsigned __int8)a2 == 40 )
                {
                  v2 = dword_47D458[6 * v15];
                  return sub_434B10(1, v2, v6, v4, v5);
                }
                if ( (unsigned __int8)a2 == 49
                  || (unsigned __int8)a2 == 50
                  || (unsigned __int8)a2 == 51
                  || (unsigned __int8)a2 == 52 )
                {
                  v2 = dword_47D45C[6 * v15];
                  return sub_434B10(1, v2, v6, v4, v5);
                }
              }
              v2 = v22;
              return sub_434B10(1, v2, v6, v4, v5);
            }
            v2 = *(_BYTE *)(a1 + 7);
            break;
        }
      }
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = v22;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 4012C6: using guessed type _DWORD __cdecl sub_4012C6(_DWORD);
// 47D450: using guessed type int dword_47D450[];
// 47D454: using guessed type int dword_47D454[];
// 47D458: using guessed type int dword_47D458[];
// 47D45C: using guessed type int dword_47D45C[];
// 47D720: using guessed type int dword_47D720[];
// 47D724: using guessed type int dword_47D724[];
// 47D728: using guessed type int dword_47D728[];
// 47D72C: using guessed type int dword_47D72C[];
// 8AD4EE: using guessed type __int16 word_8AD4EE[];
// 8AD4F0: using guessed type __int16 word_8AD4F0[];
// 8AD4F2: using guessed type __int16 word_8AD4F2[];
// 8AD4F4: using guessed type __int16 word_8AD4F4[];
// 8AD4F6: using guessed type __int16 word_8AD4F6[];
// 8AD4F8: using guessed type __int16 word_8AD4F8[];
// 8AD4FA: using guessed type __int16 word_8AD4FA[];
// 8AD52C: using guessed type __int16 word_8AD52C[];
// 8AD52E: using guessed type __int16 word_8AD52E[];

//----- (00405D10) --------------------------------------------------------
int __cdecl sub_405D10(int a1, unsigned __int8 a2)
{
  int v2; // eax@3
  char v4; // [sp+0h] [bp-6Ch]@0
  int v5; // [sp+4h] [bp-68h]@0
  int v6; // [sp+8h] [bp-64h]@0
  char v7; // [sp+Ch] [bp-60h]@1
  int v8; // [sp+4Ch] [bp-20h]@56
  int v9; // [sp+50h] [bp-1Ch]@35
  int j; // [sp+54h] [bp-18h]@25
  int v11; // [sp+58h] [bp-14h]@16
  int i; // [sp+5Ch] [bp-10h]@13
  int v13; // [sp+60h] [bp-Ch]@13
  int v14; // [sp+64h] [bp-8h]@7
  int v15; // [sp+68h] [bp-4h]@7

  memset(&v7, -858993460, 0x60u);
  if ( (signed int)*(_WORD *)a1 < 2330 || (signed int)*(_WORD *)a1 >= 2390 )
  {
    if ( (signed int)*(_WORD *)a1 < 3980 || (signed int)*(_WORD *)a1 >= 4000 )
    {
      v15 = 0;
      v14 = *(_WORD *)a1;
      if ( v14 > 0 && v14 <= 6500 )
      {
        if ( v14 < 3200 || v14 > 3300 )
        {
          v13 = word_8AD52E[70 * v14];
          for ( i = 0; i < 3; ++i )
          {
            if ( *(_BYTE *)(a1 + 2 * i + 2) == a2 )
            {
              v11 = *(_BYTE *)(a1 + 2 * i + 3);
              if ( a2 == 26 && v11 == 1 )
                v11 = 10;
              v15 += v11;
            }
          }
          if ( a2 == 49 || a2 == 50 || a2 == 51 || a2 == 52 )
          {
            for ( j = 0; j < 12; ++j )
            {
              if ( *(&word_8AD4F8[70 * v14] + 2 * j) == 54 )
                v15 += *(&word_8AD4FA[70 * v14] + 2 * j);
            }
            for ( j = 0; j < 3; ++j )
            {
              if ( *(_BYTE *)(a1 + 2 * j + 2) == 54 )
                v15 += *(_BYTE *)(a1 + 2 * j + 3);
            }
          }
          v9 = sub_4012C6(a1);
          if ( v9 >= 9 && v13 & 0xF00 )
            ++v9;
          if ( v9
            && a2 != 33
            && a2 != 18
            && a2 != 17
            && a2 != 21
            && a2 != 27
            && a2 != 1
            && a2 != 22
            && a2 != 23
            && a2 != 24
            && a2 != 25
            && a2 != 38
            && a2 != 78
            && a2 != 84
            && a2 != 86 )
          {
            if ( v9 > 10 )
            {
              if ( v9 >= 11 )
              {
                v8 = v9 - 10;
                if ( v9 == 11 )
                {
                  v8 = 220;
                }
                else
                {
                  switch ( v8 )
                  {
                    case 2:
                      v8 = 250;
                      break;
                    case 3:
                      v8 = 280;
                      break;
                    case 4:
                      v8 = 320;
                      break;
                    case 5:
                      v8 = 370;
                      break;
                  }
                }
                v15 *= 10;
                v15 = v8 * v15 / 100;
                v15 /= 10;
              }
            }
            else
            {
              v15 *= v9 + 10;
              v15 /= 10;
            }
          }
          v2 = v15;
        }
        else
        {
          v2 = v15;
        }
      }
      else
      {
        v2 = v15;
      }
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = 0;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 4012C6: using guessed type _DWORD __cdecl sub_4012C6(_DWORD);
// 8AD4F8: using guessed type __int16 word_8AD4F8[];
// 8AD4FA: using guessed type __int16 word_8AD4FA[];
// 8AD52E: using guessed type __int16 word_8AD52E[];

//----- (00406740) --------------------------------------------------------
int __cdecl sub_406740(int a1)
{
  int result; // eax@3
  char v2; // [sp+Ch] [bp-54h]@1
  bool v3; // [sp+4Ch] [bp-14h]@33
  bool v4; // [sp+50h] [bp-10h]@27
  bool v5; // [sp+54h] [bp-Ch]@21
  int v6; // [sp+58h] [bp-8h]@37
  int v7; // [sp+5Ch] [bp-4h]@10

  memset(&v2, -858993460, 0x54u);
  if ( (signed int)*(_WORD *)a1 < 2330 || (signed int)*(_WORD *)a1 >= 2390 )
  {
    if ( (signed int)*(_WORD *)a1 < 3200 || (signed int)*(_WORD *)a1 >= 3300 )
    {
      if ( (signed int)*(_WORD *)a1 < 3980 || (signed int)*(_WORD *)a1 >= 4000 )
      {
        LOBYTE(v7) = 0;
        if ( *(_BYTE *)(a1 + 2) != 43 && *(_BYTE *)(a1 + 4) != 43 && *(_BYTE *)(a1 + 6) != 43 )
        {
          v5 = (signed int)*(_BYTE *)(a1 + 2) >= 115 && (signed int)*(_BYTE *)(a1 + 2) <= 126;
          if ( v5 )
          {
            LOBYTE(v7) = *(_BYTE *)(a1 + 3);
          }
          else
          {
            v4 = (signed int)*(_BYTE *)(a1 + 4) >= 115 && (signed int)*(_BYTE *)(a1 + 4) <= 126;
            if ( v4 )
            {
              LOBYTE(v7) = *(_BYTE *)(a1 + 5);
            }
            else
            {
              v3 = (signed int)*(_BYTE *)(a1 + 6) >= 115 && (signed int)*(_BYTE *)(a1 + 6) <= 126;
              if ( v3 )
                LOBYTE(v7) = *(_BYTE *)(a1 + 7);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 2) == 43 )
          {
            LOBYTE(v7) = *(_BYTE *)(a1 + 3);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 4) == 43 )
              LOBYTE(v7) = *(_BYTE *)(a1 + 5);
            else
              LOBYTE(v7) = *(_BYTE *)(a1 + 7);
          }
        }
        v6 = (unsigned __int8)v7;
        if ( *(_WORD *)a1 != 786 && *(_WORD *)a1 != 1936 && *(_WORD *)a1 != 1937 )
        {
          if ( v6 < 230 )
            v6 %= 10;
          else
            v6 -= 220;
          if ( v6 >= 10 )
          {
            if ( v6 <= 35 )
              v6 = (v6 - 10) / 4 + 10;
          }
        }
        result = v6;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (00406C20) --------------------------------------------------------
int __cdecl sub_406C20(int a1)
{
  int result; // eax@3
  char v2; // [sp+Ch] [bp-54h]@1
  bool v3; // [sp+4Ch] [bp-14h]@33
  bool v4; // [sp+50h] [bp-10h]@27
  bool v5; // [sp+54h] [bp-Ch]@21
  int v6; // [sp+58h] [bp-8h]@37
  int v7; // [sp+5Ch] [bp-4h]@10

  memset(&v2, -858993460, 0x54u);
  if ( (signed int)*(_WORD *)a1 < 2330 || (signed int)*(_WORD *)a1 >= 2390 )
  {
    if ( (signed int)*(_WORD *)a1 < 3200 || (signed int)*(_WORD *)a1 >= 3300 )
    {
      if ( (signed int)*(_WORD *)a1 < 3980 || (signed int)*(_WORD *)a1 >= 4000 )
      {
        LOBYTE(v7) = 0;
        if ( *(_BYTE *)(a1 + 2) != 43 && *(_BYTE *)(a1 + 4) != 43 && *(_BYTE *)(a1 + 6) != 43 )
        {
          v5 = (signed int)*(_BYTE *)(a1 + 2) >= 115 && (signed int)*(_BYTE *)(a1 + 2) <= 126;
          if ( v5 )
          {
            LOBYTE(v7) = *(_BYTE *)(a1 + 3);
          }
          else
          {
            v4 = (signed int)*(_BYTE *)(a1 + 4) >= 115 && (signed int)*(_BYTE *)(a1 + 4) <= 126;
            if ( v4 )
            {
              LOBYTE(v7) = *(_BYTE *)(a1 + 5);
            }
            else
            {
              v3 = (signed int)*(_BYTE *)(a1 + 6) >= 115 && (signed int)*(_BYTE *)(a1 + 6) <= 126;
              if ( v3 )
                LOBYTE(v7) = *(_BYTE *)(a1 + 7);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 2) == 43 )
          {
            LOBYTE(v7) = *(_BYTE *)(a1 + 3);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 4) == 43 )
              LOBYTE(v7) = *(_BYTE *)(a1 + 5);
            else
              LOBYTE(v7) = *(_BYTE *)(a1 + 7);
          }
        }
        v6 = (unsigned __int8)v7;
        if ( (signed int)(unsigned __int8)v7 <= 210 )
        {
          v6 /= 10;
          result = v6;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (00407310) --------------------------------------------------------
int __cdecl sub_407310(int a1)
{
  char v2; // [sp+Ch] [bp-44h]@1
  int v3; // [sp+4Ch] [bp-4h]@1

  memset(&v2, -858993460, 0x44u);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 2) == 61 || *(_BYTE *)(a1 + 4) == 61 || *(_BYTE *)(a1 + 6) == 61 )
  {
    if ( *(_BYTE *)(a1 + 2) == 61 )
    {
      v3 = *(_BYTE *)(a1 + 3);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 4) == 61 )
        v3 = *(_BYTE *)(a1 + 5);
      else
        v3 = *(_BYTE *)(a1 + 7);
    }
  }
  return v3;
}

//----- (00407830) --------------------------------------------------------
int __cdecl sub_407830(int a1, char a2)
{
  int v2; // eax@4
  int v3; // eax@6
  int v4; // edx@10
  int v5; // eax@15
  int v6; // esi@21
  int v7; // eax@21
  int v8; // esi@21
  char v10; // [sp+0h] [bp-C0h]@0
  int v11; // [sp+4h] [bp-BCh]@0
  int v12; // [sp+8h] [bp-B8h]@0
  char v13; // [sp+Ch] [bp-B4h]@1
  int v14; // [sp+4Ch] [bp-74h]@59
  int v15; // [sp+50h] [bp-70h]@49
  int v16; // [sp+54h] [bp-6Ch]@29
  int v17; // [sp+58h] [bp-68h]@24
  int v18; // [sp+5Ch] [bp-64h]@21
  int v19; // [sp+60h] [bp-60h]@21
  int v20; // [sp+64h] [bp-5Ch]@21
  int v21; // [sp+68h] [bp-58h]@21
  int v22; // [sp+6Ch] [bp-54h]@21
  int v23; // [sp+70h] [bp-50h]@10
  int i; // [sp+74h] [bp-4Ch]@7
  int v25; // [sp+78h] [bp-48h]@10
  int v26; // [sp+7Ch] [bp-44h]@53
  int v27; // [sp+80h] [bp-40h]@54
  int v28; // [sp+84h] [bp-3Ch]@56
  int v29; // [sp+88h] [bp-38h]@57
  int v30; // [sp+8Ch] [bp-34h]@58
  int v31; // [sp+B8h] [bp-8h]@2
  int v32; // [sp+BCh] [bp-4h]@1

  memset(&v13, -858993460, 0xB4u);
  v32 = 0;
  if ( (unsigned __int8)a2 == 27 )
  {
    v32 = sub_401465(a1, a2);
    v31 = *(_BYTE *)(a1 + 20);
    if ( v32 < 2 )
    {
      if ( v31 == 3 )
      {
        v2 = *(_DWORD *)(a1 + 732);
        if ( v2 & 0x80000 )
          v32 = 2;
      }
    }
    v3 = v32;
  }
  else
  {
    for ( i = 0; i < 16; ++i )
    {
      *(&v25 + i) = 0;
      v4 = *(_WORD *)(a1 + 8 * i + 92);
      v23 = *(_WORD *)(a1 + 8 * i + 92);
      if ( v23 || i == 7 )
      {
        if ( i >= 1 && i <= 5 )
        {
          v4 = i;
          *(&v25 + i) = word_8AD52C[70 * v23];
        }
        v5 = (unsigned __int8)a2;
        if ( ((unsigned __int8)a2 != 2 || i != 6) && ((unsigned __int8)a2 != 60 || i != 7) )
        {
          if ( i != 7 || (v4 = (unsigned __int8)a2, (unsigned __int8)a2 != 2) )
          {
            v15 = 0;
            LOBYTE(v4) = a2;
            v15 = sub_401447(a1 + 8 * i + 92, v4);
            v32 += v15;
          }
          else
          {
            LOBYTE(v5) = a2;
            v6 = sub_401447(a1 + 140, v5);
            v7 = sub_401447(a1 + 140, 73);
            v22 = v7 + v6;
            LOBYTE(v7) = a2;
            v8 = sub_401447(a1 + 148, v7);
            v21 = sub_401447(a1 + 148, 73) + v8;
            v20 = *(_WORD *)(a1 + 140);
            v19 = *(_WORD *)(a1 + 148);
            v18 = 0;
            if ( v20 > 0 && v20 < 6500 )
              v18 = word_8AD52C[70 * v20];
            v17 = 0;
            if ( v19 > 0 && v19 < 6500 )
              v17 = word_8AD52C[70 * v19];
            if ( v18 && v17 )
            {
              v16 = 0;
              if ( v18 != 47 || v17 != 45 )
              {
                if ( v18 == v17 )
                  v16 = 50;
                else
                  v16 = 30;
                if ( !*(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 732) & 0x200 )
                  v16 += 15;
                if ( *(_BYTE *)(a1 + 20) == 3 && *(_DWORD *)(a1 + 732) & 0x400 )
                  v16 += 10;
                if ( v22 <= v21 )
                  v32 += v16 * v22 / 100 + v21;
                else
                  v32 += v16 * v21 / 100 + v22;
              }
              else
              {
                v32 += v22;
              }
            }
            else
            {
              if ( v22 <= v21 )
                v32 += v21;
              else
                v32 += v22;
            }
          }
        }
      }
    }
    if ( ((unsigned __int8)a2 == 3 || (unsigned __int8)a2 == 53)
      && (!v26 || v26 == v27)
      && v27
      && v27 == v28
      && v28 == v29
      && v29 == v30 )
    {
      v14 = *(_WORD *)(a1 + 92) % 10;
      if ( v14 > 5 && v27 == 10 )
      {
        v3 = v32;
        return sub_434B10(1, v3, v12, v10, v11);
      }
      v32 = 105 * v32 / 100;
    }
    if ( v32 < 0 )
      v32 = 0;
    v3 = v32;
  }
  return sub_434B10(1, v3, v12, v10, v11);
}
// 401447: using guessed type _DWORD __cdecl sub_401447(_DWORD, _DWORD);
// 401465: using guessed type _DWORD __cdecl sub_401465(_DWORD, char);
// 8AD52C: using guessed type __int16 word_8AD52C[];

//----- (00407CF0) --------------------------------------------------------
int __cdecl sub_407CF0(int a1, char a2)
{
  int v2; // ecx@4
  char v4; // [sp+0h] [bp-5Ch]@0
  int v5; // [sp+4h] [bp-58h]@0
  int v6; // [sp+8h] [bp-54h]@0
  char v7; // [sp+Ch] [bp-50h]@1
  int v8; // [sp+4Ch] [bp-10h]@4
  int i; // [sp+50h] [bp-Ch]@1
  int v10; // [sp+54h] [bp-8h]@1
  int v11; // [sp+58h] [bp-4h]@1

  memset(&v7, -858993460, 0x50u);
  v11 = 0;
  v10 = 0;
  for ( i = 0; i < 16; ++i )
  {
    v2 = i;
    v8 = *(_WORD *)(a1 + 8 * i + 92);
    if ( v8 )
    {
      LOBYTE(v2) = a2;
      v10 = sub_401447(a1 + 8 * i + 92, v2);
      if ( v11 < v10 )
        v11 = v10;
    }
  }
  return sub_434B10(1, v11, v6, v4, v5);
}
// 401447: using guessed type _DWORD __cdecl sub_401447(_DWORD, _DWORD);

//----- (004082A0) --------------------------------------------------------
int __cdecl sub_4082A0()
{
  char v1; // [sp+0h] [bp-54h]@0
  int v2; // [sp+4h] [bp-50h]@0
  int v3; // [sp+8h] [bp-4Ch]@0
  char v4; // [sp+Ch] [bp-48h]@1
  int v5; // [sp+4Ch] [bp-8h]@1
  int v6; // [sp+50h] [bp-4h]@1

  memset(&v4, -858993460, 0x48u);
  sub_434AB0(&unk_784320, 0, 0x1E00u);
  sub_434AB0(dword_484258, 0, 0xC8u);
  sub_4010EB();
  v6 = 1;
  v5 = 0;
  sub_401113();
  sub_401410();
  sub_4013C5();
  sub_401235();
  sub_4010C8();
  return sub_434B10(1, v6, v3, v1, v2);
}
// 4010C8: using guessed type int sub_4010C8(void);
// 4010EB: using guessed type int sub_4010EB(void);
// 401113: using guessed type int sub_401113(void);
// 401235: using guessed type int sub_401235(void);
// 4013C5: using guessed type int sub_4013C5(void);
// 401410: using guessed type int sub_401410(void);
// 484258: using guessed type int dword_484258[];

//----- (00408460) --------------------------------------------------------
int __usercall sub_408460<eax>(int a1<ebx>)
{
  int v1; // eax@1
  int v2; // eax@6
  int v3; // eax@6
  char v5; // [sp+0h] [bp-154h]@1
  int v6; // [sp+4h] [bp-150h]@6
  int v7; // [sp+8h] [bp-14Ch]@6
  char v8; // [sp+Ch] [bp-148h]@1
  int i; // [sp+4Ch] [bp-108h]@1
  int v10; // [sp+50h] [bp-104h]@1
  CHAR PathName[256]; // [sp+54h] [bp-100h]@1
  int v12; // [sp+154h] [bp+0h]@1

  memset(&v8, -858993460, 0x148u);
  v1 = GetModuleFileNameA(0, PathName, 0x100u);
  sub_434B10(&v5 == &v5, v1, a1, (unsigned int)&v12, (int)&v5);
  v10 = sub_434FC0((int)PathName);
  for ( i = v10 - 1; i > 0; --i )
  {
    if ( PathName[i] == 92 )
    {
      PathName[i] = 0;
      break;
    }
  }
  v2 = SetCurrentDirectoryA(PathName);
  v3 = sub_434B10(&v5 == &v5, v2, a1, (unsigned int)&v12, (int)&v5);
  return sub_434B10(1, v3, v7, v5, v6);
}
// 408460: using guessed type CHAR PathName[256];

//----- (004085E0) --------------------------------------------------------
int __cdecl sub_4085E0(int a1)
{
  int v1; // eax@1
  char v3; // [sp+0h] [bp-58h]@0
  int v4; // [sp+4h] [bp-54h]@0
  int v5; // [sp+8h] [bp-50h]@0
  char v6; // [sp+Ch] [bp-4Ch]@1
  int v7; // [sp+4Ch] [bp-Ch]@1
  int v8; // [sp+50h] [bp-8h]@1
  int v9; // [sp+54h] [bp-4h]@1

  memset(&v6, -858993460, 0x4Cu);
  v9 = sub_434FC0(a1);
  v8 = a1;
  v1 = sub_435040(a1, 95);
  v7 = v1;
  do
  {
    if ( !v7 )
      break;
    *(_BYTE *)v7 = 32;
    v1 = sub_435040(v7, 95);
    v7 = v1;
    --v9;
  }
  while ( v9 >= 0 );
  return sub_434B10(1, v1, v5, v3, v4);
}

//----- (00408680) --------------------------------------------------------
int __cdecl sub_408680(int a1)
{
  char v2; // [sp+0h] [bp-50h]@0
  int v3; // [sp+4h] [bp-4Ch]@0
  int v4; // [sp+8h] [bp-48h]@0
  char v5; // [sp+Ch] [bp-44h]@1
  int i; // [sp+4Ch] [bp-4h]@1

  memset(&v5, -858993460, 0x44u);
  sub_434AB0((void *)a1, 0, 0x2F4u);
  *(_WORD *)(a1 + 32) = 2112;
  *(_WORD *)(a1 + 34) = 2112;
  sub_434AB0((void *)(a1 + 36), 0, 0x1Cu);
  sub_434AB0((void *)(a1 + 64), 0, 0x1Cu);
  for ( i = 0; i < 16; ++i )
    sub_401389(a1 + 8 * i + 92);
  for ( i = 0; i < 64; ++i )
    sub_401389(a1 + 8 * i + 220);
  *(_BYTE *)(a1 + 744) = -1;
  *(_BYTE *)(a1 + 745) = -1;
  *(_BYTE *)(a1 + 746) = -1;
  *(_BYTE *)(a1 + 747) = -1;
  return sub_434B10(1, a1, v4, v2, v3);
}
// 401389: using guessed type _DWORD __cdecl sub_401389(_DWORD);

//----- (0040BD40) --------------------------------------------------------
int __cdecl sub_40BD40(int a1, int a2)
{
  int v2; // eax@5
  char v4; // [sp+0h] [bp-58h]@0
  int v5; // [sp+4h] [bp-54h]@0
  int v6; // [sp+8h] [bp-50h]@0
  char v7; // [sp+Ch] [bp-4Ch]@1
  int i; // [sp+4Ch] [bp-Ch]@10
  int v9; // [sp+50h] [bp-8h]@7
  int v10; // [sp+54h] [bp-4h]@7

  memset(&v7, -858993460, 0x4Cu);
  if ( ((signed int)*(_BYTE *)a1 < 65 || (signed int)*(_BYTE *)a1 > 90)
    && ((signed int)*(_BYTE *)a1 < 97 || (signed int)*(_BYTE *)a1 > 122) )
  {
    if ( (signed int)*(_BYTE *)a1 >= 0 )
    {
      sub_434B90(a2);
    }
    else
    {
      v10 = a1;
      v9 = 94 * (*(_BYTE *)a1 - 176) + *(_BYTE *)(a1 + 1) - 161;
      if ( v9 >= 0 && v9 < 2350 )
      {
        for ( i = 0; i < 18 && v9 >= dword_480B80[i]; ++i )
          ;
        if ( i < 0 || i > 17 )
        {
          sub_434B90(a2);
        }
        else
        {
          *(_BYTE *)a2 = byte_480B58[2 * i];
          *(_BYTE *)(a2 + 1) = byte_480B59[2 * i];
          v2 = a2;
          *(_BYTE *)(a2 + 2) = 0;
        }
      }
      else
      {
        sub_434B90(a2);
      }
    }
  }
  else
  {
    v2 = a1;
    *(_BYTE *)a2 = *(_BYTE *)a1;
    *(_BYTE *)(a2 + 1) = 0;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 480B80: using guessed type int dword_480B80[];

//----- (0040BF90) --------------------------------------------------------
int __cdecl sub_40BF90(int a1)
{
  char v2; // [sp+Ch] [bp-4Ch]@1
  int v3; // [sp+50h] [bp-8h]@1
  int v4; // [sp+54h] [bp-4h]@1

  memset(&v2, -858993460, 0x4Cu);
  v4 = 0;
  v3 = 0;
  if ( *(_BYTE *)(a1 + 2) == 56 || *(_BYTE *)(a1 + 4) == 56 || *(_BYTE *)(a1 + 6) == 56 )
  {
    if ( *(_BYTE *)(a1 + 2) == 56 )
    {
      v4 = *(_BYTE *)(a1 + 3);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 4) == 56 )
        v4 = *(_BYTE *)(a1 + 5);
      else
        v4 = *(_BYTE *)(a1 + 7);
    }
  }
  if ( *(_BYTE *)(a1 + 2) == 57 || *(_BYTE *)(a1 + 4) == 57 || *(_BYTE *)(a1 + 6) == 57 )
  {
    if ( *(_BYTE *)(a1 + 2) == 57 )
    {
      v3 = *(_BYTE *)(a1 + 3);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 4) == 57 )
        v3 = *(_BYTE *)(a1 + 5);
      else
        v3 = *(_BYTE *)(a1 + 7);
    }
  }
  return v3 + (v4 << 8);
}

//----- (0040C3B0) --------------------------------------------------------
int __cdecl sub_40C3B0(int a1)
{
  int result; // eax@1

  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)(a1 + 3) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 6) = 0;
  result = a1;
  *(_BYTE *)(a1 + 7) = 0;
  return result;
}

//----- (0040CA00) --------------------------------------------------------
bool __cdecl sub_40CA00(int a1, signed int a2)
{
  bool result; // eax@2
  char v3; // [sp+Ch] [bp-44h]@1
  int v4; // [sp+4Ch] [bp-4h]@3

  memset(&v3, -858993460, 0x44u);
  if ( a2 >= 30 )
  {
    v4 = a2 / 15;
    if ( a2 / 15 != 2 || *(_WORD *)(a1 + 480) == 3467 )
      result = v4 != 3 || *(_WORD *)(a1 + 488) == 3467;
    else
      result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (0040CAA0) --------------------------------------------------------
int __cdecl sub_40CAA0(int a1, int a2, int a3, int a4)
{
  int v4; // eax@29
  char v6; // [sp+0h] [bp-FCh]@0
  int v7; // [sp+4h] [bp-F8h]@0
  int v8; // [sp+8h] [bp-F4h]@0
  char v9; // [sp+Ch] [bp-F0h]@1
  int m; // [sp+4Ch] [bp-B0h]@22
  int l; // [sp+50h] [bp-ACh]@20
  int k; // [sp+54h] [bp-A8h]@7
  int j; // [sp+58h] [bp-A4h]@5
  int v14; // [sp+5Ch] [bp-A0h]@5
  int v15; // [sp+60h] [bp-9Ch]@5
  char v16[8]; // [sp+64h] [bp-98h]@5
  int i; // [sp+6Ch] [bp-90h]@1
  char v18[128]; // [sp+70h] [bp-8Ch]@1
  char v19[8]; // [sp+F0h] [bp-Ch]@1
  int v20; // [sp+F8h] [bp-4h]@1

  memset(&v9, -858993460, 0xF0u);
  v20 = sub_401447(a1, 33);
  sub_434C80(v19, (char *)&unk_47B8C4 + 8 * v20, 8u);
  sub_434AB0(v18, 0, 0x7Eu);
  for ( i = 0; i < 128; ++i )
  {
    if ( *(_WORD *)(a2 + 8 * i) )
    {
      v20 = sub_401447(a2 + 8 * i, 33);
      sub_434C80(v16, (char *)&unk_47B8C4 + 8 * v20, 8u);
      v15 = i % 9;
      v14 = i / 9;
      for ( j = 0; j < 4; ++j )
      {
        for ( k = 0; k < 2; ++k )
        {
          if ( *(&v16[2 * j] + k) == 1 && v14 + j >= 0 && v15 + k >= 0 && v14 + j < 14 )
          {
            if ( v15 + k < 9 )
              *(&v18[9 * (v14 + j)] + v15 + k) = 1;
          }
        }
      }
    }
  }
  for ( l = 0; l < 4; ++l )
  {
    for ( m = 0; m < 2; ++m )
    {
      if ( *(&v19[2 * l] + m) == 1 )
      {
        if ( a4 + l < 0 || a3 + m < 0 || a4 + l >= 14 || a3 + m >= 9 )
        {
          v4 = 0;
          return sub_434B10(1, v4, v8, v6, v7);
        }
        if ( *(&v18[9 * (a4 + l)] + a3 + m) == 1 )
        {
          v4 = 0;
          return sub_434B10(1, v4, v8, v6, v7);
        }
      }
    }
  }
  v4 = 1;
  return sub_434B10(1, v4, v8, v6, v7);
}
// 401447: using guessed type _DWORD __cdecl sub_401447(_DWORD, _DWORD);
// 40CAA0: using guessed type char var_C[8];
// 40CAA0: using guessed type char var_8C[128];
// 40CAA0: using guessed type char var_98[8];

//----- (0040CE20) --------------------------------------------------------
int __cdecl sub_40CE20(void *a1, char a2)
{
  void *v2; // eax@4
  int v3; // edx@15
  int v4; // eax@15
  int v5; // eax@16
  char v7; // [sp+0h] [bp-110h]@0
  int v8; // [sp+4h] [bp-10Ch]@0
  int v9; // [sp+8h] [bp-108h]@0
  char v10; // [sp+Ch] [bp-104h]@1
  int j; // [sp+4Ch] [bp-C4h]@9
  int v12; // [sp+50h] [bp-C0h]@9
  int v13; // [sp+54h] [bp-BCh]@9
  int v14; // [sp+58h] [bp-B8h]@7
  int v15[29]; // [sp+5Ch] [bp-B4h]@15
  int v16[15]; // [sp+D0h] [bp-40h]@1
  int i; // [sp+10Ch] [bp-4h]@1

  memset(&v10, -858993460, 0x104u);
  sub_434AB0(v16, 0xFFu, 0x3Cu);
  for ( i = 0; i < 15; ++i )
  {
    v2 = a1;
    if ( *((_WORD *)a1 + 4 * i) )
    {
      LOBYTE(v2) = a2;
      v16[i] = sub_401447((char *)a1 + 8 * i, v2);
    }
    else
    {
      v16[i] = -1;
    }
  }
  sub_434AB0(&v14, 0, 0x78u);
  for ( i = 0; i < 15; ++i )
  {
    v13 = 0;
    v12 = -1;
    for ( j = 0; j < 15; ++j )
    {
      if ( v16[j] > v12 )
      {
        v13 = j;
        v12 = v16[j];
      }
    }
    if ( v12 == -1 )
      break;
    v16[v13] = -1;
    v3 = *((_DWORD *)a1 + 2 * v13 + 1);
    v4 = i;
    *(&v14 + 2 * i) = *((_DWORD *)a1 + 2 * v13);
    v15[2 * v4] = v3;
  }
  v5 = (int)sub_434C80(a1, &v14, 0x78u);
  return sub_434B10(1, v5, v9, v7, v8);
}
// 401447: using guessed type _DWORD __cdecl sub_401447(_DWORD, _DWORD);
// 40CE20: using guessed type int var_40[15];
// 40CE20: using guessed type int var_B4[29];

//----- (0040DEE0) --------------------------------------------------------
int __usercall sub_40DEE0<eax>(int a1<ebx>)
{
  int v1; // eax@2
  int v2; // eax@2
  char v4; // [sp+0h] [bp-D4h]@2
  int v5; // [sp+4h] [bp-D0h]@4
  int v6; // [sp+8h] [bp-CCh]@4
  char v7; // [sp+Ch] [bp-C8h]@1
  int v8; // [sp+4Ch] [bp-88h]@1
  int v9; // [sp+50h] [bp-84h]@1
  char v10; // [sp+54h] [bp-80h]@3
  int v11; // [sp+D4h] [bp+0h]@2

  memset(&v7, -858993460, 0xC8u);
  v9 = 52000;
  sub_434AB0(&unk_8AD4A8, 0, 0xCB20u);
  v8 = 1;
  v8 = sub_401276("itemlist.csv", 0);
  if ( v8 )
  {
    sub_434B90((int)&v10);
    v8 = sub_401276(&v10, 0);
    sub_40142E("itemname.csv");
    v2 = sub_40125D();
  }
  else
  {
    v1 = MessageBoxA(0, "There is no file", "itemlist.csv", 0);
    v2 = sub_434B10(&v4 == &v4, v1, a1, (unsigned int)&v11, (int)&v4);
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 40125D: using guessed type int sub_40125D(void);
// 401276: using guessed type _DWORD __cdecl sub_401276(_DWORD, _DWORD);
// 40142E: using guessed type _DWORD __cdecl sub_40142E(_DWORD);

//----- (0040DFF0) --------------------------------------------------------
int __usercall sub_40DFF0<eax>(int a1<ebx>, int a2<esi>, char a3)
{
  int v3; // eax@4
  int v4; // eax@16
  char v6; // [sp+0h] [bp-968h]@16
  int v7; // [sp+4h] [bp-964h]@28
  int v8; // [sp+8h] [bp-960h]@28
  char v9; // [sp+Ch] [bp-95Ch]@1
  int j; // [sp+4Ch] [bp-91Ch]@23
  int v11; // [sp+50h] [bp-918h]@17
  char v12; // [sp+54h] [bp-914h]@14
  char v13; // [sp+154h] [bp-814h]@14
  int i; // [sp+254h] [bp-714h]@8
  int v15; // [sp+258h] [bp-710h]@7
  const CHAR Text[1024]; // [sp+25Ch] [bp-70Ch]@7
  char v17[62]; // [sp+65Ch] [bp-30Ch]@7
  char v18; // [sp+69Ah] [bp-2CEh]@23
  char v19; // [sp+69Bh] [bp-2CDh]@23
  char v20; // [sp+75Ch] [bp-20Ch]@7
  int v21; // [sp+85Ch] [bp-10Ch]@7
  int v22; // [sp+860h] [bp-108h]@5
  int v23; // [sp+864h] [bp-104h]@1
  char v24; // [sp+868h] [bp-100h]@1
  int v25; // [sp+968h] [bp+0h]@14

  memset(&v9, -858993460, 0x95Cu);
  sub_4343B0(a1, a2, (int)&v24, (int)"%s", a3);
  v23 = sub_434A90(a1, a2, &v24, (int)"rb");
  if ( !v23 )
  {
    sub_4343B0(a1, a2, (int)&v24, (int)"../../TMSRV/Run/%s", a3);
    v23 = sub_434A90(a1, a2, &v24, (int)"rb");
  }
  if ( v23 )
  {
    v22 = sub_434A90(a1, a2, "Itemname.bin", (int)"wb");
    if ( v22 )
    {
      while ( 1 )
      {
        v21 = -1;
        sub_434AB0(&v20, 0, 0x100u);
        sub_434AB0(v17, 0, 0x100u);
        v15 = sub_434870(a1, a2, (int)Text, 1024, v23);
        if ( !v15 )
          break;
        for ( i = 0; ; ++i )
        {
          if ( i < 1024 )
          {
            if ( Text[i] == 44 )
              Text[i] = 32;
            if ( Text[i] )
              continue;
          }
          break;
        }
        v13 = 0;
        v12 = 0;
        sub_4347B0(a1, (int)&v25, a2, (int)Text, "%d %s %s", (unsigned int)&v21);
        if ( v21 != -1 )
        {
          if ( v21 < 6500 )
          {
            v11 = sub_434FC0((int)&v20);
            if ( v11 > 0 && v11 < 63 )
            {
              v11 = sub_434FC0((int)v17);
              if ( v11 > 0 && v11 < 63 )
              {
                v19 = 0;
                v18 = 0;
                sub_434B90((int)((char *)&unk_8AD4A8 + 140 * v21));
                sub_4344B0(a1, a2, &v21, 4u, 1u, v22);
                for ( j = 0; j < 62; ++j )
                  v17[j] += j;
                sub_4344B0(a1, a2, v17, 0x40u, 1u, v22);
              }
              else
              {
                sub_401316("too long Item Name", "system");
              }
            }
            else
            {
              sub_401316("too long Item Name", "system");
            }
          }
          else
          {
            a2 = (int)&v6;
            v4 = MessageBoxA(0, Text, "check MAX_ITEMLIST", 0);
            sub_434B10(&v6 == &v6, v4, a1, (unsigned int)&v25, (int)&v6);
          }
        }
      }
      sub_4346D0(a1, a2, v22);
      sub_4346D0(a1, a2, v23);
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  return sub_434B10(1, v3, v8, v6, v7);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 40DFF0: using guessed type char var_30C[62];
// 40DFF0: using guessed type const CHAR Text[1024];

//----- (0040E440) --------------------------------------------------------
int __usercall sub_40E440<eax>(int a1<ebx>, int a2<esi>, char a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v67; // eax@3
  int v68; // eax@3
  int v69; // eax@17
  int v70; // eax@33
  char v72; // [sp+0h] [bp-14D8h]@3
  int v73; // [sp+4h] [bp-14D4h]@43
  int v74; // [sp+8h] [bp-14D0h]@43
  char v75; // [sp+Ch] [bp-14CCh]@1
  int v76; // [sp+4Ch] [bp-148Ch]@36
  int k; // [sp+50h] [bp-1488h]@28
  int j; // [sp+54h] [bp-1484h]@24
  int v79; // [sp+58h] [bp-1480h]@20
  int v80; // [sp+5Ch] [bp-147Ch]@20
  int v81; // [sp+60h] [bp-1478h]@20
  int v82; // [sp+64h] [bp-1474h]@20
  int v83; // [sp+68h] [bp-1470h]@20
  int v84; // [sp+6Ch] [bp-146Ch]@20
  int v85; // [sp+70h] [bp-1468h]@20
  int v86; // [sp+74h] [bp-1464h]@18
  int v87; // [sp+78h] [bp-1460h]@15
  int v88; // [sp+7Ch] [bp-145Ch]@15
  int v89; // [sp+80h] [bp-1458h]@15
  int v90; // [sp+84h] [bp-1454h]@15
  int v91; // [sp+88h] [bp-1450h]@15
  char v92; // [sp+8Ch] [bp-144Ch]@15
  char v93; // [sp+18Ch] [bp-134Ch]@15
  int i; // [sp+28Ch] [bp-124Ch]@9
  int v95; // [sp+290h] [bp-1248h]@8
  const CHAR Text[1024]; // [sp+294h] [bp-1244h]@8
  int v97; // [sp+694h] [bp-E44h]@8
  int v98; // [sp+698h] [bp-E40h]@8
  __int16 v99[2]; // [sp+69Ch] [bp-E3Ch]@8
  char v100[256]; // [sp+6CCh] [bp-E0Ch]@8
  char v101; // [sp+12CCh] [bp-20Ch]@8
  char v102; // [sp+130Ah] [bp-1CEh]@19
  char v103; // [sp+130Bh] [bp-1CDh]@19
  int v104; // [sp+13CCh] [bp-10Ch]@8
  int v105; // [sp+13D0h] [bp-108h]@4
  char v106; // [sp+13D4h] [bp-104h]@4
  int v107; // [sp+14D4h] [bp-4h]@2
  int v108; // [sp+14D8h] [bp+0h]@3

  memset(&v75, -858993460, 0x14CCu);
  if ( !a4 || (v107 = sub_434A90(a1, a2, "extraitem.bin", (int)"wb")) != 0 )
  {
    sub_4343B0(a1, a2, (int)&v106, (int)"%s", a3);
    v105 = sub_434A90(a1, a2, &v106, (int)"rb");
    if ( !v105 )
    {
      sub_4343B0(a1, a2, (int)&v106, (int)"../../TMSRV/Run/%s", a3);
      v105 = sub_434A90(a1, a2, &v106, (int)"rb");
    }
    if ( v105 )
    {
      while ( 1 )
      {
        v104 = -1;
        sub_434AB0(&v101, 0, 0x100u);
        sub_434AB0(v100, 0, 0xC00u);
        sub_434AB0(v99, 0, 0x30u);
        v98 = 48;
        v97 = 3072;
        v95 = sub_434870(a1, a2, (int)Text, 1024, v105);
        if ( !v95 )
          break;
        for ( i = 0; ; ++i )
        {
          if ( i < 1024 )
          {
            if ( Text[i] == 44 )
              Text[i] = 32;
            if ( Text[i] )
              continue;
          }
          break;
        }
        v93 = 0;
        v92 = 0;
        v91 = 0;
        v90 = 0;
        v89 = 0;
        v88 = 0;
        v87 = 0;
        sub_4347B0(
          a1,
          (int)&v108,
          a2,
          (int)Text,
          "%d %s %s %s %d %d %d %d %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d",
          (unsigned int)&v104);
        if ( v104 != -1 )
        {
          if ( v104 < 6500 )
          {
            v86 = sub_434FC0((int)&v101);
            if ( v86 >= 63 )
            {
              sub_401316("too long Item Name", "system");
              v103 = 0;
              v102 = 0;
            }
            sub_434B90((int)((char *)&unk_8AD4A8 + 140 * v104));
            v85 = 0;
            v84 = 0;
            v83 = 0;
            v82 = 0;
            v81 = 0;
            v80 = 0;
            v79 = 0;
            if ( v93 == 46 )
              v93 = 32;
            if ( v92 == 46 )
              v92 = 32;
            sub_4347B0(a1, (int)&v108, a2, (int)&v93, "%d.%d", (unsigned int)&v85);
            sub_4347B0(a1, (int)&v108, a2, (int)&v92, "%d.%d.%d.%d.%d", (unsigned int)&v83);
            word_8AD4E8[70 * v104] = v85;
            word_8AD4EA[70 * v104] = v84;
            word_8AD4EE[70 * v104] = v83;
            word_8AD4F0[70 * v104] = v82;
            word_8AD4F2[70 * v104] = v81;
            word_8AD4F4[70 * v104] = v80;
            word_8AD4F6[70 * v104] = v79;
            word_8AD52C[70 * v104] = v91;
            dword_8AD528[35 * v104] = v90;
            word_8AD52E[70 * v104] = v89;
            word_8AD532[70 * v104] = v88;
            word_8AD530[70 * v104] = v87;
            word_8AD4EC[70 * v104] = 0;
            for ( j = 0; j < 12; ++j )
            {
              if ( v100[256 * j] )
              {
                for ( k = 0; k < 127 && sub_4351F0((int)&byte_786444[24 * k], (int)&v100[256 * j]); ++k )
                  ;
                if ( j == 127 )
                {
                  a2 = (int)&v72;
                  v70 = MessageBoxA(0, (LPCSTR)&a67, "Unregisterd effect", 0);
                  sub_434B10(&v72 == &v72, v70, a1, (unsigned int)&v108, (int)&v72);
                }
                else
                {
                  *(&word_8AD4F8[70 * v104] + 2 * j) = k;
                  *(&word_8AD4FA[70 * v104] + 2 * j) = v99[2 * j];
                }
              }
            }
            if ( v104 == 592 )
              v76 = 1;
            if ( a4 )
            {
              sub_4344B0(a1, a2, &v104, 2u, 1u, v107);
              sub_4344B0(a1, a2, (char *)&unk_8AD4A8 + 140 * v104, 0x8Cu, 1u, v107);
            }
          }
          else
          {
            a2 = (int)&v72;
            v69 = MessageBoxA(0, Text, "check MAX_ITEMLIST", 0);
            sub_434B10(&v72 == &v72, v69, a1, (unsigned int)&v108, (int)&v72);
          }
        }
      }
      sub_4346D0(a1, a2, v105);
      if ( a4 )
        sub_4346D0(a1, a2, v107);
      v68 = 1;
    }
    else
    {
      v68 = 0;
    }
  }
  else
  {
    v67 = MessageBoxA(0, "Can't write extraitem.bin", "ERROR", 0x1000u);
    sub_434B10(&v72 == &v72, v67, a1, (unsigned int)&v108, (int)&v72);
    v68 = 0;
  }
  return sub_434B10(1, v68, v74, v72, v73);
}
// 40E440: too many input arguments, some ignored
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 8AD4E8: using guessed type __int16 word_8AD4E8[];
// 8AD4EA: using guessed type __int16 word_8AD4EA[];
// 8AD4EC: using guessed type __int16 word_8AD4EC[];
// 8AD4EE: using guessed type __int16 word_8AD4EE[];
// 8AD4F0: using guessed type __int16 word_8AD4F0[];
// 8AD4F2: using guessed type __int16 word_8AD4F2[];
// 8AD4F4: using guessed type __int16 word_8AD4F4[];
// 8AD4F6: using guessed type __int16 word_8AD4F6[];
// 8AD4F8: using guessed type __int16 word_8AD4F8[];
// 8AD4FA: using guessed type __int16 word_8AD4FA[];
// 8AD528: using guessed type int dword_8AD528[];
// 8AD52C: using guessed type __int16 word_8AD52C[];
// 8AD52E: using guessed type __int16 word_8AD52E[];
// 8AD530: using guessed type __int16 word_8AD530[];
// 8AD532: using guessed type __int16 word_8AD532[];
// 40E440: using guessed type const CHAR Text[1024];
// 40E440: using guessed type char var_E0C[256];
// 40E440: using guessed type __int16 var_E3C[2];

//----- (0040EDA0) --------------------------------------------------------
int __usercall sub_40EDA0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@7
  int v3; // eax@7
  int v4; // eax@18
  int v5; // eax@20
  char v7; // [sp+0h] [bp-3E0h]@7
  int v8; // [sp+4h] [bp-3DCh]@23
  int v9; // [sp+8h] [bp-3D8h]@23
  char v10; // [sp+Ch] [bp-3D4h]@1
  int v11; // [sp+4Ch] [bp-394h]@16
  int v12; // [sp+50h] [bp-390h]@9
  int v13; // [sp+54h] [bp-38Ch]@8
  char v14; // [sp+158h] [bp-288h]@16
  char v15; // [sp+1D7h] [bp-209h]@12
  char v16; // [sp+1D8h] [bp-208h]@12
  char v17; // [sp+258h] [bp-188h]@11
  const CHAR Text; // [sp+2D8h] [bp-108h]@9
  int v19; // [sp+3D8h] [bp-8h]@4
  int i; // [sp+3DCh] [bp-4h]@1
  int v21; // [sp+3E0h] [bp+0h]@7

  memset(&v10, -858993460, 0x3D4u);
  for ( i = 0; i < 127; ++i )
    byte_786444[24 * i] = 0;
  v19 = sub_434A90(a1, a2, "ItemEffect.h", (int)"rb");
  if ( !v19 )
    v19 = sub_434A90(a1, a2, "../../TMSRV/Run/ItemEffect.h", (int)"rb");
  if ( v19 )
  {
    v13 = 0;
    while ( 1 )
    {
      v12 = sub_434870(a1, a2, (int)&Text, 255, v19);
      if ( !v12 )
        break;
      if ( Text != 13 )
      {
        v17 = 0;
        sub_4347B0(a1, (int)&v21, a2, (int)&Text, "%s", (unsigned int)&v17);
        if ( sub_4351F0((int)&v17, (int)"#include") )
        {
          if ( !sub_4351F0((int)&v17, (int)"#define") )
          {
            sub_4347B0(a1, (int)&v21, a2, (int)&Text, "%s %s %s %s %s", (unsigned int)&v17);
            if ( v13 )
            {
              v11 = sub_4353B0(a1, (int)&v21, a2, (signed int *)&v14);
              if ( v11 > 0 && v11 < 127 )
              {
                if ( byte_786444[24 * v11] )
                {
                  a2 = (int)&v7;
                  v5 = MessageBoxA(0, &Text, &byte_786444[24 * v11], 0);
                  sub_434B10(&v7 == &v7, v5, a1, (unsigned int)&v21, (int)&v7);
                }
                else
                {
                  sub_434C80(&byte_786444[24 * v11], &v16, 0x18u);
                }
              }
              else
              {
                a2 = (int)&v7;
                v4 = MessageBoxA(0, &Text, "Effect.h의 Define Value가 �", 0);
                sub_434B10(&v7 == &v7, v4, a1, (unsigned int)&v21, (int)&v7);
              }
            }
            else
            {
              v13 = 1;
            }
          }
        }
        else
        {
          sub_4347B0(a1, (int)&v21, a2, (int)&Text, "%s \"%s", (unsigned int)&v17);
          *(&v15 + sub_434FC0((int)&v16)) = 0;
          sub_401410();
        }
      }
    }
    v3 = sub_4346D0(a1, a2, v19);
  }
  else
  {
    v2 = MessageBoxA(0, "ItemEffect.h", "there is no effect file.", 0);
    v3 = sub_434B10(&v7 == &v7, v2, a1, (unsigned int)&v21, (int)&v7);
  }
  return sub_434B10(1, v3, v9, v7, v8);
}
// 401410: using guessed type int sub_401410(void);

//----- (00410B90) --------------------------------------------------------
int __cdecl sub_410B90(int a1, int a2, int a3, int a4)
{
  int result; // eax@9
  char v5; // [sp+Ch] [bp-48h]@1
  int v6; // [sp+4Ch] [bp-8h]@5
  int v7; // [sp+50h] [bp-4h]@2

  memset(&v5, -858993460, 0x48u);
  if ( a1 <= a3 )
    v7 = a3 - a1;
  else
    v7 = a1 - a3;
  if ( a2 <= a4 )
    v6 = a4 - a2;
  else
    v6 = a2 - a4;
  if ( v7 > 6 || v6 > 6 )
  {
    if ( v7 <= v6 )
      result = v6 + 1;
    else
      result = v7 + 1;
  }
  else
  {
    result = *(&dword_47B904[7 * v6] + v7);
  }
  return result;
}
// 47B904: using guessed type int dword_47B904[];

//----- (004119E0) --------------------------------------------------------
int __usercall sub_4119E0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@4
  int v3; // eax@4
  char v5; // [sp+0h] [bp-86Ch]@4
  int v6; // [sp+4h] [bp-868h]@17
  int v7; // [sp+8h] [bp-864h]@17
  char v8; // [sp+Ch] [bp-860h]@1
  int v9; // [sp+4Ch] [bp-820h]@14
  int v10; // [sp+50h] [bp-81Ch]@14
  int v11; // [sp+54h] [bp-818h]@14
  int v12; // [sp+58h] [bp-814h]@14
  int i; // [sp+5Ch] [bp-810h]@8
  int v14; // [sp+60h] [bp-80Ch]@7
  char v15[1024]; // [sp+64h] [bp-808h]@7
  int v16; // [sp+464h] [bp-408h]@5
  char v17; // [sp+468h] [bp-404h]@5
  int v18; // [sp+868h] [bp-4h]@1
  int v19; // [sp+86Ch] [bp+0h]@4

  memset(&v8, -858993460, 0x860u);
  v18 = sub_434A90(a1, a2, "./InitItem.csv", (int)"rb");
  if ( !v18 )
    v18 = sub_434A90(a1, a2, "../../TMSRV/Run/InitItem.csv", (int)"rb");
  if ( v18 )
  {
    v3 = sub_434870(a1, a2, (int)&v17, 1023, v18);
    v16 = v3;
    if ( v3 )
    {
      dword_98D5C4 = 0;
      while ( 1 )
      {
        v14 = sub_434870(a1, a2, (int)v15, 1024, v18);
        if ( !v14 )
          break;
        for ( i = 0; ; ++i )
        {
          if ( i < 1024 )
          {
            if ( v15[i] == 44 )
              v15[i] = 32;
            if ( v15[i] )
              continue;
          }
          break;
        }
        v12 = -1;
        v11 = 0;
        v10 = 0;
        v9 = 0;
        sub_4347B0(a1, (int)&v19, a2, (int)v15, "%d %d %d %d", (unsigned int)&v12);
        if ( v12 != -1 )
        {
          word_799138[4 * dword_98D5C4] = v11;
          word_79913A[4 * dword_98D5C4] = v10;
          word_79913C[4 * dword_98D5C4] = v12;
          word_79913E[4 * dword_98D5C4++] = v9;
        }
      }
      v3 = sub_4346D0(a1, a2, v18);
    }
  }
  else
  {
    v2 = MessageBoxA(0, "There is no file", "InitItem.csv", 0);
    v3 = sub_434B10(&v5 == &v5, v2, a1, (unsigned int)&v19, (int)&v5);
  }
  return sub_434B10(1, v3, v7, v5, v6);
}
// 799138: using guessed type __int16 word_799138[];
// 79913A: using guessed type __int16 word_79913A[];
// 79913C: using guessed type __int16 word_79913C[];
// 79913E: using guessed type __int16 word_79913E[];
// 98D5C4: using guessed type int dword_98D5C4;
// 4119E0: using guessed type char var_808[1024];

//----- (00411CA0) --------------------------------------------------------
int __usercall sub_411CA0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // edi@1
  int v3; // eax@4
  int v4; // eax@4
  void *v5; // edi@19
  char v7; // [sp+0h] [bp-6F0h]@4
  int v8; // [sp+4h] [bp-6ECh]@21
  int v9; // [sp+8h] [bp-6E8h]@21
  char v10; // [sp+Ch] [bp-6E4h]@1
  char v11; // [sp+4Ch] [bp-6A4h]@16
  char v12; // [sp+14Ch] [bp-5A4h]@16
  int v13; // [sp+24Ch] [bp-4A4h]@13
  char v14; // [sp+250h] [bp-4A0h]@13
  int v15; // [sp+27Ch] [bp-474h]@16
  char v16[8]; // [sp+280h] [bp-470h]@16
  char v17[8]; // [sp+288h] [bp-468h]@16
  int i; // [sp+2B0h] [bp-440h]@7
  int v19; // [sp+2B4h] [bp-43Ch]@6
  char v20[4]; // [sp+2B8h] [bp-438h]@16
  char v21[4]; // [sp+2D0h] [bp-420h]@16
  int v22; // [sp+2E8h] [bp-408h]@5
  char v23[1024]; // [sp+2ECh] [bp-404h]@5
  int v24; // [sp+6ECh] [bp-4h]@1
  int v25; // [sp+6F0h] [bp+0h]@1

  memset(&v10, -858993460, 0x6E4u);
  v2 = (int)&v25;
  v24 = sub_434A90(a1, a2, "./SkillData.csv", (int)"rb");
  if ( !v24 )
    v24 = sub_434A90(a1, a2, "../../TMSRV/Run/SkillData.csv", (int)"rb");
  if ( v24 )
  {
    sub_434AB0(dword_796A30, 0, 0x2700u);
    v4 = sub_434870(a1, a2, (int)v23, 1024, v24);
    v22 = v4;
    if ( v4 )
    {
      while ( 1 )
      {
        v19 = sub_434870(a1, a2, (int)v23, 1024, v24);
        if ( !v19 )
          break;
        for ( i = 0; ; ++i )
        {
          if ( i < 1024 )
          {
            if ( v23[i] == 44 )
              v23[i] = 32;
            if ( v23[i] )
              continue;
          }
          break;
        }
        sub_434AB0(&v14, 0, 0x60u);
        v13 = -1;
        sub_4347B0(
          a1,
          v2,
          a2,
          (int)v23,
          "%d %d %d %d %d %d %d %d %d %d %d %d %d %s %s %d %d %d %d %d %d %d %d",
          (unsigned int)&v13);
        if ( v13 >= 0 && v13 < 104 )
        {
          v15 /= 4;
          sub_434AB0(v21, 0, 0x18u);
          sub_434AB0(v20, 0, 0x18u);
          sub_434AB0(v16, 0, 8u);
          sub_434AB0(v17, 0, 8u);
          sub_4347B0(a1, v2, a2, (int)&v12, "%d.%d.%d.%d.%d.%d", (unsigned int)v21);
          sub_4347B0(a1, v2, a2, (int)&v11, "%d.%d.%d.%d.%d.%d", (unsigned int)v20);
          for ( i = 0; i < 6; ++i )
          {
            v16[i] = v21[4 * i];
            v17[i] = v20[4 * i];
          }
          v5 = &dword_796A30[24 * v13];
          memcpy(v5, &v14, 0x60u);
          a2 = (int)&i;
          v2 = (int)((char *)v5 + 96);
        }
      }
      v4 = sub_4346D0(a1, a2, v24);
    }
  }
  else
  {
    v3 = MessageBoxA(0, "There is no file", "SkillData.csv", 0);
    v4 = sub_434B10(&v7 == &v7, v3, a1, (unsigned int)&v25, (int)&v7);
  }
  return sub_434B10(1, v4, v9, v7, v8);
}
// 796A30: using guessed type int dword_796A30[];
// 411CA0: using guessed type char var_404[1024];
// 411CA0: using guessed type char var_470[8];
// 411CA0: using guessed type char var_468[8];
// 411CA0: using guessed type char var_420[4];
// 411CA0: using guessed type char var_438[4];

//----- (00412140) --------------------------------------------------------
int __usercall sub_412140<eax>(int a1<ebx>, int a2, int a3)
{
  int v3; // eax@2
  int v4; // eax@3
  char v6; // [sp+0h] [bp-50h]@3
  int v7; // [sp+4h] [bp-4Ch]@6
  int v8; // [sp+8h] [bp-48h]@6
  char v9; // [sp+Ch] [bp-44h]@1
  int v10; // [sp+4Ch] [bp-4h]@3
  int v11; // [sp+50h] [bp+0h]@3

  memset(&v9, -858993460, 0x44u);
  if ( a2 )
  {
    v4 = (int)CharNextA((LPCSTR)(a3 + a2));
    v10 = sub_434B10(&v6 == &v6, v4, a1, (unsigned int)&v11, (int)&v6);
    v3 = a2 + a3 + 1 == v10;
  }
  else
  {
    v3 = 1;
  }
  return sub_434B10(1, v3, v8, v6, v7);
}

//----- (004121C0) --------------------------------------------------------
int __usercall sub_4121C0<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  int v4; // eax@5
  int v5; // eax@5
  char v7; // [sp+0h] [bp-1468h]@5
  int v8; // [sp+4h] [bp-1464h]@27
  int v9; // [sp+8h] [bp-1460h]@27
  char v10; // [sp+Ch] [bp-145Ch]@1
  int v11; // [sp+4Ch] [bp-141Ch]@19
  int i; // [sp+50h] [bp-1418h]@17
  int v13; // [sp+54h] [bp-1414h]@7
  char v14[11]; // [sp+58h] [bp-1410h]@7
  char v15[1013]; // [sp+63h] [bp-1405h]@20
  int v16; // [sp+1058h] [bp-410h]@7
  int v17; // [sp+105Ch] [bp-40Ch]@7
  int v18; // [sp+1060h] [bp-408h]@7
  const CHAR Text; // [sp+1064h] [bp-404h]@5
  int v20; // [sp+1464h] [bp-4h]@1
  int v21; // [sp+1468h] [bp+0h]@5

  memset(&v10, -858993460, 0x145Cu);
  v20 = 0;
  if ( a4 )
    v20 = sub_434A90(a1, a2, "./Guilds.bak", (int)"rb");
  else
    v20 = sub_434A90(a1, a2, "./Guilds.txt", (int)"rb");
  if ( v20 )
  {
    sub_434AB0(byte_484320, 0, 0x300000u);
    while ( 1 )
    {
      v18 = -1;
      v17 = -1;
      v16 = -1;
      sub_434AB0(v14, 0, 0x1000u);
      v13 = sub_434870(a1, a2, (int)&Text, 1024, v20);
      if ( !v13 )
        break;
      sub_4347B0(a1, (int)&v21, a2, (int)&Text, "%d %d %d %s %s %s %s", (unsigned int)&v18);
      if ( v18 < 0 || v18 >= 10 || v17 < 0 || v17 >= 16 || v16 < 0 || v16 >= 4096 || !v14 )
      {
        v5 = 0;
        return sub_434B10(1, v5, v9, v7, v8);
      }
      if ( v18 == a3 )
      {
        for ( i = 0; i < 4; ++i )
        {
          v11 = sub_434FC0((int)&v14[1024 * i]);
          if ( v11 > 11 )
          {
            v15[1024 * i] = 0;
            v11 = 11;
          }
          if ( v11 > 0 && !sub_401028(&v14[1024 * i], v11 - 1) )
            *(&v14[1024 * i - 1] + v11) = 0;
          sub_434B90((int)(&byte_484320[196608 * v17] + 48 * v16 + 12 * i));
        }
      }
    }
    sub_4346D0(a1, a2, v20);
    dword_47AFB4 = a3;
    v5 = 1;
  }
  else
  {
    v4 = MessageBoxA(0, &Text, "Can't parse string in Guilds", 0);
    sub_434B10(&v7 == &v7, v4, a1, (unsigned int)&v21, (int)&v7);
    v5 = 0;
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 401028: using guessed type _DWORD __cdecl sub_401028(_DWORD, _DWORD);
// 47AFB4: using guessed type int dword_47AFB4;
// 4121C0: using guessed type char var_1405[1013];
// 4121C0: using guessed type char var_1410[11];

//----- (00412550) --------------------------------------------------------
int __usercall sub_412550<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@4
  int v3; // eax@4
  int v4; // esi@14
  char v6; // [sp+0h] [bp-1F8h]@4
  int v7; // [sp+4h] [bp-1F4h]@33
  int v8; // [sp+8h] [bp-1F0h]@33
  char v9; // [sp+Ch] [bp-1ECh]@1
  int m; // [sp+4Ch] [bp-1ACh]@27
  int l; // [sp+50h] [bp-1A8h]@25
  int k; // [sp+54h] [bp-1A4h]@18
  int j; // [sp+58h] [bp-1A0h]@16
  int i; // [sp+5Ch] [bp-19Ch]@14
  char v15; // [sp+60h] [bp-198h]@14
  char v16; // [sp+A0h] [bp-158h]@14
  int v17; // [sp+A4h] [bp-154h]@13
  int v18; // [sp+A8h] [bp-150h]@6
  int v19; // [sp+ACh] [bp-14Ch]@7
  int v20; // [sp+B0h] [bp-148h]@7
  char v21; // [sp+B4h] [bp-144h]@7
  char v22; // [sp+F4h] [bp-104h]@6
  int v23; // [sp+1F4h] [bp-4h]@1
  int v24; // [sp+1F8h] [bp+0h]@4

  memset(&v9, -858993460, 0x1ECu);
  v23 = sub_434A90(a1, a2, "./serverlist.txt", (int)"rt");
  if ( !v23 )
    v23 = sub_434A90(a1, a2, "../../serverlist.txt", (int)"rt");
  if ( v23 )
  {
    sub_434AB0(byte_98B758, 0, 0x1B80u);
    while ( 1 )
    {
      v18 = sub_434870(a1, a2, (int)&v22, 255, v23);
      if ( !v18 )
        break;
      v20 = -1;
      v19 = -1;
      v21 = 0;
      sub_4347B0(a1, (int)&v24, a2, (int)&v22, "%d %d %s", (unsigned int)&v20);
      if ( v20 < 0 )
        break;
      if ( v20 >= 10 || v19 < 0 || v19 >= 11 )
        break;
      sub_434B90((int)(&byte_98B758[704 * v20] + 64 * v19));
    }
    sub_4346D0(a1, a2, v23);
    v17 = sub_434A90(a1, a2, "./serverlist.bin", (int)"wb");
    if ( v17 )
    {
      memcpy(&v15, "ㄱㄴㄷㄹㅁㅂㅅㅇㅈㅊㅋㅌㅍㅎㅏㅑㅓㅕㅗㅛㅜㅠㅡㅣㅏㅔㅣㅗㅜ가나다", 0x40u);
      v16 = aDbdddzdidDDDDD[64];
      v4 = (int)&aDbdddzdidDDDDD[65];
      for ( i = 0; i < 10; ++i )
      {
        for ( j = 0; j < 11; ++j )
        {
          for ( k = 0; k < 64; ++k )
          {
            v4 = 704 * i + k;
            *(&byte_98B758[64 * j] + v4) = *(&v15 + 63 - k) + *(&byte_98B758[704 * i] + 64 * j + k);
          }
        }
      }
      sub_4344B0(a1, v4, byte_98B758, 0x6Eu, 0x40u, v17);
      sub_4346D0(a1, v4, v17);
      for ( i = 0; i < 10; ++i )
      {
        for ( l = 0; l < 11; ++l )
        {
          for ( m = 0; m < 64; ++m )
            *(&byte_98B758[704 * i] + 64 * l + m) -= *(&v15 + 63 - m);
        }
      }
    }
    v3 = 1;
  }
  else
  {
    v2 = MessageBoxA(0, "Can't open server list.txt", "address", 0);
    sub_434B10(&v6 == &v6, v2, a1, (unsigned int)&v24, (int)&v6);
    v3 = 0;
  }
  return sub_434B10(1, v3, v8, v6, v7);
}
// 412550: using guessed type char var_198[68];

//----- (004129D0) --------------------------------------------------------
int __usercall sub_4129D0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@4
  int v3; // eax@4
  char v5; // [sp+0h] [bp-158h]@4
  int v6; // [sp+4h] [bp-154h]@6
  int v7; // [sp+8h] [bp-150h]@6
  char v8; // [sp+Ch] [bp-14Ch]@1
  int v9; // [sp+4Ch] [bp-10Ch]@1
  char v10; // [sp+50h] [bp-108h]@1
  int v11; // [sp+150h] [bp-8h]@1
  int v12; // [sp+154h] [bp-4h]@1
  int v13; // [sp+158h] [bp+0h]@4

  memset(&v8, -858993460, 0x14Cu);
  v12 = 0;
  v11 = 0;
  sub_434B90((int)&v10);
  v9 = sub_434A90(a1, a2, &v10, (int)"rb");
  if ( !v9 )
    v9 = sub_434A90(a1, a2, "../../TMSRV/Run/AttributeMap.dat", (int)"rb");
  if ( v9 )
  {
    sub_435500(a1, a2, (int)&byte_7AD4A8, 0x400u, 0x400u, v9);
    sub_4346D0(a1, a2, v9);
    v3 = 1;
  }
  else
  {
    v2 = MessageBoxA(0, "There is no file", "Attributemap.dat", 0);
    sub_434B10(&v5 == &v5, v2, a1, (unsigned int)&v13, (int)&v5);
    v3 = 0;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}
// 7AD4A8: using guessed type char byte_7AD4A8;

//----- (00413E00) --------------------------------------------------------
signed int __cdecl sub_413E00(char a1, char a2)
{
  signed int result; // eax@2
  char v3; // [sp+Ch] [bp-44h]@1
  int v4; // [sp+4Ch] [bp-4h]@1

  memset(&v3, -858993460, 0x44u);
  v4 = 1 << a2;
  if ( a1 & (1 << a2) )
    result = 1;
  else
    result = 0;
  return result;
}

//----- (00415AB0) --------------------------------------------------------
int __cdecl sub_415AB0(signed int a1)
{
  char v2; // [sp+Ch] [bp-44h]@1
  int v3; // [sp+4Ch] [bp-4h]@1

  memset(&v2, -858993460, 0x44u);
  v3 = 0;
  if ( a1 % 10 > 5 )
    v3 = 1;
  return v3;
}

//----- (00415E20) --------------------------------------------------------
int __thiscall sub_415E20(void *this)
{
  char v2; // [sp+0h] [bp-54h]@0
  int v3; // [sp+4h] [bp-50h]@0
  int v4; // [sp+8h] [bp-4Ch]@0
  char v5; // [sp+Ch] [bp-48h]@1
  int i; // [sp+4Ch] [bp-8h]@1
  int v7; // [sp+50h] [bp-4h]@1

  memset(&v5, -858993460, 0x48u);
  v7 = (int)this;
  for ( i = 0; i < 10000; ++i )
  {
    *(_DWORD *)(v7 + 6184 * i) = 0;
    *(_DWORD *)(v7 + 6184 * i + 4) = -1;
    *(_DWORD *)(v7 + 6184 * i + 6180) = 0;
    sub_434AB0((void *)(v7 + 6184 * i + 6124), 0, 0x32u);
    sub_434AB0((void *)(v7 + 6184 * i + 8), 0, 0x17E4u);
  }
  return sub_434B10(1, v7, v4, v2, v3);
}

//----- (00415F30) --------------------------------------------------------
signed int __cdecl sub_415F30()
{
  return -858993460;
}

//----- (00415F60) --------------------------------------------------------
int __userpurge sub_415F60<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  int v12; // eax@7
  char v14; // [sp+0h] [bp-19D0h]@0
  int v15; // [sp+4h] [bp-19CCh]@0
  int v16; // [sp+8h] [bp-19C8h]@0
  char v17; // [sp+Ch] [bp-19C4h]@1
  int v18; // [sp+4Ch] [bp-1984h]@57
  int m; // [sp+50h] [bp-1980h]@50
  int l; // [sp+54h] [bp-197Ch]@42
  int k; // [sp+58h] [bp-1978h]@34
  int j; // [sp+5Ch] [bp-1974h]@26
  int i; // [sp+60h] [bp-1970h]@18
  char v24; // [sp+64h] [bp-196Ch]@17
  char v25; // [sp+74h] [bp-195Ch]@17
  char v26; // [sp+7Eh] [bp-1952h]@17
  char v27; // [sp+7Fh] [bp-1951h]@17
  char v28; // [sp+80h] [bp-1950h]@17
  int v29; // [sp+98h] [bp-1938h]@17
  int v30; // [sp+9Ch] [bp-1934h]@17
  __int16 v31; // [sp+D04h] [bp-CCCh]@18
  char v32; // [sp+D06h] [bp-CCAh]@23
  char v33; // [sp+D07h] [bp-CC9h]@23
  char v34; // [sp+D08h] [bp-CC8h]@23
  char v35[91]; // [sp+D09h] [bp-CC7h]@23
  __int16 v36; // [sp+D64h] [bp-C6Ch]@56
  char v37; // [sp+D66h] [bp-C6Ah]@56
  char v38; // [sp+D67h] [bp-C69h]@56
  char v39; // [sp+1108h] [bp-8C8h]@17
  int v40; // [sp+1848h] [bp-188h]@15
  char v41; // [sp+184Ch] [bp-184h]@15
  char v42; // [sp+18CCh] [bp-104h]@15
  const CHAR MultiByteStr; // [sp+194Ch] [bp-84h]@1
  char v44; // [sp+194Dh] [bp-83h]@2
  char v45; // [sp+194Eh] [bp-82h]@3
  char v46; // [sp+194Fh] [bp-81h]@4
  char v47; // [sp+1950h] [bp-80h]@6
  int v48; // [sp+19CCh] [bp-4h]@1
  int v49; // [sp+19D0h] [bp+0h]@1

  memset(&v17, -858993460, 0x19C4u);
  v48 = a1;
  sub_435800((int)&MultiByteStr, a4, 0x10u);
  sub_449530(a2, (int)&v49, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v44 != 79 || v45 != 77 || v46 < 48 || v46 > 57 || v47 )
  {
    if ( MultiByteStr != 76 || v44 != 80 || v45 != 84 || v46 < 48 || v46 > 57 || v47 )
    {
      sub_4013C0(a4, &v41);
      sub_4343B0(a2, a3, (int)&v42, (int)"./Newaccount/%s/%s", (unsigned int)&v41);
      v40 = sub_444AE0(a2, a3, &v42, -32768, 0);
      if ( v40 == -1 )
      {
        sub_43AC10(0xFFFFFFFFu);
        sub_434AB0(&v24, 0, 0x17E4u);
        sub_434B90((int)&v24);
        sub_434B90((int)&v25);
        v27 = 0;
        v26 = 0;
        sub_434B90((int)&v28);
        v29 = a7;
        v30 = a8;
        sub_434AB0(&v39, 0xFFu, 0x40u);
        switch ( a12 )
        {
          case 1:
            v31 = 3983;
            for ( i = 2; i < 12; ++i )
            {
              if ( i >= 7 )
                *(&v31 + 4 * i) = 688;
              else
                *(&v31 + 4 * i) = 682;
              *(&v32 + 8 * i) = 61;
              *(&v33 + 8 * i) = 120;
              *(&v34 + 8 * i) = 111;
              v35[8 * i] = 111;
            }
            break;
          case 2:
            v31 = 3983;
            for ( j = 2; j < 12; ++j )
            {
              if ( j >= 7 )
                *(&v31 + 4 * j) = 688;
              else
                *(&v31 + 4 * j) = 682;
              *(&v32 + 8 * j) = 61;
              *(&v33 + 8 * j) = 120;
              *(&v34 + 8 * j) = 111;
              v35[8 * j] = 111;
            }
            break;
          case 3:
            for ( k = 2; k < 12; ++k )
            {
              if ( k >= 7 )
                *(&v31 + 4 * k) = 688;
              else
                *(&v31 + 4 * k) = 682;
              *(&v32 + 8 * k) = 61;
              *(&v33 + 8 * k) = 120;
              *(&v34 + 8 * k) = 111;
              v35[8 * k] = 111;
            }
            break;
          case 4:
            v31 = 3986;
            for ( l = 2; l < 12; ++l )
            {
              if ( l >= 7 )
                *(&v31 + 4 * l) = 688;
              else
                *(&v31 + 4 * l) = 682;
              *(&v32 + 8 * l) = 61;
              *(&v33 + 8 * l) = 120;
              *(&v34 + 8 * l) = 111;
              v35[8 * l] = 111;
            }
            break;
          case 5:
            v31 = 3986;
            for ( m = 2; m < 12; ++m )
            {
              if ( m >= 7 )
                *(&v31 + 4 * m) = 688;
              else
                *(&v31 + 4 * m) = 682;
              *(&v32 + 8 * m) = 61;
              *(&v33 + 8 * m) = 120;
              *(&v34 + 8 * m) = 111;
              v35[8 * m] = 111;
            }
            v36 = 3378;
            v37 = 111;
            v38 = 111;
            break;
        }
        v18 = sub_4013F2(&v24, 0);
        if ( v18 )
          v12 = 1;
        else
          v12 = 0;
      }
      else
      {
        sub_43AC10(v40);
        v12 = 0;
      }
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = 0;
  }
  return sub_434B10(1, v12, v16, v14, v15);
}
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 415F60: using guessed type char var_CC7[91];

//----- (00416600) --------------------------------------------------------
int __userpurge sub_416600<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6, int a7)
{
  int v7; // eax@7
  char v9; // [sp+0h] [bp-19C4h]@0
  int v10; // [sp+4h] [bp-19C0h]@0
  int v11; // [sp+8h] [bp-19BCh]@0
  char v12; // [sp+Ch] [bp-19B8h]@1
  int v13; // [sp+4Ch] [bp-1978h]@27
  int v14; // [sp+50h] [bp-1974h]@19
  char v15; // [sp+54h] [bp-1970h]@19
  char v16; // [sp+64h] [bp-1960h]@21
  int v17; // [sp+88h] [bp-193Ch]@22
  int v18; // [sp+8Ch] [bp-1938h]@24
  int v19; // [sp+1838h] [bp-18Ch]@17
  int v20; // [sp+183Ch] [bp-188h]@15
  char v21; // [sp+1840h] [bp-184h]@15
  char v22; // [sp+18C0h] [bp-104h]@15
  const CHAR MultiByteStr; // [sp+1940h] [bp-84h]@1
  char v24; // [sp+1941h] [bp-83h]@2
  char v25; // [sp+1942h] [bp-82h]@3
  char v26; // [sp+1943h] [bp-81h]@4
  char v27; // [sp+1944h] [bp-80h]@6
  int v28; // [sp+19C0h] [bp-4h]@1
  int v29; // [sp+19C4h] [bp+0h]@1

  memset(&v12, -858993460, 0x19B8u);
  v28 = a1;
  sub_435800((int)&MultiByteStr, a4, 0x10u);
  sub_449530(a2, (int)&v29, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v24 != 79 || v25 != 77 || v26 < 48 || v26 > 57 || v27 )
  {
    if ( MultiByteStr != 76 || v24 != 80 || v25 != 84 || v26 < 48 || v26 > 57 || v27 )
    {
      sub_4013C0(a4, &v21);
      sub_4343B0(a2, a3, (int)&v22, (int)"./account/%s/%s", (unsigned int)&v21);
      v20 = sub_444AE0(a2, a3, &v22, -32768, 0);
      if ( v20 == -1 )
      {
        sub_43AC10(0xFFFFFFFFu);
        v7 = 0;
      }
      else
      {
        sub_43AC10(v20);
        v19 = sub_401055(a4);
        if ( v19 != -1 )
          sub_434B90(v28 + 6184 * v19 + 24);
        sub_434C80(&v15, (const void *)a4, 0x10u);
        v14 = sub_40137F(&v15, 1);
        if ( v14 )
        {
          sub_434B90((int)&v16);
          if ( a6 )
            v17 = a6;
          if ( a7 )
            v18 = a7;
          v14 = sub_4013F2(&v15, 1);
          if ( v14 )
          {
            v13 = sub_401055(&v15);
            if ( v13 > 0 && v13 < 10000 )
              sub_434B90(v28 + 6184 * v13 + 24);
            v7 = 1;
          }
          else
          {
            sub_401316("err,updateAccount write fail", a4);
            v7 = 0;
          }
        }
        else
        {
          sub_401316("err,updateaccount read fail", a4);
          v7 = 0;
        }
      }
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = 0;
  }
  return sub_434B10(1, v7, v11, v9, v10);
}
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);

//----- (00416970) --------------------------------------------------------
int __userpurge sub_416970<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4)
{
  int v4; // eax@7
  char v6; // [sp+0h] [bp-19C4h]@0
  int v7; // [sp+4h] [bp-19C0h]@0
  int v8; // [sp+8h] [bp-19BCh]@0
  char v9; // [sp+Ch] [bp-19B8h]@1
  int v10; // [sp+4Ch] [bp-1978h]@23
  int v11; // [sp+50h] [bp-1974h]@19
  char v12; // [sp+54h] [bp-1970h]@19
  char v13; // [sp+110h] [bp-18B4h]@21
  int v14; // [sp+1838h] [bp-18Ch]@17
  int v15; // [sp+183Ch] [bp-188h]@15
  char v16; // [sp+1840h] [bp-184h]@15
  char v17; // [sp+18C0h] [bp-104h]@15
  const CHAR MultiByteStr; // [sp+1940h] [bp-84h]@1
  char v19; // [sp+1941h] [bp-83h]@2
  char v20; // [sp+1942h] [bp-82h]@3
  char v21; // [sp+1943h] [bp-81h]@4
  char v22; // [sp+1944h] [bp-80h]@6
  int v23; // [sp+19C0h] [bp-4h]@1
  int v24; // [sp+19C4h] [bp+0h]@1

  memset(&v9, -858993460, 0x19B8u);
  v23 = a1;
  sub_435800((int)&MultiByteStr, a4, 0x10u);
  sub_449530(a2, (int)&v24, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v19 != 79 || v20 != 77 || v21 < 48 || v21 > 57 || v22 )
  {
    if ( MultiByteStr != 76 || v19 != 80 || v20 != 84 || v21 < 48 || v21 > 57 || v22 )
    {
      sub_4013C0(a4, &v16);
      sub_4343B0(a2, a3, (int)&v17, (int)"./account/%s/%s", (unsigned int)&v16);
      v15 = sub_444AE0(a2, a3, &v17, -32768, 0);
      if ( v15 == -1 )
      {
        sub_43AC10(0xFFFFFFFFu);
        v4 = 0;
      }
      else
      {
        sub_43AC10(v15);
        v14 = sub_401055(a4);
        if ( v14 != -1 )
          sub_434AB0((void *)(v23 + 6184 * v14 + 196), 0, 4u);
        sub_434C80(&v12, (const void *)a4, 0x10u);
        v11 = sub_40137F(&v12, 1);
        if ( v11 )
        {
          sub_434AB0(&v13, 0, 4u);
          v11 = sub_4013F2(&v12, 1);
          if ( v11 )
          {
            v10 = sub_401055(&v12);
            if ( v10 > 0 && v10 < 10000 )
              sub_434AB0((void *)(v23 + 6184 * v10 + 196), 0, 4u);
            v4 = 1;
          }
          else
          {
            sub_401316("err,update Lock Account write fail", a4);
            v4 = 0;
          }
        }
        else
        {
          sub_401316("err,update Lock account read fail", a4);
          v4 = 0;
        }
      }
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);

//----- (00416FA0) --------------------------------------------------------
int __userpurge sub_416FA0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, signed int a5)
{
  int v5; // eax@33
  int v6; // eax@82
  int v7; // eax@92
  int v8; // esi@170
  void *v9; // edi@170
  int v10; // edi@170
  int v11; // esi@170
  const void *v12; // esi@215
  int v13; // esi@215
  int v14; // eax@342
  int v15; // esi@342
  int v16; // esi@383
  int v17; // eax@405
  int v18; // ecx@479
  int v19; // eax@479
  int v20; // ecx@479
  int v21; // esi@479
  int v22; // edx@479
  int v23; // ecx@479
  int v24; // eax@479
  int v25; // ecx@479
  int v26; // esi@479
  int v27; // edx@479
  const void *v28; // esi@487
  int v29; // esi@487
  int v30; // ecx@581
  int v31; // edx@581
  int v32; // ecx@589
  int v33; // edx@589
  int v34; // ecx@688
  int v35; // esi@688
  int v36; // edx@688
  int v37; // eax@713
  int v38; // edx@713
  int v39; // eax@713
  int v40; // ecx@713
  int v41; // esi@713
  int v42; // ecx@724
  int v43; // eax@724
  int v44; // ecx@724
  int v45; // edx@724
  int v46; // esi@724
  char v48; // [sp+0h] [bp-A540h]@405
  int v49; // [sp+4h] [bp-A53Ch]@778
  int v50; // [sp+8h] [bp-A538h]@778
  char v51; // [sp+Ch] [bp-A534h]@1
  int v52; // [sp+4Ch] [bp-A4F4h]@1
  char v53; // [sp+50h] [bp-A4F0h]@775
  char v54; // [sp+150h] [bp-A3F0h]@771
  int v55; // [sp+250h] [bp-A2F0h]@765
  char v56; // [sp+254h] [bp-A2ECh]@765
  int v57; // [sp+354h] [bp-A1ECh]@765
  __int16 v58; // [sp+358h] [bp-A1E8h]@763
  __int16 v59; // [sp+35Ch] [bp-A1E4h]@763
  __int16 v60; // [sp+35Eh] [bp-A1E2h]@763
  char v61; // [sp+364h] [bp-A1DCh]@763
  int v62; // [sp+544h] [bp-9FFCh]@762
  int v63; // [sp+548h] [bp-9FF8h]@762
  char v64; // [sp+54Ch] [bp-9FF4h]@761
  __int16 v65; // [sp+550h] [bp-9FF0h]@761
  __int16 v66; // [sp+552h] [bp-9FEEh]@761
  char v67; // [sp+558h] [bp-9FE8h]@761
  char v68; // [sp+840h] [bp-9D00h]@756
  int i17; // [sp+940h] [bp-9C00h]@754
  char v70; // [sp+944h] [bp-9BFCh]@754
  int v71; // [sp+A44h] [bp-9AFCh]@754
  int i16; // [sp+A48h] [bp-9AF8h]@751
  int v73; // [sp+A4Ch] [bp-9AF4h]@747
  int v74; // [sp+A50h] [bp-9AF0h]@742
  int v75; // [sp+A54h] [bp-9AECh]@742
  int v76; // [sp+A58h] [bp-9AE8h]@742
  char v77; // [sp+A5Ch] [bp-9AE4h]@761
  int v78; // [sp+B5Ch] [bp-99E4h]@736
  int v79; // [sp+B60h] [bp-99E0h]@736
  int v80; // [sp+B64h] [bp-99DCh]@736
  int v81; // [sp+B68h] [bp-99D8h]@726
  __int16 v82; // [sp+B6Ch] [bp-99D4h]@725
  __int16 v83; // [sp+B70h] [bp-99D0h]@725
  __int16 v84; // [sp+B72h] [bp-99CEh]@725
  char v85; // [sp+B78h] [bp-99C8h]@725
  __int16 v86; // [sp+235Eh] [bp-81E2h]@725
  char v87; // [sp+2360h] [bp-81E0h]@723
  char v88; // [sp+23E0h] [bp-8160h]@721
  char v89; // [sp+2460h] [bp-80E0h]@719
  char v90; // [sp+24E0h] [bp-8060h]@718
  char v91; // [sp+24EEh] [bp-8052h]@718
  char v92; // [sp+24EFh] [bp-8051h]@718
  char v93; // [sp+2560h] [bp-7FE0h]@717
  char v94; // [sp+25E0h] [bp-7F60h]@714
  char v95; // [sp+25EEh] [bp-7F52h]@718
  char v96; // [sp+25EFh] [bp-7F51h]@718
  int v97; // [sp+2660h] [bp-7EE0h]@714
  int v98; // [sp+2664h] [bp-7EDCh]@714
  int v99; // [sp+2668h] [bp-7ED8h]@714
  char v100; // [sp+266Ch] [bp-7ED4h]@712
  char v101; // [sp+26ECh] [bp-7E54h]@710
  char v102; // [sp+276Ch] [bp-7DD4h]@709
  char v103; // [sp+277Ah] [bp-7DC6h]@709
  char v104; // [sp+277Bh] [bp-7DC5h]@709
  char v105; // [sp+27ECh] [bp-7D54h]@708
  char v106; // [sp+286Ch] [bp-7CD4h]@706
  int v107; // [sp+28ECh] [bp-7C54h]@704
  char v108; // [sp+28F0h] [bp-7C50h]@704
  char v109; // [sp+28FEh] [bp-7C42h]@704
  char v110; // [sp+28FFh] [bp-7C41h]@704
  int v111; // [sp+2970h] [bp-7BD0h]@704
  int v112; // [sp+2974h] [bp-7BCCh]@704
  int v113; // [sp+2978h] [bp-7BC8h]@694
  char v114; // [sp+297Ch] [bp-7BC4h]@694
  char v115; // [sp+298Ah] [bp-7BB6h]@694
  char v116; // [sp+298Bh] [bp-7BB5h]@694
  int v117; // [sp+29FCh] [bp-7B44h]@694
  int v118; // [sp+2A00h] [bp-7B40h]@694
  int v119; // [sp+2A04h] [bp-7B3Ch]@693
  int v120; // [sp+2A08h] [bp-7B38h]@693
  int i15; // [sp+2A0Ch] [bp-7B34h]@690
  int v122; // [sp+2A10h] [bp-7B30h]@690
  int v123; // [sp+2A14h] [bp-7B2Ch]@690
  int v124; // [sp+2A18h] [bp-7B28h]@688
  __int16 v125; // [sp+2A1Ch] [bp-7B24h]@688
  __int16 v126; // [sp+2A20h] [bp-7B20h]@688
  __int16 v127; // [sp+2A22h] [bp-7B1Eh]@688
  char v128; // [sp+2A2Ch] [bp-7B14h]@688
  __int16 v129; // [sp+2D20h] [bp-7820h]@688
  __int16 v130; // [sp+2D22h] [bp-781Eh]@693
  char v131; // [sp+2D26h] [bp-781Ah]@688
  char v132; // [sp+2D38h] [bp-7808h]@688
  char v133; // [sp+2DD8h] [bp-7768h]@688
  int v134; // [sp+2EF8h] [bp-7648h]@682
  int v135; // [sp+2EFCh] [bp-7644h]@678
  int i14; // [sp+2F00h] [bp-7640h]@674
  int v137; // [sp+2F04h] [bp-763Ch]@674
  int v138; // [sp+2F08h] [bp-7638h]@673
  int v139; // [sp+2F0Ch] [bp-7634h]@668
  int v140; // [sp+2F10h] [bp-7630h]@668
  int v141; // [sp+2F14h] [bp-762Ch]@668
  int v142; // [sp+2F18h] [bp-7628h]@668
  char v143; // [sp+2F1Ch] [bp-7624h]@667
  __int16 v144; // [sp+2F20h] [bp-7620h]@667
  __int16 v145; // [sp+2F22h] [bp-761Eh]@667
  char v146; // [sp+2F28h] [bp-7618h]@667
  char v147; // [sp+3210h] [bp-7330h]@667
  int v148; // [sp+3310h] [bp-7230h]@650
  char v149; // [sp+3314h] [bp-722Ch]@648
  __int16 v150; // [sp+33E8h] [bp-7158h]@650
  char v151; // [sp+3608h] [bp-6F38h]@650
  char v152; // [sp+36B8h] [bp-6E88h]@650
  int v153; // [sp+37D8h] [bp-6D68h]@646
  __int16 v154; // [sp+37DCh] [bp-6D64h]@639
  __int16 v155; // [sp+37E0h] [bp-6D60h]@639
  __int16 v156; // [sp+37E2h] [bp-6D5Eh]@639
  int v157; // [sp+37E8h] [bp-6D58h]@639
  int v158; // [sp+37ECh] [bp-6D54h]@638
  int v159; // [sp+37F0h] [bp-6D50h]@616
  char v160; // [sp+37F4h] [bp-6D4Ch]@616
  char v161; // [sp+37F5h] [bp-6D4Bh]@620
  char v162; // [sp+37F6h] [bp-6D4Ah]@621
  char v163; // [sp+37F7h] [bp-6D49h]@622
  char v164; // [sp+37F8h] [bp-6D48h]@624
  int i2; // [sp+3804h] [bp-6D3Ch]@608
  int v166; // [sp+3808h] [bp-6D38h]@605
  int v167; // [sp+380Ch] [bp-6D34h]@605
  int v168; // [sp+3810h] [bp-6D30h]@605
  int v169; // [sp+3814h] [bp-6D2Ch]@605
  char v170; // [sp+3818h] [bp-6D28h]@604
  __int16 v171; // [sp+381Ch] [bp-6D24h]@604
  __int16 v172; // [sp+381Eh] [bp-6D22h]@604
  char v173; // [sp+3824h] [bp-6D1Ch]@604
  char v174; // [sp+3B0Ch] [bp-6A34h]@597
  int i1; // [sp+3C0Ch] [bp-6934h]@595
  char v176; // [sp+3C10h] [bp-6930h]@595
  int v177; // [sp+3D10h] [bp-6830h]@595
  __int16 v178; // [sp+3D14h] [bp-682Ch]@595
  __int16 v179; // [sp+3D18h] [bp-6828h]@595
  __int16 v180; // [sp+3D1Ah] [bp-6826h]@595
  char v181; // [sp+3D24h] [bp-681Ch]@595
  int v182; // [sp+3D34h] [bp-680Ch]@595
  int v183; // [sp+3D38h] [bp-6808h]@595
  int v184; // [sp+3D3Ch] [bp-6804h]@589
  int v185; // [sp+3D40h] [bp-6800h]@588
  int v186; // [sp+3D44h] [bp-67FCh]@581
  int v187; // [sp+3D48h] [bp-67F8h]@580
  int v188; // [sp+3D4Ch] [bp-67F4h]@578
  char v189; // [sp+3D50h] [bp-67F0h]@583
  int v190; // [sp+3DD0h] [bp-6770h]@578
  int v191; // [sp+3DD4h] [bp-676Ch]@575
  int v192; // [sp+3DD8h] [bp-6768h]@575
  int v193; // [sp+3DDCh] [bp-6764h]@575
  int v194; // [sp+3DE0h] [bp-6760h]@573
  char v195; // [sp+3DE4h] [bp-675Ch]@573
  char v196; // [sp+40D8h] [bp-6468h]@573
  char v197; // [sp+40E8h] [bp-6458h]@573
  char v198; // [sp+4188h] [bp-63B8h]@573
  int v199; // [sp+42A8h] [bp-6298h]@571
  int v200; // [sp+42ACh] [bp-6294h]@571
  int v201; // [sp+42B0h] [bp-6290h]@571
  int v202; // [sp+42B4h] [bp-628Ch]@571
  int v203; // [sp+42B8h] [bp-6288h]@548
  int nn; // [sp+42BCh] [bp-6284h]@545
  __int16 v205; // [sp+42C0h] [bp-6280h]@545
  __int16 v206; // [sp+42C4h] [bp-627Ch]@545
  __int16 v207; // [sp+42C6h] [bp-627Ah]@545
  int v208; // [sp+42CCh] [bp-6274h]@545
  __int16 v209; // [sp+42D0h] [bp-6270h]@545
  __int16 v210; // [sp+42D2h] [bp-626Eh]@545
  __int16 v211; // [sp+42D4h] [bp-626Ch]@545
  __int16 v212; // [sp+42D6h] [bp-626Ah]@545
  __int16 v213; // [sp+42D8h] [bp-6268h]@545
  __int16 v214; // [sp+42DAh] [bp-6266h]@545
  char v215[4]; // [sp+42DCh] [bp-6264h]@547
  __int16 v216; // [sp+42E0h] [bp-6260h]@549
  __int16 v217; // [sp+42E2h] [bp-625Eh]@556
  __int16 v218; // [sp+42E4h] [bp-625Ch]@559
  __int16 v219; // [sp+42E6h] [bp-625Ah]@562
  __int16 v220; // [sp+42E8h] [bp-6258h]@565
  __int16 v221; // [sp+42EAh] [bp-6256h]@568
  __int16 v222; // [sp+42F2h] [bp-624Eh]@570
  int v223; // [sp+42F4h] [bp-624Ch]@543
  char v224; // [sp+42F8h] [bp-6248h]@543
  int v225; // [sp+430Ch] [bp-6234h]@548
  __int16 v226; // [sp+431Ch] [bp-6224h]@545
  __int16 v227; // [sp+432Ch] [bp-6214h]@545
  __int16 v228; // [sp+432Eh] [bp-6212h]@545
  __int16 v229; // [sp+4330h] [bp-6210h]@545
  __int16 v230; // [sp+4332h] [bp-620Eh]@545
  char v231[32]; // [sp+4334h] [bp-620Ch]@547
  __int16 v232; // [sp+4354h] [bp-61ECh]@545
  int v233; // [sp+45D4h] [bp-5F6Ch]@548
  char v234; // [sp+469Dh] [bp-5EA3h]@570
  int v235; // [sp+47BCh] [bp-5D84h]@543
  int v236; // [sp+47C0h] [bp-5D80h]@543
  int v237; // [sp+47C4h] [bp-5D7Ch]@538
  int v238; // [sp+47C8h] [bp-5D78h]@538
  int v239; // [sp+47CCh] [bp-5D74h]@536
  int v240; // [sp+47D0h] [bp-5D70h]@536
  int v241; // [sp+47D4h] [bp-5D6Ch]@536
  char v242; // [sp+47D8h] [bp-5D68h]@535
  __int16 v243; // [sp+47DCh] [bp-5D64h]@535
  __int16 v244; // [sp+47DEh] [bp-5D62h]@535
  char v245; // [sp+47E4h] [bp-5D5Ch]@535
  char v246; // [sp+4ACCh] [bp-5A74h]@535
  int v247; // [sp+4BCCh] [bp-5974h]@528
  int v248; // [sp+4BD0h] [bp-5970h]@522
  int v249; // [sp+4BD4h] [bp-596Ch]@520
  int v250; // [sp+4BD8h] [bp-5968h]@498
  char v251; // [sp+4BDCh] [bp-5964h]@498
  char v252; // [sp+4BDDh] [bp-5963h]@502
  char v253; // [sp+4BDEh] [bp-5962h]@503
  char v254; // [sp+4BDFh] [bp-5961h]@504
  char v255; // [sp+4BE0h] [bp-5960h]@506
  int v256; // [sp+4BECh] [bp-5954h]@490
  int v257; // [sp+4BF0h] [bp-5950h]@490
  int v258; // [sp+4BF4h] [bp-594Ch]@490
  int v259; // [sp+4BF8h] [bp-5948h]@490
  int v260; // [sp+4BFCh] [bp-5944h]@490
  char v261; // [sp+4C00h] [bp-5940h]@489
  __int16 v262; // [sp+4C04h] [bp-593Ch]@489
  __int16 v263; // [sp+4C06h] [bp-593Ah]@489
  char v264; // [sp+4C0Ch] [bp-5934h]@489
  char v265; // [sp+4EF4h] [bp-564Ch]@489
  int v266; // [sp+4FF4h] [bp-554Ch]@479
  int v267; // [sp+4FF8h] [bp-5548h]@477
  int i3; // [sp+4FFCh] [bp-5544h]@471
  int v269; // [sp+5000h] [bp-5540h]@469
  int v270; // [sp+5004h] [bp-553Ch]@447
  char v271; // [sp+5008h] [bp-5538h]@447
  char v272; // [sp+5009h] [bp-5537h]@451
  char v273; // [sp+500Ah] [bp-5536h]@452
  char v274; // [sp+500Bh] [bp-5535h]@453
  char v275; // [sp+500Ch] [bp-5534h]@455
  int v276; // [sp+5018h] [bp-5528h]@441
  int v277; // [sp+501Ch] [bp-5524h]@441
  int v278; // [sp+5020h] [bp-5520h]@441
  int v279; // [sp+5024h] [bp-551Ch]@441
  int v280; // [sp+5028h] [bp-5518h]@431
  int v281; // [sp+502Ch] [bp-5514h]@431
  int v282; // [sp+5030h] [bp-5510h]@428
  int v283; // [sp+5034h] [bp-550Ch]@428
  int v284; // [sp+5038h] [bp-5508h]@428
  int v285; // [sp+503Ch] [bp-5504h]@425
  int v286; // [sp+5040h] [bp-5500h]@425
  int v287; // [sp+5044h] [bp-54FCh]@425
  __int16 v288; // [sp+5048h] [bp-54F8h]@425
  __int16 v289; // [sp+504Ch] [bp-54F4h]@425
  __int16 v290; // [sp+504Eh] [bp-54F2h]@425
  char v291; // [sp+5058h] [bp-54E8h]@425
  __int16 v292; // [sp+534Ch] [bp-51F4h]@425
  __int16 v293; // [sp+534Eh] [bp-51F2h]@428
  char v294; // [sp+5352h] [bp-51EEh]@428
  char v295; // [sp+5364h] [bp-51DCh]@425
  char v296; // [sp+5404h] [bp-513Ch]@425
  int v297; // [sp+5524h] [bp-501Ch]@420
  int v298; // [sp+5528h] [bp-5018h]@416
  int i13; // [sp+552Ch] [bp-5014h]@412
  int v300; // [sp+5530h] [bp-5010h]@412
  int v301; // [sp+5534h] [bp-500Ch]@411
  int v302; // [sp+5538h] [bp-5008h]@405
  int i12; // [sp+553Ch] [bp-5004h]@385
  int v304; // [sp+5540h] [bp-5000h]@384
  int v305; // [sp+5544h] [bp-4FFCh]@384
  int v306; // [sp+5548h] [bp-4FF8h]@384
  char v307; // [sp+554Ch] [bp-4FF4h]@394
  char v308; // [sp+564Ch] [bp-4EF4h]@392
  char v309; // [sp+574Ch] [bp-4DF4h]@384
  char v310; // [sp+574Dh] [bp-4DF3h]@389
  char v311[510]; // [sp+574Eh] [bp-4DF2h]@390
  int v312; // [sp+594Ch] [bp-4BF4h]@383
  const CHAR FileName; // [sp+5950h] [bp-4BF0h]@383
  char v314; // [sp+5A50h] [bp-4AF0h]@383
  __int16 v315; // [sp+5A54h] [bp-4AECh]@383
  __int16 v316; // [sp+5A56h] [bp-4AEAh]@383
  char v317; // [sp+5A6Ch] [bp-4AD4h]@383
  char v318; // [sp+5D54h] [bp-47ECh]@383
  int v319; // [sp+6154h] [bp-43ECh]@383
  char v320; // [sp+6158h] [bp-43E8h]@383
  int v321; // [sp+6168h] [bp-43D8h]@383
  int v322; // [sp+616Ch] [bp-43D4h]@383
  char v323; // [sp+6170h] [bp-43D0h]@383
  int v324; // [sp+6458h] [bp-40E8h]@369
  int v325; // [sp+645Ch] [bp-40E4h]@369
  unsigned int v326; // [sp+6460h] [bp-40E0h]@369
  int i11; // [sp+6464h] [bp-40DCh]@365
  int v328; // [sp+6468h] [bp-40D8h]@365
  char v329; // [sp+646Ch] [bp-40D4h]@364
  char v330; // [sp+656Ch] [bp-3FD4h]@364
  int i10; // [sp+657Ch] [bp-3FC4h]@353
  int v332; // [sp+6580h] [bp-3FC0h]@353
  int v333; // [sp+6584h] [bp-3FBCh]@353
  int v334; // [sp+6588h] [bp-3FB8h]@344
  int v335; // [sp+658Ch] [bp-3FB4h]@344
  unsigned int v336; // [sp+6590h] [bp-3FB0h]@342
  char v337; // [sp+6594h] [bp-3FACh]@342
  int i9; // [sp+65B8h] [bp-3F88h]@337
  int v339; // [sp+65BCh] [bp-3F84h]@319
  char v340; // [sp+65C0h] [bp-3F80h]@319
  char v341; // [sp+65D0h] [bp-3F70h]@328
  char v342; // [sp+65FCh] [bp-3F44h]@342
  int v343; // [sp+6674h] [bp-3ECCh]@342
  char v344[196]; // [sp+6690h] [bp-3EB0h]@355
  __int16 v345[1926]; // [sp+6754h] [bp-3DECh]@356
  int v346; // [sp+7660h] [bp-2EE0h]@325
  int v347[20]; // [sp+79D0h] [bp-2B70h]@340
  int v348[225]; // [sp+7A20h] [bp-2B20h]@339
  int v349; // [sp+7DA4h] [bp-279Ch]@316
  int v350; // [sp+7DA8h] [bp-2798h]@315
  int v351; // [sp+7DACh] [bp-2794h]@315
  int v352; // [sp+7DB0h] [bp-2790h]@315
  int v353; // [sp+7DB4h] [bp-278Ch]@301
  int v354; // [sp+7DB8h] [bp-2788h]@301
  int i5; // [sp+7DBCh] [bp-2784h]@294
  int v356; // [sp+7DC0h] [bp-2780h]@294
  int l; // [sp+7DC4h] [bp-277Ch]@286
  char v358; // [sp+7DC8h] [bp-2778h]@284
  __int16 v359; // [sp+7EC8h] [bp-2678h]@284
  __int16 v360; // [sp+7ECCh] [bp-2674h]@284
  __int16 v361; // [sp+7ECEh] [bp-2672h]@284
  char v362; // [sp+7ED4h] [bp-266Ch]@284
  char v363; // [sp+80B4h] [bp-248Ch]@283
  int k; // [sp+81B4h] [bp-238Ch]@275
  int v365; // [sp+81B8h] [bp-2388h]@273
  int v366; // [sp+81BCh] [bp-2384h]@266
  int v367; // [sp+81C0h] [bp-2380h]@266
  int v368; // [sp+81C4h] [bp-237Ch]@266
  int v369; // [sp+81C8h] [bp-2378h]@266
  __int16 v370; // [sp+81CCh] [bp-2374h]@264
  __int16 v371; // [sp+81D0h] [bp-2370h]@264
  __int16 v372; // [sp+81D2h] [bp-236Eh]@264
  char v373; // [sp+81D8h] [bp-2368h]@264
  int i4; // [sp+83B8h] [bp-2188h]@256
  int v375; // [sp+83BCh] [bp-2184h]@251
  char v376; // [sp+83C0h] [bp-2180h]@251
  int v377; // [sp+83FCh] [bp-2144h]@232
  int v378; // [sp+8400h] [bp-2140h]@229
  int v379; // [sp+8404h] [bp-213Ch]@228
  char v380; // [sp+8408h] [bp-2138h]@225
  int v381; // [sp+8508h] [bp-2038h]@225
  int v382; // [sp+850Ch] [bp-2034h]@225
  int v383; // [sp+8510h] [bp-2030h]@225
  int v384; // [sp+8514h] [bp-202Ch]@225
  int v385; // [sp+8518h] [bp-2028h]@225
  int v386; // [sp+851Ch] [bp-2024h]@225
  int v387; // [sp+8520h] [bp-2020h]@225
  int v388; // [sp+8524h] [bp-201Ch]@225
  char v389; // [sp+8528h] [bp-2018h]@223
  __int16 v390; // [sp+8628h] [bp-1F18h]@223
  __int16 v391; // [sp+862Ch] [bp-1F14h]@223
  __int16 v392; // [sp+862Eh] [bp-1F12h]@223
  char v393; // [sp+8634h] [bp-1F0Ch]@223
  char v394; // [sp+8814h] [bp-1D2Ch]@222
  int j; // [sp+8914h] [bp-1C2Ch]@217
  int v396; // [sp+8918h] [bp-1C28h]@215
  char v397; // [sp+891Ch] [bp-1C24h]@215
  char v398[56]; // [sp+8920h] [bp-1C20h]@215
  int v399; // [sp+8958h] [bp-1BE8h]@205
  int v400; // [sp+895Ch] [bp-1BE4h]@205
  int v401; // [sp+8960h] [bp-1BE0h]@205
  int v402; // [sp+8964h] [bp-1BDCh]@205
  int v403; // [sp+8968h] [bp-1BD8h]@205
  int v404; // [sp+896Ch] [bp-1BD4h]@205
  int i; // [sp+8970h] [bp-1BD0h]@199
  char v406; // [sp+8974h] [bp-1BCCh]@198
  __int16 v407; // [sp+8A74h] [bp-1ACCh]@198
  __int16 v408; // [sp+8A78h] [bp-1AC8h]@198
  __int16 v409; // [sp+8A7Ah] [bp-1AC6h]@198
  char v410; // [sp+8A80h] [bp-1AC0h]@198
  char v411; // [sp+8C60h] [bp-18E0h]@197
  char v412; // [sp+8D60h] [bp-17E0h]@197
  char v413; // [sp+8D6Eh] [bp-17D2h]@197
  char v414; // [sp+8D6Fh] [bp-17D1h]@197
  int v415; // [sp+8DE0h] [bp-1760h]@195
  char v416; // [sp+8DE4h] [bp-175Ch]@195
  char v417; // [sp+8E14h] [bp-172Ch]@195
  char v418; // [sp+8E16h] [bp-172Ah]@195
  int v419; // [sp+8E18h] [bp-1728h]@195
  int v420; // [sp+8E1Ch] [bp-1724h]@195
  int v421; // [sp+8E20h] [bp-1720h]@195
  int v422; // [sp+8E24h] [bp-171Ch]@192
  int v423; // [sp+8E28h] [bp-1718h]@192
  int v424; // [sp+8E2Ch] [bp-1714h]@192
  int v425; // [sp+8E30h] [bp-1710h]@190
  int v426; // [sp+8E34h] [bp-170Ch]@190
  int kk; // [sp+8E38h] [bp-1708h]@182
  int v428; // [sp+8E3Ch] [bp-1704h]@182
  int n; // [sp+8E40h] [bp-1700h]@174
  int v430; // [sp+8E44h] [bp-16FCh]@174
  __int16 v431; // [sp+8E48h] [bp-16F8h]@173
  __int16 v432; // [sp+8E4Ch] [bp-16F4h]@173
  __int16 v433; // [sp+8E4Eh] [bp-16F2h]@173
  char v434; // [sp+8E54h] [bp-16ECh]@173
  int v435; // [sp+9034h] [bp-150Ch]@173
  __int16 v436; // [sp+9038h] [bp-1508h]@172
  __int16 v437; // [sp+903Ch] [bp-1504h]@172
  __int16 v438; // [sp+903Eh] [bp-1502h]@172
  char v439; // [sp+9054h] [bp-14ECh]@172
  char v440; // [sp+933Ch] [bp-1204h]@172
  char v441; // [sp+9740h] [bp-E00h]@172
  int v442; // [sp+9758h] [bp-DE8h]@170
  LPCSTR lpMultiByteStr; // [sp+975Ch] [bp-DE4h]@170
  int v444; // [sp+9760h] [bp-DE0h]@156
  int v445; // [sp+9764h] [bp-DDCh]@156
  int v446; // [sp+9768h] [bp-DD8h]@156
  int v447; // [sp+976Ch] [bp-DD4h]@152
  int v448; // [sp+9770h] [bp-DD0h]@152
  int mm; // [sp+9774h] [bp-DCCh]@145
  int v450; // [sp+9778h] [bp-DC8h]@145
  int ll; // [sp+977Ch] [bp-DC4h]@138
  int v452; // [sp+9780h] [bp-DC0h]@126
  int v453; // [sp+9784h] [bp-DBCh]@123
  int i8; // [sp+9788h] [bp-DB8h]@116
  int v455; // [sp+978Ch] [bp-DB4h]@112
  int m; // [sp+9790h] [bp-DB0h]@105
  int v457; // [sp+9794h] [bp-DACh]@99
  int v458; // [sp+9798h] [bp-DA8h]@99
  int v459; // [sp+979Ch] [bp-DA4h]@99
  int jj; // [sp+97A0h] [bp-DA0h]@92
  char v461; // [sp+97A4h] [bp-D9Ch]@92
  int v462; // [sp+98A4h] [bp-C9Ch]@92
  char v463; // [sp+98A8h] [bp-C98h]@92
  char v464; // [sp+98ACh] [bp-C94h]@92
  __int16 v465; // [sp+98B8h] [bp-C88h]@92
  int v466; // [sp+98D0h] [bp-C70h]@92
  int ii; // [sp+98D4h] [bp-C6Ch]@85
  char v468; // [sp+98D8h] [bp-C68h]@82
  int v469; // [sp+99D8h] [bp-B68h]@82
  char v470; // [sp+99DCh] [bp-B64h]@82
  char v471; // [sp+99E0h] [bp-B60h]@82
  __int16 v472; // [sp+99ECh] [bp-B54h]@85
  int v473; // [sp+9A04h] [bp-B3Ch]@82
  int v474; // [sp+9A08h] [bp-B38h]@73
  int v475; // [sp+9A0Ch] [bp-B34h]@73
  int v476; // [sp+9A10h] [bp-B30h]@73
  int v477; // [sp+9A14h] [bp-B2Ch]@73
  int v478; // [sp+9A18h] [bp-B28h]@73
  int i7; // [sp+9A1Ch] [bp-B24h]@71
  __int16 v480; // [sp+9A20h] [bp-B20h]@65
  __int16 v481; // [sp+9A24h] [bp-B1Ch]@65
  __int16 v482; // [sp+9A26h] [bp-B1Ah]@65
  char v483; // [sp+9A2Ch] [bp-B14h]@65
  int i6; // [sp+9AF4h] [bp-A4Ch]@62
  int v485; // [sp+9AF8h] [bp-A48h]@59
  int v486; // [sp+9AFCh] [bp-A44h]@59
  int v487; // [sp+9B00h] [bp-A40h]@58
  int v488; // [sp+9B04h] [bp-A3Ch]@57
  __int16 v489; // [sp+9B08h] [bp-A38h]@57
  __int16 v490; // [sp+9B0Ah] [bp-A36h]@57
  int v491; // [sp+9B10h] [bp-A30h]@57
  char v492; // [sp+9B14h] [bp-A2Ch]@57
  char v493; // [sp+9B24h] [bp-A1Ch]@57
  char v494; // [sp+9E18h] [bp-728h]@57
  char v495; // [sp+9EB8h] [bp-688h]@57
  int v496; // [sp+9FD8h] [bp-568h]@54
  __int16 v497; // [sp+9FDCh] [bp-564h]@54
  __int16 v498; // [sp+9FDEh] [bp-562h]@54
  int v499; // [sp+9FE4h] [bp-55Ch]@54
  char v500; // [sp+A00Ch] [bp-534h]@54
  const CHAR MultiByteStr; // [sp+A10Ch] [bp-434h]@53
  const void *v502; // [sp+A11Ch] [bp-424h]@53
  const void *v503; // [sp+A120h] [bp-420h]@53
  int v504; // [sp+A124h] [bp-41Ch]@53
  int v505; // [sp+A128h] [bp-418h]@50
  __int16 v506; // [sp+A12Ch] [bp-414h]@50
  __int16 v507; // [sp+A12Eh] [bp-412h]@50
  int v508; // [sp+A134h] [bp-40Ch]@50
  int v509; // [sp+A15Ch] [bp-3E4h]@48
  int v510; // [sp+A160h] [bp-3E0h]@45
  __int16 v511; // [sp+A164h] [bp-3DCh]@45
  __int16 v512; // [sp+A166h] [bp-3DAh]@45
  int v513; // [sp+A16Ch] [bp-3D4h]@45
  char v514; // [sp+A194h] [bp-3ACh]@45
  int v515; // [sp+A294h] [bp-2ACh]@41
  int v516; // [sp+A298h] [bp-2A8h]@41
  int v517; // [sp+A29Ch] [bp-2A4h]@41
  int v518; // [sp+A2A0h] [bp-2A0h]@41
  int v519; // [sp+A2A4h] [bp-29Ch]@41
  __int16 v520; // [sp+A2A8h] [bp-298h]@39
  __int16 v521; // [sp+A2ACh] [bp-294h]@39
  __int16 v522; // [sp+A2AEh] [bp-292h]@39
  int v523; // [sp+A2B4h] [bp-28Ch]@39
  __int16 v524; // [sp+A2B8h] [bp-288h]@38
  __int16 v525; // [sp+A2BCh] [bp-284h]@38
  __int16 v526; // [sp+A2BEh] [bp-282h]@38
  char v527; // [sp+A2C4h] [bp-27Ch]@38
  char v528; // [sp+A2D4h] [bp-26Ch]@38
  int v529; // [sp+A308h] [bp-238h]@37
  int v530; // [sp+A30Ch] [bp-234h]@37
  int v531; // [sp+A32Ch] [bp-214h]@37
  char v532; // [sp+A330h] [bp-210h]@36
  char v533; // [sp+A430h] [bp-110h]@33
  int v534; // [sp+A530h] [bp-10h]@31
  int v535; // [sp+A534h] [bp-Ch]@30
  int v536; // [sp+A538h] [bp-8h]@1
  int v537; // [sp+A53Ch] [bp-4h]@1
  int v538; // [sp+A540h] [bp+0h]@53

  memset(&v51, -858993460, 0xA534u);
  v537 = a1;
  v536 = a4;
  v52 = *(_WORD *)(a4 + 4);
  if ( v52 > 2068 )
  {
    if ( v52 > 3357 )
    {
      if ( v52 > 7184 )
      {
        v52 -= 15373;
        switch ( v52 )
        {
          case 1:
            v535 = a4;
            sub_434B90(a4 + 460);
            sub_401244(v535, 492);
            break;
          case 9:
            v426 = a4;
            v425 = sub_401136(a4 + 16);
            if ( v425 == 1 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,create guild fail name %d-%d %s", *(_DWORD *)(v426 + 12));
              sub_401316("err,guild update fail ", "system");
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            v424 = *(_DWORD *)(v426 + 12);
            v423 = v424 >> 12;
            v422 = v424 & 0xFFF;
            if ( v424 < 0 || v424 > 65535 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,UPDATE GUILD  guild index error %d", v424);
              sub_401316(&unk_A93B60, "system");
              sub_40141A(a5, *(_WORD *)(v426 + 6), 3096, 1, *(_WORD *)(v426 + 6));
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            v421 = sub_401122(a5, *(_WORD *)(v426 + 6));
            v420 = *(_DWORD *)(v537 + 6184 * v421 + 4);
            sub_434AB0(&v415, 0, 0x3Cu);
            v415 = v424;
            sub_434C80(&v416, (const void *)(v426 + 16), 0xCu);
            v417 = 1;
            v419 = 0;
            v418 = 0;
            v425 = sub_401145(&v415);
            if ( !v425 )
            {
              sub_40141A(a5, *(_WORD *)(v426 + 6), 3096, 1, *(_WORD *)(v426 + 6));
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            memcpy(&dword_591B7A0[61440 * v423] + 15 * v422, &v415, 0x3Cu);
            sub_435800((int)&v412, v537 + 6184 * v421 + 8, 0x10u);
            v414 = 0;
            v413 = 0;
            v411 = 0;
            sub_4343B0(a2, (int)&v420, (int)&v411, (int)"%s %d %d %d %s", (unsigned int)&v412);
            if ( dword_A95E08[0] )
            {
              sub_434AB0(&v407, 0, 0x1ECu);
              v408 = 15382;
              v407 = 492;
              v409 = 0;
              v410 = 0;
              sub_434B90((int)&v410);
              sub_401244(&v407, 492);
              sub_4343B0(a2, (int)&v420, (int)&v406, (int)"guild send to DBA %s", (unsigned int)&v411);
              sub_401316(&v406, "system");
            }
            *(_WORD *)(v426 + 6) = 0;
            for ( i = 0; i < 10; ++i )
            {
              if ( dword_1E01844[30 * i] )
                sub_401244(v426, 32);
            }
            break;
          case 15:
            v404 = a4;
            v403 = *(_DWORD *)(a4 + 16);
            v402 = *(_BYTE *)(a4 + 20);
            v401 = v403 >> 12;
            v400 = v403 & 0xFFF;
            v399 = *(_DWORD *)(a4 + 12);
            if ( v403 < 0 || v403 > 65535 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,UPDATE GUILD  guild index error %d", v403);
              sub_401316(&unk_A93B60, "system");
              sub_40141A(a5, *(_WORD *)(v404 + 6), 3096, 2, v399);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( v402 < 1 || v402 > 3 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,createsubguild subidx %d %d", v403);
              sub_401316(&unk_A93B60, "system");
              sub_40141A(a5, *(_WORD *)(v404 + 6), 3096, 2, v399);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( *(&dword_591B7A0[61440 * v401] + 15 * v400) != v403 )
            {
              sub_4343B0(
                a2,
                a3,
                (int)&unk_A93B60,
                (int)"err,createsubguild index %d %d",
                *(&dword_591B7A0[61440 * v401] + 15 * v400));
              sub_401316(&unk_A93B60, "system");
              sub_40141A(a5, *(_WORD *)(v404 + 6), 3096, 2, v399);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( *((_BYTE *)&dword_591B7A0[61440 * v401 + 1] + 60 * v400 + 12 * v402) )
            {
              *((_BYTE *)&dword_591B7A0[61440 * v401 + 3] + 60 * v400 + 12 * v402 + 3) = 0;
              *((_BYTE *)&dword_591B7A0[61440 * v401 + 3] + 60 * v400 + 12 * v402 + 2) = 0;
              sub_4343B0(
                a2,
                a3,
                (int)&unk_A93B60,
                (int)"err,createsubguild name %s",
                (unsigned int)dword_591B7A0 + 60 * v400 + 12 * v402 + 4);
              sub_401316(&unk_A93B60, "system");
              sub_40141A(a5, *(_WORD *)(v404 + 6), 3096, 2, v399);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            v12 = &dword_591B7A0[61440 * v401] + 15 * v400;
            memcpy(&v397, v12, 0x3Cu);
            v13 = (int)((char *)v12 + 60);
            sub_434C80(&v398[12 * v402], (const void *)(v404 + 21), 0xCu);
            v396 = sub_401145(&v397);
            if ( !v396 )
            {
              sub_40141A(a5, *(_WORD *)(v404 + 6), 3096, 2, v399);
              sub_4343B0(a2, v13, (int)&unk_A93B60, (int)"err,createsubguild update %d %d", v403);
              sub_401316(&unk_A93B60, "system");
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            memcpy(&dword_591B7A0[61440 * v401] + 15 * v400, &v397, 0x3Cu);
            *(_WORD *)(v404 + 6) = 0;
            for ( j = 0; j < 10; ++j )
            {
              if ( dword_1E01844[30 * j] )
                sub_401244(v404, 36);
            }
            sub_434AB0(&v394, 0, 0x100u);
            sub_4343B0(a2, (int)&v399, (int)&v394, (int)"%d %d %d %d %s", dword_4828AC);
            if ( dword_A95E08[0] )
            {
              sub_434AB0(&v390, 0, 0x1ECu);
              v391 = 15388;
              v390 = 492;
              v392 = 0;
              v393 = 0;
              sub_434B90((int)&v393);
              sub_401244(&v390, 492);
              sub_4343B0(a2, (int)&v399, (int)&v389, (int)"sub guild send to DBA %s", (unsigned int)&v394);
              sub_401316(&v389, "system");
            }
            break;
          case 13:
            v369 = a4;
            v368 = *(_DWORD *)(a4 + 12);
            v367 = v368 >> 12;
            v366 = v368 & 0xFFF;
            if ( v368 < 0 || v368 > 65535 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,UPDATE GUILD  guild index error %d", v368);
              sub_401316(&unk_A93B60, "system");
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( !*(&dword_591B7A0[61440 * v367] + 15 * v366) )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,delete guild fail index %d-%d %d", v367);
              sub_401316(&unk_A93B60, "system");
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( (signed int)(unsigned __int8)*(&byte_591B7D4[245760 * v367] + 60 * v366) > 1 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,delete guild fail count %d-%d %d", v367);
              sub_401316(&unk_A93B60, "system");
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            v365 = sub_40130C(*(&dword_591B7A0[61440 * v367] + 15 * v366));
            if ( !v365 )
            {
              sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"err,delete guild fail file %d-%d %d", v367);
              sub_401316(&unk_A93B60, "system");
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"Delete Guild [%s]", (unsigned int)byte_591B7A4 + 60 * v366);
            sub_401316(&unk_A93B60, "system");
            sub_401244(v369, 16);
            *(_WORD *)(v369 + 6) = 0;
            for ( k = 0; k < 10; ++k )
            {
              if ( dword_1E01844[30 * k] && dword_1E01848[30 * k] && a5 != k )
                sub_401244(v369, 16);
            }
            v363 = 0;
            sub_4343B0(a2, a3, (int)&v363, (int)"%d %d %d", dword_4828AC);
            if ( dword_A95E08[0] )
            {
              sub_434AB0(&v359, 0, 0x1ECu);
              v360 = 15386;
              v359 = 492;
              v361 = 0;
              v362 = 0;
              sub_434B90((int)&v362);
              sub_401244(&v359, 492);
              sub_4343B0(a2, a3, (int)&v358, (int)"sub guild send to DBA %s", (unsigned int)&v363);
              sub_401316(&v358, "system");
            }
            *(&byte_591B7A4[245760 * v367] + 60 * v366) = 0;
            break;
          case 0:
            v57 = a4;
            v56 = 0;
            v55 = 0;
            if ( !sub_4351F0(a4 + 428, a4 + 396) )
            {
              if ( sub_4351F0(v57 + 428, (int)"msg_weblogin") )
              {
                if ( !sub_4351F0(v57 + 428, (int)"msg_webfail") )
                  v55 = 2;
              }
              else
              {
                v55 = 1;
              }
            }
            if ( v55 <= 0 )
            {
              sub_4347B0(a2, (int)&v538, a3, v57 + 12, "%s", (unsigned int)&v56);
              v54 = 0;
              sub_401037(&v54, &v56);
              if ( v54 )
              {
                if ( dword_A95E08[0] && byte_A95E64[0] == 65 )
                {
                  sub_4343B0(a2, a3, v57 + 428, (int)"%s %s", (unsigned int)&v54);
                  sub_434B90(v57 + 460);
                  sub_401244(v57, 492);
                  sub_4011E5(a5, *(_WORD *)(v57 + 6), 1065);
                }
                else
                {
                  sub_4343B0(a2, a3, (int)&v53, (int)"%s (%s)", v57 + 12);
                  sub_401316(&v53, "TM_DBA_ERROR");
                }
              }
              else
              {
                sub_4011E5(a5, *(_WORD *)(v57 + 6), 1064);
              }
            }
            break;
          default:
            break;
        }
      }
      else
      {
        if ( v52 == 7184 )
        {
          for ( l = 0; l < 24; ++l )
          {
            if ( dword_A95E08[30 * l] && dword_A95E04[30 * l] )
              sub_401244(v536, *(_WORD *)v536);
          }
        }
        else
        {
          if ( v52 > 3799 )
          {
            if ( v52 == 4010 )
            {
              v519 = a5;
              v518 = a5 / 1000;
              v517 = a5 % 1000;
              v516 = a4;
              *(_BYTE *)(a4 + 35) = 0;
              *(_BYTE *)(v516 + 34) = 0;
              *(_BYTE *)(v516 + 51) = 0;
              *(_BYTE *)(v516 + 50) = 0;
              v515 = *(_DWORD *)(v516 + 16);
              if ( (signed int)*(_WORD *)(v516 + 6) > 0
                && (signed int)*(_WORD *)(v516 + 6) < 1000
                && v515 >= 0
                && v515 < 4 )
              {
                v509 = sub_401122(a5, *(_WORD *)(v516 + 6));
                if ( dword_5CDCF48 && dword_1216B08 )
                {
                  v504 = 6184 * v509 + v537 + 756 * v515 + 216;
                  v503 = (const void *)(6184 * v509 + v537 + 160 * v515 + 4332);
                  v502 = (const void *)(6184 * v509 + v537 + 288 * v515 + 4972);
                  *(_BYTE *)(6184 * v509 + v537 + 756 * v515 + 231) = 0;
                  *(_BYTE *)(v504 + 14) = 0;
                  sub_434B90((int)&MultiByteStr);
                  sub_435800(v504, v516 + 36, 0x10u);
                  *(_BYTE *)(v504 + 15) = 0;
                  *(_BYTE *)(v504 + 14) = 0;
                  sub_449530(a2, (int)&v538, a3, &MultiByteStr);
                  sub_449530(a2, (int)&v538, a3, (LPCSTR)(v516 + 20));
                  if ( sub_4351F0((int)&MultiByteStr, v516 + 20) )
                  {
                    sub_4343B0(
                      a2,
                      a3,
                      (int)&v500,
                      (int)"err,transper id:%d slot:%d old:%s current:%s",
                      *(_WORD *)(v516 + 6));
                    sub_401316(&v500, v537 + 6184 * v509 + 8);
                    v497 = 4010;
                    LOWORD(v496) = 52;
                    v498 = v517;
                    v499 = 4;
                    if ( v519 )
                      sub_401244(&v496, (unsigned __int16)v496);
                    v5 = 1;
                  }
                  else
                  {
                    sub_40138E(-1, (LPCSTR)(v537 + 6184 * v509 + 8));
                    v489 = 12299;
                    LOWORD(v488) = 1236;
                    v490 = v509;
                    v491 = *(_DWORD *)(v516 + 16);
                    sub_435800((int)&v492, v537 + 6184 * v509 + 8, 0x10u);
                    memcpy(&v493, (const void *)v504, 0x2F4u);
                    memcpy(&v494, v503, 0xA0u);
                    memcpy(&v495, v502, 0x120u);
                    sub_401244(&v488, (unsigned __int16)v488);
                    v5 = 1;
                  }
                }
                else
                {
                  sub_401316("err,transper but not transper_server", v537 + 6184 * v509 + 8);
                  v506 = 4010;
                  LOWORD(v505) = 52;
                  v507 = v517;
                  v508 = 4;
                  if ( v519 )
                    sub_401244(&v505, (unsigned __int16)v505);
                  v5 = 1;
                }
              }
              else
              {
                sub_4343B0(a2, a3, (int)&v514, (int)"err,transper id:%d slot:%d old:%s new:%s", *(_WORD *)(v516 + 6));
                sub_401316(&v514, "system");
                v511 = 4010;
                LOWORD(v510) = 52;
                v512 = v517;
                v513 = 4;
                if ( v519 )
                  sub_401244(&v510, (unsigned __int16)v510);
                v5 = 1;
              }
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( v52 == 4062 )
            {
              v281 = a4;
              v280 = sub_401122(a5, *(_WORD *)(a4 + 6));
              *(_BYTE *)(v281 + 27) = 0;
              *(_BYTE *)(v281 + 26) = 0;
              if ( *(_BYTE *)(v281 + 28) )
              {
                if ( *(_BYTE *)(v281 + 28) == 1 && *(_DWORD *)(v537 + 6184 * v280 + 6180) == 1 )
                {
                  sub_434C80((void *)(v537 + 6184 * v280 + 196), (const void *)(v281 + 12), 0x10u);
                  sub_4013F2((LPCVOID)(v537 + 6184 * v280 + 8), 1);
                }
              }
              else
              {
                if ( !*(_BYTE *)(v537 + 6184 * v280 + 196) )
                {
                  sub_434C80((void *)(v537 + 6184 * v280 + 196), (const void *)(v281 + 12), 0x10u);
                  sub_4013F2((LPCVOID)(v537 + 6184 * v280 + 8), 1);
                }
                if ( sub_4351F0(v537 + 6184 * v280 + 196, v281 + 12) )
                {
                  sub_4011E5(a5, *(_WORD *)(v281 + 6), 4063);
                  v5 = 0;
                  return sub_434B10(1, v5, v50, v48, v49);
                }
                *(_DWORD *)(v537 + 6184 * v280 + 6180) = 1;
                sub_4011E5(a5, *(_WORD *)(v281 + 6), 4062);
              }
            }
          }
          else
          {
            switch ( v52 )
            {
              case 3799:
                v459 = a4;
                v458 = *(_DWORD *)(a4 + 12);
                v457 = *(_DWORD *)(a4 + 16);
                if ( v458 >= 0 && v458 < 16 && v457 >= 0 && v457 < 16 )
                {
                  for ( m = 0; m < 10; ++m )
                  {
                    if ( dword_1E01844[30 * m] && dword_1E01848[30 * m] )
                      sub_40141A(m, 0, 3799, *(_DWORD *)(v459 + 12), *(_DWORD *)(v459 + 16));
                  }
                }
                break;
              case 3362:
                v430 = a4;
                *(_WORD *)(a4 + 6) = 0;
                for ( n = 0; n < 10; ++n )
                {
                  if ( dword_1E01848[30 * n] && dword_1E01844[30 * n] && n != a5 )
                    sub_401244(v430, 128);
                }
                break;
              case 3598:
                v473 = a4;
                sub_435BA0(a2, (int)&v538, a3, (int)&v470);
                v6 = sub_435940(a2, (int)&v538, a3, (signed int *)&v470);
                memcpy(&v471, (const void *)v6, 0x24u);
                v469 = *(_DWORD *)(v473 + 12);
                sub_4343B0(a2, v6 + 36, (int)&v468, (int)"guild war request %d %d", *(_DWORD *)(v473 + 12));
                sub_401316(&v468, "system");
                if ( v469 > 0 && v469 < 65536 )
                {
                  word_1DE1840[v469] = v472;
                  for ( ii = 0; ii < 10; ++ii )
                  {
                    if ( dword_1E01844[30 * ii] && dword_1E01848[30 * ii] )
                      sub_40141A(ii, 0, 3598, *(_DWORD *)(v473 + 12), *(_DWORD *)(v473 + 16));
                  }
                }
                break;
              case 3602:
                v466 = a4;
                sub_435BA0(a2, (int)&v538, a3, (int)&v463);
                v7 = sub_435940(a2, (int)&v538, a3, (signed int *)&v463);
                memcpy(&v464, (const void *)v7, 0x24u);
                v462 = *(_DWORD *)(v466 + 12);
                sub_4343B0(a2, v7 + 36, (int)&v461, (int)"guild ally request %d %d", *(_DWORD *)(v466 + 12));
                sub_401316(&v461, "system");
                word_1E01CF4[v462] = v465;
                for ( jj = 0; jj < 10; ++jj )
                {
                  if ( dword_1E01844[30 * jj] && dword_1E01848[30 * jj] )
                    sub_40141A(jj, 0, 3602, *(_DWORD *)(v466 + 12), *(_DWORD *)(v466 + 16));
                }
                break;
            }
          }
        }
      }
    }
    else
    {
      if ( v52 == 3357 )
      {
        v428 = a4;
        *(_WORD *)(a4 + 6) = 0;
        for ( kk = 0; kk < 10; ++kk )
        {
          if ( dword_1E01848[30 * kk] && dword_1E01844[30 * kk] )
            sub_401244(v428, 108);
        }
      }
      else
      {
        if ( v52 > 3104 )
        {
          v52 -= 3107;
          switch ( v52 )
          {
            case 0:
              v452 = a4;
              if ( *(_DWORD *)(a4 + 12) )
              {
                if ( dword_5CDCF54 > *(_DWORD *)(v452 + 20) && dword_5CDCF4C == *(_DWORD *)(v452 + 12) )
                  dword_5CDCF54 = *(_DWORD *)(v452 + 20);
                if ( dword_5CDCF54 < *(_DWORD *)(v452 + 20) )
                {
                  dword_5CDCF54 = *(_DWORD *)(v452 + 20);
                  dword_5CDCF4C = *(_DWORD *)(v452 + 12);
                }
              }
              if ( *(_DWORD *)(v452 + 16) )
              {
                if ( dword_5CDCF58 > *(_DWORD *)(v452 + 24) && dword_5CDCF50 == *(_DWORD *)(v452 + 16) )
                  dword_5CDCF58 = *(_DWORD *)(v452 + 24);
                if ( dword_5CDCF58 < *(_DWORD *)(v452 + 24) )
                {
                  dword_5CDCF58 = *(_DWORD *)(v452 + 24);
                  dword_5CDCF50 = *(_DWORD *)(v452 + 16);
                }
              }
              *(_WORD *)(v452 + 4) = 3107;
              *(_DWORD *)(v452 + 12) = dword_5CDCF4C;
              *(_DWORD *)(v452 + 16) = dword_5CDCF50;
              *(_DWORD *)(v452 + 20) = dword_5CDCF54;
              *(_DWORD *)(v452 + 24) = dword_5CDCF58;
              for ( ll = 0; ll < 10; ++ll )
              {
                if ( dword_1E01844[30 * ll] && dword_1E01848[30 * ll] )
                  sub_401244(v452, 28);
              }
              goto LABEL_777;
            case 19:
              v450 = a4;
              for ( mm = 0; mm < 10; ++mm )
              {
                if ( dword_1E01844[30 * mm] && dword_1E01848[30 * mm] )
                  sub_401244(v450, 16);
              }
              goto LABEL_777;
            case 17:
              v241 = a4;
              v240 = 1000 * *(_DWORD *)(a4 + 12) + *(_WORD *)(a4 + 6);
              v239 = 0;
              while ( 2 )
              {
                if ( v239 >= 4 )
                {
                  sub_4011E5(a5, *(_WORD *)(v241 + 6), 3125);
                  goto LABEL_777;
                }
                v238 = *(_WORD *)(6184 * v240 + v537 + 756 * v239 + 308);
                v237 = *(_WORD *)(6184 * v240 + v537 + 756 * v239 + 280);
                if ( v238 % 10 >= 5 || v237 < 399 )
                {
                  ++v239;
                  continue;
                }
                break;
              }
              sub_4011E5(a5, *(_WORD *)(v241 + 6), 3124);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            case 15:
              v236 = a4;
              v235 = *(_DWORD *)(a4 + 12);
              sub_434AB0(&v224, 0, 0x4C4u);
              v223 = sub_401429(v235, &v224);
              if ( !v223 )
              {
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              sub_434AB0(&v205, 0, 0x34u);
              v207 = *(_WORD *)(v236 + 6);
              v205 = 52;
              v208 = v235;
              v206 = 3122;
              v209 = v232;
              v210 = v226;
              v211 = v227;
              v212 = v228;
              v213 = v229;
              v214 = v230;
              for ( nn = 0; nn < 4; ++nn )
                v215[nn] = v231[nn];
              v203 = (unsigned __int8)v225;
              if ( v233 & 0x80 )
              {
                v216 = 24 * v203 + 7;
              }
              else
              {
                if ( v233 & 0x8000 )
                {
                  v216 = 24 * v203 + 15;
                }
                else
                {
                  if ( (unsigned int)&unk_800000 & v233 )
                    v216 = 24 * v203 + 23;
                  else
                    v216 = -1;
                }
              }
              if ( (unsigned int)&unk_2000000 & v233 )
                v217 = 97;
              else
                v217 = -1;
              if ( (unsigned int)&unk_4000000 & v233 )
                v218 = 98;
              else
                v218 = -1;
              if ( v233 & 0x8000000 )
                v219 = 99;
              else
                v219 = -1;
              if ( v233 & 0x10000000 )
                v220 = 100;
              else
                v220 = -1;
              if ( v233 & 0x20000000 )
                v221 = 101;
              else
                v221 = -1;
              v222 = v234;
              sub_401244(&v205, 52);
              goto LABEL_777;
            case 11:
              v202 = a4;
              v201 = *(_WORD *)(a4 + 12);
              v200 = sub_401055(a4 + 14);
              v199 = sub_401181(v537);
              if ( !v199 )
              {
                sub_4011E5(a5, *(_WORD *)(v202 + 6), 1071);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              sub_434C80(&v195, (const void *)(6184 * v200 + v537 + 756 * v201 + 216), 0x2F4u);
              sub_434C80(&v197, (const void *)(6184 * v200 + v537 + 160 * v201 + 4332), 0xA0u);
              sub_434C80(&v198, (const void *)(6184 * v200 + v537 + 288 * v201 + 4972), 0x120u);
              sub_434C80(&v196, (const void *)(6184 * v200 + v537 + 16 * v201 + 4268), 0x10u);
              v194 = sub_401073(v199, &v195);
              if ( !v194 )
              {
                sub_4011E5(a5, *(_WORD *)(v202 + 6), 1071);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              sub_434AB0(&v192, 0, 8u);
              LOWORD(v192) = 3443;
              BYTE2(v192) = 59;
              BYTE3(v192) = v199 / 256;
              LOBYTE(v193) = 59;
              BYTE1(v193) = v199;
              BYTE2(v193) = 59;
              v191 = *(_WORD *)(6184 * v200 + v537 + 756 * v201 + 308);
              if ( v191 % 10 >= 6 && *(_DWORD *)(6184 * v200 + v537 + 756 * v201 + 948) & 0x40000000 )
                BYTE3(v193) = 1;
              v190 = 0;
              v188 = 0;
              while ( 2 )
              {
                if ( v188 >= 126 )
                  goto LABEL_585;
                v187 = sub_4010A5(&v192, v537 + 6184 * v200 + 3240, v188 % 9, v188 / 9);
                if ( v187 != 1 )
                {
                  ++v188;
                  continue;
                }
                break;
              }
              v30 = 6184 * v200 + v537;
              v31 = v188;
              *(_DWORD *)(v30 + 8 * v188 + 3240) = v192;
              *(_DWORD *)(v30 + 8 * v31 + 3244) = v193;
              v186 = sub_4013F2((LPCVOID)(v537 + 6184 * v200 + 8), 1);
              if ( !v186 )
              {
                sub_4011E5(a5, *(_WORD *)(v202 + 6), 1071);
                sub_4013ED(v199);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              sub_4343B0(a2, a3, (int)&v189, (int)"-CARGO(capsule) %d %d %d %d %d", v192);
              sub_401316(&v189, v202 + 14);
              v190 = 1;
LABEL_585:
              if ( v190 )
                goto LABEL_593;
              v188 = 127;
              while ( 2 )
              {
                if ( v188 < 0 )
                  goto LABEL_593;
                v185 = *(_WORD *)(6184 * v200 + v537 + 8 * v188 + 3240);
                if ( v185 )
                {
                  --v188;
                  continue;
                }
                break;
              }
              v32 = 6184 * v200 + v537;
              v33 = v188;
              *(_DWORD *)(v32 + 8 * v188 + 3240) = v192;
              *(_DWORD *)(v32 + 8 * v33 + 3244) = v193;
              v184 = sub_4013F2((LPCVOID)(v537 + 6184 * v200 + 8), 1);
              if ( !v184 )
              {
                sub_4011E5(a5, *(_WORD *)(v202 + 6), 1071);
                sub_4013ED(v199);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              sub_4343B0(a2, a3, (int)&v189, (int)"-CARGO2(capsule)  %d %d %d %d %d", v192);
              sub_401316(&v189, v202 + 14);
              v190 = 1;
LABEL_593:
              if ( !v190 )
              {
                sub_4011E5(a5, *(_WORD *)(v202 + 6), 1071);
                sub_4013ED(v199);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              v179 = 3087;
              v178 = 40;
              v180 = *(_WORD *)(v202 + 6);
              sub_435800((int)&v181, v202 + 14, 0x10u);
              v182 = v192;
              v183 = v193;
              sub_401244(&v178, 40);
              v177 = 0;
              sub_434B90((int)&v176);
              sub_449530(a2, (int)&v538, a3, &v176);
              for ( i1 = 0; i1 < 4; ++i1 )
              {
                sub_434B90((int)&v174);
                sub_449530(a2, (int)&v538, a3, &v174);
                if ( !sub_4351F0((int)&v176, (int)&v174) )
                  ++v177;
              }
              if ( v177 <= 1 )
                sub_4012DF(6184 * v200 + v537 + 756 * v201 + 216, v537 + 6184 * v200 + 8);
              sub_4343B0(a2, a3, (int)&v189, (int)"delete char [%s] capsule index[%d]", v202 + 30);
              sub_401316(&v189, v537 + 6184 * v200 + 8);
              sub_434AB0((void *)(6184 * v200 + v537 + 756 * v201 + 216), 0, 0x2F4u);
              *(_BYTE *)(6184 * v200 + v537 + 756 * v201 + 960) = -1;
              *(_BYTE *)(6184 * v200 + v537 + 756 * v201 + 961) = -1;
              *(_BYTE *)(6184 * v200 + v537 + 756 * v201 + 962) = -1;
              *(_BYTE *)(6184 * v200 + v537 + 756 * v201 + 963) = -1;
              sub_434AB0((void *)(6184 * v200 + v537 + 160 * v201 + 4332), 0, 0xA0u);
              sub_434AB0((void *)(6184 * v200 + v537 + 288 * v201 + 4972), 0, 0x120u);
              sub_434AB0((void *)(6184 * v200 + v537 + 16 * v201 + 4268), 0xFFu, 0x10u);
              v194 = sub_4013F2((LPCVOID)(v537 + 6184 * v200 + 8), 1);
              if ( !v194 )
              {
                sub_4011E5(a5, *(_WORD *)(v202 + 6), 1071);
                sub_4013ED(v199);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              v171 = 3118;
              sub_40137A(&v173, v537 + 6184 * v200 + 8);
              v172 = *(_WORD *)(v202 + 6);
              sub_401244(&v170, 756);
              goto LABEL_777;
            case 13:
              v169 = a4;
              v168 = *(_WORD *)(a4 + 12);
              v167 = sub_401055(a4 + 14);
              v166 = -1;
              if ( v167 < 0 || v167 >= 10000 )
              {
                sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
              i2 = 0;
              break;
            default:
              goto LABEL_777;
          }
          while ( i2 < 4 )
          {
            if ( !*(_BYTE *)(6184 * v167 + v537 + 756 * i2 + 216) )
            {
              v166 = i2;
              break;
            }
            ++i2;
          }
          if ( v166 < 0 || v166 >= 4 )
          {
            sub_401316("err,uncapusle - EmptySlot", v537 + 6184 * *(_WORD *)(v169 + 6) + 8);
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            v5 = 1;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          sub_435800((int)&v160, v169 + 30, 0x10u);
          sub_449530(a2, (int)&v538, a3, &v160);
          v159 = sub_434FC0((int)&v160);
          if ( v159 < 4 || v159 > 12 )
          {
            sub_401316("err,newchar - length", v537 + 6184 * *(_WORD *)(v169 + 6) + 8);
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            v5 = 0;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          if ( v160 == 67 && v161 == 79 && v162 == 77 && v163 >= 48 && v163 <= 57 && !v164 )
          {
            sub_401316("err,newchar - com", v537 + 6184 * *(_WORD *)(v169 + 6) + 8);
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            v5 = 0;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          if ( v160 == 76 && v161 == 80 && v162 == 84 && v163 >= 48 && v163 <= 57 && !v164 )
          {
            sub_401316("err,newchar - com", v537 + 6184 * *(_WORD *)(v169 + 6) + 8);
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            v5 = 0;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          if ( !sub_4351F0((int)&v160, (int)"RELO")
            || !sub_4351F0((int)&v160, (int)"SUMM")
            || !sub_4351F0((int)&v160, (int)"KINGDOM")
            || !sub_4351F0((int)&v160, (int)"KING") )
          {
            v5 = 0;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          v158 = 6184 * v167 + v537 + 756 * v166 + 216;
          *(_BYTE *)(6184 * v167 + v537 + 756 * v166 + 231) = 0;
          *(_BYTE *)(v158 + 14) = 0;
          *(_BYTE *)(v169 + 45) = 0;
          *(_BYTE *)(v169 + 44) = 0;
          if ( *(_BYTE *)v158 )
          {
            v155 = 1073;
            v154 = 16;
            v156 = *(_WORD *)(v169 + 6);
            v157 = v168;
            sub_401244(&v154, 16);
            sub_401316("err,newchar already charged", v537 + 6184 * v167 + 8);
            sub_401316(v158, v169 + 30);
            v5 = 1;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          for ( i2 = 0; i2 < v159; ++i2 )
          {
            if ( *(_BYTE *)(i2 + v169 + 30) == -95 && *(_BYTE *)(i2 + v169 + 31) == -95 )
            {
              sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
              v5 = 0;
              return sub_434B10(1, v5, v50, v48, v49);
            }
          }
          v153 = sub_401280((LPCVOID)(v537 + 6184 * v167 + 8), v169 + 30, 0);
          if ( !v153 )
          {
            sub_401316("err,uncapusle - CreateCharacter", v537 + 6184 * *(_WORD *)(v169 + 6) + 8);
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            v5 = 0;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          sub_434AB0(&v149, 0, 0x4C4u);
          v153 = sub_401429(v168, &v149);
          if ( !v153 )
          {
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            sub_401316("err,unCapsule character fail ", v169 + 14);
            sub_4012DF(v169 + 30, v537 + 6184 * v167 + 8);
            v5 = 1;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          sub_434C80((void *)(6184 * v167 + v537 + 756 * v166 + 216), &v149, 0x2F4u);
          sub_434AB0((void *)(6184 * v167 + v537 + 160 * v166 + 4332), 0, 0xA0u);
          sub_434C80((void *)(6184 * v167 + v537 + 288 * v166 + 4972), &v152, 0x120u);
          sub_434C80((void *)(6184 * v167 + v537 + 16 * v166 + 4268), &v151, 0x10u);
          sub_434B90(6184 * v167 + v537 + 756 * v166 + 216);
          v148 = v150;
          if ( v150 != 543 && v148 != 544 )
          {
            if ( v148 != 545 && v148 != 546 )
            {
              if ( v148 != 3191 && v148 != 3192 )
              {
                if ( v148 != 3194 && v148 != 3195 )
                {
                  if ( v148 == 3197 || v148 == 3198 )
                    v148 = 3199;
                }
                else
                {
                  v148 = 3196;
                }
              }
              else
              {
                v148 = 3193;
              }
            }
            else
            {
              v148 = 548;
            }
          }
          else
          {
            v148 = 549;
          }
          *(_WORD *)(6184 * v167 + v537 + 756 * v166 + 428) = v148;
          *(_WORD *)(6184 * v167 + v537 + 756 * v166 + 404) = 0;
          *(_WORD *)(6184 * v167 + v537 + 756 * v166 + 234) = 0;
          *(_WORD *)(6184 * v167 + v537 + 756 * v166 + 248) = 2112;
          *(_WORD *)(6184 * v167 + v537 + 756 * v166 + 250) = 2112;
          sub_434AB0((void *)(6184 * v167 + v537 + 756 * v166 + 233), 0, 1u);
          sub_434AB0((void *)(6184 * v167 + v537 + 756 * v166 + 404), 0, 8u);
          v153 = sub_4013F2((LPCVOID)(v537 + 6184 * v167 + 8), 1);
          if ( !v153 )
          {
            sub_4010DC(a5, *(_WORD *)(v169 + 6), 1073, v168);
            sub_401316("err,unCapsule character fail ", v169 + 14);
            sub_4012DF(v169 + 30, v537 + 6184 * v167 + 8);
            v5 = 1;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          sub_4343B0(a2, a3, (int)&v147, (int)"unCapsule Account [%s]", v169 + 14);
          sub_401316(&v147, v537 + 6184 * v167 + 8);
          v144 = 3120;
          sub_40137A(&v146, v537 + 6184 * v167 + 8);
          v145 = *(_WORD *)(v169 + 6);
          sub_401244(&v143, 756);
          sub_4013ED(v168);
        }
        else
        {
          if ( v52 == 3104 )
          {
            v279 = a4;
            v278 = *(_DWORD *)(a4 + 12);
            v277 = *(_DWORD *)(a4 + 32);
            v276 = sub_401122(a5, *(_WORD *)(a4 + 6));
            if ( v278 < 0 || v278 >= 4 )
            {
              sub_401316("err,newchar slot out of range", v537 + 6184 * *(_WORD *)(v279 + 6) + 8);
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( v277 < 0 || v277 >= 4 )
            {
              sub_401316("err,newchar slot out of range", v537 + 6184 * *(_WORD *)(v279 + 6) + 8);
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            sub_435800((int)&v271, v279 + 16, 0x10u);
            sub_449530(a2, (int)&v538, a3, &v271);
            v270 = sub_434FC0((int)&v271);
            if ( v270 < 4 || v270 > 12 )
            {
              sub_401316("err,newchar - length", v537 + 6184 * *(_WORD *)(v279 + 6) + 8);
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              v5 = 0;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( v271 == 67 && v272 == 79 && v273 == 77 && v274 >= 48 && v274 <= 57 && !v275 )
            {
              sub_401316("err,newchar - com", v537 + 6184 * *(_WORD *)(v279 + 6) + 8);
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              v5 = 0;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( v271 == 76 && v272 == 80 && v273 == 84 && v274 >= 48 && v274 <= 57 && !v275 )
            {
              sub_401316("err,newchar - com", v537 + 6184 * *(_WORD *)(v279 + 6) + 8);
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              v5 = 0;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            if ( !sub_4351F0((int)&v271, (int)"RELO")
              || !sub_4351F0((int)&v271, (int)"SUMM")
              || !sub_4351F0((int)&v271, (int)"KINGDOM")
              || !sub_4351F0((int)&v271, (int)"KING") )
            {
              v5 = 0;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            v269 = 6184 * v276 + v537 + 756 * v278 + 216;
            *(_BYTE *)(6184 * v276 + v537 + 756 * v278 + 231) = 0;
            *(_BYTE *)(v269 + 14) = 0;
            *(_BYTE *)(v279 + 31) = 0;
            *(_BYTE *)(v279 + 30) = 0;
            if ( *(_BYTE *)v269 )
            {
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              sub_401316("err,newchar already charged", v537 + 6184 * v276 + 8);
              sub_401316(v269, v279 + 16);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            *(_BYTE *)(v279 + 31) = 0;
            *(_BYTE *)(v279 + 30) = 0;
            for ( i3 = 0; i3 < v270; ++i3 )
            {
              if ( *(_BYTE *)(i3 + v279 + 16) == -95 && *(_BYTE *)(i3 + v279 + 17) == -95 )
              {
                sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
                v5 = 1;
                return sub_434B10(1, v5, v50, v48, v49);
              }
            }
            v267 = sub_401280((LPCVOID)(v537 + 6184 * v276 + 8), v279 + 16, 1);
            if ( !v267 )
            {
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            sub_40132A(v269);
            *(_DWORD *)(6184 * v276 + v537 + 756 * v278 + 244) = *(_DWORD *)(6184 * v276 + v537 + 756 * v277 + 244);
            memcpy(
              (void *)(6184 * v276 + v537 + 756 * v278 + 252),
              (const void *)(6184 * v276 + v537 + 756 * v277 + 252),
              0x1Cu);
            memcpy(
              (void *)(6184 * v276 + v537 + 756 * v278 + 280),
              (const void *)(6184 * v276 + v537 + 756 * v277 + 280),
              0x1Cu);
            v18 = 6184 * v276 + v537;
            v19 = *(_DWORD *)(v18 + 756 * v277 + 308);
            v20 = *(_DWORD *)(v18 + 756 * v277 + 312);
            v21 = 6184 * v276 + v537;
            v22 = 756 * v278;
            *(_DWORD *)(v21 + 756 * v278 + 308) = v19;
            *(_DWORD *)(v21 + v22 + 312) = v20;
            v23 = 6184 * v276 + v537;
            v24 = *(_DWORD *)(v23 + 756 * v277 + 428);
            v25 = *(_DWORD *)(v23 + 756 * v277 + 432);
            v26 = 6184 * v276 + v537;
            v27 = 756 * v278;
            *(_DWORD *)(v26 + 756 * v278 + 428) = v24;
            *(_DWORD *)(v26 + v27 + 432) = v25;
            *(_DWORD *)(6184 * v276 + v537 + 756 * v278 + 948) = *(_DWORD *)(6184 * v276 + v537 + 756 * v277 + 948);
            v266 = *(_WORD *)(6184 * v276 + v537 + 756 * v277 + 308) / 10;
            if ( v266 )
            {
              switch ( v266 )
              {
                case 1:
                  v266 = 3505;
                  break;
                case 2:
                  v266 = 3504;
                  break;
                case 3:
                  v266 = 3506;
                  break;
              }
            }
            else
            {
              v266 = 3503;
            }
            *(_WORD *)(6184 * v276 + v537 + 756 * v278 + 316) = v266;
            sub_434AB0((void *)(6184 * v276 + v537 + 160 * v278 + 4332), 0, 0xA0u);
            v28 = (const void *)(6184 * v276 + v537 + 288 * v277 + 4972);
            memcpy((void *)(6184 * v276 + v537 + 288 * v278 + 4972), v28, 0x120u);
            v29 = (int)((char *)v28 + 288);
            *(_BYTE *)(6184 * v276 + v537 + 288 * v278 + 4981) = 1;
            sub_434AB0((void *)(6184 * v276 + v537 + 16 * v278 + 4268), 0xFFu, 0x10u);
            sub_434C80((void *)v269, (const void *)(v279 + 16), 0x10u);
            v267 = sub_4013F2((LPCVOID)(v537 + 6184 * v276 + 8), 1);
            if ( !v267 )
            {
              sub_4011E5(a5, *(_WORD *)(v279 + 6), 1053);
              sub_401316("err,newchar fail -create file", v279 + 16);
              v5 = 1;
              return sub_434B10(1, v5, v50, v48, v49);
            }
            sub_4343B0(a2, v29, (int)&v265, (int)"create character [%s]", v269);
            sub_401316(&v265, v537 + 6184 * v276 + 8);
            v262 = 1048;
            sub_40137A(&v264, v537 + 6184 * v276 + 8);
            v263 = *(_WORD *)(v279 + 6);
            sub_401244(&v261, 756);
          }
          else
          {
            if ( v52 > 3095 )
            {
              if ( v52 == 3097 )
              {
                v487 = a4;
                sub_401172(a5);
              }
              else
              {
                if ( v52 == 3103 )
                {
                  v448 = a4;
                  v447 = *(_DWORD *)(a4 + 12) - 1;
                  if ( v447 < 0 || v447 > 9 )
                  {
                    v5 = 0;
                    return sub_434B10(1, v5, v50, v48, v49);
                  }
                  sub_401244(v448, 20);
                }
              }
            }
            else
            {
              switch ( v52 )
              {
                case 3095:
                  v388 = a4;
                  v387 = *(_DWORD *)(a4 + 12);
                  v386 = *(_DWORD *)(a4 + 16);
                  v385 = *(_DWORD *)(a4 + 20);
                  v384 = v387 >> 12;
                  v383 = v387 & 0xFFF;
                  v382 = sub_401122(a5, v385);
                  v381 = sub_401122(a5, *(_WORD *)(v388 + 6));
                  v380 = 0;
                  if ( v387 < 0 || v387 > 65535 )
                  {
                    sub_4343B0(a2, a3, (int)&v380, (int)"err,UPDATE GUILD  guild index error %d", v387);
                    sub_401316(&v380, "sys");
                    v5 = 1;
                    return sub_434B10(1, v5, v50, v48, v49);
                  }
                  v379 = *(&dword_591B7D8[61440 * v384] + 15 * v383);
                  if ( v386 )
                  {
                    switch ( v386 )
                    {
                      case 1:
                        *(&dword_591B7D8[61440 * v384] + 15 * v383) = v385;
                        break;
                      case 2:
                        if ( v385 < 0 && v385 > 15 )
                        {
                          v5 = 1;
                          return sub_434B10(1, v5, v50, v48, v49);
                        }
                        *(&byte_591B7D5[245760 * v384] + 60 * v383) = v385;
                        break;
                      case 3:
                        *(&byte_591B7D6[245760 * v384] + 60 * v383) = v385;
                        break;
                    }
                  }
                  else
                  {
                    v378 = *(_DWORD *)(v537 + 6184 * v382 + 4);
                    if ( v378 < 0 || v378 >= 10000 )
                    {
                      v5 = 1;
                      return sub_434B10(1, v5, v50, v48, v49);
                    }
                    v377 = *(_WORD *)(6184 * v382 + v537 + 756 * v378 + 404);
                    if ( v377 != 526 && v377 != 529 )
                    {
                      if ( v377 != 527 && v377 != 530 )
                      {
                        if ( v377 == 528 || v377 == 531 )
                        {
                          *(&byte_591B7C8[245760 * v384] + 60 * v383) = 0;
                          *(&byte_591B7C9[245760 * v384] + 60 * v383) = 0;
                        }
                      }
                      else
                      {
                        *(&byte_591B7BC[245760 * v384] + 60 * v383) = 0;
                        *(&byte_591B7BD[245760 * v384] + 60 * v383) = 0;
                      }
                    }
                    else
                    {
                      *(&byte_591B7B0[245760 * v384] + 60 * v383) = 0;
                      *(&byte_591B7B1[245760 * v384] + 60 * v383) = 0;
                    }
                  }
                  sub_4343B0(a2, a3, (int)&v380, (int)"%d %d %d %d %d %d %d", dword_4828AC);
                  sub_434AB0(&v376, 0, 0x3Cu);
                  memcpy(&v376, &dword_591B7A0[61440 * v384] + 15 * v383, 0x3Cu);
                  v375 = sub_401145(&v376);
                  if ( !v375 )
                  {
                    sub_401316("err,guild update fail", "sys");
                    v5 = 1;
                    return sub_434B10(1, v5, v50, v48, v49);
                  }
                  if ( v386 == 1 || v386 == 2 || v386 == 3 )
                  {
                    *(_WORD *)(v388 + 6) = 0;
                    for ( i4 = 0; i4 < 10; ++i4 )
                    {
                      if ( dword_1E01844[30 * i4] && dword_1E01848[30 * i4] )
                        sub_401244(v388, 24);
                    }
                  }
                  if ( dword_A95E08[0] )
                  {
                    sub_434AB0(&v370, 0, 0x1ECu);
                    v371 = 15388;
                    v370 = 492;
                    v372 = 0;
                    v373 = 0;
                    sub_434B90((int)&v373);
                    sub_401244(&v370, 492);
                  }
                  break;
                case 2085:
                  v63 = a4;
                  v62 = sub_401122(a5, *(_WORD *)(a4 + 6));
                  if ( dword_A95E08[0] )
                  {
                    sub_434AB0(&v58, 0, 0x1ECu);
                    v59 = 2085;
                    v58 = 492;
                    v60 = 0;
                    v61 = 0;
                    sub_435800((int)&v61, v537 + 6184 * v62 + 8, 0x10u);
                    sub_401244(&v58, 492);
                  }
                  break;
                case 3083:
                  v356 = a4;
                  *(_WORD *)(a4 + 6) = 0;
                  *(_BYTE *)(v356 + 111) = 0;
                  *(_BYTE *)(v356 + 110) = 0;
                  for ( i5 = 0; i5 < 10; ++i5 )
                  {
                    if ( dword_1E01844[30 * i5] && dword_1E01848[30 * i5] )
                      sub_401244(v356, 112);
                  }
                  break;
                case 3093:
                  v453 = a4;
                  if ( dword_A93F60 )
                  {
                    v5 = 0;
                    return sub_434B10(1, v5, v50, v48, v49);
                  }
                  *(_WORD *)(v453 + 4) = 3093;
                  dword_A93F60 = *(_DWORD *)(v453 + 16);
                  sub_401244(v453, 20);
                  break;
              }
            }
          }
        }
      }
    }
LABEL_777:
    v5 = 1;
    return sub_434B10(1, v5, v50, v48, v49);
  }
  if ( v52 == 2068 )
  {
    v534 = a4;
    if ( (signed int)*(_WORD *)(a4 + 6) <= 0 || (signed int)*(_WORD *)(v534 + 6) >= 1000 )
    {
      sub_4343B0(a2, a3, (int)&v533, (int)"err,remove server id:%d ", *(_WORD *)(v534 + 6));
      sub_401316(&v533, "system");
      v5 = 1;
      return sub_434B10(1, v5, v50, v48, v49);
    }
    if ( *(_DWORD *)(v534 + 12) <= 0 || *(_DWORD *)(v534 + 12) > 11 )
    {
      sub_4343B0(a2, a3, (int)&v532, (int)"err,remove server srvnum:%d ", *(_DWORD *)(v534 + 12));
      sub_401316(&v532, "system");
      v5 = 1;
      return sub_434B10(1, v5, v50, v48, v49);
    }
    v531 = sub_401122(a5, *(_WORD *)(v534 + 6));
    sub_434AB0(&v530, 0, 0x20u);
    v529 = sub_401438(v531, &v530);
    if ( v529 )
    {
      v521 = 1323;
      v520 = 16;
      v522 = *(_WORD *)(v534 + 6);
      v523 = v529;
      sub_401244(&v520, 16);
    }
    else
    {
      sub_401325(v531, *(_DWORD *)(v534 + 12), &v530, *(_DWORD *)(v534 + 16));
      v525 = 1322;
      v524 = 80;
      v526 = *(_WORD *)(v534 + 6);
      sub_434B90((int)&v527);
      sub_4343B0(a2, a3, (int)&v528, (int)"*%d %d %d %d %d %d %d %d %d %d", *(_DWORD *)(v534 + 12));
      sub_401244(&v524, 80);
    }
    goto LABEL_777;
  }
  v52 -= 2049;
  switch ( v52 )
  {
    case 12:
      v486 = a4;
      v485 = *(_WORD *)(a4 + 6);
      if ( v485 < 0 || v485 >= 10 )
      {
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      for ( i6 = 0; i6 < 5; ++i6 )
        *(&dword_484258[5 * v485] + i6) = *(_DWORD *)(v486 + 4 * i6 + 12);
      v481 = 1063;
      v480 = 212;
      v482 = 0;
      sub_434C80(&v483, dword_484258, 0xC8u);
      for ( i6 = 0; i6 < 10; ++i6 )
      {
        if ( dword_1E01844[30 * i6] && dword_1E01848[30 * i6] )
          sub_401244(&v480, 212);
      }
      for ( i7 = 0; i7 < 10; ++i7 )
      {
        v478 = dword_484268[5 * i7];
        v477 = v478 >> 12;
        v476 = v478 & 0xFFF;
        v475 = *(&dword_591B7D8[61440 * (v478 >> 12)] + 15 * (v478 & 0xFFF));
        v474 = *(&byte_591B7D6[245760 * (v478 >> 12)] + 60 * (v478 & 0xFFF));
        if ( v474 == 8 )
        {
          if ( v475 > dword_5CDCF54 )
          {
            dword_5CDCF54 = v475;
            dword_5CDCF4C = v478;
          }
        }
        else
        {
          if ( v474 == 7 && v475 > dword_5CDCF58 )
          {
            dword_5CDCF58 = v475;
            dword_5CDCF50 = v478;
          }
        }
      }
      goto LABEL_777;
    case 9:
      v455 = a4;
      dword_4828BC += *(_DWORD *)(a4 + 12);
      if ( dword_4828BC < 1 )
        dword_4828BC = 0;
      if ( dword_4828BC > 6400 )
        dword_4828BC = 6400;
      for ( i8 = 0; i8 < 10; ++i8 )
      {
        if ( dword_1E01844[30 * i8] && dword_1E01848[30 * i8] )
          sub_4011A9(i8, 0, 1059, -1, dword_4828BC, i8);
      }
      sub_40110E();
      goto LABEL_777;
    case 0:
      v446 = a4;
      v445 = sub_401122(a5, *(_WORD *)(a4 + 6));
      sub_449530(a2, (int)&v538, a3, (LPCSTR)(v446 + 12));
      v444 = v446 + 12;
      if ( *(_BYTE *)(v446 + 12) == 67
        && *(_BYTE *)(v444 + 1) == 79
        && *(_BYTE *)(v444 + 2) == 77
        && (signed int)*(_BYTE *)(v444 + 3) >= 48
        && (signed int)*(_BYTE *)(v444 + 3) <= 57
        && !*(_BYTE *)(v444 + 4) )
      {
        v5 = 0;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( *(_BYTE *)v444 == 76
        && *(_BYTE *)(v444 + 1) == 80
        && *(_BYTE *)(v444 + 2) == 84
        && (signed int)*(_BYTE *)(v444 + 3) >= 48
        && (signed int)*(_BYTE *)(v444 + 3) <= 57
        && !*(_BYTE *)(v444 + 4) )
      {
        v5 = 0;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      lpMultiByteStr = (LPCSTR)(v537 + 6184 * v445 + 8);
      v8 = v446 + 12;
      v9 = (void *)(v537 + 6184 * v445 + 8);
      memcpy(v9, (const void *)(v446 + 12), 0xD0u);
      v11 = v8 + 208;
      v10 = (int)((char *)v9 + 208);
      sub_434AB0((void *)(lpMultiByteStr + 208), 0, 0xBD0u);
      sub_434AB0((void *)(lpMultiByteStr + 3232), 0, 0x400u);
      *((_DWORD *)lpMultiByteStr + 1064) = 0;
      v442 = sub_4013F2(lpMultiByteStr, 1);
      if ( !v442 )
      {
        sub_4011E5(a5, *(_WORD *)(v446 + 6), 1050);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      sub_449530(a2, v10, v11, lpMultiByteStr);
      sub_401357(v445);
      v437 = 1046;
      v438 = *(_WORD *)(v446 + 6);
      v436 = 1824;
      sub_434C80(&v441, lpMultiByteStr, 0x10u);
      sub_434AB0(&v440, 0, 0x400u);
      sub_40137A(&v439, lpMultiByteStr);
      sub_401244(&v436, 1824);
      goto LABEL_777;
    case 11:
      v435 = a4;
      *(_BYTE *)(a4 + 267) = 0;
      *(_BYTE *)(v435 + 266) = 0;
      sub_434AB0(&v431, 0, 0x1ECu);
      v433 = a5;
      v432 = 2060;
      v431 = 492;
      sub_434B90((int)&v434);
      sub_401244(&v431, 492);
      goto LABEL_777;
    case 2:
      v354 = a4;
      sub_449530(a2, (int)&v538, a3, (LPCSTR)(a4 + 24));
      v353 = v354 + 24;
      if ( *(_BYTE *)(v354 + 24) == 67
        && *(_BYTE *)(v353 + 1) == 79
        && *(_BYTE *)(v353 + 2) == 77
        && (signed int)*(_BYTE *)(v353 + 3) >= 48
        && (signed int)*(_BYTE *)(v353 + 3) <= 57
        && !*(_BYTE *)(v353 + 4) )
      {
        sub_4011E5(a5, *(_WORD *)(v354 + 6), 1057);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( *(_BYTE *)v353 == 76
        && *(_BYTE *)(v353 + 1) == 80
        && *(_BYTE *)(v353 + 2) == 84
        && (signed int)*(_BYTE *)(v353 + 3) >= 48
        && (signed int)*(_BYTE *)(v353 + 3) <= 57
        && !*(_BYTE *)(v353 + 4) )
      {
        sub_4011E5(a5, *(_WORD *)(v354 + 6), 1057);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      v352 = sub_401122(a5, *(_WORD *)(v354 + 6));
      v351 = sub_401055(v354 + 24);
      v350 = -1;
      if ( *(_BYTE *)(v354 + 40) != 42 )
        goto LABEL_319;
      v349 = sub_4012BC(v354, &v350);
      if ( !v349 )
      {
        sub_4011E5(a5, *(_WORD *)(v354 + 6), 1058);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      *(_DWORD *)(v537 + 6184 * v352 + 6180) = 1;
LABEL_319:
      sub_434AB0(&v340, 0, 0x17E4u);
      sub_434C80(&v340, (const void *)(v354 + 24), 0x10u);
      v339 = sub_40137F(&v340, 1);
      if ( v339 )
        goto LABEL_325;
      v339 = sub_40137F(&v340, 0);
      if ( v339 )
      {
        sub_40107D(&v340, 0, 1);
        sub_401316("MOVE NEW->ACT", v354 + 24);
      }
      else
      {
        v339 = sub_40137F(&v340, 2);
        if ( !v339 )
        {
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1057);
          v5 = 1;
          return sub_434B10(1, v5, v50, v48, v49);
        }
        sub_40107D(&v340, 2, 1);
        sub_401316("MOVE OLD->ACT", v354 + 24);
      }
LABEL_325:
      if ( v346 < 0 )
        v346 = 0;
      if ( *(_BYTE *)(v354 + 40) != 42 && sub_4351F0(v354 + 12, (int)&v341) )
      {
        if ( v341 == 95 )
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1057);
        if ( v341 == 64 )
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1060);
        if ( v341 == 35 )
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1061);
        else
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1058);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      for ( i9 = 0; i9 < 4; ++i9 )
      {
        if ( v348[72 * i9] )
        {
          v347[72 * i9] = v348[72 * i9];
          v348[72 * i9] = 0;
        }
      }
      sub_434AB0(&v342, 0, 0x66u);
      v343 = 0;
      sub_435BA0(a2, (int)&v538, a3, (int)&v336);
      v14 = sub_435940(a2, (int)&v538, a3, (signed int *)&v336);
      memcpy(&v337, (const void *)v14, 0x24u);
      v15 = v14 + 36;
      if ( v351 == v352 )
      {
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      v335 = v352 / 1000;
      v334 = v352 % 1000;
      if ( v352 / 1000 < 0 || v335 >= 10 || v334 <= 0 || v334 >= 1000 )
      {
        sub_401316("err,wrong svr or id", v354 + 24);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( v351 )
      {
        if ( *(_DWORD *)(v354 + 96) )
        {
          sub_4343B0(a2, v15, (int)&unk_A93B60, (int)"sys,req_previous_save svr:%d conn:%d", v351 / 1000);
          sub_401316(&unk_A93B60, v354 + 24);
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1056);
          sub_401352(v351, 0);
          v5 = 1;
        }
        else
        {
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1055);
          v5 = 1;
        }
        return sub_434B10(1, v5, v50, v48, v49);
      }
      sub_449530(a2, (int)&i9, v15, &v340);
      v333 = -1;
      v332 = -1;
      for ( i10 = 0; i10 < 4; ++i10 )
      {
        if ( v344[756 * i10] && v345[378 * i10] == 774 )
          v333 = i10;
        if ( v344[756 * i10] && v345[378 * i10] == 775 )
          v332 = i10;
      }
      if ( v333 != -1 && v332 != -1 )
      {
        sub_434C80(&v330, &v344[756 * v333], 0x10u);
        sub_434C80(&v344[756 * v333], &v344[756 * v332], 0x10u);
        sub_434C80(&v344[756 * v332], &v330, 0x10u);
        v345[378 * v333] = 0;
        v345[378 * v332] = 0;
        sub_4343B0(a2, v15, (int)&v329, (int)"etc,name swap %s %s", (unsigned int)v344 + -12 * v333);
        sub_401316(&v329, &v340);
      }
      v328 = v537 + 6184 * v352 + 8;
      sub_434C80((void *)(v537 + 6184 * v352 + 8), &v340, 0x17E4u);
      for ( i11 = 0; i11 < 4; ++i11 )
      {
        if ( *(_BYTE *)(v328 + 756 * i11 + 208) )
        {
          v326 = *(_DWORD *)(v328 + 160 * i11 + 4328);
          v325 = *(_BYTE *)(v328 + 288 * i11 + 4964);
          v324 = 0;
          if ( v326 > v336 )
            v324 = 1;
          if ( v324 && !v325 )
          {
            sub_4011E5(a5, *(_WORD *)(v354 + 6), 1068);
            v5 = 1;
            return sub_434B10(1, v5, v50, v48, v49);
          }
          if ( !v325 )
            *(_DWORD *)(v328 + 160 * i11 + 4328) = 0;
        }
      }
      if ( (signed int)*(_WORD *)(v537 + 6184 * v352 + 252) < 1000
        && (signed int)*(_WORD *)(v537 + 6184 * v352 + 1008) < 1000
        && (signed int)*(_WORD *)(v537 + 6184 * v352 + 1764) < 1000
        && (signed int)*(_WORD *)(v537 + 6184 * v352 + 2520) < 1000
        && dword_1E01894[30 * a5] >= dword_4828C0 )
      {
        sub_4011E5(a5, *(_WORD *)(v354 + 6), 3127);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      sub_401357(v352);
      sub_40137A(&v323, &v340);
      v315 = 1046;
      v316 = *(_WORD *)(v354 + 6);
      sub_434B90((int)&v320);
      sub_434C80(&v318, (const void *)(v537 + 6184 * v352 + 3240), 0x400u);
      v319 = *(_DWORD *)(v537 + 6184 * v352 + 4264);
      memcpy(&v317, &v323, 0x2E8u);
      v16 = (int)&v324;
      v321 = *(_DWORD *)(v537 + 6184 * v352 + 60);
      v322 = *(_DWORD *)(v537 + 6184 * v352 + 64);
      sub_401244(&v314, 1824);
      sub_4343B0(a2, (int)&v324, (int)&FileName, (int)"./buffer/%s.txt", (unsigned int)&v340);
      v312 = sub_434A90(a2, (int)&v324, &FileName, (int)"rt");
      if ( !v312 )
        goto LABEL_407;
LABEL_384:
      v306 = 0;
      v305 = 0;
      v304 = sub_434870(a2, (int)&v324, (int)&v309, 512, v312);
      if ( v304 )
      {
        for ( i12 = 0; ; ++i12 )
        {
          if ( i12 >= 288 )
            goto LABEL_400;
          if ( *(&v309 + i12) == 32 && *(&v310 + i12) == 95 && v311[i12] == 32 )
          {
            if ( !v306 )
            {
              v306 = i12 + 3;
              *(&v309 + i12) = 0;
              sub_434B90((int)&v308);
              continue;
            }
            if ( !v305 )
            {
              v305 = i12 + 3;
              *(&v309 + i12) = 0;
              sub_434B90((int)&v307);
LABEL_400:
              if ( v306 && v305 )
              {
                sub_40101E(v335, v334, &v309 + v305, &v308, &v307, &v340);
                sub_401316(&v309, "-DBA_LOGIN");
              }
              else
              {
                sub_401316(&v309, "-RBA_LOGIN_ERROR-");
              }
              goto LABEL_384;
            }
          }
          if ( *(&v309 + i12) == 10 || *(&v309 + i12) == 13 || !*(&v309 + i12) )
          {
            *(&v309 + i12) = 0;
            goto LABEL_400;
          }
        }
      }
      sub_4346D0(a2, (int)&v324, v312);
      v16 = (int)&v48;
      v17 = DeleteFileA(&FileName);
      v302 = sub_434B10(&v48 == &v48, v17, a2, (unsigned int)&v318, (int)&v48);
      if ( !v302 )
        sub_401316(&FileName, "-DBA_ERROR_CLEAR_BUFFER");
LABEL_407:
      sub_4343B0(a2, v16, (int)&FileName, (int)"sta,account login %d-%d", v351 / 1000);
      sub_401316(&FileName, &v340);
      if ( *(_BYTE *)(v354 + 40) == 42 && (v350 >= 0 || v350 < 4) )
      {
        v301 = *(_WORD *)(6184 * v352 + v537 + 756 * v350 + 308);
        if ( v301 % 10 >= 6 )
        {
          v300 = 0;
          for ( i13 = 0; i13 < 4; ++i13 )
          {
            if ( *(_BYTE *)(6184 * v352 + v537 + 756 * i13 + 216) )
            {
              v298 = *(_WORD *)(6184 * v352 + v537 + 756 * i13 + 308);
              if ( v298 % 10 < 6 )
              {
                if ( v300 < *(_WORD *)(6184 * v352 + v537 + 756 * i13 + 252) )
                  v300 = *(_WORD *)(6184 * v352 + v537 + 756 * i13 + 252);
              }
            }
          }
          v297 = v300 - 298;
          if ( v300 - 298 < 0 )
            v297 = 0;
          if ( v297 > 103 )
            v297 = 103;
          *(_BYTE *)(6184 * v352 + v537 + 756 * v350 + 312) = 86;
          *(_BYTE *)(6184 * v352 + v537 + 756 * v350 + 313) = v297;
        }
        *(_DWORD *)(v537 + 6184 * v352 + 4) = v350;
        v289 = 1047;
        v290 = *(_WORD *)(v354 + 6);
        v288 = 1244;
        v292 = v350;
        memcpy(&v291, (const void *)(6184 * v352 + v537 + 756 * v350 + 216), 0x2F4u);
        memcpy(&v295, (const void *)(6184 * v352 + v537 + 160 * v350 + 4332), 0xA0u);
        memcpy(&v296, (const void *)(6184 * v352 + v537 + 288 * v350 + 4972), 0x120u);
        v287 = v537 + 6184 * v352 + 8;
        *(_BYTE *)(v537 + 6184 * v352 + 23) = 0;
        *(_BYTE *)(v287 + 14) = 0;
        v286 = sub_434FC0(v287);
        v285 = 0;
        for ( i9 = 0; i9 < v286; ++i9 )
          v285 += *(_BYTE *)(i9 + v287);
        v284 = *(_BYTE *)v287 - *(_BYTE *)(v286 + v287 - 1);
        v283 = *(_BYTE *)(v287 + 2) - *(_BYTE *)(v286 + v287 - 2);
        v293 = (v283 >> 24) + HIWORD(v284) + (v285 >> 8) + (_WORD)v286;
        sub_434C80(&v294, (const void *)(6184 * v352 + v537 + 16 * v350 + 4268), 0x10u);
        v282 = 6184 * v352 + v537 + 756 * v350 + 216;
        if ( *(_BYTE *)(6184 * v352 + v537 + 756 * v350 + 216) )
        {
          sub_401244(&v288, 1244);
          v5 = 1;
        }
        else
        {
          sub_4011E5(a5, *(_WORD *)(v354 + 6), 1053);
          *(_DWORD *)(v537 + 6184 * v352 + 4) = -1;
          sub_401316("err,charlogin mobname empty", v537 + 6184 * v352 + 8);
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 1:
      v260 = a4;
      v259 = *(_DWORD *)(a4 + 12);
      v258 = *(_DWORD *)(a4 + 32);
      v257 = 0;
      v256 = sub_401122(a5, *(_WORD *)(a4 + 6));
      if ( v259 < 0 || v259 >= 4 )
      {
        sub_401316("err,newchar slot out of range", v537 + 6184 * *(_WORD *)(v260 + 6) + 8);
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( v258 < 0 || v258 >= 20 )
      {
        sub_401316("err,newchar - class out of range", v537 + 6184 * *(_WORD *)(v260 + 6) + 8);
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( v258 >= 4 )
      {
        v257 = v258 / 4;
        v258 %= 4;
      }
      sub_435800((int)&v251, v260 + 16, 0x10u);
      sub_449530(a2, (int)&v538, a3, &v251);
      v250 = sub_434FC0((int)&v251);
      if ( v250 < 4 || v250 > 12 )
      {
        sub_401316("err,newchar - length", v537 + 6184 * *(_WORD *)(v260 + 6) + 8);
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        v5 = 0;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( v251 == 67 && v252 == 79 && v253 == 77 && v254 >= 48 && v254 <= 57 && !v255 )
      {
        sub_401316("err,newchar - com", v537 + 6184 * *(_WORD *)(v260 + 6) + 8);
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        v5 = 0;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( v251 == 76 && v252 == 80 && v253 == 84 && v254 >= 48 && v254 <= 57 && !v255 )
      {
        sub_401316("err,newchar - com", v537 + 6184 * *(_WORD *)(v260 + 6) + 8);
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        v5 = 0;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( !sub_4351F0((int)&v251, (int)"RELO")
        || !sub_4351F0((int)&v251, (int)"SUMM")
        || !sub_4351F0((int)&v251, (int)"KINGDOM")
        || !sub_4351F0((int)&v251, (int)"KING") )
      {
        v5 = 0;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      v249 = 6184 * v256 + v537 + 756 * v259 + 216;
      *(_BYTE *)(6184 * v256 + v537 + 756 * v259 + 231) = 0;
      *(_BYTE *)(v249 + 14) = 0;
      *(_BYTE *)(v260 + 31) = 0;
      *(_BYTE *)(v260 + 30) = 0;
      if ( *(_BYTE *)v249 )
      {
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        sub_401316("err,newchar already charged", v537 + 6184 * v256 + 8);
        sub_401316(v249, v260 + 16);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      *(_BYTE *)(v260 + 31) = 0;
      *(_BYTE *)(v260 + 30) = 0;
      v248 = 0;
      while ( 2 )
      {
        if ( v248 < v250 )
        {
          if ( *(_BYTE *)(v248 + v260 + 16) != -95 || *(_BYTE *)(v248 + v260 + 17) != -95 )
          {
            ++v248;
            continue;
          }
          sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
          v5 = 1;
          return sub_434B10(1, v5, v50, v48, v49);
        }
        break;
      }
      v247 = sub_401280((LPCVOID)(v537 + 6184 * v256 + 8), v260 + 16, v257);
      if ( !v247 )
      {
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      sub_40132A(v249);
      sub_434AB0((void *)(6184 * v256 + v537 + 160 * v259 + 4332), 0, 0xA0u);
      sub_434AB0((void *)(6184 * v256 + v537 + 288 * v259 + 4972), 0, 0x120u);
      sub_434AB0((void *)(6184 * v256 + v537 + 16 * v259 + 4268), 0xFFu, 0x10u);
      if ( v257 )
      {
        sub_434C80((void *)v249, (char *)&unk_5CDB7A0 + 756 * (v258 + 4), 0x2F4u);
        *(_WORD *)(v249 + 92) = 10 * (v257 - 1) + (_WORD)v258 + 6;
      }
      else
      {
        sub_434C80((void *)v249, (char *)&unk_5CDB7A0 + 756 * v258, 0x2F4u);
      }
      sub_434C80((void *)v249, (const void *)(v260 + 16), 0x10u);
      v247 = sub_4013F2((LPCVOID)(v537 + 6184 * v256 + 8), 1);
      if ( !v247 )
      {
        sub_4011E5(a5, *(_WORD *)(v260 + 6), 1053);
        sub_401316("err,newchar fail -create file", v260 + 16);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      sub_4343B0(a2, a3, (int)&v246, (int)"create character [%s]", v249);
      sub_401316(&v246, v537 + 6184 * v256 + 8);
      v243 = 1048;
      sub_40137A(&v245, v537 + 6184 * v256 + 8);
      v244 = *(_WORD *)(v260 + 6);
      sub_401244(&v242, 756);
      goto LABEL_777;
    case 3:
      v142 = a4;
      v141 = *(_DWORD *)(a4 + 12);
      v140 = sub_401122(a5, *(_WORD *)(a4 + 6));
      v139 = v537 + 6184 * v140 + 8;
      *(_BYTE *)(v537 + 6184 * v140 + 23) = 0;
      *(_BYTE *)(v139 + 14) = 0;
      if ( v141 < 0 || v141 >= 4 )
      {
        sub_401316("err,charlogin slot illegal", v139);
        goto LABEL_777;
      }
      if ( *(_DWORD *)(v537 + 6184 * v140 + 6180) != 1 )
      {
        sub_401316("err,charlogin - check not char password", v139);
        goto LABEL_777;
      }
      v138 = *(_WORD *)(6184 * v140 + v537 + 756 * v141 + 308);
      if ( v138 % 10 >= 6 )
      {
        v137 = 0;
        for ( i14 = 0; i14 < 4; ++i14 )
        {
          if ( *(_BYTE *)(6184 * v140 + v537 + 756 * i14 + 216) )
          {
            v135 = *(_WORD *)(6184 * v140 + v537 + 756 * i14 + 308);
            if ( v135 % 10 < 6 )
            {
              if ( v137 < *(_WORD *)(6184 * v140 + v537 + 756 * i14 + 252) )
                v137 = *(_WORD *)(6184 * v140 + v537 + 756 * i14 + 252);
            }
          }
        }
        v134 = v137 - 298;
        if ( v137 - 298 < 0 )
          v134 = 0;
        if ( v134 > 103 )
          v134 = 103;
        if ( !(*(_DWORD *)(6184 * v140 + v537 + 756 * v141 + 948) & 0x40000000) )
        {
          *(_BYTE *)(6184 * v140 + v537 + 756 * v141 + 312) = 86;
          *(_BYTE *)(6184 * v140 + v537 + 756 * v141 + 313) = v134;
        }
      }
      *(_DWORD *)(v537 + 6184 * v140 + 4) = v141;
      v34 = *(_DWORD *)(v537 + 6184 * v140 + 176);
      v35 = 6184 * v140 + v537;
      v36 = 160 * v141;
      *(_DWORD *)(v35 + 160 * v141 + 4364) = *(_DWORD *)(v537 + 6184 * v140 + 172);
      *(_DWORD *)(v35 + v36 + 4368) = v34;
      v126 = 1047;
      v127 = *(_WORD *)(v142 + 6);
      v125 = 1244;
      v129 = v141;
      memcpy(&v128, (const void *)(6184 * v140 + v537 + 756 * v141 + 216), 0x2F4u);
      memcpy(&v132, (const void *)(6184 * v140 + v537 + 160 * v141 + 4332), 0xA0u);
      memcpy(&v133, (const void *)(6184 * v140 + v537 + 288 * v141 + 4972), 0x120u);
      sub_434C80(&v131, (const void *)(6184 * v140 + v537 + 16 * v141 + 4268), 0x10u);
      v124 = 6184 * v140 + v537 + 756 * v141 + 216;
      if ( *(_BYTE *)(6184 * v140 + v537 + 756 * v141 + 216) )
      {
        v123 = sub_434FC0(v139);
        v122 = 0;
        for ( i15 = 0; i15 < v123; ++i15 )
          v122 += *(_BYTE *)(i15 + v139);
        v120 = *(_BYTE *)v139 - *(_BYTE *)(v123 + v139 - 1);
        v119 = *(_BYTE *)(v139 + 2) - *(_BYTE *)(v123 + v139 - 2);
        v130 = (v119 >> 24) + HIWORD(v120) + (v122 >> 8) + (_WORD)v123;
        sub_401244(&v125, 1244);
        v5 = 1;
      }
      else
      {
        sub_401316("err,charlogin mobname empty", v537 + 6184 * v140 + 8);
        *(_DWORD *)(v537 + 6184 * v140 + 4) = -1;
        v5 = 1;
      }
      return sub_434B10(1, v5, v50, v48, v49);
    case 4:
      v118 = a4;
      v117 = sub_401122(a5, *(_WORD *)(a4 + 6));
      sub_435800((int)&v114, v537 + 6184 * v117 + 8, 0x10u);
      v116 = 0;
      v115 = 0;
      sub_4343B0(a2, a3, (int)&unk_A93B60, (int)"clo,svr:%d conn:%d do-not-save", a5);
      sub_401316(&unk_A93B60, &v114);
      sub_401203(v117);
      v113 = 0;
      while ( 2 )
      {
        if ( v113 < 24 )
        {
          if ( dword_A95E58[30 * v113] <= 2 || !dword_A95E74[30 * v113] || dword_A95E74[30 * v113] != v117 )
          {
            ++v113;
            continue;
          }
          sub_40138E(v113, &v114);
        }
        break;
      }
      goto LABEL_777;
    case 6:
      v112 = a4;
      v111 = sub_401122(a5, *(_WORD *)(a4 + 6));
      *(_BYTE *)(v537 + 6184 * v111 + 23) = 0;
      *(_BYTE *)(v537 + 6184 * v111 + 22) = 0;
      sub_435800((int)&v108, v537 + 6184 * v111 + 8, 0x10u);
      v110 = 0;
      v109 = 0;
      *(_BYTE *)(v112 + 1831) = 0;
      *(_BYTE *)(v112 + 1830) = 0;
      v107 = *(_DWORD *)(v537 + 6184 * v111 + 4);
      if ( v107 < 0 || v107 >= 4 )
      {
        sub_4343B0(a2, a3, (int)&v106, (int)"err,savemob1 %d %d %d %s %s %d", *(_WORD *)(v112 + 6));
        sub_401316(&v106, "-system");
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( v107 != *(_DWORD *)(v112 + 12) )
      {
        sub_4343B0(a2, a3, (int)&v105, (int)"err,savemob2 %d %d %d %s %s %d", *(_WORD *)(v112 + 6));
        sub_401316(&v105, "-system");
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      sub_435800((int)&v102, 6184 * v111 + v537 + 756 * *(_DWORD *)(v112 + 12) + 216, 0x10u);
      *(_BYTE *)(v112 + 31) = 0;
      *(_BYTE *)(v112 + 30) = 0;
      v104 = 0;
      v103 = 0;
      if ( sub_435900(v112 + 16, (int)&v102, 16) )
      {
        sub_4343B0(a2, a3, (int)&v101, (int)"err,savemob4 %d %d %d %s %s %d", *(_WORD *)(v112 + 6));
        sub_401316(&v101, "-system");
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( !*(_DWORD *)(v537 + 6184 * v111) )
      {
        sub_4343B0(a2, a3, (int)&v100, (int)"err,savemob3 %d %d %d %s %s %d", *(_WORD *)(v112 + 6));
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      memcpy((void *)(6184 * v111 + v537 + 756 * v107 + 216), (const void *)(v112 + 16), 0x2F4u);
      memcpy((void *)(6184 * v111 + v537 + 160 * v107 + 4332), (const void *)(v112 + 1836), 0xA0u);
      memcpy((void *)(6184 * v111 + v537 + 288 * v107 + 4972), (const void *)(v112 + 1996), 0x120u);
      v37 = 6184 * v111 + v537;
      v38 = *(_DWORD *)(v37 + 160 * v107 + 4364);
      v39 = *(_DWORD *)(v37 + 160 * v107 + 4368);
      v40 = 6184 * v111;
      v41 = v537;
      *(_DWORD *)(v537 + 6184 * v111 + 172) = v38;
      *(_DWORD *)(v41 + v40 + 176) = v39;
      sub_434C80((void *)(v537 + 6184 * v111 + 3240), (const void *)(v112 + 772), 0x400u);
      sub_434C80((void *)(6184 * v111 + v537 + 16 * v107 + 4268), (const void *)(v112 + 1800), 0x10u);
      *(_DWORD *)(v537 + 6184 * v111 + 4264) = *(_DWORD *)(v112 + 1796);
      sub_4013F2((LPCVOID)(v537 + 6184 * v111 + 8), 1);
      goto LABEL_777;
    case 5:
      v99 = a4;
      v98 = sub_401122(a5, *(_WORD *)(a4 + 6));
      v97 = *(_DWORD *)(v537 + 6184 * v98 + 4);
      *(_BYTE *)(v537 + 6184 * v98 + 23) = 0;
      *(_BYTE *)(v537 + 6184 * v98 + 22) = 0;
      sub_435800((int)&v94, v537 + 6184 * v98 + 8, 0x10u);
      *(_BYTE *)(v99 + 1831) = 0;
      *(_BYTE *)(v99 + 1830) = 0;
      if ( v97 < 0 || v97 >= 4 || v97 != *(_DWORD *)(v99 + 12) )
      {
        sub_4343B0(a2, a3, (int)&v93, (int)"err,savenquit2 %d %d %d %s %s %d", *(_WORD *)(v99 + 6));
        sub_401316(&v93, "-system");
        sub_4343B0(a2, a3, (int)&v93, (int)"clo,svr:%d conn:%d", a5);
        sub_401316(&v93, &v94);
        sub_401203(v98);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      v96 = 0;
      v95 = 0;
      sub_435800((int)&v90, 6184 * v98 + v537 + 756 * *(_DWORD *)(v99 + 12) + 216, 0x10u);
      *(_BYTE *)(v99 + 31) = 0;
      *(_BYTE *)(v99 + 30) = 0;
      v92 = 0;
      v91 = 0;
      if ( sub_435900(v99 + 1816, (int)&v94, 16) )
      {
        sub_4343B0(a2, a3, (int)&v89, (int)"err,savenquit1 %d %d %d %s %s %d", *(_WORD *)(v99 + 6));
        sub_401316(&v89, "-system");
        sub_4343B0(a2, a3, (int)&v89, (int)"clo,svr:%d conn:%d", a5);
        sub_401316(&v89, &v94);
        sub_401203(v98);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( sub_435900(v99 + 16, (int)&v90, 16) )
      {
        sub_4343B0(a2, a3, (int)&v88, (int)"err,savenquit4 %d %d %d %s %s %d", *(_WORD *)(v99 + 6));
        sub_401316(&v88, "-system");
        sub_4343B0(a2, a3, (int)&v88, (int)"clo,svr:%d conn:%d", a5);
        sub_401316(&v88, &v94);
        sub_401203(v98);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( !*(_DWORD *)(v537 + 6184 * v98) )
      {
        sub_4343B0(a2, a3, (int)&v87, (int)"err,savenquit3 %d %d %d %s %s %d", *(_WORD *)(v99 + 6));
        sub_401316(&v87, "-system");
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      memcpy((void *)(6184 * v98 + v537 + 756 * v97 + 216), (const void *)(v99 + 16), 0x2F4u);
      memcpy((void *)(6184 * v98 + v537 + 160 * v97 + 4332), (const void *)(v99 + 1832), 0xA0u);
      memcpy((void *)(6184 * v98 + v537 + 288 * v97 + 4972), (const void *)(v99 + 1992), 0x120u);
      sub_434C80((void *)(v537 + 6184 * v98 + 3240), (const void *)(v99 + 772), 0x400u);
      sub_434C80((void *)(6184 * v98 + v537 + 16 * v97 + 4268), (const void *)(v99 + 1800), 0x10u);
      *(_DWORD *)(v537 + 6184 * v98 + 4264) = *(_DWORD *)(v99 + 1796);
      v42 = 6184 * v98 + v537;
      v43 = *(_DWORD *)(v42 + 160 * v97 + 4364);
      v44 = *(_DWORD *)(v42 + 160 * v97 + 4368);
      v45 = 6184 * v98;
      v46 = v537;
      *(_DWORD *)(v537 + 6184 * v98 + 172) = v43;
      *(_DWORD *)(v46 + v45 + 176) = v44;
      sub_4013F2((LPCVOID)(v537 + 6184 * v98 + 8), 1);
      if ( dword_A95E08[0] )
      {
        sub_434AB0(&v82, 0, 0x17F4u);
        v84 = a5;
        v83 = 4101;
        v82 = 6132;
        memcpy(&v85, (const void *)(v537 + 6184 * v98 + 8), 0x17E4u);
        v46 = v537 + 6184 * v98 + 6124;
        v86 = v97;
        sub_401244(&v82, 6132);
      }
      sub_4343B0(a2, v46, (int)&unk_A93B60, (int)"clo,svr:%d conn:%d save-mob", a5);
      sub_401316(&unk_A93B60, &v94);
      sub_401203(v98);
      sub_4011E5(a5, *(_WORD *)(v99 + 6), 1035);
      v81 = 0;
      while ( 2 )
      {
        if ( v81 < 24 )
        {
          if ( dword_A95E58[30 * v81] <= 2 || !dword_A95E74[30 * v81] || dword_A95E74[30 * v81] != v98 )
          {
            ++v81;
            continue;
          }
          sub_40138E(v81, &v94);
        }
        break;
      }
      goto LABEL_777;
    case 8:
      v80 = a4;
      v79 = sub_401122(a5, *(_WORD *)(a4 + 6));
      v78 = *(_DWORD *)(v80 + 12);
      if ( v78 < 0 || v78 >= 4 )
      {
        sub_4011E5(a5, *(_WORD *)(v80 + 6), 1054);
        sub_401316("err,deletechar slot", v537 + 6184 * v79 + 8);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      if ( sub_435900(v80 + 32, v537 + 6184 * v79 + 24, 12) && sub_435900(v80 + 32, (int)"12346545", 12) )
      {
        sub_4011E5(a5, *(_WORD *)(v80 + 6), 1054);
        sub_401316("err,deletechar pass", v537 + 6184 * v79 + 8);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      v76 = 6184 * v79 + v537 + 756 * v78 + 216;
      v75 = 0;
      v74 = v537 + 6184 * v79 + 216;
      if ( (signed int)*(_WORD *)(v537 + 6184 * v79 + 252) >= 1000
        || (signed int)*(_WORD *)(v74 + 792) >= 1000
        || (signed int)*(_WORD *)(v74 + 1548) >= 1000
        || (signed int)*(_WORD *)(v74 + 2304) >= 1000 )
        v75 = 1;
      v73 = *(_WORD *)(6184 * v79 + v537 + 756 * v78 + 308) % 10;
      if ( ((signed int)*(_WORD *)(v76 + 36) >= 219 || v73 >= 6) && !v75 )
      {
        sub_4011E5(a5, *(_WORD *)(v80 + 6), 1054);
        sub_401316("err,deletechar level 80", v537 + 6184 * v79 + 8);
        v5 = 1;
        return sub_434B10(1, v5, v50, v48, v49);
      }
      for ( i16 = 0; i16 < 16; ++i16 )
        *(_BYTE *)(16 * v78 + 6184 * v79 + v537 + i16 + 4268) = -1;
      v71 = 0;
      sub_434B90((int)&v70);
      sub_449530(a2, (int)&v538, a3, &v70);
      for ( i17 = 0; i17 < 4; ++i17 )
      {
        sub_434B90((int)&v68);
        sub_449530(a2, (int)&v538, a3, &v68);
        if ( !sub_4351F0((int)&v70, (int)&v68) )
          ++v71;
      }
      if ( v71 <= 1 )
        sub_4012DF(v76, v537 + 6184 * v79 + 8);
      sub_4343B0(a2, a3, (int)&v77, (int)"delete char [%s]", v76);
      sub_401316(&v77, v537 + 6184 * v79 + 8);
      sub_40132A(v76);
      sub_434AB0((void *)(6184 * v79 + v537 + 160 * v78 + 4332), 0, 0xA0u);
      sub_434AB0((void *)(6184 * v79 + v537 + 288 * v78 + 4972), 0, 0x120u);
      sub_434AB0((void *)(6184 * v79 + v537 + 16 * v78 + 4268), 0xFFu, 0x10u);
      sub_4013F2((LPCVOID)(v537 + 6184 * v79 + 8), 1);
      v65 = 1049;
      sub_40137A(&v67, v537 + 6184 * v79 + 8);
      v66 = *(_WORD *)(v80 + 6);
      sub_401244(&v64, 756);
      goto LABEL_777;
    default:
      goto LABEL_777;
  }
  return sub_434B10(1, v5, v50, v48, v49);
}
// 40101E: using guessed type _DWORD __cdecl sub_40101E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 401037: using guessed type _DWORD __stdcall sub_401037(_DWORD, _DWORD);
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 401073: using guessed type _DWORD __stdcall sub_401073(_DWORD, LPCVOID lpBuffer);
// 40107D: using guessed type _DWORD __stdcall sub_40107D(_DWORD, _DWORD, _DWORD);
// 4010A5: using guessed type _DWORD __cdecl sub_4010A5(_DWORD, _DWORD, _DWORD, _DWORD);
// 4010DC: using guessed type _DWORD __stdcall sub_4010DC(_DWORD, __int16, __int16, _DWORD);
// 40110E: using guessed type int sub_40110E(void);
// 401122: using guessed type _DWORD __stdcall sub_401122(_DWORD, _DWORD);
// 401136: using guessed type _DWORD __stdcall sub_401136(_DWORD);
// 401145: using guessed type _DWORD __stdcall sub_401145(LPCVOID lpBuffer);
// 401172: using guessed type _DWORD __stdcall sub_401172(_DWORD);
// 401181: using guessed type int __thiscall sub_401181(_DWORD);
// 4011A9: using guessed type _DWORD __stdcall sub_4011A9(_DWORD, __int16, __int16, _DWORD, _DWORD, _DWORD);
// 4011E5: using guessed type _DWORD __stdcall sub_4011E5(_DWORD, __int16, __int16);
// 401203: using guessed type _DWORD __stdcall sub_401203(_DWORD);
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 401280: using guessed type _DWORD __stdcall sub_401280(LPCVOID lpBuffer, _DWORD, _DWORD);
// 4012BC: using guessed type _DWORD __stdcall sub_4012BC(_DWORD, _DWORD);
// 4012DF: using guessed type _DWORD __stdcall sub_4012DF(_DWORD, _DWORD);
// 40130C: using guessed type _DWORD __stdcall sub_40130C(_DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 401325: using guessed type _DWORD __stdcall sub_401325(_DWORD, _DWORD, _DWORD, _DWORD);
// 40132A: using guessed type _DWORD __cdecl sub_40132A(_DWORD);
// 401352: using guessed type _DWORD __stdcall sub_401352(_DWORD, _DWORD);
// 401357: using guessed type _DWORD __stdcall sub_401357(_DWORD);
// 40137A: using guessed type _DWORD __stdcall sub_40137A(_DWORD, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 40138E: using guessed type _DWORD __cdecl sub_40138E(_DWORD, LPCSTR lpMultiByteStr);
// 4013ED: using guessed type _DWORD __stdcall sub_4013ED(_DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 40141A: using guessed type _DWORD __stdcall sub_40141A(_DWORD, __int16, __int16, _DWORD, _DWORD);
// 401429: using guessed type _DWORD __stdcall sub_401429(_DWORD, _DWORD);
// 401438: using guessed type _DWORD __stdcall sub_401438(_DWORD, _DWORD);
// 4828AC: using guessed type int dword_4828AC;
// 4828BC: using guessed type int dword_4828BC;
// 4828C0: using guessed type int dword_4828C0;
// 484258: using guessed type int dword_484258[];
// 484268: using guessed type int dword_484268[];
// A93F60: using guessed type int dword_A93F60;
// A95E04: using guessed type int dword_A95E04[];
// A95E08: using guessed type int dword_A95E08[];
// A95E58: using guessed type int dword_A95E58[];
// A95E74: using guessed type int dword_A95E74[];
// 1216B08: using guessed type int dword_1216B08;
// 1DE1840: using guessed type __int16 word_1DE1840[];
// 1E01844: using guessed type int dword_1E01844[];
// 1E01848: using guessed type int dword_1E01848[];
// 1E01894: using guessed type int dword_1E01894[];
// 1E01CF4: using guessed type __int16 word_1E01CF4[];
// 591B7A0: using guessed type int dword_591B7A0[];
// 591B7D8: using guessed type int dword_591B7D8[];
// 5CDCF48: using guessed type int dword_5CDCF48;
// 5CDCF4C: using guessed type int dword_5CDCF4C;
// 5CDCF50: using guessed type int dword_5CDCF50;
// 5CDCF54: using guessed type int dword_5CDCF54;
// 5CDCF58: using guessed type int dword_5CDCF58;
// 416FA0: using guessed type int var_2B20[225];
// 416FA0: using guessed type int var_2B70[20];
// 416FA0: using guessed type __int16 var_3DEC[1926];
// 416FA0: using guessed type char var_6264[4];
// 416FA0: using guessed type char var_1C20[56];
// 416FA0: using guessed type char var_3EB0[196];
// 416FA0: using guessed type char var_4DF2[510];
// 416FA0: using guessed type char var_620C[32];

//----- (00421090) --------------------------------------------------------
int __thiscall sub_421090(void *this, int a2, __int16 a3, __int16 a4)
{
  char v5; // [sp+0h] [bp-5Ch]@0
  int v6; // [sp+4h] [bp-58h]@0
  int v7; // [sp+8h] [bp-54h]@0
  char v8; // [sp+Ch] [bp-50h]@1
  int v9; // [sp+4Ch] [bp-10h]@1
  __int16 v10; // [sp+50h] [bp-Ch]@1
  __int16 v11; // [sp+52h] [bp-Ah]@1
  void *v12; // [sp+58h] [bp-4h]@1

  memset(&v8, -858993460, 0x50u);
  v12 = this;
  v10 = a4;
  v11 = a3;
  LOWORD(v9) = 12;
  sub_401244(&v9, 12);
  return sub_434B10(1, 1, v7, v5, v6);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (00421120) --------------------------------------------------------
int __thiscall sub_421120(void *this, int a2, __int16 a3, __int16 a4, int a5)
{
  char v6; // [sp+0h] [bp-60h]@0
  int v7; // [sp+4h] [bp-5Ch]@0
  int v8; // [sp+8h] [bp-58h]@0
  char v9; // [sp+Ch] [bp-54h]@1
  int v10; // [sp+4Ch] [bp-14h]@1
  __int16 v11; // [sp+50h] [bp-10h]@1
  __int16 v12; // [sp+52h] [bp-Eh]@1
  int v13; // [sp+58h] [bp-8h]@1
  void *v14; // [sp+5Ch] [bp-4h]@1

  memset(&v9, -858993460, 0x54u);
  v14 = this;
  v11 = a4;
  v12 = a3;
  LOWORD(v10) = 16;
  v13 = a5;
  sub_401244(&v10, 16);
  return sub_434B10(1, 1, v8, v6, v7);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (004211B0) --------------------------------------------------------
int __thiscall sub_4211B0(void *this, int a2, __int16 a3, __int16 a4, int a5, int a6)
{
  char v7; // [sp+0h] [bp-64h]@0
  int v8; // [sp+4h] [bp-60h]@0
  int v9; // [sp+8h] [bp-5Ch]@0
  char v10; // [sp+Ch] [bp-58h]@1
  int v11; // [sp+4Ch] [bp-18h]@1
  __int16 v12; // [sp+50h] [bp-14h]@1
  __int16 v13; // [sp+52h] [bp-12h]@1
  int v14; // [sp+58h] [bp-Ch]@1
  int v15; // [sp+5Ch] [bp-8h]@1
  void *v16; // [sp+60h] [bp-4h]@1

  memset(&v10, -858993460, 0x58u);
  v16 = this;
  v12 = a4;
  v13 = a3;
  LOWORD(v11) = 20;
  v14 = a5;
  v15 = a6;
  sub_401244(&v11, 20);
  return sub_434B10(1, 1, v9, v7, v8);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (00421250) --------------------------------------------------------
int __thiscall sub_421250(void *this, int a2, __int16 a3, __int16 a4, int a5, int a6, int a7)
{
  char v8; // [sp+0h] [bp-68h]@0
  int v9; // [sp+4h] [bp-64h]@0
  int v10; // [sp+8h] [bp-60h]@0
  char v11; // [sp+Ch] [bp-5Ch]@1
  int v12; // [sp+4Ch] [bp-1Ch]@1
  __int16 v13; // [sp+50h] [bp-18h]@1
  __int16 v14; // [sp+52h] [bp-16h]@1
  int v15; // [sp+58h] [bp-10h]@1
  int v16; // [sp+5Ch] [bp-Ch]@1
  int v17; // [sp+60h] [bp-8h]@1
  void *v18; // [sp+64h] [bp-4h]@1

  memset(&v11, -858993460, 0x5Cu);
  v18 = this;
  v13 = a4;
  v14 = a3;
  LOWORD(v12) = 24;
  v15 = a5;
  v16 = a6;
  v17 = a7;
  sub_401244(&v12, 24);
  return sub_434B10(1, 1, v10, v8, v9);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (00421390) --------------------------------------------------------
int __thiscall sub_421390(void *this, signed int a2)
{
  int v2; // eax@2
  char v4; // [sp+0h] [bp-54h]@0
  int v5; // [sp+4h] [bp-50h]@0
  int v6; // [sp+8h] [bp-4Ch]@0
  char v7; // [sp+Ch] [bp-48h]@1
  int v8; // [sp+4Ch] [bp-8h]@3
  int v9; // [sp+50h] [bp-4h]@1

  memset(&v7, -858993460, 0x48u);
  v9 = (int)this;
  if ( *((_DWORD *)this + 1546 * a2) == 1 )
  {
    v2 = sub_401316("err,addAccountlist - already added", v9 + 6184 * a2 + 8);
  }
  else
  {
    v8 = a2 / 1000;
    ++dword_1E01894[30 * a2 / 1000];
    v2 = v9;
    *(_DWORD *)(v9 + 6184 * a2) = 1;
    *(_DWORD *)(v9 + 6184 * a2 + 4) = -1;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 1E01894: using guessed type int dword_1E01894[];

//----- (00421480) --------------------------------------------------------
int __thiscall sub_421480(void *this, signed int a2)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-54h]@0
  int v5; // [sp+4h] [bp-50h]@0
  int v6; // [sp+8h] [bp-4Ch]@0
  char v7; // [sp+Ch] [bp-48h]@1
  int v8; // [sp+4Ch] [bp-8h]@2
  void *v9; // [sp+50h] [bp-4h]@1

  memset(&v7, -858993460, 0x48u);
  v9 = this;
  v2 = 6184 * a2;
  if ( *((_DWORD *)this + 1546 * a2) )
  {
    v8 = a2 / 1000;
    --dword_1E01894[30 * a2 / 1000];
    *((_DWORD *)v9 + 1546 * a2) = 0;
    *((_DWORD *)v9 + 1546 * a2 + 1) = -1;
    sub_434AB0((char *)v9 + 6184 * a2 + 6124, 0, 0x32u);
    *((_DWORD *)v9 + 1546 * a2 + 1545) = 0;
    v2 = (int)sub_434AB0((char *)v9 + 6184 * a2 + 8, 0, 0x17E4u);
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 1E01894: using guessed type int dword_1E01894[];

//----- (004215B0) --------------------------------------------------------
int __userpurge sub_4215B0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int lpBuffer, int a5, int a6)
{
  int v6; // eax@7
  char v8; // [sp+0h] [bp-1D4h]@0
  int v9; // [sp+4h] [bp-1D0h]@0
  int v10; // [sp+8h] [bp-1CCh]@0
  char v11; // [sp+Ch] [bp-1C8h]@1
  char v12; // [sp+4Ch] [bp-188h]@29
  char v13; // [sp+CCh] [bp-108h]@29
  int v14; // [sp+14Ch] [bp-88h]@29
  const CHAR MultiByteStr; // [sp+150h] [bp-84h]@1
  char v16; // [sp+151h] [bp-83h]@2
  char v17; // [sp+152h] [bp-82h]@3
  char v18; // [sp+153h] [bp-81h]@4
  char v19; // [sp+154h] [bp-80h]@6
  int v20; // [sp+1D0h] [bp-4h]@1
  int v21; // [sp+1D4h] [bp+0h]@1

  memset(&v11, -858993460, 0x1C8u);
  v20 = a1;
  sub_435800((int)&MultiByteStr, lpBuffer, 0x10u);
  sub_449530(a2, (int)&v21, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v16 != 79 || v17 != 77 || v18 < 48 || v18 > 57 || v19 )
  {
    if ( MultiByteStr != 76 || v16 != 80 || v17 != 84 || v18 < 48 || v18 > 57 || v19 )
    {
      sub_435800((int)&MultiByteStr, a5, 0x10u);
      sub_449530(a2, (int)&v21, a3, &MultiByteStr);
      if ( MultiByteStr != 67 || v16 != 79 || v17 != 77 || v18 < 48 || v18 > 57 || v19 )
      {
        if ( MultiByteStr != 76 || v16 != 80 || v17 != 84 || v18 < 48 || v18 > 57 || v19 )
        {
          sub_4013C0(a5, &v12);
          sub_4343B0(a2, a3, (int)&v13, (int)"./char/%s/%s", (unsigned int)&v12);
          v14 = sub_444AE0(a2, a3, &v13, -32768, 0);
          if ( v14 == -1 )
          {
            sub_43AC10(0xFFFFFFFFu);
            v14 = sub_444AE0(a2, a3, &v13, -32510, 384);
            if ( v14 == -1 )
            {
              if ( dword_6D51CC0 == 17 )
                sub_401316("err,createchar  EEXIST", a5);
              if ( dword_6D51CC0 == 13 )
                sub_401316("err,createchar EACCES", a5);
              if ( dword_6D51CC0 == 22 )
                sub_401316("err,createchar EINVAL", a5);
              if ( dword_6D51CC0 == 24 )
                sub_401316("err,createchar EMFILE", a5);
              if ( dword_6D51CC0 == 2 )
                sub_401316("err,createchar ENOENT", a5);
              if ( a6 )
              {
                sub_401316("sys,trans_class created", a5);
                v6 = 1;
              }
              else
              {
                sub_401316("err,createchar UNKNOWN", a5);
                v6 = 0;
              }
            }
            else
            {
              sub_435F00(v14, lpBuffer, 0x10u);
              sub_43AC10(v14);
              v6 = 1;
            }
          }
          else
          {
            sub_43AC10(v14);
            if ( a6 )
            {
              sub_401316("sys,trans_class created", a5);
              v6 = 1;
            }
            else
            {
              v6 = 0;
            }
          }
        }
        else
        {
          v6 = 0;
        }
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  return sub_434B10(1, v6, v10, v8, v9);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (004219F0) --------------------------------------------------------
int __userpurge sub_4219F0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char *lpBuffer)
{
  int v4; // eax@12
  char v6; // [sp+0h] [bp-160h]@0
  int v7; // [sp+4h] [bp-15Ch]@0
  int v8; // [sp+8h] [bp-158h]@0
  char v9; // [sp+Ch] [bp-154h]@1
  int v10; // [sp+4Ch] [bp-114h]@13
  char v11; // [sp+50h] [bp-110h]@1
  int v12; // [sp+D0h] [bp-90h]@1
  int v13; // [sp+D4h] [bp-8Ch]@1
  const CHAR MultiByteStr; // [sp+D8h] [bp-88h]@1
  char *v15; // [sp+158h] [bp-8h]@1
  int v16; // [sp+15Ch] [bp-4h]@1
  int v17; // [sp+160h] [bp+0h]@1

  memset(&v9, -858993460, 0x154u);
  v16 = a1;
  v15 = lpBuffer + 4;
  sub_435800((int)&MultiByteStr, (int)(lpBuffer + 4), 0xCu);
  sub_449530(a2, (int)&v17, a3, &MultiByteStr);
  v13 = *(_DWORD *)lpBuffer;
  sub_4343B0(a2, a3, (int)&v11, (int)"./guild/%d.bin", *(_DWORD *)lpBuffer);
  v12 = sub_444AE0(a2, a3, &v11, -32510, 384);
  if ( v12 == -1 )
  {
    if ( dword_6D51CC0 == 17 )
      sub_401316("err,guild  EEXIST", v15);
    if ( dword_6D51CC0 == 13 )
      sub_401316("err,guild EACCES", v15);
    if ( dword_6D51CC0 == 22 )
      sub_401316("err,guild EINVAL", v15);
    if ( dword_6D51CC0 == 24 )
      sub_401316("err,guild EMFILE", v15);
    if ( dword_6D51CC0 == 2 )
      sub_401316("err,guild ENOENT", v15);
    sub_401316("err,guild UNKNOWN", v15);
    v4 = 0;
  }
  else
  {
    v10 = sub_4361B0(v12, 0, 0);
    if ( v10 == -1 )
    {
      sub_401316("err,writeaccount lseek fail", v15);
      v4 = 0;
    }
    else
    {
      v10 = sub_435F00(v12, (signed int)lpBuffer, 0x3Cu);
      if ( v10 == -1 )
      {
        sub_43AC10(v12);
        sub_401316("guild write fail", v15);
        switch ( dword_6D51CC0 )
        {
          case 17:
            sub_401316("guild EEXIST", v15);
            v4 = 0;
            break;
          case 13:
            sub_401316("guild EACCES", v15);
            v4 = 0;
            break;
          case 22:
            sub_401316("guild EINVAL", v15);
            v4 = 0;
            break;
          case 24:
            sub_401316("guild EMFILE", v15);
            v4 = 0;
            break;
          case 2:
            sub_401316("guild ENOENT", v15);
            v4 = 0;
            break;
          default:
            v4 = 0;
            break;
        }
      }
      else
      {
        sub_43AC10(v12);
        v4 = 1;
      }
    }
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00421EE0) --------------------------------------------------------
int __userpurge sub_421EE0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4)
{
  int v4; // eax@1
  char v6; // [sp+0h] [bp-D4h]@1
  int v7; // [sp+4h] [bp-D0h]@1
  int v8; // [sp+8h] [bp-CCh]@1
  char v9; // [sp+Ch] [bp-C8h]@1
  int v10; // [sp+4Ch] [bp-88h]@1
  const CHAR FileName; // [sp+50h] [bp-84h]@1
  int v12; // [sp+D0h] [bp-4h]@1
  int v13; // [sp+D4h] [bp+0h]@1

  memset(&v9, -858993460, 0xC8u);
  v12 = a1;
  sub_4343B0(a2, a3, (int)&FileName, (int)"./guild/%d.bin", a4);
  v4 = DeleteFileA(&FileName);
  v10 = sub_434B10(&v6 == &v6, v4, a2, (unsigned int)&v13, (int)&v6);
  return sub_434B10(1, v10, v8, v6, v7);
}

//----- (00421F70) --------------------------------------------------------
int __userpurge sub_421F70<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5)
{
  int v5; // eax@7
  int v6; // eax@15
  char v8; // [sp+0h] [bp-1D4h]@15
  int v9; // [sp+4h] [bp-1D0h]@16
  int v10; // [sp+8h] [bp-1CCh]@16
  char v11; // [sp+Ch] [bp-1C8h]@1
  int v12; // [sp+4Ch] [bp-188h]@15
  char v13; // [sp+50h] [bp-184h]@15
  const CHAR FileName; // [sp+D0h] [bp-104h]@15
  const CHAR MultiByteStr; // [sp+150h] [bp-84h]@1
  char v16; // [sp+151h] [bp-83h]@2
  char v17; // [sp+152h] [bp-82h]@3
  char v18; // [sp+153h] [bp-81h]@4
  char v19; // [sp+154h] [bp-80h]@6
  int v20; // [sp+1D0h] [bp-4h]@1
  int v21; // [sp+1D4h] [bp+0h]@1

  memset(&v11, -858993460, 0x1C8u);
  v20 = a1;
  sub_435800((int)&MultiByteStr, a4, 0x10u);
  sub_449530(a2, (int)&v21, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v16 != 79 || v17 != 77 || v18 < 48 || v18 > 57 || v19 )
  {
    if ( MultiByteStr != 76 || v16 != 80 || v17 != 84 || v18 < 48 || v18 > 57 || v19 )
    {
      sub_4013C0(a4, &v13);
      sub_4343B0(a2, a3, (int)&FileName, (int)"./char/%s/%s", (unsigned int)&v13);
      v6 = DeleteFileA(&FileName);
      v5 = sub_434B10(&v8 == &v8, v6, a2, (unsigned int)&v21, (int)&v8);
      v12 = v5;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  return sub_434B10(1, v5, v10, v8, v9);
}
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);

//----- (00422110) --------------------------------------------------------
int __stdcall sub_422110(int a1, int a2)
{
  return a2 + 1000 * a1;
}

//----- (00422240) --------------------------------------------------------
int __thiscall sub_422240(void *this, int a2)
{
  int v2; // eax@6
  char v4; // [sp+0h] [bp-54h]@0
  int v5; // [sp+4h] [bp-50h]@0
  int v6; // [sp+8h] [bp-4Ch]@0
  char v7; // [sp+Ch] [bp-48h]@1
  int i; // [sp+4Ch] [bp-8h]@1
  void *v9; // [sp+50h] [bp-4h]@1

  memset(&v7, -858993460, 0x48u);
  v9 = this;
  for ( i = 0; i < 10000; ++i )
  {
    if ( *((_DWORD *)v9 + 1546 * i) && !sub_4351F0((int)((char *)v9 + 6184 * i + 8), a2) )
    {
      v2 = i;
      return sub_434B10(1, v2, v6, v4, v5);
    }
  }
  v2 = 0;
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (004222F0) --------------------------------------------------------
int __thiscall sub_4222F0(void *this, int a2)
{
  int v2; // eax@8
  char v4; // [sp+0h] [bp-58h]@0
  int v5; // [sp+4h] [bp-54h]@0
  int v6; // [sp+8h] [bp-50h]@0
  char v7; // [sp+Ch] [bp-4Ch]@1
  int j; // [sp+4Ch] [bp-Ch]@3
  int i; // [sp+50h] [bp-8h]@1
  void *v10; // [sp+54h] [bp-4h]@1

  memset(&v7, -858993460, 0x4Cu);
  v10 = this;
  for ( i = 0; i < 16; ++i )
  {
    for ( j = 0; j < 4096; ++j )
    {
      if ( *(&dword_591B7A0[61440 * i] + 15 * j) && !sub_4351F0((int)(&byte_591B7A4[245760 * i] + 60 * j), a2) )
      {
        v2 = 1;
        return sub_434B10(1, v2, v6, v4, v5);
      }
    }
  }
  v2 = 0;
  return sub_434B10(1, v2, v6, v4, v5);
}
// 591B7A0: using guessed type int dword_591B7A0[];

//----- (004223D0) --------------------------------------------------------
int __thiscall sub_4223D0(void *this, signed int a2, int a3)
{
  int v3; // eax@1
  char v5; // [sp+0h] [bp-78h]@0
  int v6; // [sp+4h] [bp-74h]@0
  int v7; // [sp+8h] [bp-70h]@0
  char v8; // [sp+Ch] [bp-6Ch]@1
  __int16 v9; // [sp+4Ch] [bp-2Ch]@1
  __int16 v10; // [sp+50h] [bp-28h]@1
  __int16 v11; // [sp+52h] [bp-26h]@1
  char v12; // [sp+58h] [bp-20h]@1
  int v13; // [sp+68h] [bp-10h]@1
  int v14; // [sp+6Ch] [bp-Ch]@1
  int v15; // [sp+70h] [bp-8h]@1
  void *v16; // [sp+74h] [bp-4h]@1

  memset(&v8, -858993460, 0x6Cu);
  v16 = this;
  v15 = a2 / 1000;
  v14 = a2 % 1000;
  v10 = 1034;
  v11 = a2 % 1000;
  v9 = 32;
  v13 = a3;
  sub_434C80(&v12, (char *)this + 6184 * a2 + 8, 0x10u);
  v3 = sub_401244(&v9, 32);
  return sub_434B10(1, v3, v7, v5, v6);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (004224A0) --------------------------------------------------------
int __userpurge sub_4224A0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int lpBuffer, int a5)
{
  int v5; // eax@7
  char v7; // [sp+0h] [bp-1E0h]@0
  int v8; // [sp+4h] [bp-1DCh]@0
  int v9; // [sp+8h] [bp-1D8h]@0
  char v10; // [sp+Ch] [bp-1D4h]@1
  int v11; // [sp+4Ch] [bp-194h]@34
  int v12; // [sp+50h] [bp-190h]@22
  int v13; // [sp+54h] [bp-18Ch]@22
  char v14; // [sp+58h] [bp-188h]@15
  char v15; // [sp+D8h] [bp-108h]@16
  const CHAR MultiByteStr; // [sp+158h] [bp-88h]@1
  char v17; // [sp+159h] [bp-87h]@2
  char v18; // [sp+15Ah] [bp-86h]@3
  char v19; // [sp+15Bh] [bp-85h]@4
  char v20; // [sp+15Ch] [bp-84h]@6
  int v21; // [sp+1D8h] [bp-8h]@1
  int v22; // [sp+1DCh] [bp-4h]@1
  int v23; // [sp+1E0h] [bp+0h]@1

  memset(&v10, -858993460, 0x1D4u);
  v22 = a1;
  v21 = lpBuffer;
  sub_435800((int)&MultiByteStr, lpBuffer, 0x10u);
  sub_449530(a2, (int)&v23, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v17 != 79 || v18 != 77 || v19 < 48 || v19 > 57 || v20 )
  {
    if ( MultiByteStr != 76 || v17 != 80 || v18 != 84 || v19 < 48 || v19 > 57 || v20 )
    {
      sub_4013C0(v21, &v14);
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          sub_4343B0(a2, a3, (int)&v15, (int)"./account/%s/%s", (unsigned int)&v14);
        }
        else
        {
          if ( a5 != 2 )
          {
            v5 = 0;
            return sub_434B10(1, v5, v9, v7, v8);
          }
          sub_4343B0(a2, a3, (int)&v15, (int)"./OLDaccount/%s/%s", (unsigned int)&v14);
        }
      }
      else
      {
        sub_4343B0(a2, a3, (int)&v15, (int)"./Newaccount/%s/%s", (unsigned int)&v14);
      }
      sub_435BA0(a2, (int)&v23, a3, (int)&v13);
      *(_DWORD *)(lpBuffer + 184) = v13;
      v12 = sub_444AE0(a2, a3, &v15, -32510, 384);
      if ( v12 == -1 )
      {
        switch ( dword_6D51CC0 )
        {
          case 17:
            sub_401316("err,writeaccount EEXIST", v21);
            v5 = 0;
            break;
          case 13:
            sub_401316("err,writeaccount EACCES", v21);
            v5 = 0;
            break;
          case 22:
            sub_401316("err,writeaccount EINVAL", v21);
            v5 = 0;
            break;
          case 24:
            sub_401316("err,writeaccount EMFILE", v21);
            v5 = 0;
            break;
          case 2:
            sub_401316("err,writeaccount ENOENT", v21);
            v5 = 0;
            break;
          default:
            sub_401316("err,writeaccount UNKNOWN", v21);
            v5 = 0;
            break;
        }
      }
      else
      {
        v11 = sub_4361B0(v12, 0, 0);
        if ( v11 == -1 )
        {
          sub_401316("err,writeaccount lseek fail", v21);
          v5 = 0;
        }
        else
        {
          v11 = sub_435F00(v12, lpBuffer, 0x17E4u);
          if ( v11 == -1 )
          {
            sub_43AC10(v12);
            sub_401316("CreateAccount write fail", v21);
            switch ( dword_6D51CC0 )
            {
              case 17:
                sub_401316("CreateAccount EEXIST", v21);
                v5 = 0;
                break;
              case 13:
                sub_401316("CreateAccount EACCES", v21);
                v5 = 0;
                break;
              case 22:
                sub_401316("CreateAccount EINVAL", v21);
                v5 = 0;
                break;
              case 24:
                sub_401316("CreateAccount EMFILE", v21);
                v5 = 0;
                break;
              case 2:
                sub_401316("CreateAccount ENOENT", v21);
                v5 = 0;
                break;
              default:
                v5 = 0;
                break;
            }
          }
          else
          {
            sub_43AC10(v12);
            v5 = 1;
          }
        }
      }
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00422980) --------------------------------------------------------
int __userpurge sub_422980<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6)
{
  int v6; // eax@7
  int v7; // eax@27
  char v9; // [sp+0h] [bp-254h]@27
  int v10; // [sp+4h] [bp-250h]@28
  int v11; // [sp+8h] [bp-24Ch]@28
  char v12; // [sp+Ch] [bp-248h]@1
  int v13; // [sp+4Ch] [bp-208h]@27
  char v14; // [sp+50h] [bp-204h]@15
  const CHAR NewFileName; // [sp+D0h] [bp-184h]@22
  const CHAR ExistingFileName; // [sp+150h] [bp-104h]@16
  const CHAR MultiByteStr; // [sp+1D0h] [bp-84h]@1
  char v18; // [sp+1D1h] [bp-83h]@2
  char v19; // [sp+1D2h] [bp-82h]@3
  char v20; // [sp+1D3h] [bp-81h]@4
  char v21; // [sp+1D4h] [bp-80h]@6
  int v22; // [sp+250h] [bp-4h]@1
  int v23; // [sp+254h] [bp+0h]@1

  memset(&v12, -858993460, 0x248u);
  v22 = a1;
  *(_BYTE *)(a4 + 15) = 0;
  *(_BYTE *)(a4 + 14) = 0;
  *(_BYTE *)(a4 + 27) = 0;
  *(_BYTE *)(a4 + 26) = 0;
  sub_435800((int)&MultiByteStr, a4, 0x10u);
  sub_449530(a2, (int)&v23, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v18 != 79 || v19 != 77 || v20 < 48 || v20 > 57 || v21 )
  {
    if ( MultiByteStr != 76 || v18 != 80 || v19 != 84 || v20 < 48 || v20 > 57 || v21 )
    {
      sub_4013C0(a4, &v14);
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          sub_4343B0(a2, a3, (int)&ExistingFileName, (int)"./account/%s/%s", (unsigned int)&v14);
        }
        else
        {
          if ( a5 == 2 )
            sub_4343B0(a2, a3, (int)&ExistingFileName, (int)"./OLDaccount/%s/%s", (unsigned int)&v14);
        }
      }
      else
      {
        sub_4343B0(a2, a3, (int)&ExistingFileName, (int)"./Newaccount/%s/%s", (unsigned int)&v14);
      }
      if ( a6 )
      {
        if ( a6 == 1 )
        {
          sub_4343B0(a2, a3, (int)&NewFileName, (int)"./account/%s/%s", (unsigned int)&v14);
        }
        else
        {
          if ( a6 == 2 )
            sub_4343B0(a2, a3, (int)&NewFileName, (int)"./OLDaccount/%s/%s", (unsigned int)&v14);
        }
      }
      else
      {
        sub_4343B0(a2, a3, (int)&NewFileName, (int)"./Newaccount/%s/%s", (unsigned int)&v14);
      }
      v7 = MoveFileA(&ExistingFileName, &NewFileName);
      v6 = sub_434B10(&v9 == &v9, v7, a2, (unsigned int)&v23, (int)&v9);
      v13 = v6;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  return sub_434B10(1, v6, v11, v9, v10);
}
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);

//----- (00422C40) --------------------------------------------------------
int __userpurge sub_422C40<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5)
{
  int v5; // eax@7
  char v7; // [sp+0h] [bp-1ECh]@0
  int v8; // [sp+4h] [bp-1E8h]@0
  int v9; // [sp+8h] [bp-1E4h]@0
  char v10; // [sp+Ch] [bp-1E0h]@1
  int i; // [sp+4Ch] [bp-1A0h]@39
  int v12; // [sp+50h] [bp-19Ch]@39
  int v13; // [sp+54h] [bp-198h]@32
  int v14; // [sp+58h] [bp-194h]@30
  int v15; // [sp+5Ch] [bp-190h]@30
  DWORD nNumberOfBytesToRead; // [sp+60h] [bp-18Ch]@30
  int v17; // [sp+64h] [bp-188h]@22
  char v18; // [sp+68h] [bp-184h]@15
  char v19; // [sp+E8h] [bp-104h]@16
  const CHAR MultiByteStr; // [sp+168h] [bp-84h]@1
  char v21; // [sp+169h] [bp-83h]@2
  char v22; // [sp+16Ah] [bp-82h]@3
  char v23; // [sp+16Bh] [bp-81h]@4
  char v24; // [sp+16Ch] [bp-80h]@6
  int v25; // [sp+1E8h] [bp-4h]@1
  int v26; // [sp+1ECh] [bp+0h]@1

  memset(&v10, -858993460, 0x1E0u);
  v25 = a1;
  *(_BYTE *)(a4 + 15) = 0;
  *(_BYTE *)(a4 + 14) = 0;
  *(_BYTE *)(a4 + 27) = 0;
  *(_BYTE *)(a4 + 26) = 0;
  sub_435800((int)&MultiByteStr, a4, 0x10u);
  sub_449530(a2, (int)&v26, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v21 != 79 || v22 != 77 || v23 < 48 || v23 > 57 || v24 )
  {
    if ( MultiByteStr != 76 || v21 != 80 || v22 != 84 || v23 < 48 || v23 > 57 || v24 )
    {
      sub_4013C0(a4, &v18);
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          sub_4343B0(a2, a3, (int)&v19, (int)"./account/%s/%s", (unsigned int)&v18);
        }
        else
        {
          if ( a5 != 2 )
          {
            v5 = 0;
            return sub_434B10(1, v5, v9, v7, v8);
          }
          sub_4343B0(a2, a3, (int)&v19, (int)"./OLDaccount/%s/%s", (unsigned int)&v18);
        }
      }
      else
      {
        sub_4343B0(a2, a3, (int)&v19, (int)"./Newaccount/%s/%s", (unsigned int)&v18);
      }
      v17 = sub_444AE0(a2, a3, &v19, -32768, 0);
      if ( v17 == -1 )
      {
        switch ( dword_6D51CC0 )
        {
          case 22:
            sub_401316("err,readaccount EINVAL", a4);
            v5 = 0;
            break;
          case 24:
            sub_401316("err,readaccount EEMFILE", a4);
            v5 = 0;
            break;
          case 2:
            v5 = 0;
            break;
          default:
            sub_401316("err,readaccount UNKNOWN", a4);
            v5 = 0;
            break;
        }
      }
      else
      {
        nNumberOfBytesToRead = sub_4362A0(v17);
        v15 = 4964;
        v14 = 6116;
        if ( (signed int)nNumberOfBytesToRead <= 6116 )
        {
          v13 = sub_43DAC0(v17, a4, nNumberOfBytesToRead);
          if ( v13 == -1 )
          {
            sub_43AC10(v17);
            v5 = 0;
          }
          else
          {
            sub_43AC10(v17);
            if ( (signed int)nNumberOfBytesToRead < 4324 )
              sub_434AB0((void *)(a4 + 4260), 0xFFu, 0x40u);
            if ( (signed int)nNumberOfBytesToRead < v15 )
              sub_434AB0((void *)(a4 + 4324), 0, 0x280u);
            if ( (signed int)nNumberOfBytesToRead < v14 )
            {
              v12 = a4;
              sub_434AB0((void *)(a4 + 4964), 0, 0x480u);
              for ( i = 0; i < 4; ++i )
                sub_434C80((void *)(a4 + 288 * i + 4964), (const void *)(v12 + 160 * i + 4452), 0xCu);
            }
            sub_43AC10(v17);
            v5 = 1;
          }
        }
        else
        {
          sub_43AC10(v17);
          v5 = 0;
        }
      }
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00423530) --------------------------------------------------------
int __thiscall sub_423530(void *this, int a2, int a3)
{
  int v3; // eax@1
  char v5; // [sp+0h] [bp-54h]@0
  int v6; // [sp+4h] [bp-50h]@0
  int v7; // [sp+8h] [bp-4Ch]@0
  char v8; // [sp+Ch] [bp-48h]@1
  int i; // [sp+4Ch] [bp-8h]@1
  void *v10; // [sp+50h] [bp-4h]@1

  v3 = -858993460;
  memset(&v8, -858993460, 0x48u);
  v10 = this;
  for ( i = 0; i < 4; ++i )
  {
    sub_434C80((void *)(a2 + 16 * i + 16), (const void *)(a3 + 756 * i + 208), 0x10u);
    sub_434C80((void *)(a2 + (i << 7) + 192), (const void *)(a3 + 756 * i + 300), 0x80u);
    if ( *(_WORD *)(a2 + (i << 7) + 192) == 22
      || *(_WORD *)(a2 + (i << 7) + 192) == 23
      || *(_WORD *)(a2 + (i << 7) + 192) == 24
      || *(_WORD *)(a2 + (i << 7) + 192) == 24
      || *(_WORD *)(a2 + (i << 7) + 192) == 25
      || *(_WORD *)(a2 + (i << 7) + 192) == 32 )
      *(_WORD *)(a2 + (i << 7) + 192) = 21;
    *(_WORD *)(a2 + 2 * i + 704) = *(_WORD *)(a3 + 756 * i + 226);
    *(_WORD *)(a2 + 2 * i) = *(_WORD *)(a3 + 756 * i + 240);
    *(_WORD *)(a2 + 2 * i + 8) = *(_WORD *)(a3 + 756 * i + 242);
    memcpy((void *)(a2 + 28 * i + 80), (const void *)(a3 + 756 * i + 272), 0x1Cu);
    *(_DWORD *)(a2 + 4 * i + 712) = *(_DWORD *)(a3 + 756 * i + 232);
    *(_DWORD *)(a2 + 4 * i + 728) = *(_DWORD *)(a3 + 756 * i + 236);
    v3 = i + 1;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}

//----- (004237C0) --------------------------------------------------------
int __userpurge sub_4237C0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5)
{
  int v5; // eax@6
  char v7; // [sp+0h] [bp-1D4h]@0
  int v8; // [sp+4h] [bp-1D0h]@0
  int v9; // [sp+8h] [bp-1CCh]@0
  char v10; // [sp+Ch] [bp-1C8h]@1
  int v11; // [sp+4Ch] [bp-188h]@13
  char v12; // [sp+50h] [bp-184h]@13
  char v13; // [sp+D0h] [bp-104h]@13
  const CHAR MultiByteStr; // [sp+150h] [bp-84h]@1
  char v15; // [sp+151h] [bp-83h]@2
  char v16; // [sp+152h] [bp-82h]@3
  char v17; // [sp+153h] [bp-81h]@4
  char v18; // [sp+154h] [bp-80h]@6
  int v19; // [sp+1D0h] [bp-4h]@1
  int v20; // [sp+1D4h] [bp+0h]@1

  memset(&v10, -858993460, 0x1C8u);
  v19 = a1;
  *(_BYTE *)a4 = 0;
  sub_435800((int)&MultiByteStr, a5, 0x10u);
  sub_449530(a2, (int)&v20, a3, &MultiByteStr);
  if ( MultiByteStr != 67 || v15 != 79 || v16 != 77 || v17 < 48 || v17 > 57 || (v5 = v18) != 0 )
  {
    if ( MultiByteStr != 76 || v15 != 80 || v16 != 84 || v17 < 48 || v17 > 57 || (v5 = v18) != 0 )
    {
      *(_BYTE *)a4 = 0;
      sub_4013C0(a5, &v12);
      sub_4343B0(a2, a3, (int)&v13, (int)"./char/%s/%s", (unsigned int)&v12);
      v11 = sub_444AE0(a2, a3, &v13, 16384, 0);
      if ( v11 == -1 )
      {
        v5 = sub_43AC10(0xFFFFFFFFu);
      }
      else
      {
        sub_43DAC0(v11, a4, 0x10u);
        v5 = sub_43AC10(v11);
      }
    }
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 4013C0: using guessed type _DWORD __cdecl sub_4013C0(_DWORD, _DWORD);

//----- (00423A20) --------------------------------------------------------
int __userpurge sub_423A20<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5)
{
  int v5; // eax@8
  char v7; // [sp+0h] [bp-68h]@0
  int v8; // [sp+4h] [bp-64h]@0
  int v9; // [sp+8h] [bp-60h]@0
  char v10; // [sp+Ch] [bp-5Ch]@1
  int j; // [sp+4Ch] [bp-1Ch]@3
  int v12; // [sp+50h] [bp-18h]@3
  int v13; // [sp+54h] [bp-14h]@3
  int i; // [sp+58h] [bp-10h]@1
  int v15; // [sp+5Ch] [bp-Ch]@1
  int v16; // [sp+60h] [bp-8h]@1
  int v17; // [sp+64h] [bp-4h]@1
  int v18; // [sp+68h] [bp+0h]@1

  memset(&v10, -858993460, 0x5Cu);
  v17 = a1;
  sub_435BA0(a2, (int)&v18, a3, (int)&v16);
  v15 = v16;
  for ( i = 0; i < 10; ++i )
  {
    *(_DWORD *)a5 = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 4) = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 8) = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 12) = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 16) = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 20) = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 24) = sub_434B60() % 900 + 100;
    *(_DWORD *)(a5 + 28) = sub_434B60() % 900 + 100;
    v13 = 0;
    v12 = 0;
    for ( j = 0; j < 300; ++j )
    {
      if ( dword_A8F548[15 * j] + 30 <= v15 )
      {
        if ( byte_A8F510[60 * j] )
          sub_434AB0(&byte_A8F510[60 * j], 0, 0x3Cu);
        v12 = 1;
        if ( *(_DWORD *)a5 != dword_A8F524[15 * j]
          && *(_DWORD *)(a5 + 4) != dword_A8F528[15 * j]
          && *(_DWORD *)(a5 + 8) != dword_A8F52C[15 * j]
          && *(_DWORD *)(a5 + 12) != dword_A8F530[15 * j]
          && *(_DWORD *)(a5 + 16) != dword_A8F534[15 * j]
          && *(_DWORD *)(a5 + 20) != dword_A8F538[15 * j]
          && *(_DWORD *)(a5 + 24) != dword_A8F53C[15 * j]
          && *(_DWORD *)(a5 + 28) != dword_A8F540[15 * j] )
          v13 = 1;
      }
      else
      {
        if ( !sub_4351F0(v17 + 6184 * a4 + 8, (int)&byte_A8F510[60 * j]) )
        {
          v5 = 1;
          return sub_434B10(1, v5, v9, v7, v8);
        }
      }
    }
    if ( !v12 )
    {
      v5 = 3;
      return sub_434B10(1, v5, v9, v7, v8);
    }
    if ( v13 )
    {
      v5 = 0;
      return sub_434B10(1, v5, v9, v7, v8);
    }
  }
  v5 = 2;
  return sub_434B10(1, v5, v9, v7, v8);
}
// A8F524: using guessed type int dword_A8F524[];
// A8F528: using guessed type int dword_A8F528[];
// A8F52C: using guessed type int dword_A8F52C[];
// A8F530: using guessed type int dword_A8F530[];
// A8F534: using guessed type int dword_A8F534[];
// A8F538: using guessed type int dword_A8F538[];
// A8F53C: using guessed type int dword_A8F53C[];
// A8F540: using guessed type int dword_A8F540[];
// A8F548: using guessed type int dword_A8F548[];

//----- (00423D50) --------------------------------------------------------
int __userpurge sub_423D50<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5, int a6, int a7)
{
  int v7; // eax@1
  char v9; // [sp+0h] [bp-58h]@0
  int v10; // [sp+4h] [bp-54h]@0
  int v11; // [sp+8h] [bp-50h]@0
  char v12; // [sp+Ch] [bp-4Ch]@1
  int v13; // [sp+4Ch] [bp-Ch]@4
  int i; // [sp+50h] [bp-8h]@1
  int v15; // [sp+54h] [bp-4h]@1
  int v16; // [sp+58h] [bp+0h]@4

  v7 = -858993460;
  memset(&v12, -858993460, 0x4Cu);
  v15 = a1;
  for ( i = 0; i < 300; ++i )
  {
    if ( !byte_A8F510[60 * i] )
    {
      sub_434B90((int)&byte_A8F510[60 * i]);
      dword_A8F520[15 * i] = a5;
      dword_A8F524[15 * i] = *(_DWORD *)a6;
      dword_A8F528[15 * i] = *(_DWORD *)(a6 + 4);
      dword_A8F52C[15 * i] = *(_DWORD *)(a6 + 8);
      dword_A8F530[15 * i] = *(_DWORD *)(a6 + 12);
      dword_A8F534[15 * i] = *(_DWORD *)(a6 + 16);
      dword_A8F538[15 * i] = *(_DWORD *)(a6 + 20);
      dword_A8F53C[15 * i] = *(_DWORD *)(a6 + 24);
      dword_A8F540[15 * i] = *(_DWORD *)(a6 + 28);
      dword_A8F544[15 * i] = a7;
      sub_435BA0(a2, (int)&v16, a3, (int)&v13);
      v7 = 60 * i;
      dword_A8F548[15 * i] = v13;
      return sub_434B10(1, v7, v11, v9, v10);
    }
    v7 = i + 1;
  }
  return sub_434B10(1, v7, v11, v9, v10);
}
// A8F520: using guessed type int dword_A8F520[];
// A8F524: using guessed type int dword_A8F524[];
// A8F528: using guessed type int dword_A8F528[];
// A8F52C: using guessed type int dword_A8F52C[];
// A8F530: using guessed type int dword_A8F530[];
// A8F534: using guessed type int dword_A8F534[];
// A8F538: using guessed type int dword_A8F538[];
// A8F53C: using guessed type int dword_A8F53C[];
// A8F540: using guessed type int dword_A8F540[];
// A8F544: using guessed type int dword_A8F544[];
// A8F548: using guessed type int dword_A8F548[];

//----- (00423F00) --------------------------------------------------------
int __userpurge sub_423F00<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, int a5)
{
  int v5; // eax@15
  char v7; // [sp+0h] [bp-98h]@0
  int v8; // [sp+4h] [bp-94h]@0
  int v9; // [sp+8h] [bp-90h]@0
  char v10; // [sp+Ch] [bp-8Ch]@1
  int i; // [sp+4Ch] [bp-4Ch]@1
  int v12; // [sp+50h] [bp-48h]@1
  int v13; // [sp+54h] [bp-44h]@1
  int v14; // [sp+58h] [bp-40h]@4
  int v15; // [sp+5Ch] [bp-3Ch]@5
  int v16; // [sp+60h] [bp-38h]@6
  int v17; // [sp+64h] [bp-34h]@7
  int v18; // [sp+68h] [bp-30h]@8
  int v19; // [sp+6Ch] [bp-2Ch]@9
  int v20; // [sp+70h] [bp-28h]@10
  int v21; // [sp+74h] [bp-24h]@11
  int v22; // [sp+78h] [bp-20h]@12
  int v23; // [sp+7Ch] [bp-1Ch]@1
  char v24; // [sp+80h] [bp-18h]@1
  int v25; // [sp+90h] [bp-8h]@1
  int v26; // [sp+94h] [bp-4h]@1
  int v27; // [sp+98h] [bp+0h]@1

  memset(&v10, -858993460, 0x8Cu);
  v26 = a1;
  v25 = a4;
  sub_435BA0(a2, (int)&v27, a3, (int)&v13);
  v12 = v13;
  sub_434B90((int)&v24);
  sub_4347B0(a2, (int)&v27, a3, v25 + 40, "*%d %d %d %d %d %d %d %d %d %d", (unsigned int)&v23);
  for ( i = 0; ; ++i )
  {
    if ( i >= 300 )
    {
      v5 = 0;
      return sub_434B10(1, v5, v9, v7, v8);
    }
    byte_A8F51F[60 * i] = 0;
    byte_A8F51E[60 * i] = 0;
    if ( !sub_4351F0((int)&byte_A8F510[60 * i], (int)&v24) )
      break;
  }
  if ( dword_A8F524[15 * i] == v14
    && dword_A8F528[15 * i] == v15
    && dword_A8F52C[15 * i] == v16
    && dword_A8F530[15 * i] == v17
    && dword_A8F534[15 * i] == v18
    && dword_A8F538[15 * i] == v19
    && dword_A8F53C[15 * i] == v20
    && dword_A8F540[15 * i] == v21
    && dword_A8F544[15 * i] == v22
    && dword_A8F520[15 * i] == v23
    && dword_A8F548[15 * i] + 30 >= v12 )
  {
    *(_DWORD *)a5 = v22;
    sub_434AB0(&byte_A8F510[60 * i], 0, 0x3Cu);
    v5 = 1;
  }
  else
  {
    sub_434AB0(&byte_A8F510[60 * i], 0, 0x3Cu);
    v5 = 0;
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// A8F520: using guessed type int dword_A8F520[];
// A8F524: using guessed type int dword_A8F524[];
// A8F528: using guessed type int dword_A8F528[];
// A8F52C: using guessed type int dword_A8F52C[];
// A8F530: using guessed type int dword_A8F530[];
// A8F534: using guessed type int dword_A8F534[];
// A8F538: using guessed type int dword_A8F538[];
// A8F53C: using guessed type int dword_A8F53C[];
// A8F540: using guessed type int dword_A8F540[];
// A8F544: using guessed type int dword_A8F544[];
// A8F548: using guessed type int dword_A8F548[];

//----- (004241A0) --------------------------------------------------------
int __userpurge sub_4241A0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4, signed int lpBuffer)
{
  int v5; // eax@2
  char v7; // [sp+0h] [bp-E0h]@0
  int v8; // [sp+4h] [bp-DCh]@0
  int v9; // [sp+8h] [bp-D8h]@0
  char v10; // [sp+Ch] [bp-D4h]@1
  char v11; // [sp+4Ch] [bp-94h]@4
  int v12; // [sp+58h] [bp-88h]@1
  char v13; // [sp+5Ch] [bp-84h]@1
  int v14; // [sp+DCh] [bp-4h]@1

  memset(&v10, -858993460, 0xD4u);
  v14 = a1;
  sub_4343B0(a2, a3, (int)&v13, (int)"./Capsule/%d", a4);
  v12 = sub_444AE0(a2, a3, &v13, -32768, 0);
  if ( v12 == -1 )
  {
    sub_43AC10(0xFFFFFFFFu);
    v12 = sub_444AE0(a2, a3, &v13, -32510, 384);
    if ( v12 == -1 )
    {
      sub_4343B0(a2, a3, (int)&v11, (int)"%d", a4);
      if ( dword_6D51CC0 == 17 )
        sub_4343B0(a2, a3, (int)&v13, (int)"err,createchar EEXIST %d", (unsigned int)&v11);
      if ( dword_6D51CC0 == 13 )
        sub_4343B0(a2, a3, (int)&v13, (int)"err,createchar EACCES %d", (unsigned int)&v11);
      if ( dword_6D51CC0 == 22 )
        sub_4343B0(a2, a3, (int)&v13, (int)"err,createchar EINVAL %d", (unsigned int)&v11);
      if ( dword_6D51CC0 == 24 )
        sub_4343B0(a2, a3, (int)&v13, (int)"err,createchar EMFILE %d", (unsigned int)&v11);
      if ( dword_6D51CC0 == 2 )
        sub_4343B0(a2, a3, (int)&v13, (int)"err,createchar ENOENT %d", (unsigned int)&v11);
      sub_401316(&v13, "createchar UNKNOWN");
      v5 = 0;
    }
    else
    {
      sub_435F00(v12, lpBuffer, 0x4C4u);
      sub_43AC10(v12);
      v5 = 1;
    }
  }
  else
  {
    sub_43AC10(v12);
    v5 = 0;
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (004243F0) --------------------------------------------------------
int __thiscall sub_4243F0(void *this)
{
  char v2; // [sp+Ch] [bp-44h]@1
  void *v3; // [sp+4Ch] [bp-4h]@1

  memset(&v2, -858993460, 0x44u);
  v3 = this;
  ++dword_4828C4;
  if ( dword_4828C4 >= (signed int)&unk_1312D00 )
    dword_4828C4 = 1;
  return dword_4828C4;
}
// 4828C4: using guessed type int dword_4828C4;

//----- (00424450) --------------------------------------------------------
int __userpurge sub_424450<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4, int a5)
{
  int v5; // eax@12
  char v7; // [sp+0h] [bp-D4h]@0
  int v8; // [sp+4h] [bp-D0h]@0
  int v9; // [sp+8h] [bp-CCh]@0
  char v10; // [sp+Ch] [bp-C8h]@1
  int v11; // [sp+4Ch] [bp-88h]@1
  char v12; // [sp+50h] [bp-84h]@1
  int v13; // [sp+D0h] [bp-4h]@1

  memset(&v10, -858993460, 0xC8u);
  v13 = a1;
  sub_4343B0(a2, a3, (int)&v12, (int)"./Capsule/%d", a4);
  v11 = sub_444AE0(a2, a3, &v12, -32768, 0);
  if ( v11 == -1 )
  {
    if ( dword_6D51CC0 == 17 )
      sub_4343B0(a2, a3, (int)&v12, (int)"EEXIST %d", a4);
    if ( dword_6D51CC0 == 13 )
      sub_4343B0(a2, a3, (int)&v12, (int)"EACCES %d", a4);
    if ( dword_6D51CC0 == 22 )
      sub_4343B0(a2, a3, (int)&v12, (int)"EINVAL %d", a4);
    if ( dword_6D51CC0 == 24 )
      sub_4343B0(a2, a3, (int)&v12, (int)"EMFILE %d", a4);
    if ( dword_6D51CC0 == 2 )
      sub_4343B0(a2, a3, (int)&v12, (int)"ENOENT %d", a4);
    sub_401316(&v12, "err,GetCapsuleByChar");
    sub_43AC10(v11);
    v5 = 0;
  }
  else
  {
    sub_43DAC0(v11, a5, 0x4C4u);
    sub_43AC10(v11);
    v5 = 1;
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00424630) --------------------------------------------------------
int __userpurge sub_424630<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4)
{
  int v4; // eax@1
  char v6; // [sp+0h] [bp-D4h]@1
  int v7; // [sp+4h] [bp-D0h]@1
  int v8; // [sp+8h] [bp-CCh]@1
  char v9; // [sp+Ch] [bp-C8h]@1
  int v10; // [sp+4Ch] [bp-88h]@1
  const CHAR FileName; // [sp+50h] [bp-84h]@1
  int v12; // [sp+D0h] [bp-4h]@1
  int v13; // [sp+D4h] [bp+0h]@1

  memset(&v9, -858993460, 0xC8u);
  v12 = a1;
  sub_4343B0(a2, a3, (int)&FileName, (int)"./Capsule/%d", a4);
  v4 = DeleteFileA(&FileName);
  v10 = sub_434B10(&v6 == &v6, v4, a2, (unsigned int)&v13, (int)&v6);
  return sub_434B10(1, v10, v8, v6, v7);
}

//----- (004246C0) --------------------------------------------------------
int __userpurge sub_4246C0<eax>(int a1<ecx>, int a2<ebx>, int a3)
{
  int v3; // eax@8
  int v4; // eax@11
  char v6; // [sp+0h] [bp-B0h]@8
  int v7; // [sp+4h] [bp-ACh]@11
  int v8; // [sp+8h] [bp-A8h]@11
  char v9; // [sp+Ch] [bp-A4h]@1
  char v10; // [sp+4Ch] [bp-64h]@11
  __int16 v11; // [sp+50h] [bp-60h]@11
  __int16 v12; // [sp+52h] [bp-5Eh]@11
  char v13; // [sp+58h] [bp-58h]@7
  __int16 v14; // [sp+5Ch] [bp-54h]@7
  __int16 v15; // [sp+5Eh] [bp-52h]@7
  char v16; // [sp+64h] [bp-4Ch]@7
  int j; // [sp+A0h] [bp-10h]@3
  int i; // [sp+A4h] [bp-Ch]@1
  int v19; // [sp+A8h] [bp-8h]@1
  int v20; // [sp+ACh] [bp-4h]@1

  memset(&v9, -858993460, 0xA4u);
  v20 = a1;
  v19 = 0;
  for ( i = 0; i < 16; ++i )
  {
    for ( j = 0; j < 4096; ++j )
    {
      if ( *(&dword_591B7A0[61440 * i] + 15 * j) )
      {
        sub_434AB0(&v13, 0, 0x48u);
        v15 = 0;
        v14 = 3099;
        memcpy(&v16, &dword_591B7A0[61440 * i] + 15 * j, 0x3Cu);
        sub_4011DB(&v13, 72);
        ++v19;
        if ( v19 >= 10 )
        {
          sub_401474(&dword_1E01848[30 * a3]);
          v19 = 0;
          Sleep(0xAu);
          sub_434B10(&v6 == &v6, v3, a2, (unsigned int)&j, (int)&v6);
        }
      }
    }
    sub_401474(&dword_1E01848[30 * a3]);
  }
  sub_434AB0(&v10, 0, 0xCu);
  v12 = 0;
  v11 = 1054;
  v4 = sub_401244(&v10, 12);
  return sub_434B10(1, v4, v8, v6, v7);
}
// 4011DB: using guessed type _DWORD __stdcall sub_4011DB(_DWORD, _DWORD);
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 401474: using guessed type int __thiscall sub_401474(_DWORD);
// 1E01848: using guessed type int dword_1E01848[];
// 591B7A0: using guessed type int dword_591B7A0[];

//----- (00424890) --------------------------------------------------------
int __usercall sub_424890<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>)
{
  char v4; // [sp+0h] [bp-50h]@0
  int v5; // [sp+4h] [bp-4Ch]@0
  int v6; // [sp+8h] [bp-48h]@0
  char v7; // [sp+Ch] [bp-44h]@1
  int v8; // [sp+4Ch] [bp-4h]@1

  memset(&v7, -858993460, 0x44u);
  v8 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 4) = sub_436340(a2, a3, 0x20000u);
  *(_DWORD *)(v8 + 8) = sub_436340(a2, a3, 0x20000u);
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  sub_434AB0((void *)(v8 + 32), 0, 0x10u);
  sub_434AB0((void *)(v8 + 48), 0, 0x10u);
  *(_DWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  return sub_434B10(1, v8, v6, v4, v5);
}

//----- (00424990) --------------------------------------------------------
int __usercall sub_424990<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>)
{
  int v3; // eax@1
  char v5; // [sp+0h] [bp-50h]@0
  int v6; // [sp+4h] [bp-4Ch]@0
  int v7; // [sp+8h] [bp-48h]@0
  char v8; // [sp+Ch] [bp-44h]@1
  int v9; // [sp+4Ch] [bp-4h]@1

  memset(&v8, -858993460, 0x44u);
  v9 = a1;
  v3 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    sub_436D80(a2, a3, *(_DWORD *)(v9 + 4));
    v3 = v9;
    *(_DWORD *)(v9 + 4) = 0;
  }
  if ( *(_DWORD *)(v9 + 8) )
  {
    sub_436D80(a2, a3, *(_DWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 8) = 0;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}

//----- (00424A20) --------------------------------------------------------
int __thiscall sub_424A20(int this)
{
  char v2; // [sp+0h] [bp-50h]@0
  int v3; // [sp+4h] [bp-4Ch]@0
  int v4; // [sp+8h] [bp-48h]@0
  char v5; // [sp+Ch] [bp-44h]@1
  int v6; // [sp+4Ch] [bp-4h]@1

  memset(&v5, -858993460, 0x44u);
  v6 = this;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  if ( *(_DWORD *)v6 )
    closesocket(*(_DWORD *)v6);
  *(_DWORD *)v6 = 0;
  return sub_434B10(1, 1, v4, v2, v3);
}

//----- (00424AD0) --------------------------------------------------------
int __thiscall sub_424AD0(void *this)
{
  int v1; // eax@2
  char v3; // [sp+0h] [bp-1E0h]@0
  int v4; // [sp+4h] [bp-1DCh]@0
  int v5; // [sp+8h] [bp-1D8h]@0
  char v6; // [sp+Ch] [bp-1D4h]@1
  struct WSAData WSAData; // [sp+4Ch] [bp-194h]@1
  void *v8; // [sp+1DCh] [bp-4h]@1

  memset(&v6, -858993460, 0x1D4u);
  v8 = this;
  if ( WSAStartup(0x101u, &WSAData) )
    v1 = 0;
  else
    v1 = 1;
  return sub_434B10(1, v1, v5, v3, v4);
}

//----- (00424B40) --------------------------------------------------------
int __userpurge sub_424B40<eax>(int a1<ecx>, int a2<ebx>, HWND hWnd, int a4, u_short hostshort, u_int wMsg)
{
  int v6; // eax@2
  int v7; // eax@2
  int v8; // eax@4
  int v9; // eax@6
  int v10; // eax@8
  char v12; // [sp+0h] [bp-164h]@2
  int v13; // [sp+4h] [bp-160h]@10
  int v14; // [sp+8h] [bp-15Ch]@10
  char v15; // [sp+Ch] [bp-158h]@1
  char name; // [sp+4Ch] [bp-118h]@3
  __int16 v17; // [sp+14Ch] [bp-18h]@3
  u_short v18; // [sp+14Eh] [bp-16h]@3
  int v19; // [sp+150h] [bp-14h]@3
  SOCKET s; // [sp+15Ch] [bp-8h]@1
  int v21; // [sp+160h] [bp-4h]@1
  int v22; // [sp+164h] [bp+0h]@2

  memset(&v15, -858993460, 0x158u);
  v21 = a1;
  s = socket(2, 1, 0);
  if ( s == -1 )
  {
    v6 = MessageBoxA(hWnd, "Initialize socket fail", "ERROR", 0);
    sub_434B10(&v12 == &v12, v6, a2, (unsigned int)&v22, (int)&v12);
    v7 = 0;
  }
  else
  {
    gethostname(&name, 256);
    v17 = 2;
    v19 = a4;
    v18 = htons(hostshort);
    if ( bind(s, (const struct sockaddr *)&v17, 16) == -1 )
    {
      v8 = MessageBoxA(hWnd, "Binding fail", "ERROR", 0);
      sub_434B10(&v12 == &v12, v8, a2, (unsigned int)&v22, (int)&v12);
      closesocket(s);
      v7 = 0;
    }
    else
    {
      if ( listen(s, 8) >= 0 )
      {
        if ( WSAAsyncSelect(s, hWnd, wMsg, 8) <= 0 )
        {
          *(_DWORD *)v21 = s;
          v7 = s;
        }
        else
        {
          v10 = MessageBoxA(hWnd, "WSAAsyncSelect fail", "ERROR", 0);
          sub_434B10(&v12 == &v12, v10, a2, (unsigned int)&v22, (int)&v12);
          closesocket(s);
          v7 = 0;
        }
      }
      else
      {
        v9 = MessageBoxA(hWnd, "Listen fail", "ERROR", 0);
        sub_434B10(&v12 == &v12, v9, a2, (unsigned int)&v22, (int)&v12);
        closesocket(s);
        v7 = 0;
      }
    }
  }
  return sub_434B10(1, v7, v14, v12, v13);
}

//----- (00424D10) --------------------------------------------------------
int __userpurge sub_424D10<eax>(int a1<ecx>, int a2<ebx>, const char *cp, u_short hostshort, int a5, u_int wMsg)
{
  int v6; // eax@4
  int v7; // eax@4
  int v8; // eax@8
  char v10; // [sp+0h] [bp-7Ch]@4
  int v11; // [sp+4h] [bp-78h]@16
  int v12; // [sp+8h] [bp-74h]@16
  char v13; // [sp+Ch] [bp-70h]@1
  char buf[4]; // [sp+4Ch] [bp-30h]@15
  int v15; // [sp+50h] [bp-2Ch]@12
  struct sockaddr name; // [sp+54h] [bp-28h]@1
  __int16 v17; // [sp+64h] [bp-18h]@1
  u_short v18; // [sp+66h] [bp-16h]@3
  unsigned __int32 v19; // [sp+68h] [bp-14h]@3
  SOCKET s; // [sp+74h] [bp-8h]@3
  int v21; // [sp+78h] [bp-4h]@1
  int v22; // [sp+7Ch] [bp+0h]@4

  memset(&v13, -858993460, 0x70u);
  v21 = a1;
  sub_434AB0(&v17, 0, 0x10u);
  sub_434AB0(&name, 0, 0x10u);
  *(_DWORD *)(v21 + 12) = 0;
  *(_DWORD *)(v21 + 24) = 0;
  *(_DWORD *)(v21 + 16) = 0;
  *(_DWORD *)(v21 + 20) = 0;
  if ( *(_DWORD *)v21 )
    sub_40128A(v21);
  v19 = inet_addr(cp);
  v17 = 2;
  v18 = htons(hostshort);
  s = socket(2, 1, 0);
  if ( s == -1 )
  {
    v6 = MessageBoxA(0, "Initialize socket fai", "ERROR", 0);
    sub_434B10(&v10 == &v10, v6, a2, (unsigned int)&v22, (int)&v10);
    v7 = 0;
  }
  else
  {
    name.sa_family = 2;
    *(_DWORD *)&name.sa_data[2] = a5;
    *(_WORD *)&name.sa_data[0] = 0;
    if ( bind(s, &name, 16) != -1
      || (dword_A94E4C += 10, *(_WORD *)&name.sa_data[0] = htons(dword_A94E4C + 5000), bind(s, &name, 16) != -1)
      || (dword_A94E4C += 10, *(_WORD *)&name.sa_data[0] = htons(dword_A94E4C + 5000), bind(s, &name, 16) != -1) )
    {
      if ( s == -1 )
      {
        v7 = 0;
      }
      else
      {
        if ( connect(s, (const struct sockaddr *)&v17, 16) >= 0 )
        {
          if ( WSAAsyncSelect(s, hWnd, wMsg, 33) <= 0 )
          {
            *(_DWORD *)v21 = s;
            *(_DWORD *)buf = 521270033;
            send(s, buf, 4, 0);
            *(_DWORD *)(v21 + 28) = 1;
            v7 = s;
          }
          else
          {
            closesocket(s);
            *(_DWORD *)v21 = 0;
            v7 = 0;
          }
        }
        else
        {
          v15 = WSAGetLastError();
          closesocket(s);
          *(_DWORD *)v21 = 0;
          v7 = 0;
        }
      }
    }
    else
    {
      v8 = MessageBoxA(0, "Binding fail", "ERROR", 0);
      sub_434B10(&v10 == &v10, v8, a2, (unsigned int)&v22, (int)&v10);
      closesocket(s);
      v7 = 0;
    }
  }
  return sub_434B10(1, v7, v12, v10, v11);
}
// 40128A: using guessed type int __thiscall sub_40128A(_DWORD);
// A94E4C: using guessed type int dword_A94E4C;

//----- (004256A0) --------------------------------------------------------
int __thiscall sub_4256A0(int this)
{
  int v1; // eax@2
  char v3; // [sp+0h] [bp-58h]@0
  int v4; // [sp+4h] [bp-54h]@0
  int v5; // [sp+8h] [bp-50h]@0
  char v6; // [sp+Ch] [bp-4Ch]@1
  int v7; // [sp+4Ch] [bp-Ch]@1
  int len; // [sp+50h] [bp-8h]@1
  int v9; // [sp+54h] [bp-4h]@1

  memset(&v6, -858993460, 0x4Cu);
  v9 = this;
  len = 131072 - *(_DWORD *)(this + 16);
  v7 = recv(*(_DWORD *)v9, (char *)(*(_DWORD *)(v9 + 16) + *(_DWORD *)(v9 + 8)), len, 0);
  if ( v7 == -1 )
  {
    v1 = 0;
  }
  else
  {
    if ( v7 == len )
    {
      v1 = -1;
    }
    else
    {
      *(_DWORD *)(v9 + 16) += v7;
      v1 = 1;
    }
  }
  return sub_434B10(1, v1, v5, v3, v4);
}

//----- (00425750) --------------------------------------------------------
int __thiscall sub_425750(void *this, int a2, int a3)
{
  int result; // eax@2
  char v4; // [sp+Ch] [bp-98h]@1
  int v5; // [sp+4Ch] [bp-58h]@46
  int v6; // [sp+50h] [bp-54h]@37
  int v7; // [sp+54h] [bp-50h]@37
  int v8; // [sp+58h] [bp-4Ch]@37
  int v9; // [sp+5Ch] [bp-48h]@35
  int v10; // [sp+60h] [bp-44h]@35
  int v11; // [sp+64h] [bp-40h]@35
  int v12; // [sp+68h] [bp-3Ch]@35
  int v13; // [sp+6Ch] [bp-38h]@33
  int v14; // [sp+70h] [bp-34h]@31
  char v15; // [sp+74h] [bp-30h]@14
  int *v16; // [sp+78h] [bp-2Ch]@14
  int v17; // [sp+7Ch] [bp-28h]@14
  int v18; // [sp+80h] [bp-24h]@12
  int v19; // [sp+84h] [bp-20h]@11
  int v20; // [sp+88h] [bp-1Ch]@11
  int v21; // [sp+8Ch] [bp-18h]@11
  int v22; // [sp+90h] [bp-14h]@11
  int v23; // [sp+94h] [bp-10h]@11
  int v24; // [sp+98h] [bp-Ch]@11
  int v25; // [sp+9Ch] [bp-8h]@6
  void *v26; // [sp+A0h] [bp-4h]@1

  memset(&v4, -858993460, 0x98u);
  v26 = this;
  *(_DWORD *)a2 = 0;
  if ( *((_DWORD *)v26 + 5) >= *((_DWORD *)v26 + 4) )
  {
    *((_DWORD *)v26 + 4) = 0;
    *((_DWORD *)v26 + 5) = 0;
    return 0;
  }
  if ( !*((_DWORD *)v26 + 7) )
  {
    if ( *((_DWORD *)v26 + 4) - *((_DWORD *)v26 + 5) < 4 )
      return 0;
    v25 = *(_DWORD *)(*((_DWORD *)v26 + 2) + *((_DWORD *)v26 + 5));
    if ( v25 != 521270033 )
    {
      *(_DWORD *)a2 = 2;
      *(_DWORD *)a3 = v25;
      return 0;
    }
    *((_DWORD *)v26 + 7) = 1;
    *((_DWORD *)v26 + 5) += 4;
  }
  if ( (unsigned int)(*((_DWORD *)v26 + 4) - *((_DWORD *)v26 + 5)) >= 0xC )
  {
    LOWORD(v24) = *(_WORD *)(*((_DWORD *)v26 + 2) + *((_DWORD *)v26 + 5));
    LOBYTE(v23) = *(_BYTE *)(*((_DWORD *)v26 + 2) + *((_DWORD *)v26 + 5) + 2);
    LOBYTE(v22) = byte_482510[2 * (unsigned __int8)v23];
    LOBYTE(v21) = *(_BYTE *)(*((_DWORD *)v26 + 2) + *((_DWORD *)v26 + 5) + 3);
    v20 = *(_WORD *)(*((_DWORD *)v26 + 2) + *((_DWORD *)v26 + 5) + 4);
    v19 = *(_WORD *)(*((_DWORD *)v26 + 2) + *((_DWORD *)v26 + 5) + 6);
    if ( !*((_BYTE *)v26 + 48) )
      goto LABEL_51;
    LOBYTE(v18) = 0;
    if ( *((_DWORD *)v26 + 17) <= 15 )
    {
      LOBYTE(v18) = *((_BYTE *)v26 + (*((_DWORD *)v26 + 17))++ + 48);
    }
    else
    {
      if ( dword_A94E44 )
      {
        v17 = 0;
        v16 = &dword_A94E44;
        v15 = dword_A94E44;
        if ( !(_BYTE)dword_A94E44 )
          v15 = *((_BYTE *)v16 + 3);
        if ( !v15 )
          v15 = 13;
        v17 = *((_BYTE *)v16 + 3) + *((_BYTE *)v16 + 2) - v15 * *((_BYTE *)v16 + 1);
        if ( !v17 )
          v17 = *(_BYTE *)v16;
        LOBYTE(v18) = v17;
      }
      else
      {
        LOBYTE(v18) = *((_BYTE *)v26 + 63) % 2 ? *((_BYTE *)v26 + 59) + *((_BYTE *)v26 + 61) - *((_BYTE *)v26 + 57) + 4 : *((_BYTE *)v26 + 51) + *((_BYTE *)v26 + 49) + *((_BYTE *)v26 + 53) - 87;
      }
    }
    LOBYTE(v18) = ~(_BYTE)v18;
    if ( (unsigned __int8)v18 != (unsigned __int8)v23 )
    {
      *(_DWORD *)a2 = 3;
      *(_DWORD *)a3 = (unsigned __int16)v24;
      result = 0;
    }
    else
    {
LABEL_51:
      if ( (signed int)(unsigned __int16)v24 <= 7000 && (unsigned __int16)v24 >= 0xCu )
      {
        LOWORD(v14) = *((_WORD *)v26 + 8) - *((_WORD *)v26 + 10);
        if ( (unsigned __int16)v24 <= (signed int)(unsigned __int16)v14 )
        {
          v13 = *((_DWORD *)v26 + 5) + *((_DWORD *)v26 + 2);
          *((_DWORD *)v26 + 5) += (unsigned __int16)v24;
          if ( *((_DWORD *)v26 + 4) <= *((_DWORD *)v26 + 5) )
          {
            *((_DWORD *)v26 + 4) = 0;
            *((_DWORD *)v26 + 5) = 0;
          }
          LOBYTE(v12) = 0;
          LOBYTE(v11) = 0;
          v10 = (unsigned __int8)v22;
          v9 = 4;
          while ( v9 < (unsigned __int16)v24 )
          {
            v8 = v10 % 256;
            LOBYTE(v11) = *(_BYTE *)(v9 + v13) + v11;
            LOBYTE(v7) = byte_482511[2 * v10 % 256];
            v6 = v9 & 3;
            if ( !(v9 & 3) )
              *(_BYTE *)(v9 + v13) -= 2 * v7;
            if ( v6 == 1 )
              *(_BYTE *)(v9 + v13) += (signed int)(unsigned __int8)v7 >> 3;
            if ( v6 == 2 )
              *(_BYTE *)(v9 + v13) -= 4 * v7;
            if ( v6 == 3 )
              *(_BYTE *)(v9 + v13) += (signed int)(unsigned __int8)v7 >> 5;
            LOBYTE(v12) = *(_BYTE *)(v9++ + v13) + v12;
            ++v10;
          }
          LOBYTE(v5) = v11 - v12;
          if ( (unsigned __int8)(v11 - (_BYTE)v12) != (unsigned __int8)v21 )
          {
            *(_DWORD *)a2 = 1;
            *(_DWORD *)a3 = (unsigned __int16)v24;
          }
          result = v13;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        *((_DWORD *)v26 + 4) = 0;
        *((_DWORD *)v26 + 5) = 0;
        *(_DWORD *)a2 = 2;
        *(_DWORD *)a3 = (unsigned __int16)v24;
        result = 0;
      }
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
// A94E44: using guessed type int dword_A94E44;

//----- (00426030) --------------------------------------------------------
int __thiscall sub_426030(int this, int a2, int a3)
{
  char v4; // [sp+0h] [bp-60h]@0
  int v5; // [sp+4h] [bp-5Ch]@0
  int v6; // [sp+8h] [bp-58h]@0
  char v7; // [sp+Ch] [bp-54h]@1
  int v8; // [sp+4Ch] [bp-14h]@23
  char v9; // [sp+50h] [bp-10h]@4
  int *v10; // [sp+54h] [bp-Ch]@4
  int v11; // [sp+58h] [bp-8h]@1
  int v12; // [sp+5Ch] [bp-4h]@1

  memset(&v7, -858993460, 0x54u);
  v12 = this;
  v11 = 0;
  if ( *(_BYTE *)(this + 32) )
  {
    if ( *(_DWORD *)(v12 + 64) <= 15 )
    {
      if ( *(_BYTE *)(v12 + 32) )
      {
        if ( *(_DWORD *)(v12 + 64) <= 15 )
        {
          v11 = *(_BYTE *)(v12 + *(_DWORD *)(v12 + 64) + 32);
          v11 ^= 0xFFu;
          ++*(_DWORD *)(v12 + 64);
        }
        else
        {
          if ( *(_BYTE *)(v12 + 47) % 2 )
            v11 = *(_BYTE *)(v12 + 43) + *(_BYTE *)(v12 + 45) - *(_BYTE *)(v12 + 41) + 4;
          else
            v11 = *(_BYTE *)(v12 + 35) + *(_BYTE *)(v12 + 33) + *(_BYTE *)(v12 + 37) - 87;
          v11 ^= 0xFFu;
        }
      }
    }
    else
    {
      if ( dword_A94E44 )
      {
        v10 = &dword_A94E44;
        v9 = dword_A94E44;
        if ( !(_BYTE)dword_A94E44 )
          v9 = *((_BYTE *)v10 + 3);
        if ( !v9 )
          v9 = 13;
        v11 = *((_BYTE *)v10 + 3) + *((_BYTE *)v10 + 2) - v9 * *((_BYTE *)v10 + 1);
        if ( !v11 )
          v11 = *(_BYTE *)v10;
        v11 ^= 0xFFu;
      }
      else
      {
        if ( *(_BYTE *)(v12 + 47) % 2 )
          v11 = *(_BYTE *)(v12 + 43) + *(_BYTE *)(v12 + 45) - *(_BYTE *)(v12 + 41) + 4;
        else
          v11 = *(_BYTE *)(v12 + 35) + *(_BYTE *)(v12 + 33) + *(_BYTE *)(v12 + 37) - 87;
        v11 ^= 0xFFu;
      }
    }
  }
  v8 = sub_4010BE(a2, a3, v11);
  return sub_434B10(1, v8, v6, v4, v5);
}
// 4010BE: using guessed type _DWORD __stdcall sub_4010BE(_DWORD, _DWORD, _DWORD);
// A94E44: using guessed type int dword_A94E44;

//----- (004262A0) --------------------------------------------------------
int __thiscall sub_4262A0(void *this, const void *a2, int a3, int a4)
{
  int v4; // eax@2
  char v6; // [sp+0h] [bp-7Ch]@0
  int v7; // [sp+4h] [bp-78h]@0
  int v8; // [sp+8h] [bp-74h]@0
  char v9; // [sp+Ch] [bp-70h]@1
  int v10; // [sp+4Ch] [bp-30h]@9
  int v11; // [sp+50h] [bp-2Ch]@9
  int v12; // [sp+54h] [bp-28h]@9
  int v13; // [sp+58h] [bp-24h]@7
  int v14; // [sp+5Ch] [bp-20h]@7
  int v15; // [sp+60h] [bp-1Ch]@7
  int v16; // [sp+64h] [bp-18h]@7
  char v17; // [sp+68h] [bp-14h]@7
  int v18; // [sp+6Ch] [bp-10h]@7
  int v19; // [sp+70h] [bp-Ch]@5
  const void *v20; // [sp+74h] [bp-8h]@1
  void *v21; // [sp+78h] [bp-4h]@1

  memset(&v9, -858993460, 0x70u);
  v21 = this;
  v20 = a2;
  if ( *(_DWORD *)this )
  {
    if ( a3 + *((_DWORD *)v21 + 3) < 131072 )
    {
      LOBYTE(v19) = a4;
      if ( !a4 )
        LOBYTE(v19) = sub_434B60();
      LOBYTE(v18) = byte_482510[2 * (unsigned __int8)v19];
      v17 = 0;
      *(_WORD *)v20 = a3;
      *((_BYTE *)v20 + 2) = v19;
      *((_BYTE *)v20 + 3) = v17;
      *((_DWORD *)v20 + 2) = dword_1DCD7C4;
      dword_A95DFC = dword_1DCD7C4;
      LOBYTE(v16) = 0;
      LOBYTE(v15) = 0;
      v14 = (unsigned __int8)v18;
      v13 = 4;
      while ( v13 < a3 )
      {
        LOBYTE(v16) = *((_BYTE *)a2 + v13) + v16;
        v12 = v14 % 256;
        LOBYTE(v11) = byte_482511[2 * v14 % 256];
        v10 = v13 & 3;
        if ( !(v13 & 3) )
          *(_BYTE *)(*((_DWORD *)v21 + 1) + v13 + *((_DWORD *)v21 + 3)) = *((_BYTE *)a2 + v13) + 2 * v11;
        if ( v10 == 1 )
          *(_BYTE *)(*((_DWORD *)v21 + 1) + v13 + *((_DWORD *)v21 + 3)) = *((_BYTE *)a2 + v13)
                                                                        - ((signed int)(unsigned __int8)v11 >> 3);
        if ( v10 == 2 )
          *(_BYTE *)(*((_DWORD *)v21 + 1) + v13 + *((_DWORD *)v21 + 3)) = *((_BYTE *)a2 + v13) + 4 * v11;
        if ( v10 == 3 )
          *(_BYTE *)(*((_DWORD *)v21 + 1) + v13 + *((_DWORD *)v21 + 3)) = *((_BYTE *)a2 + v13)
                                                                        - ((signed int)(unsigned __int8)v11 >> 5);
        LOBYTE(v15) = *(_BYTE *)(*((_DWORD *)v21 + 1) + v13++ + *((_DWORD *)v21 + 3)) + v15;
        ++v14;
      }
      v17 = v15 - v16;
      *((_BYTE *)v20 + 3) = v15 - v16;
      sub_434C80((void *)(*((_DWORD *)v21 + 3) + *((_DWORD *)v21 + 1)), a2, 4u);
      *((_DWORD *)v21 + 3) += a3;
      v4 = 1;
    }
    else
    {
      *((_DWORD *)v21 + 18) = 1;
      v4 = 0;
    }
  }
  else
  {
    *((_DWORD *)v21 + 18) = 10;
    v4 = 0;
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// A95DFC: using guessed type int dword_A95DFC;
// 1DCD7C4: using guessed type int dword_1DCD7C4;

//----- (004265B0) --------------------------------------------------------
int __thiscall sub_4265B0(void *this, const void *a2, unsigned int a3)
{
  int v3; // eax@2
  char v5; // [sp+0h] [bp-54h]@0
  int v6; // [sp+4h] [bp-50h]@0
  int v7; // [sp+8h] [bp-4Ch]@0
  char v8; // [sp+Ch] [bp-48h]@1
  const void *v9; // [sp+4Ch] [bp-8h]@1
  void *v10; // [sp+50h] [bp-4h]@1

  memset(&v8, -858993460, 0x48u);
  v10 = this;
  v9 = a2;
  if ( *(_DWORD *)this )
  {
    if ( (signed int)(a3 + *((_DWORD *)v10 + 3)) < 131072 )
    {
      sub_434C80((void *)(*((_DWORD *)v10 + 3) + *((_DWORD *)v10 + 1)), v9, a3);
      *((_DWORD *)v10 + 3) += a3;
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}

//----- (00426710) --------------------------------------------------------
int __thiscall sub_426710(int this)
{
  int v1; // eax@1
  char v3; // [sp+0h] [bp-54h]@0
  int v4; // [sp+4h] [bp-50h]@0
  int v5; // [sp+8h] [bp-4Ch]@0
  char v6; // [sp+Ch] [bp-48h]@1
  unsigned int v7; // [sp+4Ch] [bp-8h]@1
  int v8; // [sp+50h] [bp-4h]@1

  memset(&v6, -858993460, 0x48u);
  v8 = this;
  v1 = this;
  v7 = *(_DWORD *)(this + 12) - *(_DWORD *)(this + 24);
  if ( (signed int)v7 > 0 && (signed int)v7 <= 131072 )
  {
    sub_434C80(*(void **)(v8 + 4), (const void *)(*(_DWORD *)(v8 + 24) + *(_DWORD *)(v8 + 4)), v7);
    *(_DWORD *)(v8 + 24) = 0;
    v1 = v8;
    *(_DWORD *)(v8 + 12) -= v7;
  }
  return sub_434B10(1, v1, v5, v3, v4);
}

//----- (004267C0) --------------------------------------------------------
int __usercall sub_4267C0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>)
{
  int v3; // eax@2
  char v5; // [sp+0h] [bp-160h]@0
  int v6; // [sp+4h] [bp-15Ch]@0
  int v7; // [sp+8h] [bp-158h]@0
  char v8; // [sp+Ch] [bp-154h]@1
  int v9; // [sp+4Ch] [bp-114h]@14
  int len; // [sp+50h] [bp-110h]@14
  int v11; // [sp+54h] [bp-10Ch]@14
  int i; // [sp+58h] [bp-108h]@12
  char v13; // [sp+5Ch] [bp-104h]@7
  int v14; // [sp+15Ch] [bp-4h]@1

  memset(&v8, -858993460, 0x154u);
  v14 = a1;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)(v14 + 24) > 0 )
      sub_4012FD(v14);
    if ( *(_DWORD *)(v14 + 12) <= 131072 && *(_DWORD *)(v14 + 12) >= 0 )
    {
      if ( *(_DWORD *)(v14 + 24) > *(_DWORD *)(v14 + 12) || *(_DWORD *)(v14 + 24) >= 131072 || *(_DWORD *)(v14 + 24) < 0 )
      {
        sub_4343B0(a2, a3, (int)&v13, (int)"err,send2 %d %d %d", *(_DWORD *)(v14 + 12));
        sub_401316(&v13, "-system");
        *(_DWORD *)(v14 + 12) = 0;
        *(_DWORD *)(v14 + 24) = 0;
      }
      for ( i = 0; i < 1; ++i )
      {
        v11 = 0;
        len = *(_DWORD *)(v14 + 12) - *(_DWORD *)(v14 + 24);
        v9 = send(*(_DWORD *)v14, (const char *)(*(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 4)), len, 0);
        if ( v9 == -1 )
          v11 = WSAGetLastError();
        else
          *(_DWORD *)(v14 + 24) += v9;
        if ( *(_DWORD *)(v14 + 24) >= *(_DWORD *)(v14 + 12) && v9 != -1 )
        {
          *(_DWORD *)(v14 + 12) = 0;
          *(_DWORD *)(v14 + 24) = 0;
          v3 = 1;
          return sub_434B10(1, v3, v7, v5, v6);
        }
      }
      v3 = *(_DWORD *)(v14 + 12) < 131072;
    }
    else
    {
      sub_4343B0(a2, a3, (int)&v13, (int)"err,send1 %d %d %d", *(_DWORD *)(v14 + 12));
      sub_401316(&v13, "-system");
      *(_DWORD *)(v14 + 12) = 0;
      *(_DWORD *)(v14 + 24) = 0;
      v3 = 0;
    }
  }
  else
  {
    *(_DWORD *)(v14 + 12) = 0;
    *(_DWORD *)(v14 + 24) = 0;
    v3 = 0;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}
// 4012FD: using guessed type int __thiscall sub_4012FD(_DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);

//----- (00426B00) --------------------------------------------------------
int __thiscall sub_426B00(void *this, int a2, int a3)
{
  char v4; // [sp+0h] [bp-54h]@0
  int v5; // [sp+4h] [bp-50h]@0
  int v6; // [sp+8h] [bp-4Ch]@0
  char v7; // [sp+Ch] [bp-48h]@1
  int v8; // [sp+4Ch] [bp-8h]@1
  void *v9; // [sp+50h] [bp-4h]@1

  memset(&v7, -858993460, 0x48u);
  v9 = this;
  sub_4011DB(a2, a3);
  v8 = sub_401474(v9);
  return sub_434B10(1, v8, v6, v4, v5);
}
// 4011DB: using guessed type _DWORD __stdcall sub_4011DB(_DWORD, _DWORD);
// 401474: using guessed type int __thiscall sub_401474(_DWORD);

//----- (00427140) --------------------------------------------------------
int __thiscall sub_427140(void *this)
{
  char v2; // [sp+0h] [bp-5Ch]@0
  int v3; // [sp+4h] [bp-58h]@0
  int v4; // [sp+8h] [bp-54h]@0
  char v5; // [sp+Ch] [bp-50h]@1
  int v6; // [sp+4Ch] [bp-10h]@1
  int v7; // [sp+58h] [bp-4h]@1

  memset(&v5, -858993460, 0x44u);
  v6 = (int)this;
  sub_4012E9((char *)this + 8);
  v7 = 0;
  sub_4010F5(v6);
  return sub_434B10(1, v6, v4, v2, v3);
}
// 4010F5: using guessed type int __thiscall sub_4010F5(_DWORD);
// 4012E9: using guessed type int __thiscall sub_4012E9(_DWORD);

//----- (004271D0) --------------------------------------------------------
int __thiscall sub_4271D0(int this)
{
  int result; // eax@1
  int v2; // [sp+4Ch] [bp-4h]@1

  v2 = this;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 84) = 0;
  result = v2;
  *(_DWORD *)(v2 + 116) = 0;
  *(_DWORD *)(v2 + 88) = -1;
  return result;
}

//----- (00427240) --------------------------------------------------------
int __thiscall sub_427240(void *this)
{
  int v1; // eax@1
  char v3; // [sp+0h] [bp-50h]@0
  int v4; // [sp+4h] [bp-4Ch]@0
  int v5; // [sp+8h] [bp-48h]@0
  char v6; // [sp+Ch] [bp-44h]@1

  memset(&v6, -858993460, 0x44u);
  v1 = sub_4012B2((char *)this + 8);
  return sub_434B10(1, v1, v5, v3, v4);
}
// 4012B2: using guessed type int __thiscall sub_4012B2(_DWORD);

//----- (00427290) --------------------------------------------------------
int __thiscall sub_427290(void *this, SOCKET s, u_int wMsg)
{
  int v3; // eax@2
  char v5; // [sp+0h] [bp-6Ch]@0
  int v6; // [sp+4h] [bp-68h]@0
  int v7; // [sp+8h] [bp-64h]@0
  char v8; // [sp+Ch] [bp-60h]@1
  char *v9; // [sp+4Ch] [bp-20h]@5
  SOCKET v10; // [sp+50h] [bp-1Ch]@1
  int addrlen; // [sp+54h] [bp-18h]@1
  struct sockaddr addr; // [sp+58h] [bp-14h]@1
  void *v13; // [sp+68h] [bp-4h]@1

  memset(&v8, -858993460, 0x60u);
  v13 = this;
  addrlen = 16;
  v10 = accept(s, &addr, &addrlen);
  if ( (v10 & 0x80000000u) == 0 )
  {
    if ( WSAAsyncSelect(v10, hWnd, wMsg, 33) <= 0 )
    {
      *((_DWORD *)v13 + 2) = v10;
      *((_DWORD *)v13 + 6) = 0;
      *((_DWORD *)v13 + 7) = 0;
      *((_DWORD *)v13 + 5) = 0;
      v9 = inet_ntoa(*(struct in_addr *)&addr.sa_data[2]);
      *(_DWORD *)v13 = *(_DWORD *)&addr.sa_data[2];
      *((_DWORD *)v13 + 1) = 1;
      v3 = 1;
    }
    else
    {
      closesocket(v10);
      v3 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}

//----- (00427390) --------------------------------------------------------
int __thiscall sub_427390(void *this, int a2)
{
  void *v3; // [sp+4Ch] [bp-4h]@1

  v3 = this;
  *(_DWORD *)this = &off_4768AC;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = a2;
  return (int)v3;
}
// 4768AC: using guessed type int (__stdcall *off_4768AC)();

//----- (004273F0) --------------------------------------------------------
int __userpurge sub_4273F0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4)
{
  char v5; // [sp+0h] [bp-50h]@0
  int v6; // [sp+4h] [bp-4Ch]@0
  int v7; // [sp+8h] [bp-48h]@0
  char v8; // [sp+Ch] [bp-44h]@1
  int v9; // [sp+4Ch] [bp-4h]@1

  memset(&v8, -858993460, 0x44u);
  v9 = a1;
  sub_40105F(a1);
  if ( a4 & 1 )
    sub_4386A0(a2, a3, v9);
  return sub_434B10(1, v9, v7, v5, v6);
}
// 40105F: using guessed type int __thiscall sub_40105F(_DWORD);

//----- (00427460) --------------------------------------------------------
void *__thiscall sub_427460(void *this)
{
  void *result; // eax@1

  result = this;
  *(_DWORD *)this = &off_4768AC;
  return result;
}
// 4768AC: using guessed type int (__stdcall *off_4768AC)();

//----- (004274A0) --------------------------------------------------------
int __userpurge sub_4274A0<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, int a4, LPCSTR lpPathName)
{
  int v5; // eax@3
  int v6; // eax@3
  int v7; // esi@3
  int v8; // eax@4
  int v9; // eax@4
  char v11; // [sp+0h] [bp-578h]@3
  int v12; // [sp+4h] [bp-574h]@5
  int v13; // [sp+8h] [bp-570h]@5
  char v14; // [sp+Ch] [bp-56Ch]@1
  CHAR PathName; // [sp+4Ch] [bp-52Ch]@4
  char v16; // [sp+44Ch] [bp-12Ch]@3
  char v17; // [sp+54Ch] [bp-2Ch]@3
  int v18; // [sp+550h] [bp-28h]@3
  int v19; // [sp+574h] [bp-4h]@1
  int v20; // [sp+578h] [bp+0h]@3

  memset(&v14, -858993460, 0x56Cu);
  v19 = a1;
  if ( *(_DWORD *)(a1 + 4) )
    sub_4346D0(a2, a3, *(_DWORD *)(v19 + 4));
  v5 = CreateDirectoryA(lpPathName, 0);
  sub_434B10(&v11 == &v11, v5, a2, (unsigned int)&v20, (int)&v11);
  sub_435BA0(a2, (int)&v20, (int)&v11, (int)&v17);
  v6 = sub_435940(a2, (int)&v20, (int)&v11, (signed int *)&v17);
  memcpy(&v18, (const void *)v6, 0x24u);
  v7 = v6 + 36;
  sub_4343B0(a2, v6 + 36, (int)&v16, (int)".\\%s\\%s_%2.2d_%2.2d_%2.2d_%2.2d_%2.2d.txt", (char)lpPathName);
  *(_DWORD *)(v19 + 4) = sub_434A90(a2, v7, &v16, (int)&unk_4768B4);
  if ( !*(_DWORD *)(v19 + 4) )
  {
    v8 = GetCurrentDirectoryA(0x400u, &PathName);
    sub_434B10(&v11 == &v11, v8, a2, (unsigned int)&v19, (int)&v11);
    sub_434BA0((int)&PathName, (int)&unk_4768B0);
    sub_434BA0((int)&PathName, (int)lpPathName);
    v9 = CreateDirectoryA(&PathName, 0);
    sub_434B10(&v11 == &v11, v9, a2, (unsigned int)&v19, (int)&v11);
    *(_DWORD *)(v19 + 4) = sub_434A90(a2, (int)&v11, &v16, (int)&unk_4768B4);
  }
  return sub_434B10(1, *(_DWORD *)(v19 + 4), v13, v11, v12);
}

//----- (00427660) --------------------------------------------------------
int __userpurge sub_427660<eax>(int a1<ecx>, int a2<ebx>, int a3<esi>, char a4)
{
  int v4; // eax@3
  int v5; // eax@3
  char v7; // [sp+0h] [bp-450h]@2
  int v8; // [sp+4h] [bp-44Ch]@3
  int v9; // [sp+8h] [bp-448h]@3
  char v10; // [sp+Ch] [bp-444h]@1
  const CHAR String; // [sp+4Ch] [bp-404h]@3
  char v12; // [sp+24Ch] [bp-204h]@1
  int v13; // [sp+44Ch] [bp-4h]@1
  int v14; // [sp+450h] [bp+0h]@3

  memset(&v10, -858993460, 0x444u);
  v13 = a1;
  sub_4343B0(a2, a3, (int)&v12, (int)"%s\n", a4);
  if ( *(_DWORD *)(v13 + 4) )
    sub_438730(a2, a3, *(_DWORD *)(v13 + 4), (int)&v12, v7);
  sub_4343B0(a2, a3, (int)&String, (int)"%s", (unsigned int)&v12);
  v4 = SetWindowTextA(*(HWND *)(v13 + 8), &String);
  v5 = sub_434B10(&v7 == &v7, v4, a2, (unsigned int)&v14, (int)&v7);
  return sub_434B10(1, v5, v9, v7, v8);
}

//----- (004278B0) --------------------------------------------------------
int __usercall sub_4278B0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_4278F0();
  v2 = sub_427950(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (004278F0) --------------------------------------------------------
int __cdecl sub_4278F0()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4387E0((int)dword_1E01840, 120, 10, sub_40120D);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 40120D: using guessed type int __thiscall sub_40120D(_DWORD);
// 1E01840: using guessed type int dword_1E01840[];

//----- (00427950) --------------------------------------------------------
int __usercall sub_427950<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_4279A0);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (004279A0) --------------------------------------------------------
int __cdecl sub_4279A0()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4389A0((int)dword_1E01840, 120, 10, sub_401253);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 401253: using guessed type int __thiscall sub_401253(_DWORD);
// 1E01840: using guessed type int dword_1E01840[];

//----- (004279F0) --------------------------------------------------------
int __usercall sub_4279F0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_427A30();
  v2 = sub_427A90(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427A30) --------------------------------------------------------
int __cdecl sub_427A30()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4387E0((int)dword_A95E00, 120, 24, sub_40120D);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 40120D: using guessed type int __thiscall sub_40120D(_DWORD);
// A95E00: using guessed type int dword_A95E00[];

//----- (00427A90) --------------------------------------------------------
int __usercall sub_427A90<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_427AE0);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427AE0) --------------------------------------------------------
int __cdecl sub_427AE0()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4389A0((int)dword_A95E00, 120, 24, sub_401253);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 401253: using guessed type int __thiscall sub_401253(_DWORD);
// A95E00: using guessed type int dword_A95E00[];

//----- (00427B30) --------------------------------------------------------
int __usercall sub_427B30<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_427B70();
  v2 = sub_427BB0(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427B70) --------------------------------------------------------
int __cdecl sub_427B70()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_40120D(&dword_1216A90);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 40120D: using guessed type int __thiscall sub_40120D(_DWORD);
// 1216A90: using guessed type int dword_1216A90;

//----- (00427BB0) --------------------------------------------------------
int __usercall sub_427BB0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_427C00);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427C00) --------------------------------------------------------
int __cdecl sub_427C00()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_401253(&dword_1216A90);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 401253: using guessed type int __thiscall sub_401253(_DWORD);
// 1216A90: using guessed type int dword_1216A90;

//----- (00427C40) --------------------------------------------------------
int __usercall sub_427C40<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_427C80();
  v2 = sub_427CC0(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427C80) --------------------------------------------------------
int __cdecl sub_427C80()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012E9(&dword_A96940);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012E9: using guessed type int __thiscall sub_4012E9(_DWORD);
// A96940: using guessed type int dword_A96940;

//----- (00427CC0) --------------------------------------------------------
int __usercall sub_427CC0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_427D10);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427D10) --------------------------------------------------------
int __cdecl sub_427D10()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012B2(&dword_A96940);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012B2: using guessed type int __thiscall sub_4012B2(_DWORD);
// A96940: using guessed type int dword_A96940;

//----- (00427D50) --------------------------------------------------------
int __usercall sub_427D50<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_427D90();
  v2 = sub_427DD0(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427D90) --------------------------------------------------------
int __cdecl sub_427D90()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012E9(&dword_1DCD7C8);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012E9: using guessed type int __thiscall sub_4012E9(_DWORD);
// 1DCD7C8: using guessed type int dword_1DCD7C8;

//----- (00427DD0) --------------------------------------------------------
int __usercall sub_427DD0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_427E20);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427E20) --------------------------------------------------------
int __cdecl sub_427E20()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012B2(&dword_1DCD7C8);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012B2: using guessed type int __thiscall sub_4012B2(_DWORD);
// 1DCD7C8: using guessed type int dword_1DCD7C8;

//----- (00427E60) --------------------------------------------------------
int __usercall sub_427E60<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_427EA0();
  v2 = sub_427EE0(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427EA0) --------------------------------------------------------
int __cdecl sub_427EA0()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012E9(&unk_1DCD778);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012E9: using guessed type int __thiscall sub_4012E9(_DWORD);

//----- (00427EE0) --------------------------------------------------------
int __usercall sub_427EE0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_427F30);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427F30) --------------------------------------------------------
int __cdecl sub_427F30()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012B2(&unk_1DCD778);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012B2: using guessed type int __thiscall sub_4012B2(_DWORD);

//----- (00427F70) --------------------------------------------------------
int __usercall sub_427F70<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_427FB0();
  v2 = sub_427FF0(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00427FB0) --------------------------------------------------------
int __cdecl sub_427FB0()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012E9(&dword_1216B08);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012E9: using guessed type int __thiscall sub_4012E9(_DWORD);
// 1216B08: using guessed type int dword_1216B08;

//----- (00427FF0) --------------------------------------------------------
int __usercall sub_427FF0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_428040);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00428040) --------------------------------------------------------
int __cdecl sub_428040()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012B2(&dword_1216B08);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012B2: using guessed type int __thiscall sub_4012B2(_DWORD);
// 1216B08: using guessed type int dword_1216B08;

//----- (00428080) --------------------------------------------------------
int __usercall sub_428080<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  sub_4280C0();
  v2 = sub_428100(a1, a2);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (004280C0) --------------------------------------------------------
int __cdecl sub_4280C0()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012CB(&dword_1E21CF8);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012CB: using guessed type int __thiscall sub_4012CB(_DWORD);
// 1E21CF8: using guessed type int dword_1E21CF8;

//----- (00428100) --------------------------------------------------------
int __usercall sub_428100<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-4Ch]@0
  int v5; // [sp+4h] [bp-48h]@0
  int v6; // [sp+8h] [bp-44h]@0
  char v7; // [sp+Ch] [bp-40h]@1

  memset(&v7, -858993460, 0x40u);
  v2 = sub_438930(a1, a2, (int)sub_428150);
  return sub_434B10(1, v2, v6, v4, v5);
}

//----- (00428150) --------------------------------------------------------
int __cdecl sub_428150()
{
  int v0; // eax@1
  char v2; // [sp+0h] [bp-4Ch]@0
  int v3; // [sp+4h] [bp-48h]@0
  int v4; // [sp+8h] [bp-44h]@0
  char v5; // [sp+Ch] [bp-40h]@1

  memset(&v5, -858993460, 0x40u);
  v0 = sub_4012F3(&dword_1E21CF8);
  return sub_434B10(1, v0, v4, v2, v3);
}
// 4012F3: using guessed type int __thiscall sub_4012F3(_DWORD);
// 1E21CF8: using guessed type int dword_1E21CF8;

//----- (00428190) --------------------------------------------------------
int __usercall sub_428190<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@2
  char v4; // [sp+0h] [bp-68h]@0
  int v5; // [sp+4h] [bp-64h]@0
  int v6; // [sp+8h] [bp-60h]@0
  char v7; // [sp+Ch] [bp-5Ch]@1
  int v8; // [sp+4Ch] [bp-1Ch]@7
  int v9; // [sp+50h] [bp-18h]@7
  int v10; // [sp+54h] [bp-14h]@7
  int v11; // [sp+58h] [bp-10h]@7
  int i; // [sp+5Ch] [bp-Ch]@5
  int v13; // [sp+60h] [bp-8h]@3
  int v14; // [sp+64h] [bp-4h]@1
  int v15; // [sp+68h] [bp+0h]@3

  memset(&v7, -858993460, 0x5Cu);
  sub_434AB0(dword_1DB9778, 0, 0x14000u);
  sub_434AB0(dword_1DCD814, 0, 0x14000u);
  v14 = sub_434A90(a1, a2, "Trans.txt", (int)"rt");
  if ( v14 )
  {
    v13 = sub_438B00(a1, (int)&v15, a2, v14, "%d", (unsigned int)&dword_5CDCF8C);
    if ( v13 )
    {
      for ( i = 0; i < 20480; ++i )
      {
        v11 = 0;
        v10 = 0;
        v9 = 0;
        v8 = sub_438B00(a1, (int)&v15, a2, v14, "%d %d %d", (unsigned int)&v11);
        if ( v8 < 0 )
          break;
        if ( v11 != i + 40960 )
          break;
        dword_1DB9778[i] = v10;
        dword_1DCD814[i] = v9;
      }
      sub_4346D0(a1, a2, v14);
      dword_5CDCF8C = i;
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = 0;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 1DB9778: using guessed type int dword_1DB9778[];
// 1DCD814: using guessed type int dword_1DCD814[];
// 5CDCF8C: using guessed type int dword_5CDCF8C;

//----- (00428320) --------------------------------------------------------
int __usercall sub_428320<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@2
  char v4; // [sp+0h] [bp-5Ch]@0
  int v5; // [sp+4h] [bp-58h]@0
  int v6; // [sp+8h] [bp-54h]@0
  char v7; // [sp+Ch] [bp-50h]@1
  int v8; // [sp+4Ch] [bp-10h]@5
  int i; // [sp+50h] [bp-Ch]@3
  int v10; // [sp+54h] [bp-8h]@1
  int v11; // [sp+58h] [bp-4h]@1

  memset(&v7, -858993460, 0x50u);
  v11 = sub_434A90(a1, a2, "Trans.txt", (int)&unk_4768B4);
  v10 = sub_438730(a1, a2, v11, (int)"%d\n", dword_5CDCF8C);
  if ( v10 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i < dword_5CDCF8C )
      {
        v8 = sub_438730(a1, a2, v11, (int)"%d %d %d\n", i);
        if ( v8 >= 0 )
          continue;
      }
      break;
    }
    sub_4346D0(a1, a2, v11);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 5CDCF8C: using guessed type int dword_5CDCF8C;

//----- (00428430) --------------------------------------------------------
int __cdecl sub_428430(int a1, int a2)
{
  int v2; // eax@8
  char v4; // [sp+0h] [bp-58h]@0
  int v5; // [sp+4h] [bp-54h]@0
  int v6; // [sp+8h] [bp-50h]@0
  char v7; // [sp+Ch] [bp-4Ch]@1
  int v8; // [sp+4Ch] [bp-Ch]@8
  int i; // [sp+50h] [bp-8h]@1
  int v10; // [sp+54h] [bp-4h]@1

  memset(&v7, -858993460, 0x4Cu);
  LOWORD(v10) = sub_40133E(a2);
  for ( i = 0; i < dword_5CDCF8C && (dword_1DB9778[i] != a1 || dword_1DCD814[i] != (unsigned __int16)v10); ++i )
    ;
  if ( i == dword_5CDCF8C )
  {
    dword_1DB9778[i] = a1;
    dword_1DCD814[i] = (unsigned __int16)v10;
    ++dword_5CDCF8C;
    sub_40124E();
  }
  LOWORD(v8) = i - 24576;
  *(_BYTE *)(a2 + 2) = 56;
  *(_BYTE *)(a2 + 3) = BYTE1(v8);
  *(_BYTE *)(a2 + 4) = 57;
  v2 = (unsigned __int16)v8 % 256;
  *(_BYTE *)(a2 + 5) = v2;
  return sub_434B10(1, v2, v6, v4, v5);
}
// 40124E: using guessed type int sub_40124E(void);
// 40133E: using guessed type _DWORD __cdecl sub_40133E(_DWORD);
// 1DB9778: using guessed type int dword_1DB9778[];
// 1DCD814: using guessed type int dword_1DCD814[];
// 5CDCF8C: using guessed type int dword_5CDCF8C;

//----- (00428580) --------------------------------------------------------
int __cdecl sub_428580(int a1, __int16 a2, __int16 a3)
{
  char v4; // [sp+0h] [bp-58h]@0
  int v5; // [sp+4h] [bp-54h]@0
  int v6; // [sp+8h] [bp-50h]@0
  char v7; // [sp+Ch] [bp-4Ch]@1
  __int16 v8; // [sp+4Ch] [bp-Ch]@1
  __int16 v9; // [sp+50h] [bp-8h]@1
  __int16 v10; // [sp+52h] [bp-6h]@1

  memset(&v7, -858993460, 0x4Cu);
  v9 = a3;
  v10 = a2;
  v8 = 12;
  sub_401244(&v8, 12);
  return sub_434B10(1, 1, v6, v4, v5);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (00428600) --------------------------------------------------------
int __cdecl sub_428600(int a1, __int16 a2)
{
  char v3; // [sp+0h] [bp-D0h]@0
  int v4; // [sp+4h] [bp-CCh]@0
  int v5; // [sp+8h] [bp-C8h]@0
  char v6; // [sp+Ch] [bp-C4h]@1
  __int16 v7; // [sp+4Ch] [bp-84h]@1
  __int16 v8; // [sp+50h] [bp-80h]@1
  __int16 v9; // [sp+52h] [bp-7Eh]@1
  char v10; // [sp+70h] [bp-60h]@1

  memset(&v6, -858993460, 0xC4u);
  v8 = 13321;
  v9 = a2;
  v7 = 132;
  sub_434B90((int)&v10);
  sub_401244(&v7, 132);
  return sub_434B10(1, 1, v5, v3, v4);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (00428720) --------------------------------------------------------
int __cdecl sub_428720(int a1, __int16 a2, __int16 a3, int a4)
{
  char v5; // [sp+0h] [bp-5Ch]@0
  int v6; // [sp+4h] [bp-58h]@0
  int v7; // [sp+8h] [bp-54h]@0
  char v8; // [sp+Ch] [bp-50h]@1
  __int16 v9; // [sp+4Ch] [bp-10h]@1
  __int16 v10; // [sp+50h] [bp-Ch]@1
  __int16 v11; // [sp+52h] [bp-Ah]@1
  int v12; // [sp+58h] [bp-4h]@1

  memset(&v8, -858993460, 0x50u);
  v10 = a3;
  v11 = a2;
  v9 = 16;
  v12 = 0;
  if ( *(_BYTE *)a4 == 64 )
    v12 = 1;
  if ( *(_BYTE *)a4 == 95 )
    v12 = 2;
  if ( *(_BYTE *)a4 == 35 )
    v12 = 3;
  sub_401244(&v9, 16);
  return sub_434B10(1, 1, v7, v5, v6);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);

//----- (004287E0) --------------------------------------------------------
int __usercall sub_4287E0<eax>(int a1<ebx>, HINSTANCE hInstance)
{
  int v2; // eax@1
  int v3; // eax@1
  int v4; // eax@1
  int v5; // eax@1
  int v6; // eax@2
  int v7; // eax@2
  char v9; // [sp+0h] [bp-74h]@1
  int v10; // [sp+4h] [bp-70h]@4
  int v11; // [sp+8h] [bp-6Ch]@4
  char v12; // [sp+Ch] [bp-68h]@1
  WNDCLASSA WndClass; // [sp+4Ch] [bp-28h]@1
  int v14; // [sp+74h] [bp+0h]@1

  memset(&v12, -858993460, 0x68u);
  WndClass.style = 11;
  WndClass.lpfnWndProc = (WNDPROC)sub_401154;
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 0;
  v2 = (int)LoadIconA(hInstance, "MAINICON");
  WndClass.hIcon = (HICON)sub_434B10(&v9 == &v9, v2, a1, (unsigned int)&v14, (int)&v9);
  WndClass.hInstance = hInstance;
  v3 = (int)LoadCursorA(0, (LPCSTR)0x7F00);
  WndClass.hCursor = (HCURSOR)sub_434B10(&v9 == &v9, v3, a1, (unsigned int)&v14, (int)&v9);
  v4 = (int)GetStockObject(0);
  WndClass.hbrBackground = (HBRUSH)sub_434B10(&v9 == &v9, v4, a1, (unsigned int)&v14, (int)&v9);
  WndClass.lpszClassName = "MainClass";
  WndClass.lpszMenuName = 0;
  LOWORD(v5) = RegisterClassA(&WndClass);
  if ( (unsigned __int16)sub_434B10(&v9 == &v9, v5, a1, (unsigned int)&v14, (int)&v9) )
  {
    v7 = 1;
  }
  else
  {
    LOWORD(v6) = RegisterClassA(&WndClass);
    v7 = (unsigned __int16)sub_434B10(&v9 == &v9, v6, a1, (unsigned int)&v14, (int)&v9);
  }
  return sub_434B10(1, v7, v11, v9, v10);
}
// 401154: using guessed type int sub_401154();

//----- (00428900) --------------------------------------------------------
int __usercall sub_428900<eax>(int a1<ebx>, HINSTANCE hInstance, int nCmdShow)
{
  int v3; // eax@1
  int v4; // eax@2
  int v5; // eax@3
  int v6; // eax@3
  char v8; // [sp+0h] [bp-4Ch]@1
  int v9; // [sp+4h] [bp-48h]@4
  int v10; // [sp+8h] [bp-44h]@4
  char v11; // [sp+Ch] [bp-40h]@1
  int v12; // [sp+4Ch] [bp+0h]@1

  memset(&v11, -858993460, 0x40u);
  v3 = (int)CreateWindowExA(
              0,
              "MainClass",
              "DB Server",
              (DWORD)&unk_2CF0000,
              -2147483648,
              -2147483648,
              648,
              480,
              0,
              hMenu,
              hInstance,
              0);
  hWnd = (HWND)sub_434B10(&v8 == &v8, v3, a1, (unsigned int)&v12, (int)&v8);
  if ( hWnd )
  {
    v5 = ShowWindow(hWnd, nCmdShow);
    sub_434B10(&v8 == &v8, v5, a1, (unsigned int)&v12, (int)&v8);
    v6 = UpdateWindow(hWnd);
    sub_434B10(&v8 == &v8, v6, a1, (unsigned int)&v12, (int)&v8);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  return sub_434B10(1, v4, v10, v8, v9);
}

//----- (004289E0) --------------------------------------------------------
int __usercall sub_4289E0<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  int v3; // eax@1
  char v5; // [sp+0h] [bp-344h]@0
  int v6; // [sp+4h] [bp-340h]@0
  int v7; // [sp+8h] [bp-33Ch]@0
  char v8; // [sp+Ch] [bp-338h]@1
  __int16 v9; // [sp+4Ch] [bp-2F8h]@21
  __int16 v10; // [sp+50h] [bp-2F4h]@21
  __int16 v11; // [sp+52h] [bp-2F2h]@21
  char v12; // [sp+58h] [bp-2ECh]@21
  int v13; // [sp+238h] [bp-10Ch]@15
  int v14; // [sp+23Ch] [bp-108h]@9
  int i; // [sp+240h] [bp-104h]@1
  char v16; // [sp+244h] [bp-100h]@1

  v3 = -858993460;
  memset(&v8, -858993460, 0x338u);
  v16 = 0;
  for ( i = 0; i < 10; ++i )
  {
    if ( dword_1E01844[30 * i] )
    {
      if ( a3 )
      {
        if ( dword_1DE1814[i] < dword_1E01894[30 * i] )
          dword_1DE1814[i] = dword_1E01894[30 * i];
        v14 = 4 * dword_1E01894[30 * i] / 3;
        if ( dword_1E01894[30 * i] < dword_4828C0 && v14 > 650 )
          v14 = 650;
        if ( dword_1E01894[30 * i] > dword_4828C0 )
          v14 = 800;
        sub_4343B0(a1, a2, (int)&v16, (int)"%s %d ", (unsigned int)&v16);
      }
      else
      {
        v13 = dword_1E01894[30 * i];
        sub_4343B0(a1, a2, (int)&v16, (int)"%s %d ", (unsigned int)&v16);
      }
    }
    else
    {
      sub_4343B0(a1, a2, (int)&v16, (int)"%s %d ", (unsigned int)&v16);
    }
    v3 = i + 1;
  }
  if ( dword_A95E08[0] )
  {
    if ( a3 )
      sub_434BA0((int)&v16, (int)"1");
    else
      sub_434BA0((int)&v16, (int)"0");
    sub_434AB0(&v9, 0, 0x1ECu);
    v10 = 12302;
    v9 = 492;
    v11 = 0;
    v12 = 0;
    sub_434B90((int)&v12);
    v3 = sub_401244(&v9, 492);
  }
  return sub_434B10(1, v3, v7, v5, v6);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 4828C0: using guessed type int dword_4828C0;
// A95E08: using guessed type int dword_A95E08[];
// 1DE1814: using guessed type int dword_1DE1814[];
// 1E01844: using guessed type int dword_1E01844[];
// 1E01894: using guessed type int dword_1E01894[];

//----- (00428EF0) --------------------------------------------------------
int __usercall sub_428EF0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  char v4; // [sp+0h] [bp-170h]@0
  char v5; // [sp+0h] [bp-170h]@1
  int v6; // [sp+4h] [bp-16Ch]@0
  int v7; // [sp+8h] [bp-168h]@0
  char v8; // [sp+Ch] [bp-164h]@1
  int v9; // [sp+4Ch] [bp-124h]@8
  int i; // [sp+50h] [bp-120h]@3
  int v11; // [sp+54h] [bp-11Ch]@3
  int v12; // [sp+58h] [bp-118h]@2
  int v13; // [sp+5Ch] [bp-114h]@2
  int v14; // [sp+60h] [bp-110h]@2
  int v15; // [sp+64h] [bp-10Ch]@2
  int v16; // [sp+68h] [bp-108h]@2
  int v17; // [sp+6Ch] [bp-104h]@1
  char v18[256]; // [sp+70h] [bp-100h]@1
  int v19; // [sp+170h] [bp+0h]@8

  memset(&v8, -858993460, 0x164u);
  sub_4343B0(a1, a2, (int)v18, (int)"Admin.txt", v4);
  v2 = sub_434A90(a1, a2, v18, (int)&word_4769E8);
  v17 = v2;
  if ( v2 )
  {
    while ( 1 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v12 = sub_434870(a1, a2, (int)v18, 127, v17);
      if ( !v12 )
        break;
      v11 = -1;
      for ( i = 0; i < 255; ++i )
      {
        if ( v18[i] == 46 )
          v18[i] = 32;
      }
      sub_4347B0(a1, (int)&v19, a2, (int)v18, "%d %d %d %d %d", (unsigned int)&v11);
      v9 = (v13 << 24) + v16 + (v14 << 16) + (v15 << 8);
      if ( v11 >= 0 && v11 < 24 )
        dword_1216C58[v11] = v9;
    }
    v2 = sub_4346D0(a1, a2, v17);
  }
  return sub_434B10(1, v2, v7, v5, v6);
}
// 4769E8: using guessed type __int16 word_4769E8;
// 1216C58: using guessed type int dword_1216C58[];
// 428EF0: using guessed type char var_100[256];

//----- (00429130) --------------------------------------------------------
int __usercall sub_429130<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@2
  int v3; // eax@2
  char v5; // [sp+0h] [bp-154h]@2
  int v6; // [sp+4h] [bp-150h]@9
  int v7; // [sp+8h] [bp-14Ch]@9
  char v8; // [sp+Ch] [bp-148h]@1
  int v9; // [sp+4Ch] [bp-108h]@1
  int v10; // [sp+50h] [bp-104h]@1
  char v11; // [sp+54h] [bp-100h]@3
  int v12; // [sp+154h] [bp+0h]@2

  memset(&v8, -858993460, 0x148u);
  v10 = 0;
  v9 = sub_434A90(a1, a2, "Config.txt", (int)"rt");
  if ( v9 )
  {
    sub_438B00(a1, (int)&v12, a2, v9, "%s %d\n", (unsigned int)&v11);
    sub_438B00(a1, (int)&v12, a2, v9, "%s %d\n", (unsigned int)&v11);
    sub_438B00(a1, (int)&v12, a2, v9, "%s %d\n", (unsigned int)&v11);
    sub_438B00(a1, (int)&v12, a2, v9, "%s %d\n", (unsigned int)&v11);
    sub_438B00(a1, (int)&v12, a2, v9, "%s %d\n", (unsigned int)&v11);
    if ( dword_4828C0 < 200 || dword_4828C0 >= 1000 )
      dword_4828C0 = 600;
    sub_4346D0(a1, a2, v9);
    if ( v10 < 1 )
    {
      dword_4828BC *= 100;
      sub_40110E();
    }
    v3 = 1;
  }
  else
  {
    v2 = MessageBoxA(hWnd, "cant find Config.txt", "BOOTING ERROR", 0);
    sub_434B10(&v5 == &v5, v2, a1, (unsigned int)&v12, (int)&v5);
    v3 = 0;
  }
  return sub_434B10(1, v3, v7, v5, v6);
}
// 40110E: using guessed type int sub_40110E(void);
// 4828BC: using guessed type int dword_4828BC;
// 4828C0: using guessed type int dword_4828C0;

//----- (00429310) --------------------------------------------------------
int __usercall sub_429310<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@6
  char v4; // [sp+0h] [bp-54h]@0
  int v5; // [sp+4h] [bp-50h]@0
  int v6; // [sp+8h] [bp-4Ch]@0
  char v7; // [sp+Ch] [bp-48h]@1
  int v8; // [sp+4Ch] [bp-8h]@5
  int v9; // [sp+50h] [bp-4h]@5

  memset(&v7, -858993460, 0x48u);
  if ( dword_4828BC < 1 )
    dword_4828BC = 0;
  if ( dword_4828BC > 6400 )
    dword_4828BC = 6400;
  v9 = 1;
  v8 = sub_434A90(a1, a2, "Config.txt", (int)&unk_4768B4);
  if ( v8 )
  {
    sub_438730(a1, a2, v8, (int)"Sapphire %d\n", dword_4828BC);
    sub_438730(a1, a2, v8, (int)"MaxConcurrent %d\n", dword_4828C0);
    sub_438730(a1, a2, v8, (int)"Version %d\n", v9);
    sub_438730(a1, a2, v8, (int)"Capsule %d\n", dword_4828C4);
    sub_4346D0(a1, a2, v8);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 4828BC: using guessed type int dword_4828BC;
// 4828C0: using guessed type int dword_4828C0;
// 4828C4: using guessed type int dword_4828C4;

//----- (00429430) --------------------------------------------------------
int __usercall sub_429430<eax>(int a1<ebx>, int a2)
{
  void *v2; // eax@1
  int v3; // esi@2
  int v4; // eax@2
  int v5; // eax@4
  int v6; // eax@7
  int v7; // eax@7
  int v8; // eax@7
  int v9; // esi@7
  int v10; // eax@7
  int v11; // eax@9
  int v12; // eax@9
  int v13; // eax@10
  int v14; // eax@10
  int v15; // eax@10
  int v16; // esi@10
  int v17; // eax@10
  int v18; // eax@12
  int v19; // eax@12
  int v20; // eax@15
  int v21; // eax@16
  char v23; // [sp+0h] [bp-1A0h]@2
  int v24; // [sp+4h] [bp-19Ch]@18
  int v25; // [sp+8h] [bp-198h]@18
  char v26; // [sp+Ch] [bp-194h]@1
  int v27; // [sp+4Ch] [bp-154h]@12
  int v28; // [sp+50h] [bp-150h]@12
  unsigned int v29; // [sp+54h] [bp-14Ch]@12
  int v30; // [sp+58h] [bp-148h]@12
  int v31; // [sp+5Ch] [bp-144h]@9
  int v32; // [sp+60h] [bp-140h]@9
  unsigned int v33; // [sp+64h] [bp-13Ch]@9
  int v34; // [sp+68h] [bp-138h]@9
  int i; // [sp+6Ch] [bp-134h]@7
  int v36; // [sp+70h] [bp-130h]@5
  HGDIOBJ h; // [sp+74h] [bp-12Ch]@3
  HDC hDC; // [sp+78h] [bp-128h]@2
  const CHAR String; // [sp+7Ch] [bp-124h]@7
  int y; // [sp+17Ch] [bp-24h]@2
  int x; // [sp+180h] [bp-20h]@2
  int v42; // [sp+184h] [bp-1Ch]@1
  COLORREF v43; // [sp+188h] [bp-18h]@1
  int v44; // [sp+18Ch] [bp-14h]@1
  int v45; // [sp+190h] [bp-10h]@1
  COLORREF color; // [sp+194h] [bp-Ch]@1
  int (__cdecl *v47)(int, int); // [sp+198h] [bp-8h]@1
  int v48; // [sp+19Ch] [bp-4h]@1
  int v49; // [sp+1A0h] [bp+0h]@2

  v2 = (void *)-858993460;
  memset(&v26, -858993460, 0x194u);
  v42 = 65535;
  v43 = 0;
  v44 = 2142208;
  v45 = (int)&unk_E0B000;
  color = 255;
  v47 = (int (__cdecl *)(int, int))((char *)loc_4488FC + 3);
  v48 = (int)&unk_FFFFFF;
  if ( dword_5CDCF84 )
  {
    x = 0;
    y = 0;
    v3 = (int)&v23;
    v4 = (int)GetDC(hWnd);
    v2 = (void *)sub_434B10(&v23 == &v23, v4, a1, (unsigned int)&v49, (int)&v23);
    hDC = v2;
    if ( v2 )
    {
      h = 0;
      if ( !::h
        || (v3 = (int)&v23,
            v5 = (int)SelectObject(hDC, ::h),
            v2 = (void *)sub_434B10(&v23 == &v23, v5, a1, (unsigned int)&v49, (int)&v23),
            (h = v2) != 0) )
      {
        v36 = 0;
        if ( a2 )
          v36 = sub_434A90(a1, v3, "gameconfig.txt", (int)&unk_4768B4);
        v6 = SetTextColor(hDC, color);
        sub_434B10(&v23 == &v23, v6, a1, (unsigned int)&v49, (int)&v23);
        sub_4343B0(a1, (int)&v23, (int)&String, (int)"Server Zone Status:", v23);
        v7 = sub_434FC0((int)&String);
        v8 = TextOutA(hDC, x, y, &String, v7);
        sub_434B10(&v23 == &v23, v8, a1, (unsigned int)&v49, (int)&v23);
        y += 16;
        v9 = (int)&v23;
        v10 = SetTextColor(hDC, v43);
        sub_434B10(&v23 == &v23, v10, a1, (unsigned int)&v49, (int)&v23);
        for ( i = 0; i < 10; ++i )
        {
          v34 = (unsigned __int16)((unsigned int)dword_1E01840[30 * i] >> 16) >> 16;
          v33 = ((unsigned int)dword_1E01840[30 * i] >> 16) & 0xFF;
          v32 = (unsigned __int8)(LOWORD(dword_1E01840[30 * i]) >> 8);
          v31 = dword_1E01840[30 * i] & 0xFF;
          sub_4343B0(
            a1,
            v9,
            (int)&String,
            (int)"%2d - IP:%3d.%3d.%3d.%3d  Socket:%4d  Guild:%4d%4d%4d%4d%4d  User:%3d",
            i);
          v11 = sub_434FC0((int)&String);
          v9 = (int)&v23;
          v12 = TextOutA(hDC, x, y, &String, v11);
          sub_434B10(&v23 == &v23, v12, a1, (unsigned int)&v49, (int)&v23);
          y += 16;
        }
        v13 = SetTextColor(hDC, color);
        sub_434B10(&v23 == &v23, v13, a1, (unsigned int)&v49, (int)&v23);
        sub_4343B0(a1, (int)&v23, (int)&String, (int)"Admin Status:", v23);
        v14 = sub_434FC0((int)&String);
        v15 = TextOutA(hDC, x, y, &String, v14);
        sub_434B10(&v23 == &v23, v15, a1, (unsigned int)&v49, (int)&v23);
        y += 16;
        v16 = (int)&v23;
        v17 = SetTextColor(hDC, v43);
        sub_434B10(&v23 == &v23, v17, a1, (unsigned int)&v49, (int)&v23);
        for ( i = 0; i < 24; ++i )
        {
          v30 = (unsigned __int16)((unsigned int)dword_A95E00[30 * i] >> 16) >> 16;
          v29 = ((unsigned int)dword_A95E00[30 * i] >> 16) & 0xFF;
          v28 = (unsigned __int8)(LOWORD(dword_A95E00[30 * i]) >> 8);
          v27 = dword_A95E00[30 * i] & 0xFF;
          sub_4343B0(a1, v16, (int)&String, (int)"%2d - IP:%3d.%3d.%3d.%3d  Socket:%4d", i);
          v18 = sub_434FC0((int)&String);
          v16 = (int)&v23;
          v19 = TextOutA(hDC, x, y, &String, v18);
          sub_434B10(&v23 == &v23, v19, a1, (unsigned int)&v49, (int)&v23);
          y += 16;
        }
        if ( ::h && h )
        {
          v20 = (int)SelectObject(hDC, h);
          sub_434B10(&v23 == &v23, v20, a1, (unsigned int)&v49, (int)&v23);
        }
        v21 = ReleaseDC(hWnd, hDC);
        v2 = (void *)sub_434B10(&v23 == &v23, v21, a1, (unsigned int)&v49, (int)&v23);
        if ( v36 )
          v2 = (void *)sub_4346D0(a1, (int)&v23, v36);
      }
    }
  }
  return sub_434B10(1, (int)v2, v25, v23, v24);
}
// 4488FC: using guessed type int __cdecl(int, int);
// A95E00: using guessed type int dword_A95E00[];
// 1E01840: using guessed type int dword_1E01840[];
// 5CDCF84: using guessed type int dword_5CDCF84;

//----- (00429AB0) --------------------------------------------------------
int __userpurge sub_429AB0<eax>(int a1<ebx>, HINSTANCE a2, int a3, int a4, int a5)
{
  int v5; // eax@3
  int v6; // eax@6
  int v7; // eax@7
  int v8; // eax@9
  int v9; // eax@11
  int v10; // eax@13
  int v11; // eax@15
  int v12; // eax@17
  int v13; // eax@19
  int v14; // eax@21
  int v15; // edi@22
  char *v16; // esi@22
  int v17; // eax@26
  int v18; // eax@33
  int v19; // eax@33
  int v20; // eax@36
  int v21; // eax@38
  int v22; // eax@38
  int v23; // eax@39
  int v24; // eax@40
  int v25; // eax@40
  char v27; // [sp+0h] [bp-390h]@6
  int v28; // [sp+4h] [bp-38Ch]@42
  int v29; // [sp+8h] [bp-388h]@42
  char v30; // [sp+Ch] [bp-384h]@1
  int v31; // [sp+4Ch] [bp-344h]@35
  char v32; // [sp+50h] [bp-340h]@35
  int i; // [sp+150h] [bp-240h]@27
  char v34; // [sp+154h] [bp-23Ch]@27
  char v35; // [sp+158h] [bp-238h]@27
  char v36; // [sp+15Ch] [bp-234h]@27
  char v37; // [sp+160h] [bp-230h]@27
  int v38; // [sp+164h] [bp-22Ch]@24
  int v39; // [sp+168h] [bp-228h]@24
  char v40; // [sp+16Ch] [bp-224h]@27
  const CHAR Caption; // [sp+26Ch] [bp-124h]@25
  int v42; // [sp+36Ch] [bp-24h]@22
  int v43; // [sp+370h] [bp-20h]@6
  struct tagMSG Msg; // [sp+374h] [bp-1Ch]@39
  int v45; // [sp+390h] [bp+0h]@6

  memset(&v30, -858993460, 0x384u);
  dword_1E01CF0 = (int)a2;
  if ( a3 || sub_4012D0(a2) )
  {
    if ( sub_4010C3(a2, a5) )
    {
      v6 = (int)CreateFontA(12, 0, 0, 0, 300, 0, 0, 0, 1u, 5u, 0, 0, 0, "Fixedsys");
      h = (HGDIOBJ)sub_434B10(&v27 == &v27, v6, a1, (unsigned int)&v45, (int)&v27);
      sub_401451();
      sub_401019();
      v43 = -1;
      v43 = sub_444AE0(a1, (int)&v27, "트렌스나이트", -32768, 0);
      if ( v43 == -1 )
      {
        v7 = MessageBoxA(hWnd, "no TransKnight file", "BOOTING ERROR", 0);
        sub_434B10(&v27 == &v27, v7, a1, (unsigned int)&v45, (int)&v27);
        v5 = 0;
      }
      else
      {
        sub_43DAC0(v43, (int)&unk_5CDB7A0, 0x2F4u);
        sub_43AC10(v43);
        v43 = sub_444AE0(a1, (int)&v27, (LPCSTR)&unk_476D8C, -32768, 0);
        if ( v43 == -1 )
        {
          v8 = MessageBoxA(hWnd, "no Forema file", "BOOTING ERROR", 0);
          sub_434B10(&v27 == &v27, v8, a1, (unsigned int)&v45, (int)&v27);
          v5 = 0;
        }
        else
        {
          sub_43DAC0(v43, (int)&unk_5CDBA94, 0x2F4u);
          sub_43AC10(v43);
          v43 = sub_444AE0(a1, (int)&v27, (LPCSTR)&unk_476D68, -32768, 0);
          if ( v43 == -1 )
          {
            v9 = MessageBoxA(hWnd, "no BeastMaster file", "BOOTING ERROR", 0);
            sub_434B10(&v27 == &v27, v9, a1, (unsigned int)&v45, (int)&v27);
            v5 = 0;
          }
          else
          {
            sub_43DAC0(v43, (int)&unk_5CDBD88, 0x2F4u);
            sub_43AC10(v43);
            v43 = sub_444AE0(a1, (int)&v27, "헌터", -32768, 0);
            if ( v43 == -1 )
            {
              v10 = MessageBoxA(hWnd, "no Hunter file", "BOOTING ERROR", 0);
              sub_434B10(&v27 == &v27, v10, a1, (unsigned int)&v45, (int)&v27);
              v5 = 0;
            }
            else
            {
              sub_43DAC0(v43, (int)&unk_5CDC07C, 0x2F4u);
              sub_43AC10(v43);
              v43 = sub_444AE0(a1, (int)&v27, "_트렌스나이트", -32768, 0);
              if ( v43 == -1 )
              {
                v11 = MessageBoxA(hWnd, "no _TransKnight file", "BOOTING ERROR", 0);
                sub_434B10(&v27 == &v27, v11, a1, (unsigned int)&v45, (int)&v27);
                v5 = 0;
              }
              else
              {
                sub_43DAC0(v43, (int)&unk_5CDC370, 0x2F4u);
                sub_43AC10(v43);
                v43 = sub_444AE0(a1, (int)&v27, (LPCSTR)&unk_476CFC, -32768, 0);
                if ( v43 == -1 )
                {
                  v12 = MessageBoxA(hWnd, "no _Forema file", "BOOTING ERROR", 0);
                  sub_434B10(&v27 == &v27, v12, a1, (unsigned int)&v45, (int)&v27);
                  v5 = 0;
                }
                else
                {
                  sub_43DAC0(v43, (int)&unk_5CDC664, 0x2F4u);
                  sub_43AC10(v43);
                  v43 = sub_444AE0(a1, (int)&v27, (LPCSTR)&unk_476CD8, -32768, 0);
                  if ( v43 == -1 )
                  {
                    v13 = MessageBoxA(hWnd, "no _BeastMaster file", "BOOTING ERROR", 0);
                    sub_434B10(&v27 == &v27, v13, a1, (unsigned int)&v45, (int)&v27);
                    v5 = 0;
                  }
                  else
                  {
                    sub_43DAC0(v43, (int)&unk_5CDC958, 0x2F4u);
                    sub_43AC10(v43);
                    v43 = sub_444AE0(a1, (int)&v27, "_헌터", -32768, 0);
                    if ( v43 == -1 )
                    {
                      v14 = MessageBoxA(hWnd, "no _Hunter file", "BOOTING ERROR", 0);
                      sub_434B10(&v27 == &v27, v14, a1, (unsigned int)&v45, (int)&v27);
                      v5 = 0;
                    }
                    else
                    {
                      sub_43DAC0(v43, (int)&unk_5CDCC4C, 0x2F4u);
                      sub_43AC10(v43);
                      memcpy(&unk_5CDB7C4, &unk_5CDB7E0, 0x1Cu);
                      memcpy(&unk_5CDBAB8, &unk_5CDBAD4, 0x1Cu);
                      memcpy(&unk_5CDBDAC, &unk_5CDBDC8, 0x1Cu);
                      memcpy(&unk_5CDC0A0, &unk_5CDC0BC, 0x1Cu);
                      memcpy(&unk_5CDC394, &unk_5CDC3B0, 0x1Cu);
                      memcpy(&unk_5CDC688, &unk_5CDC6A4, 0x1Cu);
                      memcpy(&unk_5CDC97C, &unk_5CDC998, 0x1Cu);
                      memcpy(&unk_5CDCC70, &unk_5CDCC8C, 0x1Cu);
                      v16 = (char *)&unk_5CDCC8C + 28;
                      v15 = (int)((char *)&unk_5CDCC70 + 28);
                      sub_40143D("DB");
                      sub_401316("start log", "-system");
                      sub_434AB0(word_1DE1840, 0, 0x20000u);
                      sub_434AB0(word_1E01CF4, 0, 0x20000u);
                      sub_401424();
                      sub_401109();
                      v42 = sub_401208(&dword_A96940);
                      if ( v42 )
                      {
                        sub_4010EB();
                        v39 = 0;
                        v38 = sub_434A90(a1, (int)v16, "localip.txt", (int)"rt");
                        if ( v38 )
                        {
                          sub_438B00(a1, v15, (int)v16, v38, "%s %d", (unsigned int)&Caption);
                          sub_4346D0(a1, (int)v16, v38);
                        }
                        else
                        {
                          v16 = &v27;
                          v17 = MessageBoxA(hWnd, "Can't find localip.txt", "REBOOTING ERROR", 0);
                          sub_434B10(&v27 == &v27, v17, a1, v15, (int)&v27);
                        }
                        sub_4347B0(a1, v15, (int)v16, (int)&Caption, "%d.%d.%d.%d", (unsigned int)&v37);
                        sub_434B90((int)&v40);
                        byte_5CDCF40 = v37;
                        unk_5CDCF41 = v36;
                        byte_5CDCF42 = v35;
                        byte_5CDCF43 = v34;
                        for ( i = 0; i < 10; ++i )
                        {
                          if ( !sub_4351F0((int)&byte_98B758[704 * i], (int)&Caption) )
                          {
                            dword_4828AC = i;
                            break;
                          }
                        }
                        if ( dword_4828AC == -1 )
                        {
                          v18 = MessageBoxA(hWnd, "Can't get Server Group Index LocalIP:", &Caption, 0x1000u);
                          sub_434B10(&v27 == &v27, v18, a1, v15, (int)&v27);
                          v19 = MessageBoxA(
                                  hWnd,
                                  "Can't get Server Group Index TestServerIP:",
                                  &byte_98B758[704 * i],
                                  0x1000u);
                          sub_434B10(&v27 == &v27, v19, a1, v15, (int)&v27);
                          v5 = 1;
                        }
                        else
                        {
                          sub_4012A8();
                          sub_4013E8();
                          sub_401456(hWnd, *(_DWORD *)&byte_5CDCF40, 0x1D5Au, 0x403u);
                          sub_401456(hWnd, *(_DWORD *)&byte_5CDCF40, 0x22BFu, 0x405u);
                          v38 = sub_434A90(a1, (int)v16, "redirect.txt", (int)"rt");
                          if ( v38 )
                          {
                            sub_438B00(a1, v15, (int)v16, v38, "%s %d %s %s", (unsigned int)&v32);
                            sub_4346D0(a1, (int)v16, v38);
                            v42 = sub_401348(&v32, v31, 0, 0x407u);
                            if ( !v42 )
                            {
                              v20 = MessageBoxA(hWnd, "there's redirect.txt but can't connect", "BOOTING ERROR", 0);
                              sub_434B10(&v27 == &v27, v20, a1, v15, (int)&v27);
                              v5 = 0;
                              return sub_434B10(1, v5, v29, v27, v28);
                            }
                            sub_401316("sys,redirection server connected", "-system");
                            dword_5CDCF48 = 1;
                          }
                          v21 = SetTimer(hWnd, 0, 0x3E8u, 0);
                          sub_434B10(&v27 == &v27, v21, a1, v15, (int)&v27);
                          v22 = SetTimer(hWnd, 1u, 0x2710u, 0);
                          sub_434B10(&v27 == &v27, v22, a1, v15, (int)&v27);
                          dword_5CDCF84 = 1;
                          sub_401163(0);
                          while ( 1 )
                          {
                            v23 = GetMessageA(&Msg, 0, 0, 0);
                            if ( !sub_434B10(&v27 == &v27, v23, a1, v15, (int)&v27) )
                              break;
                            v24 = TranslateMessage(&Msg);
                            sub_434B10(&v27 == &v27, v24, a1, v15, (int)&v27);
                            v25 = DispatchMessageA(&Msg);
                            sub_434B10(&v27 == &v27, v25, a1, v15, (int)&v27);
                          }
                          v5 = Msg.wParam;
                        }
                      }
                      else
                      {
                        sub_401316("err,wsainitialize fail", "-system");
                        v5 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  return sub_434B10(1, v5, v29, v27, v28);
}
// 401019: using guessed type int sub_401019(void);
// 4010C3: using guessed type _DWORD __cdecl sub_4010C3(HINSTANCE hInstance, _DWORD nCmdShow);
// 4010EB: using guessed type int sub_4010EB(void);
// 401109: using guessed type int sub_401109(void);
// 401163: using guessed type _DWORD __cdecl sub_401163(_DWORD);
// 401208: using guessed type int __thiscall sub_401208(_DWORD);
// 4012A8: using guessed type int sub_4012A8(void);
// 4012D0: using guessed type _DWORD __cdecl sub_4012D0(HINSTANCE hInstance);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 401348: using guessed type _DWORD __stdcall sub_401348(char *cp, u_short hostshort, _DWORD, u_int wMsg);
// 4013E8: using guessed type int sub_4013E8(void);
// 401424: using guessed type int sub_401424(void);
// 40143D: using guessed type _DWORD __cdecl sub_40143D(_DWORD);
// 401451: using guessed type int sub_401451(void);
// 401456: using guessed type _DWORD __stdcall sub_401456(HWND hWnd, _DWORD, u_short hostshort, u_int wMsg);
// 4828AC: using guessed type int dword_4828AC;
// A96940: using guessed type int dword_A96940;
// 1DE1840: using guessed type __int16 word_1DE1840[];
// 1E01CF0: using guessed type int dword_1E01CF0;
// 1E01CF4: using guessed type __int16 word_1E01CF4[];
// 5CDCF40: using guessed type char byte_5CDCF40;
// 5CDCF42: using guessed type char byte_5CDCF42;
// 5CDCF43: using guessed type char byte_5CDCF43;
// 5CDCF48: using guessed type int dword_5CDCF48;
// 5CDCF84: using guessed type int dword_5CDCF84;

//----- (0042A550) --------------------------------------------------------
int __usercall sub_42A550<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  int v3; // eax@3
  char v5; // [sp+0h] [bp-1C0Ch]@0
  int v6; // [sp+4h] [bp-1C08h]@0
  int v7; // [sp+8h] [bp-1C04h]@0
  char v8; // [sp+Ch] [bp-1C00h]@1
  int v9; // [sp+4Ch] [bp-1BC0h]@4
  char v10; // [sp+50h] [bp-1BBCh]@11
  char v11; // [sp+150h] [bp-1ABCh]@10
  char v12; // [sp+250h] [bp-19BCh]@7
  int v13; // [sp+350h] [bp-18BCh]@6
  const CHAR MultiByteStr; // [sp+354h] [bp-18B8h]@6
  char v15[4116]; // [sp+424h] [bp-17E8h]@10
  char v16[640]; // [sp+1438h] [bp-7D4h]@10
  char v17[1152]; // [sp+16B8h] [bp-554h]@10
  int v18; // [sp+1B38h] [bp-D4h]@5
  __int16 v19; // [sp+1B3Ch] [bp-D0h]@5
  __int16 v20; // [sp+1B3Eh] [bp-CEh]@5
  int v21; // [sp+1B44h] [bp-C8h]@5
  int v22; // [sp+1B48h] [bp-C4h]@5
  int v23; // [sp+1B6Ch] [bp-A0h]@5
  int v24; // [sp+1B70h] [bp-9Ch]@5
  int v25; // [sp+1B74h] [bp-98h]@5
  int v26; // [sp+1B78h] [bp-94h]@5
  int v27; // [sp+1B7Ch] [bp-90h]@5
  const CHAR *v28; // [sp+1B80h] [bp-8Ch]@5
  int v29; // [sp+1B84h] [bp-88h]@5
  char v30; // [sp+1B88h] [bp-84h]@3
  int v31; // [sp+1C08h] [bp-4h]@1
  int v32; // [sp+1C0Ch] [bp+0h]@10

  memset(&v8, -858993460, 0x1C00u);
  v31 = a3;
  if ( !(*(_WORD *)(a3 + 4) & 0x3000) || (signed int)*(_WORD *)(v31 + 6) >= 10000 )
  {
    sub_4343B0(a1, a2, (int)&v30, (int)"err,adminclient_packet:%d ID:%d Size:%d KeyWord:%d", *(_WORD *)(v31 + 4));
    sub_401316(&v30, "-system");
    v3 = 0;
    return sub_434B10(1, v3, v7, v5, v6);
  }
  v9 = *(_WORD *)(v31 + 4);
  if ( v9 != 12300 )
  {
LABEL_27:
    v3 = 1;
    return sub_434B10(1, v3, v7, v5, v6);
  }
  v29 = a3;
  v28 = (const CHAR *)(a3 + 16);
  v27 = *(_DWORD *)(a3 + 12);
  v26 = *(_DWORD *)(a3 + 32);
  v25 = sub_401055(a3 + 16);
  v24 = v25 / 1000;
  v23 = v25 % 1000;
  sub_434AB0(&v18, 0, 0x34u);
  v19 = 4010;
  LOWORD(v18) = 52;
  v20 = v23;
  v22 = v27;
  v21 = *(_DWORD *)(v29 + 32);
  sub_401334(-1, v28);
  if ( *(_DWORD *)(v29 + 32) )
  {
LABEL_16:
    if ( v26 == 1 )
    {
      if ( v25 )
        sub_401244(&v18, (unsigned __int16)v18);
    }
    else
    {
      if ( v26 == 2 )
      {
        if ( v25 )
          sub_401244(&v18, (unsigned __int16)v18);
      }
      else
      {
        if ( v26 == 3 && v25 )
          sub_401244(&v18, (unsigned __int16)v18);
      }
    }
    goto LABEL_27;
  }
  sub_434C80((void *)&MultiByteStr, (const void *)(v29 + 16), 0x10u);
  v13 = sub_40137F(&MultiByteStr, 1);
  if ( !v13 )
  {
    sub_4343B0(a1, a2, (int)&v12, (int)"etc,tranper_FAILED!!!!!(read) %s %s", v29 + 16);
    sub_401316(&v12, &MultiByteStr);
    if ( v25 )
    {
      v21 = 4;
      sub_401244(&v18, (unsigned __int16)v18);
    }
    v3 = 1;
    return sub_434B10(1, v3, v7, v5, v6);
  }
  sub_4343B0(a1, a2, (int)&v11, (int)"etc,tranper_success(deleted) %s %s", v29 + 16);
  sub_401316(&v11, &MultiByteStr);
  sub_434AB0(&v15[756 * v27], 0, 0x2F4u);
  sub_434AB0(&v16[160 * v27], 0, 0xA0u);
  sub_434AB0(&v17[288 * v27], 0, 0x120u);
  sub_449530(a1, (int)&v32, a2, &MultiByteStr);
  v13 = sub_4013F2(&MultiByteStr, 1);
  if ( v13 )
  {
    if ( v25 )
    {
      sub_401244(&v18, (unsigned __int16)v18);
      sub_434AB0((char *)&unk_1E21DD0 + 6184 * v25 + 756 * v27, 0, 0x2F4u);
    }
    goto LABEL_16;
  }
  sub_4343B0(a1, a2, (int)&v10, (int)"etc,tranper_FAILED!!!!!(write) %s %s", v29 + 16);
  sub_401316(&v10, &MultiByteStr);
  if ( v25 )
  {
    v21 = 4;
    sub_401244(&v18, (unsigned __int16)v18);
  }
  v3 = 1;
  return sub_434B10(1, v3, v7, v5, v6);
}
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 401334: using guessed type _DWORD __cdecl sub_401334(_DWORD, LPCSTR lpMultiByteStr);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 42A550: using guessed type char var_17E8[4116];
// 42A550: using guessed type char var_7D4[640];
// 42A550: using guessed type char var_554[1152];

//----- (0042BF80) --------------------------------------------------------
int __usercall sub_42BF80<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  int v4; // eax@3
  char v6; // [sp+0h] [bp-D4h]@0
  int v7; // [sp+4h] [bp-D0h]@0
  int v8; // [sp+8h] [bp-CCh]@0
  char v9; // [sp+Ch] [bp-C8h]@1
  char v10; // [sp+4Ch] [bp-88h]@3
  int v11; // [sp+CCh] [bp-8h]@3
  int v12; // [sp+D0h] [bp-4h]@1

  memset(&v9, -858993460, 0xC8u);
  v12 = a4;
  if ( *(_WORD *)(a4 + 4) & 0x800 && (signed int)*(_WORD *)(v12 + 6) < 1000 )
  {
    v4 = sub_401230(a4, a3);
  }
  else
  {
    v11 = a4;
    sub_4343B0(a1, a2, (int)&v10, (int)"err,packet Type:%d ID:%d Size:%d KeyWord:%d", *(_WORD *)(a4 + 4));
    v4 = sub_401316(&v10, "-system");
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// 401230: using guessed type _DWORD __stdcall sub_401230(_DWORD, _DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);

//----- (0042C180) --------------------------------------------------------
int __usercall sub_42C180<eax>(int a1<ebx>, int a2<esi>, int a3, LPCSTR lpMultiByteStr)
{
  int v4; // eax@1
  char v6; // [sp+0h] [bp-1964h]@0
  int v7; // [sp+4h] [bp-1960h]@0
  int v8; // [sp+8h] [bp-195Ch]@0
  char v9; // [sp+Ch] [bp-1958h]@1
  __int16 v10; // [sp+4Ch] [bp-1918h]@12
  __int16 v11; // [sp+50h] [bp-1914h]@12
  __int16 v12; // [sp+52h] [bp-1912h]@12
  char v13; // [sp+58h] [bp-190Ch]@12
  char v14; // [sp+68h] [bp-18FCh]@12
  int v15; // [sp+78h] [bp-18ECh]@12
  char v16; // [sp+7Ch] [bp-18E8h]@11
  int v17; // [sp+17Ch] [bp-17E8h]@1
  char v18; // [sp+180h] [bp-17E4h]@1
  char v19; // [sp+190h] [bp-17D4h]@7
  char v20; // [sp+19Ah] [bp-17CAh]@11
  char v21; // [sp+19Bh] [bp-17C9h]@11
  int v22; // [sp+1964h] [bp+0h]@1

  memset(&v9, -858993460, 0x1958u);
  lpMultiByteStr[15] = 0;
  lpMultiByteStr[14] = 0;
  sub_449530(a1, (int)&v22, a2, lpMultiByteStr);
  sub_434C80(&v18, lpMultiByteStr, 0x10u);
  v4 = sub_40137F(&v18, 1);
  v17 = v4;
  if ( v4 )
  {
    if ( v19 == 35 )
    {
      if ( a3 >= 0 )
        v4 = sub_401406(a3, 0, 12298, &v19);
    }
    else
    {
      v21 = 0;
      v20 = 0;
      sub_4343B0(a1, a2, (int)&v16, (int)"#%s", (unsigned int)&v19);
      sub_434B90((int)&v19);
      v4 = sub_4013F2(&v18, 1);
      if ( a3 >= 0 )
      {
        v15 = dword_A95E74[30 * a3];
        v11 = 8195;
        v10 = 44;
        v12 = v15;
        sub_435800((int)&v13, (int)lpMultiByteStr, 0x10u);
        v14 = 0;
        v4 = sub_4011BD(a3, &v10);
        dword_A95E74[30 * a3] = 0;
      }
    }
  }
  else
  {
    if ( a3 >= 0 )
      v4 = sub_4010D2(a3, 0, 4100);
    if ( a3 >= 0 )
      v4 = sub_401311(a3, 0, "There's no account with that account name");
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// 4010D2: using guessed type _DWORD __cdecl sub_4010D2(_DWORD, __int16, __int16);
// 4011BD: using guessed type _DWORD __cdecl sub_4011BD(_DWORD, _DWORD);
// 401311: using guessed type _DWORD __cdecl sub_401311(_DWORD, __int16, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 401406: using guessed type _DWORD __cdecl sub_401406(_DWORD, __int16, __int16, _DWORD);
// A95E74: using guessed type int dword_A95E74[];

//----- (0042C3B0) --------------------------------------------------------
int __usercall sub_42C3B0<eax>(int a1<ebx>, int a2<esi>, int a3, LPCSTR lpMultiByteStr)
{
  int v4; // eax@1
  char v6; // [sp+0h] [bp-1934h]@0
  int v7; // [sp+4h] [bp-1930h]@0
  int v8; // [sp+8h] [bp-192Ch]@0
  char v9; // [sp+Ch] [bp-1928h]@1
  char v10; // [sp+4Ch] [bp-18E8h]@11
  int v11; // [sp+14Ch] [bp-17E8h]@1
  char v12; // [sp+150h] [bp-17E4h]@1
  char v13; // [sp+160h] [bp-17D4h]@7
  char v14; // [sp+161h] [bp-17D3h]@11
  char v15; // [sp+16Ah] [bp-17CAh]@11
  char v16; // [sp+16Bh] [bp-17C9h]@11
  int v17; // [sp+1934h] [bp+0h]@1

  memset(&v9, -858993460, 0x1928u);
  lpMultiByteStr[15] = 0;
  lpMultiByteStr[14] = 0;
  sub_449530(a1, (int)&v17, a2, lpMultiByteStr);
  sub_434C80(&v12, lpMultiByteStr, 0x10u);
  v4 = sub_40137F(&v12, 1);
  v11 = v4;
  if ( v4 )
  {
    if ( v13 == 35 )
    {
      v16 = 0;
      v15 = 0;
      sub_4343B0(a1, a2, (int)&v10, (int)"%s", (unsigned int)&v14);
      sub_434B90((int)&v13);
      v4 = sub_4013F2(&v12, 1);
      if ( a3 >= 0 )
        v4 = sub_401406(a3, 0, 12298, &v13);
    }
    else
    {
      if ( a3 >= 0 )
        v4 = sub_401406(a3, 0, 12298, &v13);
    }
  }
  else
  {
    if ( a3 >= 0 )
      v4 = sub_4010D2(a3, 0, 4100);
    if ( a3 >= 0 )
      v4 = sub_401311(a3, 0, "There's no account with that account name");
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// 4010D2: using guessed type _DWORD __cdecl sub_4010D2(_DWORD, __int16, __int16);
// 401311: using guessed type _DWORD __cdecl sub_401311(_DWORD, __int16, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 401406: using guessed type _DWORD __cdecl sub_401406(_DWORD, __int16, __int16, _DWORD);

//----- (0042C570) --------------------------------------------------------
int __usercall sub_42C570<eax>(int a1<ebx>, int a2<esi>, char a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax@1
  char v9; // [sp+0h] [bp-34Ch]@0
  int v10; // [sp+4h] [bp-348h]@0
  int v11; // [sp+8h] [bp-344h]@0
  char v12; // [sp+Ch] [bp-340h]@1
  char v13; // [sp+4Ch] [bp-300h]@1
  char v14; // [sp+14Ch] [bp-200h]@1
  char v15; // [sp+24Ch] [bp-100h]@1

  memset(&v12, -858993460, 0x340u);
  sub_4010AA(a6, &v14);
  sub_4010AA(a5, &v13);
  sub_4343B0(a1, a2, (int)&v15, (int)"npl,mob:%d pos:%d before:%s next:%s", a3);
  v7 = sub_401316(&v15, a7);
  return sub_434B10(1, v7, v11, v9, v10);
}
// 4010AA: using guessed type _DWORD __cdecl sub_4010AA(_DWORD, _DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);

//----- (0042C630) --------------------------------------------------------
int __usercall sub_42C630<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  int v4; // eax@3
  char v6; // [sp+0h] [bp-8C98h]@0
  int v7; // [sp+4h] [bp-8C94h]@0
  int v8; // [sp+8h] [bp-8C90h]@0
  char v9; // [sp+Ch] [bp-8C8Ch]@1
  char v10; // [sp+4Ch] [bp-8C4Ch]@195
  char v11; // [sp+44Ch] [bp-884Ch]@194
  int v12; // [sp+46Ch] [bp-882Ch]@193
  int v13; // [sp+470h] [bp-8828h]@193
  char v14; // [sp+474h] [bp-8824h]@193
  __int16 v15; // [sp+4B4h] [bp-87E4h]@193
  __int16 v16; // [sp+4B8h] [bp-87E0h]@193
  __int16 v17; // [sp+4BAh] [bp-87DEh]@193
  char v18; // [sp+4C0h] [bp-87D8h]@193
  char v19; // [sp+4C1h] [bp-87D7h]@194
  char v20; // [sp+504h] [bp-8794h]@190
  char v21; // [sp+904h] [bp-8394h]@189
  int v22; // [sp+924h] [bp-8374h]@188
  char v23; // [sp+928h] [bp-8370h]@188
  __int16 v24; // [sp+968h] [bp-8330h]@188
  __int16 v25; // [sp+96Ch] [bp-832Ch]@188
  __int16 v26; // [sp+96Eh] [bp-832Ah]@188
  char v27; // [sp+974h] [bp-8324h]@188
  char v28; // [sp+975h] [bp-8323h]@189
  __int16 v29; // [sp+9B8h] [bp-82E0h]@186
  __int16 v30; // [sp+9BCh] [bp-82DCh]@186
  __int16 v31; // [sp+9BEh] [bp-82DAh]@186
  int v32; // [sp+9C4h] [bp-82D4h]@186
  char v33; // [sp+9C8h] [bp-82D0h]@186
  __int16 v34; // [sp+A28h] [bp-8270h]@184
  __int16 v35; // [sp+A2Ch] [bp-826Ch]@184
  __int16 v36; // [sp+A2Eh] [bp-826Ah]@184
  int v37; // [sp+A34h] [bp-8264h]@184
  char v38; // [sp+A38h] [bp-8260h]@184
  int v39; // [sp+A98h] [bp-8200h]@179
  int v40; // [sp+A9Ch] [bp-81FCh]@175
  int v41; // [sp+AA0h] [bp-81F8h]@175
  int v42; // [sp+AA4h] [bp-81F4h]@169
  int v43; // [sp+AA8h] [bp-81F0h]@169
  char v44; // [sp+AACh] [bp-81ECh]@161
  int v45; // [sp+BACh] [bp-80ECh]@156
  int v46; // [sp+BB0h] [bp-80E8h]@144
  int jj; // [sp+BB4h] [bp-80E4h]@142
  int ii; // [sp+BB8h] [bp-80E0h]@138
  char v49; // [sp+BBCh] [bp-80DCh]@148
  int v50; // [sp+CBCh] [bp-7FDCh]@136
  int v51; // [sp+CC0h] [bp-7FD8h]@133
  int v52; // [sp+CC4h] [bp-7FD4h]@129
  int v53; // [sp+CC8h] [bp-7FD0h]@129
  int v54; // [sp+CCCh] [bp-7FCCh]@124
  char v55; // [sp+CD0h] [bp-7FC8h]@124
  char v56; // [sp+CE0h] [bp-7FB8h]@126
  char v57[24]; // [sp+DA0h] [bp-7EF8h]@129
  int v58; // [sp+DB8h] [bp-7EE0h]@147
  int v59[2]; // [sp+DBCh] [bp-7EDCh]@149
  char v60[2988]; // [sp+DC4h] [bp-7ED4h]@151
  char v61[1024]; // [sp+1970h] [bp-7328h]@156
  int v62; // [sp+1D70h] [bp-6F28h]@159
  int v63; // [sp+24B4h] [bp-67E4h]@118
  int n; // [sp+24B8h] [bp-67E0h]@112
  int v65; // [sp+24BCh] [bp-67DCh]@112
  int v66; // [sp+24C0h] [bp-67D8h]@110
  int v67; // [sp+24C4h] [bp-67D4h]@110
  int v68; // [sp+24C8h] [bp-67D0h]@100
  int m; // [sp+24CCh] [bp-67CCh]@94
  int v70; // [sp+24D0h] [bp-67C8h]@94
  char v71; // [sp+24D4h] [bp-67C4h]@92
  char v72; // [sp+2532h] [bp-6766h]@92
  char v73; // [sp+2533h] [bp-6765h]@92
  int v74; // [sp+25D4h] [bp-66C4h]@92
  int v75; // [sp+25D8h] [bp-66C0h]@92
  __int16 v76; // [sp+25DCh] [bp-66BCh]@92
  __int16 v77; // [sp+25DEh] [bp-66BAh]@92
  char v78; // [sp+25E4h] [bp-66B4h]@92
  char v79; // [sp+25F4h] [bp-66A4h]@100
  char v80; // [sp+25F5h] [bp-66A3h]@106
  char v81; // [sp+25F6h] [bp-66A2h]@106
  char v82; // [sp+25F7h] [bp-66A1h]@106
  char v83; // [sp+25F8h] [bp-66A0h]@106
  __int16 v84; // [sp+3DC8h] [bp-4ED0h]@92
  __int16 v85; // [sp+3DCAh] [bp-4ECEh]@100
  int v86; // [sp+3DCCh] [bp-4ECCh]@90
  char v87; // [sp+3DD0h] [bp-4EC8h]@90
  char v88; // [sp+3DDEh] [bp-4EBAh]@92
  char v89; // [sp+3DDFh] [bp-4EB9h]@92
  char v90[14]; // [sp+3EA0h] [bp-4DF8h]@96
  char v91; // [sp+3EAEh] [bp-4DEAh]@92
  char v92; // [sp+3EAFh] [bp-4DE9h]@92
  __int16 v93[360]; // [sp+3EC4h] [bp-4DD4h]@97
  char v94; // [sp+41A2h] [bp-4AF6h]@92
  char v95; // [sp+41A3h] [bp-4AF5h]@92
  char v96; // [sp+4496h] [bp-4802h]@92
  char v97; // [sp+4497h] [bp-4801h]@92
  char v98; // [sp+478Ah] [bp-450Eh]@92
  char v99; // [sp+478Bh] [bp-450Dh]@92
  int v100; // [sp+55B4h] [bp-36E4h]@84
  char v101; // [sp+55B8h] [bp-36E0h]@82
  int v102; // [sp+56B8h] [bp-35E0h]@82
  char v103; // [sp+56BCh] [bp-35DCh]@78
  int v104; // [sp+57BCh] [bp-34DCh]@77
  int l; // [sp+57C0h] [bp-34D8h]@66
  int v106; // [sp+57C4h] [bp-34D4h]@66
  char *v107; // [sp+57C8h] [bp-34D0h]@64
  int v108; // [sp+57CCh] [bp-34CCh]@58
  char v109; // [sp+57D0h] [bp-34C8h]@58
  char v110; // [sp+57E0h] [bp-34B8h]@60
  char v111[36]; // [sp+58A0h] [bp-33F8h]@68
  __int16 v112[2936]; // [sp+58C4h] [bp-33D4h]@69
  int v113; // [sp+6FB4h] [bp-1CE4h]@53
  __int16 v114; // [sp+6FB8h] [bp-1CE0h]@51
  __int16 v115; // [sp+6FBCh] [bp-1CDCh]@51
  __int16 v116; // [sp+6FBEh] [bp-1CDAh]@51
  int v117; // [sp+6FC4h] [bp-1CD4h]@51
  int v118; // [sp+6FC8h] [bp-1CD0h]@51
  char v119; // [sp+6FDCh] [bp-1CBCh]@51
  int v120; // [sp+703Ch] [bp-1C5Ch]@46
  int v121; // [sp+7040h] [bp-1C58h]@46
  int v122; // [sp+7044h] [bp-1C54h]@44
  __int16 v123; // [sp+7048h] [bp-1C50h]@40
  __int16 v124; // [sp+704Ch] [bp-1C4Ch]@40
  __int16 v125; // [sp+704Eh] [bp-1C4Ah]@40
  int v126; // [sp+7054h] [bp-1C44h]@40
  int v127; // [sp+7058h] [bp-1C40h]@40
  char v128; // [sp+706Ch] [bp-1C2Ch]@40
  int k; // [sp+70CCh] [bp-1BCCh]@35
  int v130; // [sp+70D0h] [bp-1BC8h]@31
  char v131; // [sp+70D4h] [bp-1BC4h]@28
  char v132; // [sp+71D4h] [bp-1AC4h]@27
  int v133; // [sp+72D4h] [bp-19C4h]@19
  int v134; // [sp+72D8h] [bp-19C0h]@19
  int j; // [sp+72DCh] [bp-19BCh]@17
  int i; // [sp+72E0h] [bp-19B8h]@9
  char v137; // [sp+72E4h] [bp-19B4h]@8
  int v138; // [sp+73E4h] [bp-18B4h]@7
  const CHAR MultiByteStr; // [sp+73E8h] [bp-18B0h]@7
  char v140[4116]; // [sp+74B8h] [bp-17E0h]@11
  char v141[640]; // [sp+84CCh] [bp-7CCh]@27
  char v142[1152]; // [sp+874Ch] [bp-54Ch]@27
  int v143; // [sp+8BCCh] [bp-CCh]@5
  int v144; // [sp+8BD0h] [bp-C8h]@5
  int v145; // [sp+8BD4h] [bp-C4h]@5
  int v146; // [sp+8BD8h] [bp-C0h]@5
  __int16 v147; // [sp+8BDCh] [bp-BCh]@5
  __int16 v148; // [sp+8BDEh] [bp-BAh]@5
  int v149; // [sp+8BE4h] [bp-B4h]@5
  char v150; // [sp+8BE8h] [bp-B0h]@5
  int v151; // [sp+8BF8h] [bp-A0h]@5
  char v152; // [sp+8BFCh] [bp-9Ch]@5
  int v153; // [sp+8C0Ch] [bp-8Ch]@5
  char v154; // [sp+8C10h] [bp-88h]@3
  int v155; // [sp+8C90h] [bp-8h]@3
  int v156; // [sp+8C94h] [bp-4h]@1
  int v157; // [sp+8C98h] [bp+0h]@27

  memset(&v9, -858993460, 0x8C8Cu);
  v156 = a4;
  if ( !(*(_WORD *)(a4 + 4) & 0x2000) || (signed int)*(_WORD *)(v156 + 6) >= 10000 )
  {
    v155 = a4;
    sub_4343B0(a1, a2, (int)&v154, (int)"err,packet:%d ID:%d Size:%d KeyWord:%d", *(_WORD *)(a4 + 4));
    sub_401316(&v154, "-system");
    v4 = 0;
    return sub_434B10(1, v4, v8, v6, v7);
  }
  if ( *(_WORD *)(v156 + 4) == 12299 )
  {
    v153 = a4;
    v147 = 12300;
    LOWORD(v146) = 52;
    v149 = *(_DWORD *)(a4 + 12);
    v148 = *(_WORD *)(a4 + 6);
    v151 = 0;
    sub_435800((int)&v150, a4 + 16, 0x10u);
    sub_435800((int)&v152, v153 + 32, 0x10u);
    v145 = v153 + 16;
    v144 = *(_DWORD *)(v153 + 12);
    v143 = sub_401055(v153 + 16);
    if ( v143 )
    {
      v151 = 3;
      sub_401244(&v146, (unsigned __int16)v146);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    sub_434C80((void *)&MultiByteStr, (const void *)(v153 + 16), 0x10u);
    v138 = sub_40137F(&MultiByteStr, 1);
    if ( !v138 )
    {
      sub_4343B0(a1, a2, (int)&v137, (int)"etc,tranper_FAILED!!!!!(read) %s %s", v153 + 16);
      sub_401316(&v137, &MultiByteStr);
      v151 = 4;
      sub_401244(&v146, (unsigned __int16)v146);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    for ( i = 0; i < 4 && v140[756 * i]; ++i )
      ;
    if ( i == 4 )
    {
      v151 = 2;
      sub_401244(&v146, (unsigned __int16)v146);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    v138 = sub_401280((LPCVOID)(v153 + 16), v153 + 32, 0);
    if ( !v138 )
    {
      v151 = 1;
      sub_401244(&v146, (unsigned __int16)v146);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    for ( j = 0; j < 79; ++j )
    {
      v134 = v153 + 8 * j + 124;
      v133 = *(_WORD *)v134;
      if ( v133 == 446 || v133 >= 508 && v133 <= 509 || v133 >= 526 && v133 <= 537 || v133 == 522 )
        sub_40127B(a3, v134);
    }
    sub_4343B0(a1, a2, (int)&v132, (int)"etc,tranper_success(deleted) %s %s", v153 + 16);
    sub_401316(&v132, &MultiByteStr);
    sub_434C80(&v140[756 * i], (const void *)(v153 + 32), 0x2F4u);
    sub_434C80(&v141[160 * i], (const void *)(v153 + 788), 0xA0u);
    sub_434C80(&v142[288 * i], (const void *)(v153 + 948), 0x120u);
    sub_449530(a1, (int)&v157, a2, &MultiByteStr);
    v138 = sub_4013F2(&MultiByteStr, 1);
    if ( !v138 )
    {
      sub_4343B0(a1, a2, (int)&v131, (int)"etc,tranper_FAILED!!!!!(write) %s %s", v153 + 16);
      sub_401316(&v131, &MultiByteStr);
      v151 = 4;
      sub_401244(&v146, (unsigned __int16)v146);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    v151 = 0;
    sub_401244(&v146, (unsigned __int16)v146);
LABEL_198:
    v4 = 1;
    return sub_434B10(1, v4, v8, v6, v7);
  }
  if ( *(_WORD *)(v156 + 4) == 13321 )
  {
    v130 = a4;
    *(_BYTE *)(a4 + 35) = 0;
    *(_BYTE *)(v130 + 34) = 0;
    *(_BYTE *)(v130 + 131) = 0;
    *(_BYTE *)(v130 + 130) = 0;
    if ( *(_BYTE *)(v130 + 20) || *(_DWORD *)(v130 + 12) != 1 )
    {
      if ( dword_A95E58[30 * a3] > 0 )
      {
        v122 = sub_401055(v130 + 20);
        if ( v122 )
        {
          v121 = v122 / 1000;
          v120 = v122 % 1000;
          if ( v122 / 1000 >= 0 && v121 < 10 && v120 > 0 && v120 < 1000 )
          {
            v115 = 13321;
            v116 = v120;
            v114 = 132;
            v117 = 0;
            v118 = 0;
            sub_435800((int)&v119, v130 + 36, 0x60u);
            sub_401244(&v114, 132);
            v4 = 1;
          }
          else
          {
            sub_401311(a3, 0, "Wrong SVR and ID");
            v4 = 1;
          }
        }
        else
        {
          sub_401311(a3, 0, "Specified user not connected. can't send notice.");
          v4 = 1;
        }
      }
      else
      {
        v4 = 1;
      }
    }
    else
    {
      if ( dword_A95E58[30 * a3] > 0 )
      {
        for ( k = 0; k < 10; ++k )
        {
          if ( dword_1E01844[30 * k] && dword_1E01848[30 * k] )
          {
            v124 = 13321;
            v125 = 0;
            v123 = 132;
            v126 = 1;
            v127 = 1;
            sub_435800((int)&v128, v130 + 36, 0x60u);
            sub_401244(&v123, 132);
          }
        }
        v4 = 1;
      }
      else
      {
        v4 = 1;
      }
    }
  }
  else
  {
    if ( *(_WORD *)(v156 + 4) == 8194 )
    {
      v113 = a4;
      sub_449530(a1, (int)&v157, a2, (LPCSTR)(a4 + 12));
      if ( dword_A95E5C[30 * a3] != *(_DWORD *)(v113 + 28) || dword_A95E60[30 * a3] != *(_DWORD *)(v113 + 44) )
      {
        v4 = 0;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      if ( dword_A95E58[30 * a3] != -1 )
      {
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      sub_434C80(&v109, (const void *)(v113 + 12), 0x10u);
      v108 = sub_40137F(&v109, 1);
      if ( !v108 )
      {
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      if ( v110 == 95 )
      {
        v4 = 0;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      if ( v110 == 64 )
      {
        v4 = 0;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v107 = &v110;
      v108 = sub_435900(v113 + 32, (int)&v110, 16);
      if ( v108 )
      {
        v4 = 0;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v106 = 0;
      for ( l = 0; l < 4; ++l )
      {
        if ( v111[756 * l] && v112[378 * l] > v106 )
          v106 = v112[378 * l];
      }
      if ( v106 < 1000 )
      {
        v4 = 0;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      if ( v106 != 1024 && v106 > 1010 )
      {
        v4 = 0;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v104 = v106 - 1000;
      dword_A95E58[30 * a3] = v106 - 1000;
      dword_A95E74[30 * a3] = 0;
      sub_435800((int)&byte_A95E64[120 * a3], v113 + 12, 0x10u);
      if ( v104 == 24 )
        sub_4343B0(a1, a2, (int)&v103, (int)"sys,Admin Login Success - Level: 10", v6);
      else
        sub_4343B0(a1, a2, (int)&v103, (int)"sys,Admin Login Success - Level: %d", v104);
      sub_401316(&v103, &byte_A95E64[120 * a3]);
      sub_401311(a3, 0, &v103);
      goto LABEL_198;
    }
    if ( *(_WORD *)(v156 + 4) == 12302 )
    {
      v102 = v156;
      dword_4828C0 = *(_DWORD *)(v156 + 12);
      sub_4343B0(a1, a2, (int)&v101, (int)"sys, max current modified to %d", dword_4828C0);
      sub_401316(&v101, &byte_A95E64[120 * a3]);
      sub_40110E();
      goto LABEL_198;
    }
    if ( *(_WORD *)(v156 + 4) == 8195 )
    {
      v100 = a4;
      if ( dword_A95E58[30 * a3] <= 0 )
      {
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      sub_449530(a1, (int)&v157, a2, (LPCSTR)(v100 + 12));
      sub_449530(a1, (int)&v157, a2, (LPCSTR)(v100 + 28));
      if ( *(_BYTE *)(v100 + 28) )
        sub_401037(v100 + 12, v100 + 28);
      if ( !*(_BYTE *)(v100 + 12) )
      {
        sub_4010D2(a3, 0, 4100);
        sub_401311(a3, 0, "There's no account with that character name");
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      sub_434C80(&v87, (const void *)(v100 + 12), 0x10u);
      v86 = sub_40137F(&v87, 1);
      if ( !v86 )
      {
        sub_4010D2(a3, 0, 4100);
        sub_401311(a3, 0, "There's no account with that account name");
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v76 = 4101;
      LOWORD(v75) = 6132;
      v77 = 0;
      memcpy(&v78, &v87, 0x17E4u);
      v74 = sub_401055(v100 + 12);
      v84 = v74;
      v92 = 0;
      v91 = 0;
      v95 = 0;
      v94 = 0;
      v97 = 0;
      v96 = 0;
      v99 = 0;
      v98 = 0;
      v89 = 0;
      v88 = 0;
      sub_4343B0(a1, (int)&v100, (int)&v71, (int)"%s<%s|%s|%s|%s>", (unsigned int)&v87);
      v73 = 0;
      v72 = 0;
      sub_401311(a3, 0, &v71);
      if ( dword_A95E58[30 * a3] <= 0 )
      {
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v70 = 0;
      for ( m = 0; m < 4; ++m )
      {
        if ( v90[756 * m] && v93[378 * m] > v70 )
          v70 = v93[378 * m];
      }
      v68 = v70 - 1000;
      v85 = 0;
      if ( v79 == 64 )
        v85 = 1;
      if ( v79 == 95 )
        v85 = 2;
      if ( v79 == 35 )
        v85 = 3;
      v79 = sub_434B60() % 24 + 65;
      v80 = sub_434B60() % 24 + 65;
      v81 = sub_434B60() % 24 + 65;
      v82 = sub_434B60() % 24 + 65;
      v83 = 0;
      sub_401244(&v75, (unsigned __int16)v75);
      goto LABEL_198;
    }
    if ( *(_WORD *)(v156 + 4) == 8198 )
    {
      if ( dword_A95E58[30 * a3] <= 2 )
      {
        sub_401311(a3, 0, "Not allowed");
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v67 = a4;
      v66 = sub_401055(a4 + 12);
      if ( v66 )
      {
        sub_401311(a3, 0, "For saving, account should be disabled.");
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v65 = 0;
      for ( n = 0; n < 4; ++n )
      {
        if ( *(_BYTE *)(v67 + 756 * n + 220) && *(_WORD *)(v67 + 756 * n + 256) > v65 )
          v65 = *(_WORD *)(v67 + 756 * n + 256);
      }
      v63 = v65 - 1000;
      if ( v65 >= 1000 )
      {
        if ( v63 > dword_A95E58[30 * a3] )
        {
          sub_401311(a3, 0, "Set admin level error.");
          v4 = 1;
          return sub_434B10(1, v4, v8, v6, v7);
        }
        if ( v63 == dword_A95E58[30 * a3] && sub_4351F0((int)&byte_A95E64[120 * a3], v67 + 12) )
        {
          sub_401311(a3, 0, "Set admin level error.");
          v4 = 1;
          return sub_434B10(1, v4, v8, v6, v7);
        }
      }
      sub_434C80(&v55, (const void *)(v67 + 12), 0x10u);
      v54 = sub_40137F(&v55, 1);
      if ( !v54 )
      {
        sub_401311(a3, 0, "There's no account with that account name");
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      sub_434C80((void *)(v67 + 28), &v56, 0xCu);
      for ( n = 0; n < 4; ++n )
      {
        v53 = v67 + 756 * n + 220;
        v52 = (int)&v57[756 * n];
        if ( v67 + 756 * n != -220 && v52 && sub_4351F0(v53, v52) )
        {
          v51 = sub_401280((LPCVOID)(v67 + 12), v53, 0);
          if ( v51 )
            v51 = sub_4012DF(v52, v67 + 12);
          else
            sub_434B90(v53);
        }
      }
      v50 = sub_438DA0(v67 + 12, (int)&v55, 0x17E4u);
      if ( v50 && dword_A95E58[30 * a3] != 24 )
      {
        for ( ii = 0; ii < 4; ++ii )
        {
          if ( *(_BYTE *)(v67 + 756 * ii + 220) )
          {
            for ( jj = 0; jj < 64; ++jj )
            {
              v46 = sub_438DA0(v67 + 756 * ii + 220 + 8 * jj + 220, (int)(&v57[756 * ii + 220] + 8 * jj), 8u);
              if ( v46 )
                sub_40115E(ii, jj, v67 + 756 * ii + 220 + 8 * jj + 220, &v57[756 * ii + 220] + 8 * jj, &v55);
            }
            if ( *(_DWORD *)(v67 + 756 * ii + 244) != *(&v58 + 189 * ii) )
            {
              sub_4343B0(a1, a2, (int)&v49, (int)"npl,mob:%d coin before:%d next:%d", ii);
              sub_401316(&v49, &v55);
            }
            if ( *(_DWORD *)(v67 + 756 * ii + 248) != v59[189 * ii] )
            {
              sub_4343B0(a1, a2, (int)&v49, (int)"npl,mob:%d exp before:%d next:%d", ii);
              sub_401316(&v49, &v55);
            }
            if ( sub_438DA0(v67 + 756 * ii + 256, (int)&v60[756 * ii], 0x1Cu) )
            {
              sub_4343B0(a1, a2, (int)&v49, (int)"npl,mob:%d basic score changed. (level,str,int,dex,con,etc)", ii);
              sub_401316(&v49, &v55);
            }
          }
        }
        for ( ii = 0; ii < 128; ++ii )
        {
          v45 = sub_438DA0(v67 + 8 * ii + 3244, (int)&v61[8 * ii], 8u);
          if ( v45 )
            sub_40115E(4, ii, v67 + 8 * ii + 3244, &v61[8 * ii], &v55);
        }
        if ( *(_DWORD *)(v67 + 4268) != v62 )
        {
          sub_4343B0(a1, a2, (int)&v49, (int)"npl,mob:4 coin before:%d next:%d", v62);
          sub_401316(&v49, &v55);
        }
      }
      sub_4013F2((LPCVOID)(v67 + 12), 1);
      sub_4343B0(a1, a2, (int)&v44, (int)"Saving account [%s] success", v67 + 12);
      sub_401311(a3, 0, &v44);
      sub_4343B0(a1, a2, (int)&v44, (int)"sys,%s written", v67 + 12);
      if ( dword_A95E58[30 * a3] != 24 )
        sub_401316(&v44, &byte_A95E64[120 * a3]);
      if ( dword_5CDCF78 )
        sub_438B90(dword_5CDCF78);
      goto LABEL_198;
    }
    if ( *(_WORD *)(v156 + 4) == 12295 )
    {
      if ( dword_A95E58[30 * a3] <= 2 )
      {
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v43 = a4;
      *(_BYTE *)(a4 + 27) = 0;
      *(_BYTE *)(v43 + 26) = 0;
      sub_449530(a1, (int)&v157, a2, (LPCSTR)(v43 + 12));
      v42 = sub_401055(v43 + 12);
      if ( !v42 )
      {
        sub_40138E(a3, (LPCSTR)(v43 + 12));
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      sub_401352(v42, 1);
      dword_A95E74[30 * a3] = v42;
      goto LABEL_198;
    }
    if ( *(_WORD *)(v156 + 4) == 12296 )
    {
      if ( dword_A95E58[30 * a3] <= 2 )
      {
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      v41 = a4;
      *(_BYTE *)(a4 + 27) = 0;
      *(_BYTE *)(v41 + 26) = 0;
      sub_449530(a1, (int)&v157, a2, (LPCSTR)(v41 + 12));
      v40 = sub_401055(v41 + 12);
      if ( v40 )
      {
        sub_401311(a3, 0, "Check session. already playing.");
        v4 = 1;
        return sub_434B10(1, v4, v8, v6, v7);
      }
      sub_401334(a3, (LPCSTR)(v41 + 12));
      goto LABEL_198;
    }
    if ( *(_WORD *)(v156 + 4) != 15373 )
      goto LABEL_198;
    v39 = a4;
    if ( !sub_4351F0(a4 + 396, (int)"msg_weblogin") )
    {
      sub_401230(a4, a3);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    if ( !sub_4351F0(v39 + 396, (int)"msg_webfail") )
    {
      sub_401230(a4, a3);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    if ( !sub_4351F0(v39 + 396, (int)"msg_cashreconnect") )
    {
      v35 = 3083;
      sub_4343B0(a1, a2, (int)&v38, (int)"+stopgoldcoin 0", v6);
      v36 = 0;
      v37 = 6;
      v34 = 112;
      sub_401230(&v34, a3);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    if ( !sub_4351F0(v39 + 396, (int)"msg_cashsrverr") )
    {
      v30 = 3083;
      sub_4343B0(a1, a2, (int)&v33, (int)"+stopgoldcoin 1", v6);
      v31 = 0;
      v32 = 6;
      v29 = 112;
      sub_401230(&v29, a3);
      v4 = 1;
      return sub_434B10(1, v4, v8, v6, v7);
    }
    if ( sub_4351F0(v39 + 396, (int)"msg_cashok") )
    {
      if ( sub_4351F0(v39 + 396, (int)"msg_casherr") )
      {
        sub_4012F8(v39 + 12, v39 + 396, v39 + 428);
        goto LABEL_198;
      }
      v16 = 1217;
      v17 = 0;
      v15 = 80;
      v18 = 1;
      v13 = 0;
      v12 = 0;
      sub_4347B0(a1, (int)&v157, a2, v39 + 12, "%s %d %s %d", (unsigned int)&v14);
      if ( sub_4351F0((int)&v14, (int)"CashError") )
      {
        sub_4343B0(a1, a2, (int)&v10, (int)"err, cash %s", v39 + 12);
        sub_401316(&v10, "-system");
      }
      else
      {
        sub_4343B0(a1, a2, (int)&v19, (int)"%s %d", (unsigned int)&v11);
        sub_401244(&v15, 80);
      }
      v4 = 1;
    }
    else
    {
      v25 = 1217;
      v26 = 0;
      v24 = 80;
      v27 = 1;
      v22 = 0;
      sub_4347B0(a1, (int)&v157, a2, v39 + 12, "%s %d %s", (unsigned int)&v23);
      if ( sub_4351F0((int)&v23, (int)"CashOK") )
      {
        sub_4343B0(a1, a2, (int)&v20, (int)"err, cash %s", v39 + 12);
        sub_401316(&v20, "-system");
      }
      else
      {
        sub_4343B0(a1, a2, (int)&v28, (int)"%s", (unsigned int)&v21);
        sub_401244(&v24, 80);
      }
      v4 = 1;
    }
  }
  return sub_434B10(1, v4, v8, v6, v7);
}
// 401037: using guessed type _DWORD __stdcall sub_401037(_DWORD, _DWORD);
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 4010D2: using guessed type _DWORD __cdecl sub_4010D2(_DWORD, __int16, __int16);
// 40110E: using guessed type int sub_40110E(void);
// 40115E: using guessed type _DWORD __cdecl sub_40115E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 401230: using guessed type _DWORD __stdcall sub_401230(_DWORD, _DWORD);
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 40127B: using guessed type _DWORD __cdecl sub_40127B(_DWORD, _DWORD);
// 401280: using guessed type _DWORD __stdcall sub_401280(LPCVOID lpBuffer, _DWORD, _DWORD);
// 4012DF: using guessed type _DWORD __stdcall sub_4012DF(_DWORD, _DWORD);
// 4012F8: using guessed type _DWORD __cdecl sub_4012F8(_DWORD, _DWORD, _DWORD);
// 401311: using guessed type _DWORD __cdecl sub_401311(_DWORD, __int16, _DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 401334: using guessed type _DWORD __cdecl sub_401334(_DWORD, LPCSTR lpMultiByteStr);
// 401352: using guessed type _DWORD __stdcall sub_401352(_DWORD, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 40138E: using guessed type _DWORD __cdecl sub_40138E(_DWORD, LPCSTR lpMultiByteStr);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 438B90: using guessed type _DWORD __cdecl sub_438B90(_DWORD);
// 4828C0: using guessed type int dword_4828C0;
// A95E58: using guessed type int dword_A95E58[];
// A95E5C: using guessed type int dword_A95E5C[];
// A95E60: using guessed type int dword_A95E60[];
// A95E74: using guessed type int dword_A95E74[];
// 1E01844: using guessed type int dword_1E01844[];
// 1E01848: using guessed type int dword_1E01848[];
// 5CDCF78: using guessed type int dword_5CDCF78;
// 42C630: using guessed type char var_17E0[4116];
// 42C630: using guessed type char var_7CC[640];
// 42C630: using guessed type char var_54C[1152];
// 42C630: using guessed type char var_33F8[36];
// 42C630: using guessed type __int16 var_33D4[2936];
// 42C630: using guessed type char var_4DF8[14];
// 42C630: using guessed type __int16 var_4DD4[360];
// 42C630: using guessed type char var_7EF8[24];
// 42C630: using guessed type int var_7EDC[2];
// 42C630: using guessed type char var_7ED4[2988];
// 42C630: using guessed type char var_7328[1024];

//----- (0042EB10) --------------------------------------------------------
int __usercall sub_42EB10<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@3
  char v4; // [sp+0h] [bp-74h]@0
  int v5; // [sp+4h] [bp-70h]@0
  int v6; // [sp+8h] [bp-6Ch]@0
  char v7; // [sp+Ch] [bp-68h]@1
  char v8; // [sp+4Ch] [bp-28h]@1
  char v9; // [sp+50h] [bp-24h]@1
  int v10; // [sp+74h] [bp+0h]@1

  memset(&v7, -858993460, 0x68u);
  ++dword_5CDCF44;
  sub_435BA0(a1, (int)&v10, a2, (int)&v8);
  memcpy(&v9, (const void *)sub_435940(a1, (int)&v10, a2, (signed int *)&v8), 0x24u);
  if ( !(dword_5CDCF44 % 120) )
    sub_4012A8();
  v2 = dword_5CDCF44 / 30;
  if ( !(dword_5CDCF44 % 30) )
  {
    if ( dword_5CDCF44 % 600 )
      v2 = sub_4011CC(1);
    else
      v2 = sub_4011CC(0);
  }
  return sub_434B10(1, v2, v6, v4, v5);
}
// 4011CC: using guessed type _DWORD __cdecl sub_4011CC(_DWORD);
// 4012A8: using guessed type int sub_4012A8(void);
// 5CDCF44: using guessed type int dword_5CDCF44;

//----- (0042EBF0) --------------------------------------------------------
signed int __cdecl sub_42EBF0()
{
  return -858993460;
}

//----- (0042EC20) --------------------------------------------------------
int __usercall sub_42EC20<eax>(int a1<ebx>, int a2<esi>, char a3)
{
  int v3; // eax@4
  int v4; // esi@4
  char v6; // [sp+0h] [bp-178h]@0
  int v7; // [sp+4h] [bp-174h]@0
  int v8; // [sp+8h] [bp-170h]@0
  char v9; // [sp+Ch] [bp-16Ch]@1
  char v10; // [sp+4Ch] [bp-12Ch]@4
  char v11; // [sp+50h] [bp-128h]@4
  int v12; // [sp+74h] [bp-104h]@2
  char v13; // [sp+78h] [bp-100h]@4
  int v14; // [sp+178h] [bp+0h]@4

  memset(&v9, -858993460, 0x16Cu);
  if ( dword_5CDCF78 )
  {
    v12 = sub_4346D0(a1, a2, dword_5CDCF78);
    if ( v12 )
      sub_401316("Logfile close fail!!", "-system");
  }
  sub_435BA0(a1, (int)&v14, a2, (int)&v10);
  v3 = sub_435940(a1, (int)&v14, a2, (signed int *)&v10);
  memcpy(&v11, (const void *)v3, 0x24u);
  v4 = v3 + 36;
  sub_4343B0(a1, v3 + 36, (int)&v13, (int)".\\Log\\%s%4.4d_%2.2d_%2.2d_%2.2d_%2.2d.txt", a3);
  dword_5CDCF78 = sub_434A90(a1, v4, &v13, (int)&unk_4768B4);
  return sub_434B10(1, dword_5CDCF78, v8, v6, v7);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 5CDCF78: using guessed type int dword_5CDCF78;

//----- (0042ED60) --------------------------------------------------------
int __usercall sub_42ED60<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  int v3; // esi@1
  int v4; // eax@3
  int v5; // eax@3
  char v7; // [sp+0h] [bp-274h]@2
  int v8; // [sp+4h] [bp-270h]@3
  int v9; // [sp+8h] [bp-26Ch]@3
  char v10; // [sp+Ch] [bp-268h]@1
  const CHAR String; // [sp+4Ch] [bp-228h]@1
  char v12; // [sp+24Ch] [bp-28h]@1
  int v13; // [sp+250h] [bp-24h]@1
  int v14; // [sp+264h] [bp-10h]@1
  int v15; // [sp+274h] [bp+0h]@1

  memset(&v10, -858993460, 0x268u);
  sub_435BA0(a1, (int)&v15, a2, (int)&v12);
  v2 = sub_435940(a1, (int)&v15, a2, (signed int *)&v12);
  memcpy(&v13, (const void *)v2, 0x24u);
  v3 = v2 + 36;
  sub_4343B0(a1, v2 + 36, (int)&String, (int)"%2.2d%2.2d%2.2d,%2.2d%2.2d%2.2d", v14 - 100);
  sub_4343B0(a1, v3, (int)&String, (int)"%s,%s,%s\n", (unsigned int)&String);
  if ( dword_5CDCF78 )
    sub_438730(a1, v3, dword_5CDCF78, (int)&String, v7);
  v4 = SetWindowTextA(hWnd, &String);
  v5 = sub_434B10(&v7 == &v7, v4, a1, (unsigned int)&v15, (int)&v7);
  return sub_434B10(1, v5, v9, v7, v8);
}
// 5CDCF78: using guessed type int dword_5CDCF78;

//----- (0042EE80) --------------------------------------------------------
signed int __cdecl sub_42EE80(int a1)
{
  char v2; // [sp+Ch] [bp-44h]@1
  int i; // [sp+4Ch] [bp-4h]@1

  memset(&v2, -858993460, 0x44u);
  for ( i = 0; i < 10; ++i )
  {
    if ( dword_1E01848[30 * i] == a1 )
      return i;
  }
  return -1;
}
// 1E01848: using guessed type int dword_1E01848[];

//----- (0042EEF0) --------------------------------------------------------
signed int __cdecl sub_42EEF0(int a1)
{
  char v2; // [sp+Ch] [bp-44h]@1
  int i; // [sp+4Ch] [bp-4h]@1

  memset(&v2, -858993460, 0x44u);
  for ( i = 0; i < 24; ++i )
  {
    if ( dword_A95E08[30 * i] == a1 )
      return i;
  }
  return -1;
}
// A95E08: using guessed type int dword_A95E08[];

//----- (0042F6A0) --------------------------------------------------------
int __usercall sub_42F6A0<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx@5
  int v9; // edx@5
  int v10; // eax@5
  int v11; // ecx@10
  int v12; // edx@10
  char v14; // [sp+0h] [bp-62Ch]@0
  int v15; // [sp+4h] [bp-628h]@0
  int v16; // [sp+8h] [bp-624h]@0
  char v17; // [sp+Ch] [bp-620h]@1
  char v18; // [sp+4Ch] [bp-5E0h]@13
  __int16 v19; // [sp+24Ch] [bp-3E0h]@13
  __int16 v20; // [sp+250h] [bp-3DCh]@13
  __int16 v21; // [sp+252h] [bp-3DAh]@13
  int v22; // [sp+258h] [bp-3D4h]@13
  int v23; // [sp+25Ch] [bp-3D0h]@13
  char v24; // [sp+270h] [bp-3BCh]@13
  char v25; // [sp+2D0h] [bp-35Ch]@13
  char v26; // [sp+3D0h] [bp-25Ch]@13
  int v27; // [sp+4D0h] [bp-15Ch]@9
  int v28; // [sp+4D4h] [bp-158h]@4
  int i; // [sp+4D8h] [bp-154h]@2
  int v30; // [sp+4DCh] [bp-150h]@2
  char v31; // [sp+4E0h] [bp-14Ch]@2
  __int16 v32; // [sp+5E0h] [bp-4Ch]@2
  __int16 v33; // [sp+5E4h] [bp-48h]@2
  __int16 v34; // [sp+5E6h] [bp-46h]@2
  char v35; // [sp+5F0h] [bp-3Ch]@2
  int v36; // [sp+600h] [bp-2Ch]@2
  int v37; // [sp+604h] [bp-28h]@2
  int v38; // [sp+608h] [bp-24h]@2
  int v39; // [sp+60Ch] [bp-20h]@2
  int v40; // [sp+610h] [bp-1Ch]@2
  int v41; // [sp+614h] [bp-18h]@2
  int v42; // [sp+618h] [bp-14h]@2
  int v43; // [sp+61Ch] [bp-10h]@2
  int v44; // [sp+620h] [bp-Ch]@2
  int v45; // [sp+624h] [bp-8h]@2
  int v46; // [sp+628h] [bp-4h]@2
  int v47; // [sp+62Ch] [bp+0h]@2

  memset(&v17, -858993460, 0x620u);
  if ( sub_4351F0(a6, (int)"_I_ _I_") )
  {
    v26 = 0;
    v25 = 0;
    sub_4347B0(a1, (int)&v47, a2, a7, "%s %s", (unsigned int)&v26);
    v20 = 13321;
    v21 = a4;
    v19 = 132;
    v22 = 0;
    v23 = 0;
    sub_4343B0(a1, a2, (int)&v18, (int)"!%s! %s", (unsigned int)&v25);
    sub_435800((int)&v24, (int)&v18, 0x60u);
    v10 = sub_401244(&v19, 132);
  }
  else
  {
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_4347B0(a1, (int)&v47, a2, a5, "%d %d %d %d %d %d %d", (unsigned int)&v46);
    LOWORD(v38) = v46;
    BYTE2(v38) = v45;
    BYTE3(v38) = v44;
    LOBYTE(v39) = v43;
    BYTE1(v39) = v42;
    BYTE2(v39) = v41;
    BYTE3(v39) = v40;
    v33 = 3087;
    v32 = 40;
    v34 = a4;
    sub_435800((int)&v35, a8, 0x10u);
    v36 = v38;
    v37 = v39;
    sub_401244(&v32, 40);
    sub_4343B0(a1, a2, (int)&v31, (int)"-SENDITEM %s", a5);
    sub_401316(&v31, a8);
    v30 = a4 + 1000 * a3;
    for ( i = 0; i < 126; ++i )
    {
      v28 = sub_4010A5(&v38, &dword_1E229A0[1546 * v30], i % 9, i / 9);
      if ( v28 == 1 )
      {
        v8 = 6184 * v30;
        v9 = i;
        *(&dword_1E229A0[1546 * v30] + 2 * i) = v38;
        *(int *)((char *)&dword_1E229A4[2 * v9] + v8) = v39;
        sub_4013F2((char *)&unk_1E21D00 + 6184 * v30, 1);
        sub_4343B0(a1, a2, (int)&v31, (int)"-CARGO %s", a5);
        v10 = sub_401316(&v31, a8);
        return sub_434B10(1, v10, v16, v14, v15);
      }
    }
    for ( i = 127; i >= 0; --i )
    {
      v27 = *((_WORD *)&dword_1E229A0[1546 * v30] + 4 * i);
      if ( !v27 )
      {
        v11 = 6184 * v30;
        v12 = i;
        *(&dword_1E229A0[1546 * v30] + 2 * i) = v38;
        *(int *)((char *)&dword_1E229A4[2 * v12] + v11) = v39;
        sub_4013F2((char *)&unk_1E21D00 + 6184 * v30, 1);
        sub_4343B0(a1, a2, (int)&v31, (int)"-CARGO2 %s", a5);
        v10 = sub_401316(&v31, a8);
        return sub_434B10(1, v10, v16, v14, v15);
      }
    }
    sub_4343B0(a1, a2, (int)&v31, (int)"-ERRCARGO %s", a5);
    v10 = sub_401316(&v31, a8);
  }
  return sub_434B10(1, v10, v16, v14, v15);
}
// 4010A5: using guessed type _DWORD __cdecl sub_4010A5(_DWORD, _DWORD, _DWORD, _DWORD);
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 1E229A0: using guessed type int dword_1E229A0[];
// 1E229A4: using guessed type int dword_1E229A4[];

//----- (0042FBA0) --------------------------------------------------------
int __cdecl sub_42FBA0(int a1)
{
  int v1; // eax@1
  char v3; // [sp+0h] [bp-1E0h]@0
  int v4; // [sp+4h] [bp-1DCh]@0
  int v5; // [sp+8h] [bp-1D8h]@0
  char v6; // [sp+Ch] [bp-1D4h]@1
  int i; // [sp+4Ch] [bp-194h]@1
  __int16 v8; // [sp+50h] [bp-190h]@1
  __int16 v9; // [sp+54h] [bp-18Ch]@1
  __int16 v10; // [sp+56h] [bp-18Ah]@1
  __int16 v11; // [sp+5Ch] [bp-184h]@1
  __int16 v12; // [sp+5Eh] [bp-182h]@1
  char v13; // [sp+60h] [bp-180h]@1
  char v14; // [sp+C0h] [bp-120h]@1
  char v15; // [sp+120h] [bp-C0h]@1
  char v16; // [sp+180h] [bp-60h]@1

  memset(&v6, -858993460, 0x1D4u);
  v9 = 1969;
  v8 = 400;
  v10 = 0;
  v11 = 10;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_434C80(&v13, (const void *)a1, 0x60u);
  sub_434C80(&v14, (const void *)(a1 + 96), 0x60u);
  sub_434C80(&v15, (const void *)(a1 + 192), 0x60u);
  v1 = (int)sub_434C80(&v16, (const void *)(a1 + 288), 0x60u);
  for ( i = 0; i < 10; ++i )
  {
    v1 = 120 * i;
    if ( dword_1E01844[30 * i] )
    {
      if ( dword_1E01848[30 * i] )
        v1 = sub_401244(&v8, 400);
    }
  }
  return sub_434B10(1, v1, v5, v3, v4);
}
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 1E01844: using guessed type int dword_1E01844[];
// 1E01848: using guessed type int dword_1E01848[];

//----- (0042FD40) --------------------------------------------------------
int __usercall sub_42FD40<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5)
{
  int v5; // eax@2
  char v7; // [sp+0h] [bp-6F0h]@0
  int v8; // [sp+4h] [bp-6ECh]@0
  int v9; // [sp+8h] [bp-6E8h]@0
  char v10; // [sp+Ch] [bp-6E4h]@1
  int v11; // [sp+4Ch] [bp-6A4h]@12
  char v12; // [sp+50h] [bp-6A0h]@12
  int v13; // [sp+150h] [bp-5A0h]@9
  int v14; // [sp+154h] [bp-59Ch]@9
  int v15; // [sp+158h] [bp-598h]@9
  const CHAR MultiByteStr; // [sp+15Ch] [bp-594h]@9
  char v17; // [sp+25Ch] [bp-494h]@8
  int v18; // [sp+2DCh] [bp-414h]@6
  int v19; // [sp+2E0h] [bp-410h]@6
  char v20; // [sp+2E4h] [bp-40Ch]@6
  char v21; // [sp+364h] [bp-38Ch]@6
  int v22; // [sp+3E4h] [bp-30Ch]@4
  char v23; // [sp+3E8h] [bp-308h]@4
  char v24; // [sp+468h] [bp-288h]@4
  char v25; // [sp+4E8h] [bp-208h]@4
  char v26; // [sp+568h] [bp-188h]@4
  int v27; // [sp+5E8h] [bp-108h]@4
  int v28; // [sp+5ECh] [bp-104h]@4
  char v29; // [sp+5F0h] [bp-100h]@4
  char v30; // [sp+670h] [bp-80h]@4
  int v31; // [sp+6F0h] [bp+0h]@4

  memset(&v10, -858993460, 0x6E4u);
  *(_BYTE *)(a3 + 255) = 0;
  *(_BYTE *)(a3 + 254) = 0;
  if ( sub_4351F0(a4, (int)"_M_ _M_") )
  {
    if ( sub_4351F0(a4, (int)"_A_ _A_") )
    {
      if ( sub_4351F0(a4, (int)"_P_ _P_") )
      {
        if ( sub_4351F0(a4, (int)"_L_ _L_") )
        {
          MultiByteStr = 0;
          sub_4347B0(a1, (int)&v31, a2, a5, "%s", (unsigned int)&MultiByteStr);
          sub_449530(a1, (int)&v31, a2, &MultiByteStr);
          v15 = sub_401055(&MultiByteStr);
          v14 = v15 / 1000;
          v13 = v15 % 1000;
          if ( v15 <= 0 || v15 >= 10000 )
          {
            sub_4343B0(a1, a2, (int)&v12, (int)"./buffer/%s.txt", (unsigned int)&MultiByteStr);
            v11 = sub_434A90(a1, a2, &v12, (int)"a+");
            if ( v11 )
            {
              sub_438730(a1, a2, v11, (int)"%s _ %s _ %s\r\n", a4);
              v5 = sub_4346D0(a1, a2, v11);
            }
            else
            {
              v5 = sub_401316(a3, "-DBA_ERROR_FILE");
            }
          }
          else
          {
            v5 = sub_40101E(v14, v13, a3, a4, a5, &MultiByteStr);
          }
        }
        else
        {
          sub_4347B0(a1, (int)&v31, a2, a3, "%s", (unsigned int)&v17);
          v5 = sub_401307(&v17);
        }
      }
      else
      {
        sub_4347B0(a1, (int)&v31, a2, a3, "%s %s %d %d", (unsigned int)&v21);
        v5 = sub_401460(&v21, &v20, v19, v18);
      }
    }
    else
    {
      v28 = 0;
      v27 = 0;
      v26 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v22 = 0;
      sub_4347B0(a1, (int)&v31, a2, a3, "%s %s %d %d %d", (unsigned int)&v30);
      v5 = sub_4013D4(&v30, &v29, &v26, v28, v27, &v25, &v24, &v23, v22);
    }
  }
  else
  {
    v5 = sub_40131B(a3);
  }
  return sub_434B10(1, v5, v9, v7, v8);
}
// 40101E: using guessed type _DWORD __cdecl sub_40101E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 401307: using guessed type _DWORD __stdcall sub_401307(_DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 40131B: using guessed type _DWORD __cdecl sub_40131B(_DWORD);
// 4013D4: using guessed type _DWORD __stdcall sub_4013D4(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 401460: using guessed type _DWORD __stdcall sub_401460(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (004302E0) --------------------------------------------------------
int __usercall sub_4302E0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // edi@1
  int v3; // eax@1
  void *v4; // edi@10
  char v6; // [sp+0h] [bp-4C8h]@0
  int v7; // [sp+4h] [bp-4C4h]@0
  int v8; // [sp+8h] [bp-4C0h]@0
  char v9; // [sp+Ch] [bp-4BCh]@1
  int v10; // [sp+4Ch] [bp-47Ch]@10
  int v11; // [sp+50h] [bp-478h]@10
  int v12; // [sp+54h] [bp-474h]@10
  int v13; // [sp+58h] [bp-470h]@10
  int v14; // [sp+5Ch] [bp-46Ch]@6
  int v15; // [sp+60h] [bp-468h]@6
  char v16; // [sp+96h] [bp-432h]@9
  int v17; // [sp+98h] [bp-430h]@9
  int v18; // [sp+9Ch] [bp-42Ch]@6
  DWORD nNumberOfBytesToRead; // [sp+A0h] [bp-428h]@6
  int v20; // [sp+A4h] [bp-424h]@5
  int v21; // [sp+A8h] [bp-420h]@3
  char v22; // [sp+ACh] [bp-41Ch]@5
  const CHAR MultiByteStr; // [sp+1ACh] [bp-31Ch]@5
  HANDLE hFindFile; // [sp+2ACh] [bp-21Ch]@1
  int v25; // [sp+2B0h] [bp-218h]@1
  char v26; // [sp+2C4h] [bp-204h]@2
  char v27; // [sp+3C8h] [bp-100h]@10
  int v28; // [sp+4C8h] [bp+0h]@1

  memset(&v9, -858993460, 0x4BCu);
  v2 = (int)&v28;
  v3 = sub_438E50(a1, (int)&v28, a2, "./guild/*.*", (int)&v25);
  hFindFile = (HANDLE)v3;
  if ( v3 != -1 )
  {
    do
    {
      while ( v26 == 46 )
      {
        v3 = sub_438F90(a1, v2, a2, hFindFile, (int)&v25);
        v21 = v3;
        if ( v3 )
          goto LABEL_12;
      }
      sub_434B90((int)&MultiByteStr);
      sub_449530(a1, v2, a2, &MultiByteStr);
      sub_4343B0(a1, a2, (int)&v22, (int)"./guild/%s", (unsigned int)&MultiByteStr);
      v3 = sub_444AE0(a1, a2, &v22, -32768, 0);
      v20 = v3;
      if ( v3 == -1 )
        return sub_434B10(1, v3, v8, v6, v7);
      nNumberOfBytesToRead = sub_4362A0(v20);
      v18 = 60;
      v14 = sub_43DAC0(v20, (int)&v15, nNumberOfBytesToRead);
      if ( v14 == -1 )
      {
        v3 = sub_43AC10(v20);
        return sub_434B10(1, v3, v8, v6, v7);
      }
      sub_43AC10(v20);
      if ( v18 != nNumberOfBytesToRead )
      {
        v16 = 0;
        v17 = 0;
      }
      v13 = v15;
      v12 = v15 >> 12;
      v11 = v15 & 0xFFF;
      v4 = &dword_591B7A0[61440 * (v15 >> 12)] + 15 * (v15 & 0xFFF);
      memcpy(v4, &v15, 0x3Cu);
      a2 = (int)&v18;
      v2 = (int)((char *)v4 + 60);
      sub_4343B0(a1, (int)&v18, (int)&v27, (int)"%d,%s,%s,%s,%s,%d,%d,%d,%d", v15);
      sub_401316(&v27, "-system");
      *(&byte_591B7D4[245760 * v12] + 60 * v11) = 1;
      v3 = sub_438F90(a1, v2, (int)&v18, hFindFile, (int)&v25);
      v10 = v3;
    }
    while ( !v3 );
LABEL_12:
    if ( hFindFile != (HANDLE)-1 )
      v3 = sub_4390C0(hFindFile);
  }
  return sub_434B10(1, v3, v8, v6, v7);
}
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 591B7A0: using guessed type int dword_591B7A0[];

//----- (00430650) --------------------------------------------------------
int __usercall sub_430650<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // eax@1
  int v3; // eax@11
  int v4; // eax@21
  int v5; // eax@30
  int v6; // eax@45
  int v7; // eax@46
  int v8; // eax@50
  int v9; // eax@52
  int v10; // eax@55
  int v11; // eax@56
  char v13; // [sp+0h] [bp-1EECh]@11
  int v14; // [sp+4h] [bp-1EE8h]@62
  int v15; // [sp+8h] [bp-1EE4h]@62
  char v16; // [sp+Ch] [bp-1EE0h]@1
  char v17; // [sp+4Ch] [bp-1EA0h]@55
  int v18; // [sp+14Ch] [bp-1DA0h]@50
  int v19; // [sp+150h] [bp-1D9Ch]@48
  int v20; // [sp+154h] [bp-1D98h]@46
  int v21; // [sp+158h] [bp-1D94h]@45
  int j; // [sp+15Ch] [bp-1D90h]@39
  int v23; // [sp+160h] [bp-1D8Ch]@35
  int i; // [sp+164h] [bp-1D88h]@33
  int v25; // [sp+168h] [bp-1D84h]@33
  int v26; // [sp+16Ch] [bp-1D80h]@31
  int v27; // [sp+170h] [bp-1D7Ch]@28
  char v28; // [sp+174h] [bp-1D78h]@28
  int v29; // [sp+E14h] [bp-10D8h]@35
  int v30[720]; // [sp+E18h] [bp-10D4h]@50
  __int16 v31; // [sp+1958h] [bp-594h]@27
  __int16 v32; // [sp+195Ch] [bp-590h]@27
  __int16 v33; // [sp+195Eh] [bp-58Eh]@27
  char v34; // [sp+1968h] [bp-584h]@27
  int v35; // [sp+1978h] [bp-574h]@27
  int v36; // [sp+197Ch] [bp-570h]@27
  int v37; // [sp+1980h] [bp-56Ch]@27
  int v38; // [sp+1984h] [bp-568h]@27
  int v39; // [sp+1988h] [bp-564h]@23
  int v40; // [sp+198Ch] [bp-560h]@23
  int v41; // [sp+1990h] [bp-55Ch]@23
  int v42; // [sp+1994h] [bp-558h]@23
  int v43; // [sp+1998h] [bp-554h]@21
  int v44; // [sp+199Ch] [bp-550h]@11
  int v45; // [sp+19A0h] [bp-54Ch]@10
  int v46; // [sp+19A4h] [bp-548h]@10
  int v47; // [sp+19A8h] [bp-544h]@10
  int v48; // [sp+19ACh] [bp-540h]@10
  int v49; // [sp+19B0h] [bp-53Ch]@10
  int v50; // [sp+19B4h] [bp-538h]@10
  int v51; // [sp+19B8h] [bp-534h]@10
  int v52; // [sp+19BCh] [bp-530h]@10
  const CHAR MultiByteStr; // [sp+19C0h] [bp-52Ch]@10
  int v54; // [sp+1AC0h] [bp-42Ch]@8
  int v55; // [sp+1AC4h] [bp-428h]@5
  int v56; // [sp+1AC8h] [bp-424h]@7
  int v57; // [sp+1ACCh] [bp-420h]@2
  HANDLE hFindFile; // [sp+1AD0h] [bp-41Ch]@1
  int v59; // [sp+1AD4h] [bp-418h]@1
  char v60; // [sp+1AE8h] [bp-404h]@4
  const CHAR NewFileName; // [sp+1BECh] [bp-300h]@7
  const CHAR FileName; // [sp+1CECh] [bp-200h]@1
  const CHAR ExistingFileName; // [sp+1DECh] [bp-100h]@7
  int v64; // [sp+1EECh] [bp+0h]@1

  memset(&v16, -858993460, 0x1EE0u);
  sub_4343B0(a1, a2, (int)&FileName, (int)"Q:/serv%2.2d/item/*.*", dword_4828AC);
  v2 = sub_438E50(a1, (int)&v64, a2, &FileName, (int)&v59);
  hFindFile = (HANDLE)v2;
  if ( v2 != -1 )
  {
    v57 = 0;
    while ( 1 )
    {
      ++v57;
      if ( v57 > 10 )
        break;
      if ( v60 == 46 )
      {
        v2 = sub_438F90(a1, (int)&v64, a2, hFindFile, (int)&v59);
        v55 = v2;
        if ( v2 )
          break;
      }
      else
      {
        sub_4343B0(a1, a2, (int)&ExistingFileName, (int)"Q:/serv%2.2d/item/%s", dword_4828AC);
        sub_4343B0(a1, a2, (int)&NewFileName, (int)"Q:/serv%2.2d/err/%s", dword_4828AC);
        v56 = sub_434A90(a1, a2, &ExistingFileName, (int)"rt");
        if ( v56 )
        {
          MultiByteStr = 0;
          v46 = 0;
          v47 = 0;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          v51 = 0;
          v52 = 0;
          v45 = sub_434870(a1, a2, (int)&FileName, 256, v56);
          if ( v45 )
          {
            sub_4347B0(a1, (int)&v64, a2, (int)&FileName, "%s %d %d %d %d %d %d %d  ", (unsigned int)&MultiByteStr);
            sub_4346D0(a1, a2, v56);
            sub_401316(&FileName, "-IMPORT starting");
            sub_449530(a1, (int)&v64, a2, &MultiByteStr);
            if ( v52 >= 0 && v52 < 4096 && v51 >= 0 && v49 >= 0 && v47 >= 0 && v51 <= 255 && v49 <= 255 && v47 <= 255 )
            {
              LOWORD(v41) = v52;
              BYTE2(v41) = v51;
              BYTE3(v41) = v50;
              LOBYTE(v42) = v49;
              BYTE1(v42) = v48;
              BYTE2(v42) = v47;
              BYTE3(v42) = v46;
              v40 = 0;
              v39 = sub_401055(&MultiByteStr);
              if ( v39 > 0 && v39 < 10000 && dword_1E21CFC[1546 * v39] >= 0 && dword_1E21CFC[1546 * v39] <= 3 )
              {
                v38 = v39 / 1000;
                v37 = v39 % 1000;
                v32 = 3087;
                v31 = 40;
                v33 = v39 % 1000;
                sub_435800((int)&v34, (int)&MultiByteStr, 0x10u);
                v35 = v41;
                v36 = v42;
                sub_401244(&v31, 40);
                sub_401316(&ExistingFileName, "-IMPORT ITEM RUNTIME - sent");
                v40 = 1;
              }
              sub_434AB0(&v28, 0, 0x17E4u);
              sub_449530(a1, (int)&v64, a2, &MultiByteStr);
              sub_434C80(&v28, &MultiByteStr, 0x10u);
              v27 = sub_40137F(&v28, 1);
              if ( v27 )
              {
                v25 = -1;
                for ( i = 0; i < 126; ++i )
                {
                  v23 = sub_4010A5(&v41, &v29, i % 9, i / 9);
                  if ( v23 == 1 )
                  {
                    v25 = i;
                    break;
                  }
                }
                if ( v25 == -1 )
                {
                  for ( j = 127; j >= 0; --j )
                  {
                    if ( !*((_WORD *)&v29 + 4 * j) )
                    {
                      v25 = j;
                      break;
                    }
                  }
                }
                if ( v25 == -1 )
                {
                  a2 = (int)&v13;
                  v6 = MoveFileA(&ExistingFileName, &NewFileName);
                  v21 = sub_434B10(&v13 == &v13, v6, a1, (unsigned int)&v64, (int)&v13);
                  if ( v21 )
                  {
                    sub_401316(&FileName, "-IMPORT no space, file moved to err");
                  }
                  else
                  {
                    a2 = (int)&v13;
                    v7 = GetLastError();
                    v20 = sub_434B10(&v13 == &v13, v7, a1, (unsigned int)&v64, (int)&v13);
                    sub_401316(&FileName, "-IMPORT no space, move failed");
                  }
                  v2 = sub_438F90(a1, (int)&v64, a2, hFindFile, (int)&v59);
                  v19 = v2;
                  if ( v2 )
                    break;
                }
                else
                {
                  v8 = v25;
                  *(&v29 + 2 * v25) = v41;
                  v30[2 * v8] = v42;
                  v18 = sub_4013F2(&v28, 1);
                  if ( v18 )
                  {
                    sub_4343B0(
                      a1,
                      a2,
                      (int)&v17,
                      (int)"-import item cargo %s(pos:%d-%d) item:%d",
                      (unsigned int)&MultiByteStr);
                    sub_401316(&ExistingFileName, &v17);
                    a2 = (int)&v13;
                    v10 = DeleteFileA(&ExistingFileName);
                    v18 = sub_434B10(&v13 == &v13, v10, a1, (unsigned int)&v64, (int)&v13);
                    if ( !v18 )
                    {
                      a2 = (int)&v13;
                      v11 = MoveFileA(&ExistingFileName, &NewFileName);
                      sub_434B10(&v13 == &v13, v11, a1, (unsigned int)&v64, (int)&v13);
                      if ( v18 )
                        sub_401316(&ExistingFileName, "-IMPORT ITEM SUCCESS - FILE MOVED [WORNING]");
                      else
                        sub_401316(&ExistingFileName, "-IMPORT ITEM SUCCESS - FILE NOT DELETED!!!!!!!! [WORNING]");
                    }
                    v2 = sub_438F90(a1, (int)&v64, a2, hFindFile, (int)&v59);
                    v18 = v2;
                    if ( v2 )
                      break;
                  }
                  else
                  {
                    sub_401316(&ExistingFileName, "-IMPORT ITEM SUCCESS - ACCOUNT SAVE FAIL");
                    if ( !v40 )
                    {
                      a2 = (int)&v13;
                      v9 = MoveFileA(&ExistingFileName, &NewFileName);
                      sub_434B10(&v13 == &v13, v9, a1, (unsigned int)&v64, (int)&v13);
                    }
                    v2 = sub_438F90(a1, (int)&v64, a2, hFindFile, (int)&v59);
                    v18 = v2;
                    if ( v2 )
                      break;
                  }
                }
              }
              else
              {
                if ( !v40 )
                {
                  a2 = (int)&v13;
                  v5 = MoveFileA(&ExistingFileName, &NewFileName);
                  sub_434B10(&v13 == &v13, v5, a1, (unsigned int)&v64, (int)&v13);
                }
                sub_401316(&ExistingFileName, "-IMPORT no account");
                v2 = sub_438F90(a1, (int)&v64, a2, hFindFile, (int)&v59);
                v26 = v2;
                if ( v2 )
                  break;
              }
            }
            else
            {
              a2 = (int)&v13;
              v4 = MoveFileA(&ExistingFileName, &NewFileName);
              sub_434B10(&v13 == &v13, v4, a1, (unsigned int)&v64, (int)&v13);
              sub_401316(&FileName, "-IMPORT wrong contents");
              v2 = sub_438F90(a1, (int)&v64, (int)&v13, hFindFile, (int)&v59);
              v43 = v2;
              if ( v2 )
                break;
            }
          }
          else
          {
            sub_4346D0(a1, a2, v56);
            a2 = (int)&v13;
            v3 = MoveFileA(&ExistingFileName, &NewFileName);
            sub_434B10(&v13 == &v13, v3, a1, (unsigned int)&v64, (int)&v13);
            sub_401316(&ExistingFileName, "-IMPORT no contents");
            v2 = sub_438F90(a1, (int)&v64, (int)&v13, hFindFile, (int)&v59);
            v44 = v2;
            if ( v2 )
              break;
          }
        }
        else
        {
          v2 = sub_438F90(a1, (int)&v64, a2, hFindFile, (int)&v59);
          v54 = v2;
          if ( v2 )
            break;
        }
      }
    }
    if ( hFindFile != (HANDLE)-1 )
      v2 = sub_4390C0(hFindFile);
  }
  return sub_434B10(1, v2, v15, v13, v14);
}
// 401055: using guessed type _DWORD __stdcall sub_401055(_DWORD);
// 4010A5: using guessed type _DWORD __cdecl sub_4010A5(_DWORD, _DWORD, _DWORD, _DWORD);
// 401244: using guessed type _DWORD __stdcall sub_401244(_DWORD, _DWORD);
// 401316: using guessed type _DWORD __cdecl sub_401316(_DWORD, _DWORD);
// 40137F: using guessed type _DWORD __stdcall sub_40137F(_DWORD, _DWORD);
// 4013F2: using guessed type _DWORD __stdcall sub_4013F2(LPCVOID lpBuffer, _DWORD);
// 4828AC: using guessed type int dword_4828AC;
// 1E21CFC: using guessed type int dword_1E21CFC[];
// 430650: using guessed type int var_10D4[720];

//----- (00433540) --------------------------------------------------------
int __cdecl sub_433540(int a1)
{
  int v1; // eax@1
  int v2; // ecx@38
  char v4; // [sp+0h] [bp-6Ch]@0
  int v5; // [sp+4h] [bp-68h]@0
  int v6; // [sp+8h] [bp-64h]@0
  char v7; // [sp+Ch] [bp-60h]@1
  int v8; // [sp+4Ch] [bp-20h]@1
  int v9; // [sp+50h] [bp-1Ch]@80
  int v10; // [sp+54h] [bp-18h]@80
  int v11; // [sp+58h] [bp-14h]@49
  int v12; // [sp+5Ch] [bp-10h]@46
  int v13; // [sp+60h] [bp-Ch]@43
  int v14; // [sp+64h] [bp-8h]@40
  int v15; // [sp+68h] [bp-4h]@1

  memset(&v7, -858993460, 0x60u);
  v1 = a1;
  v15 = *(_WORD *)a1;
  v8 = v15;
  if ( v15 > 2441 )
  {
    if ( v8 > 3447 )
    {
      if ( v8 > 4127 )
      {
        if ( v8 == 4143 )
        {
          v1 = dword_A94E90++ + 1;
          return sub_434B10(1, v1, v6, v4, v5);
        }
        if ( v8 == 4148 )
        {
          ++dword_A94E8C;
          return sub_434B10(1, v1, v6, v4, v5);
        }
        if ( v8 == 5338 )
        {
          v1 = dword_A94EC0++ + 1;
          return sub_434B10(1, v1, v6, v4, v5);
        }
        goto LABEL_80;
      }
      if ( v8 == 4127 )
      {
        ++dword_A94EBC;
        return sub_434B10(1, v1, v6, v4, v5);
      }
      if ( v8 != 3448 )
      {
        if ( v8 == 4010 )
        {
          v2 = ((unsigned __int64)(unsigned int)&unk_5F5E100 + qword_5CDCF70) >> 32;
          v1 = (int)((char *)&unk_5F5E100 + qword_5CDCF70);
          LODWORD(qword_5CDCF70) = (char *)&unk_5F5E100 + qword_5CDCF70;
          HIDWORD(qword_5CDCF70) = v2;
          return sub_434B10(1, v1, v6, v4, v5);
        }
        if ( v8 == 4011 )
        {
          v1 = (unsigned __int64)(qword_5CDCF70 + 1000000000) >> 32;
          qword_5CDCF70 += 1000000000i64;
          return sub_434B10(1, v1, v6, v4, v5);
        }
        goto LABEL_80;
      }
      v1 = *(_BYTE *)(a1 + 3);
      v11 = *(_BYTE *)(a1 + 3);
      if ( v11 < 0 )
        v11 = 0;
      dword_A94E60 += v11;
    }
    else
    {
      if ( v8 != 3447 )
      {
        if ( v8 > 3394 )
        {
          if ( v8 == 3395 )
          {
            ++dword_A94EB0;
            return sub_434B10(1, v1, v6, v4, v5);
          }
          if ( v8 == 3396 )
          {
            v1 = dword_A94EB4++ + 1;
            return sub_434B10(1, v1, v6, v4, v5);
          }
          if ( v8 == 3441 )
          {
            ++dword_A94EB8;
            return sub_434B10(1, v1, v6, v4, v5);
          }
        }
        else
        {
          if ( v8 == 3394 )
          {
            ++dword_A94EAC;
            return sub_434B10(1, v1, v6, v4, v5);
          }
          if ( v8 > 2444 )
          {
            if ( v8 == 3338 )
            {
              ++dword_A94EE0;
              return sub_434B10(1, v1, v6, v4, v5);
            }
          }
          else
          {
            if ( v8 == 2444 )
            {
              ++dword_A94E80;
              return sub_434B10(1, v1, v6, v4, v5);
            }
            if ( v8 == 2442 )
            {
              v1 = dword_A94E78++ + 1;
              return sub_434B10(1, v1, v6, v4, v5);
            }
            if ( v8 == 2443 )
            {
              ++dword_A94E7C;
              return sub_434B10(1, v1, v6, v4, v5);
            }
          }
        }
        goto LABEL_80;
      }
      v1 = *(_BYTE *)(a1 + 3);
      v12 = *(_BYTE *)(a1 + 3);
      if ( v12 < 0 )
        v12 = 0;
      dword_A94E5C += v12;
    }
  }
  else
  {
    if ( v8 == 2441 )
    {
      ++dword_A94E74;
      return sub_434B10(1, v1, v6, v4, v5);
    }
    if ( v8 <= 697 )
    {
      if ( v8 == 697 )
      {
        v1 = dword_A94E84++ + 1;
        return sub_434B10(1, v1, v6, v4, v5);
      }
      if ( v8 <= 668 )
      {
        if ( v8 == 668 )
        {
          v1 = dword_A94E9C++ + 1;
        }
        else
        {
          v8 -= 412;
          v1 = v8;
          switch ( v8 )
          {
            case 0:
              v1 = sub_401285(a1);
              v14 = v1;
              if ( v1 < 1 )
                v14 = 1;
              dword_A94E5C += v14;
              break;
            case 1:
              v1 = sub_401285(a1);
              v13 = v1;
              if ( v1 < 1 )
                v13 = 1;
              dword_A94E60 += v13;
              break;
            case 166:
              ++dword_A94E94;
              break;
            case 165:
              ++dword_A94E98;
              break;
            default:
              goto LABEL_80;
          }
        }
        return sub_434B10(1, v1, v6, v4, v5);
      }
      if ( v8 == 669 )
      {
        ++dword_A94EA0;
        return sub_434B10(1, v1, v6, v4, v5);
      }
      if ( v8 == 670 )
      {
        ++dword_A94EA4;
        return sub_434B10(1, v1, v6, v4, v5);
      }
      if ( v8 == 671 )
      {
        v1 = dword_A94EA8++ + 1;
        return sub_434B10(1, v1, v6, v4, v5);
      }
LABEL_80:
      v10 = *(_BYTE *)(a1 + 2);
      v1 = *(_BYTE *)(a1 + 3);
      v9 = *(_BYTE *)(a1 + 3);
      if ( v10 == 43 || v10 >= 115 && v10 <= 126 )
      {
        if ( v9 < 238 || v9 > 241 )
        {
          if ( v9 < 242 || v9 > 245 )
          {
            if ( v9 < 246 || v9 > 249 )
            {
              if ( v9 >= 250 && v9 <= 253 )
                ++dword_A94E70;
            }
            else
            {
              v1 = dword_A94E6C++ + 1;
            }
          }
          else
          {
            ++dword_A94E68;
          }
        }
        else
        {
          ++dword_A94E64;
        }
      }
      return sub_434B10(1, v1, v6, v4, v5);
    }
    v8 -= 1740;
    v1 = v8;
    switch ( v8 )
    {
      case 34:
        ++dword_A94E88;
        break;
      case 0:
        ++dword_A94EC4;
        break;
      case 1:
        ++dword_A94EC8;
        break;
      case 2:
        v1 = dword_A94ECC++ + 1;
        break;
      case 20:
        ++dword_A94ED0;
        break;
      case 21:
        ++dword_A94ED4;
        break;
      case 22:
        v1 = dword_A94ED8++ + 1;
        break;
      case 23:
        ++dword_A94EDC;
        break;
      default:
        goto LABEL_80;
    }
  }
  return sub_434B10(1, v1, v6, v4, v5);
}
// 401285: using guessed type _DWORD __cdecl sub_401285(_DWORD);
// A94E5C: using guessed type int dword_A94E5C;
// A94E60: using guessed type int dword_A94E60;
// A94E64: using guessed type int dword_A94E64;
// A94E68: using guessed type int dword_A94E68;
// A94E6C: using guessed type int dword_A94E6C;
// A94E70: using guessed type int dword_A94E70;
// A94E74: using guessed type int dword_A94E74;
// A94E78: using guessed type int dword_A94E78;
// A94E7C: using guessed type int dword_A94E7C;
// A94E80: using guessed type int dword_A94E80;
// A94E84: using guessed type int dword_A94E84;
// A94E88: using guessed type int dword_A94E88;
// A94E8C: using guessed type int dword_A94E8C;
// A94E90: using guessed type int dword_A94E90;
// A94E94: using guessed type int dword_A94E94;
// A94E98: using guessed type int dword_A94E98;
// A94E9C: using guessed type int dword_A94E9C;
// A94EA0: using guessed type int dword_A94EA0;
// A94EA4: using guessed type int dword_A94EA4;
// A94EA8: using guessed type int dword_A94EA8;
// A94EAC: using guessed type int dword_A94EAC;
// A94EB0: using guessed type int dword_A94EB0;
// A94EB4: using guessed type int dword_A94EB4;
// A94EB8: using guessed type int dword_A94EB8;
// A94EBC: using guessed type int dword_A94EBC;
// A94EC0: using guessed type int dword_A94EC0;
// A94EC4: using guessed type int dword_A94EC4;
// A94EC8: using guessed type int dword_A94EC8;
// A94ECC: using guessed type int dword_A94ECC;
// A94ED0: using guessed type int dword_A94ED0;
// A94ED4: using guessed type int dword_A94ED4;
// A94ED8: using guessed type int dword_A94ED8;
// A94EDC: using guessed type int dword_A94EDC;
// A94EE0: using guessed type int dword_A94EE0;
// 5CDCF70: using guessed type __int64 qword_5CDCF70;

//----- (00434200) --------------------------------------------------------
int __cdecl sub_434200(int a1, int a2)
{
  char v3; // [sp+Ch] [bp-48h]@1
  int i; // [sp+4Ch] [bp-8h]@1
  int v5; // [sp+50h] [bp-4h]@1

  memset(&v3, -858993460, 0x48u);
  v5 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( *(_BYTE *)(a1 + 2 * i + 2) == a2 )
      v5 += *(_BYTE *)(a1 + 2 * i + 3);
  }
  return v5;
}

//----- (004343B0) --------------------------------------------------------
int __usercall sub_4343B0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, char a3)
{
  char v6; // [sp+0h] [bp-3Ch]@0
  int v7; // [sp+14h] [bp-28h]@7
  int v8; // [sp+1Ch] [bp-20h]@7
  signed int v9; // [sp+20h] [bp-1Ch]@7
  int v10; // [sp+24h] [bp-18h]@7
  signed int v11; // [sp+28h] [bp-14h]@7

  if ( !a1 && sub_43A570(ebx0, esi0, 2, (int)"sprintf.c", 93, 0, "string != NULL", v6) == 1 )
    __debugbreak();
  if ( !a2 && sub_43A570(ebx0, esi0, 2, (int)"sprintf.c", 94, 0, "format != NULL", v6) == 1 )
    __debugbreak();
  v11 = 66;
  v10 = a1;
  v8 = a1;
  v9 = 2147483647;
  v7 = sub_4395C0(ebx0, esi0, (int)&v8, a2, (int)&a3);
  --v9;
  if ( v9 < 0 )
    sub_439340(ebx0, esi0, 0, (int)&v8);
  else
    *(_BYTE *)v8++ = 0;
  return v7;
}

//----- (004344B0) --------------------------------------------------------
unsigned int __usercall sub_4344B0<eax>(int a1<ebx>, int a2<esi>, const void *a3, unsigned int a4, unsigned int a5, int a6)
{
  unsigned int result; // eax@2
  signed int v7; // [sp+0h] [bp-28h]@28
  DWORD v8; // [sp+4h] [bp-24h]@18
  unsigned int v9; // [sp+8h] [bp-20h]@10
  unsigned int v10; // [sp+Ch] [bp-1Ch]@4
  int v11; // [sp+14h] [bp-14h]@20
  int v12; // [sp+18h] [bp-10h]@1
  unsigned int v13; // [sp+1Ch] [bp-Ch]@1
  const void *lpBuffer; // [sp+20h] [bp-8h]@1

  lpBuffer = a3;
  v12 = a5 * a4;
  v13 = a5 * a4;
  if ( a5 * a4 )
  {
    if ( *(_DWORD *)(a6 + 12) & 0x10C )
      v10 = *(_DWORD *)(a6 + 24);
    else
      v10 = 4096;
    while ( v13 )
    {
      if ( *(_DWORD *)(a6 + 12) & 0x108 && *(_DWORD *)(a6 + 4) )
      {
        if ( v13 >= *(_DWORD *)(a6 + 4) )
          v9 = *(_DWORD *)(a6 + 4);
        else
          v9 = v13;
        sub_434C80(*(void **)a6, lpBuffer, v9);
        v13 -= v9;
        *(_DWORD *)(a6 + 4) -= v9;
        *(_DWORD *)a6 += v9;
        lpBuffer = (char *)lpBuffer + v9;
      }
      else
      {
        if ( v13 < v10 )
        {
          if ( sub_439340(a1, a2, *(_BYTE *)lpBuffer, a6) == -1 )
            return (v12 - v13) / a4;
          lpBuffer = (char *)lpBuffer + 1;
          --v13;
          if ( *(_DWORD *)(a6 + 24) <= 0 )
            v7 = 1;
          else
            v7 = *(_DWORD *)(a6 + 24);
          v10 = v7;
        }
        else
        {
          if ( *(_DWORD *)(a6 + 12) & 0x108 && sub_438BF0(a6) )
            return (v12 - v13) / a4;
          if ( v10 )
            v8 = v13 - v13 % v10;
          else
            v8 = v13;
          v11 = sub_435F00(*(_DWORD *)(a6 + 16), (signed int)lpBuffer, v8);
          if ( v11 == -1 )
          {
            *(_DWORD *)(a6 + 12) |= 0x20u;
            return (v12 - v13) / a4;
          }
          v13 -= v11;
          lpBuffer = (char *)lpBuffer + v11;
          if ( v11 < v8 )
          {
            *(_DWORD *)(a6 + 12) |= 0x20u;
            return (v12 - v13) / a4;
          }
        }
      }
    }
    result = a5;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (004346D0) --------------------------------------------------------
signed int __usercall sub_4346D0<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  signed int result; // eax@2
  char v4; // [sp+0h] [bp-14h]@0
  signed int v5; // [sp+10h] [bp-4h]@1

  v5 = -1;
  if ( *(_DWORD *)(a3 + 12) & 0x40 )
  {
    *(_DWORD *)(a3 + 12) = 0;
    result = -1;
  }
  else
  {
    if ( !a3 && sub_43A570(a1, a2, 2, (int)"fclose.c", 119, 0, "str != NULL", v4) == 1 )
      __debugbreak();
    if ( *(_DWORD *)(a3 + 12) & 0x83 )
    {
      v5 = sub_438BF0(a3);
      sub_43AD00(a1, a2, a3);
      if ( sub_43AC10(*(_DWORD *)(a3 + 16)) >= 0 )
      {
        if ( *(_DWORD *)(a3 + 28) )
        {
          sub_436DA0(a1, a2, *(_DWORD *)(a3 + 28), 2);
          *(_DWORD *)(a3 + 28) = 0;
        }
      }
      else
      {
        v5 = -1;
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    result = v5;
  }
  return result;
}

//----- (004347B0) --------------------------------------------------------
int __usercall sub_4347B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, char *a5, char a6)
{
  char v7; // [sp+0h] [bp-38h]@0
  int v8; // [sp+18h] [bp-20h]@7
  int v9; // [sp+1Ch] [bp-1Ch]@7
  int v10; // [sp+20h] [bp-18h]@7
  signed int v11; // [sp+24h] [bp-14h]@7

  if ( !a4 && sub_43A570(a1, a3, 2, (int)"sscanf.c", 66, 0, "string != NULL", v7) == 1 )
    __debugbreak();
  if ( !a5 && sub_43A570(a1, a3, 2, (int)"sscanf.c", 67, 0, "format != NULL", v7) == 1 )
    __debugbreak();
  v11 = 73;
  v10 = a4;
  v8 = a4;
  v9 = sub_434FC0(a4);
  return sub_43ADA0(a1, a2, a3, (int)&v8, a5, (int)&a6);
}

//----- (00434870) --------------------------------------------------------
int __usercall sub_434870<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5)
{
  int result; // eax@8
  char v6; // [sp+0h] [bp-20h]@0
  signed int v7; // [sp+Ch] [bp-14h]@11
  int v8; // [sp+10h] [bp-10h]@1
  int v9; // [sp+18h] [bp-8h]@1

  v9 = a3;
  v8 = a3;
  if ( !a3 && sub_43A570(a1, a2, 2, (int)"fgets.c", 59, 0, "string != NULL", v6) == 1 )
    __debugbreak();
  if ( !a5 && sub_43A570(a1, a2, 2, (int)"fgets.c", 60, 0, "str != NULL", v6) == 1 )
    __debugbreak();
  if ( a4 > 0 )
  {
    do
    {
      --a4;
      if ( !a4 )
        break;
      --*(_DWORD *)(a5 + 4);
      if ( *(_DWORD *)(a5 + 4) < 0 )
        v7 = sub_43C2A0(a1, a2, a5);
      else
        v7 = *(_BYTE *)(*(_DWORD *)a5)++;
      if ( v7 == -1 )
      {
        if ( v9 == a3 )
        {
          v8 = 0;
          goto LABEL_19;
        }
        break;
      }
      *(_BYTE *)v9++ = v7;
    }
    while ( (char)v7 != 10 );
    *(_BYTE *)v9 = 0;
LABEL_19:
    result = v8;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (004349A0) --------------------------------------------------------
int __usercall sub_4349A0<eax>(int a1<ebx>, int a2<esi>, const CHAR *a3, int a4, int a5)
{
  int result; // eax@14
  char v6; // [sp+0h] [bp-14h]@0
  int v7; // [sp+10h] [bp-4h]@13

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"fopen.c", 53, 0, "file != NULL", v6) == 1 )
    __debugbreak();
  if ( !*a3 && sub_43A570(a1, a2, 2, (int)"fopen.c", 54, 0, "*file != _T('\\0')", v6) == 1 )
    __debugbreak();
  if ( !a4 && sub_43A570(a1, a2, 2, (int)"fopen.c", 55, 0, "mode != NULL", v6) == 1 )
    __debugbreak();
  if ( !*(_BYTE *)a4 && sub_43A570(a1, a2, 2, (int)"fopen.c", 56, 0, "*mode != _T('\\0')", v6) == 1 )
    __debugbreak();
  v7 = sub_43C810(a1, a2);
  if ( v7 )
    result = sub_43C480(a1, a2, a3, a4, a5, v7);
  else
    result = 0;
  return result;
}

//----- (00434A90) --------------------------------------------------------
int __usercall sub_434A90<eax>(int a1<ebx>, int a2<esi>, const CHAR *a3, int a4)
{
  return sub_4349A0(a1, a2, a3, a4, 64);
}

//----- (00434AB0) --------------------------------------------------------
void *__cdecl sub_434AB0(void *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // edx@1
  int v4; // eax@2
  void *v5; // edi@2
  int v6; // ecx@3
  unsigned int v7; // ecx@6
  unsigned int v8; // ecx@6
  void *result; // eax@9

  v3 = a3;
  if ( a3 )
  {
    LOBYTE(v4) = a2;
    v5 = a1;
    if ( a3 < 4 )
      goto LABEL_13;
    v6 = -(signed int)a1 & 3;
    if ( v6 )
    {
      v3 = a3 - v6;
      do
      {
        *(_BYTE *)v5 = a2;
        v5 = (char *)v5 + 1;
        --v6;
      }
      while ( v6 );
    }
    v4 = 16843009 * a2;
    v7 = v3;
    v3 &= 3u;
    v8 = v7 >> 2;
    if ( !v8 || (memset32(v5, v4, v8), v5 = (char *)v5 + 4 * v8, v3) )
    {
LABEL_13:
      do
      {
        *(_BYTE *)v5 = v4;
        v5 = (char *)v5 + 1;
        --v3;
      }
      while ( v3 );
    }
    result = a1;
  }
  else
  {
    result = a1;
  }
  return result;
}

//----- (00434B10) --------------------------------------------------------
int __usercall sub_434B10<eax>(char a1<zf>, int result<eax>, int a3<ebx>, char a4<dil>, int a5<esi>)
{
  int v5; // [sp-8h] [bp-8h]@2

  if ( !a1 )
  {
    v5 = result;
    if ( sub_43A570(
           a3,
           a5,
           1,
           (int)"i386\\chkesp.c",
           42,
           (int)&unk_4750D0,
           "The value of ESP was not properly saved across a function call.  This is usually a result of calling a function declared with one calling convention with a function pointer declared with a different calling convention. ",
           a4) == 1 )
      __debugbreak();
    result = v5;
  }
  return result;
}

//----- (00434B60) --------------------------------------------------------
int __cdecl sub_434B60()
{
  dword_4828E0 = 214013 * dword_4828E0 + 2531011;
  return (dword_4828E0 >> 16) & 0x7FFF;
}
// 4828E0: using guessed type int dword_4828E0;

//----- (00434B90) --------------------------------------------------------
void __cdecl sub_434B90(int a1)
{
  JUMPOUT(loc_434C01);
}
// 434C01: using guessed type int __cdecl loc_434C01(int, int);

//----- (00434BA0) --------------------------------------------------------
int __cdecl sub_434BA0(int a1, int a2)
{
  int v2; // ecx@1
  char v3; // al@2
  int v4; // eax@4
  int v5; // eax@5
  int v6; // edi@9
  int v7; // ecx@13
  int v8; // edx@14
  int v9; // eax@18
  int result; // eax@23

  v2 = a1;
  if ( !(a1 & 3) )
    goto LABEL_4;
  do
  {
    v3 = *(_BYTE *)v2++;
    if ( !v3 )
    {
LABEL_9:
      v6 = v2 - 1;
      goto LABEL_13;
    }
  }
  while ( v2 & 3 );
  while ( 1 )
  {
    do
    {
LABEL_4:
      v4 = (*(_DWORD *)v2 + 2130640639) ^ ~*(_DWORD *)v2;
      v2 += 4;
    }
    while ( !(v4 & 0x81010100) );
    v5 = *(_DWORD *)(v2 - 4);
    if ( !(_BYTE)v5 )
      break;
    if ( !BYTE1(v5) )
    {
      v6 = v2 - 3;
      goto LABEL_13;
    }
    if ( !((unsigned int)&unk_FF0000 & v5) )
    {
      v6 = v2 - 2;
      goto LABEL_13;
    }
    if ( !(v5 & 0xFF000000) )
      goto LABEL_9;
  }
  v6 = v2 - 4;
LABEL_13:
  v7 = a2;
  if ( !(a2 & 3) )
    goto LABEL_18;
  while ( 1 )
  {
    LOBYTE(v8) = *(_BYTE *)v7++;
    if ( !(_BYTE)v8 )
      break;
    *(_BYTE *)v6++ = v8;
    if ( !(v7 & 3) )
    {
      while ( 1 )
      {
LABEL_18:
        v9 = (*(_DWORD *)v7 + 2130640639) ^ ~*(_DWORD *)v7;
        v8 = *(_DWORD *)v7;
        v7 += 4;
        if ( v9 & 0x81010100 )
        {
          if ( !(_BYTE)v8 )
            goto LABEL_26;
          if ( !BYTE1(v8) )
          {
            *(_WORD *)v6 = v8;
            return a1;
          }
          if ( !((unsigned int)&unk_FF0000 & v8) )
          {
            *(_WORD *)v6 = v8;
            result = a1;
            *(_BYTE *)(v6 + 2) = 0;
            return result;
          }
          if ( !(v8 & 0xFF000000) )
          {
            *(_DWORD *)v6 = v8;
            return a1;
          }
        }
        *(_DWORD *)v6 = v8;
        v6 += 4;
      }
    }
  }
LABEL_26:
  *(_BYTE *)v6 = v8;
  return a1;
}

//----- (00434C80) --------------------------------------------------------
void *__cdecl sub_434C80(void *a1, const void *a2, unsigned int a3)
{
  int v3; // esi@1
  int v4; // edi@1
  unsigned int v5; // ecx@4
  void *result; // eax@18
  int v7; // esi@22
  int v8; // edi@22
  unsigned int v9; // ecx@23

  v3 = (int)a2;
  v4 = (int)a1;
  if ( a1 > a2 && a1 < (char *)a2 + a3 )
  {
    v7 = (int)((char *)a2 + a3 - 4);
    v8 = (int)((char *)a1 + a3 - 4);
    if ( v8 & 3 )
    {
      if ( a3 >= 4 )
        JUMPOUT(__CS__, *((_DWORD *)loc_434E64 + (v8 & 3) + 1));
      switch ( a3 )
      {
        case 0u:
LABEL_30:
          result = a1;
          break;
        case 1u:
LABEL_31:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
          result = a1;
          break;
        case 2u:
LABEL_32:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
          *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
          result = a1;
          break;
        case 3u:
          goto LABEL_33;
      }
    }
    else
    {
      v9 = a3 >> 2;
      if ( a3 >> 2 < 8 )
      {
        switch ( -v9 )
        {
          case 0:
            break;
        }
      }
      else
      {
        memcpy((void *)v8, (const void *)v7, 4 * v9);
        v7 += 4 * v9;
        v8 += 4 * v9;
      }
      switch ( a3 & 3 )
      {
        case 0u:
          goto LABEL_30;
        case 1u:
          goto LABEL_31;
        case 2u:
          goto LABEL_32;
        case 3u:
          break;
      }
LABEL_33:
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
      *(_BYTE *)(v8 + 1) = *(_BYTE *)(v7 + 1);
      result = a1;
    }
  }
  else
  {
    if ( (unsigned __int8)a1 & 3 )
    {
      if ( a3 >= 4 )
        JUMPOUT(__CS__, *((_DWORD *)loc_434CDC + ((unsigned __int8)a1 & 3) + 1));
      JUMPOUT(__CS__, *((_DWORD *)loc_434DD8 + a3 - 4));
    }
    v5 = a3 >> 2;
    if ( a3 >> 2 < 8 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_6;
        case 1u:
          goto LABEL_17;
        case 2u:
          goto LABEL_16;
        case 3u:
          goto LABEL_15;
        case 4u:
          goto LABEL_14;
        case 5u:
          goto LABEL_13;
        case 6u:
          break;
        case 7u:
          *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)a2 + v5 - 7);
          break;
      }
      *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)a2 + v5 - 6);
LABEL_13:
      *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)a2 + v5 - 5);
LABEL_14:
      *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)a2 + v5 - 4);
LABEL_15:
      *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)a2 + v5 - 3);
LABEL_16:
      *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)a2 + v5 - 2);
LABEL_17:
      *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)a2 + v5 - 1);
      v3 = (int)((char *)a2 + 4 * v5);
      v4 = (int)((char *)a1 + 4 * v5);
    }
    else
    {
      memcpy(a1, a2, 4 * v5);
      v3 = (int)((char *)a2 + 4 * v5);
      v4 = (int)((char *)a1 + 4 * v5);
    }
LABEL_6:
    switch ( a3 & 3 )
    {
      case 0u:
        result = a1;
        break;
      case 1u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        result = a1;
        break;
      case 2u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        result = a1;
        break;
      case 3u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        *(_BYTE *)(v4 + 2) = *(_BYTE *)(v3 + 2);
        result = a1;
        break;
    }
  }
  return result;
}
// 434CDC: using guessed type int __cdecl loc_434CDC(int, int, int);
// 434DD8: using guessed type int __cdecl loc_434DD8(int, int, int);
// 434E64: using guessed type int __cdecl loc_434E64(int, int, int);

//----- (00434FC0) --------------------------------------------------------
int __cdecl sub_434FC0(int a1)
{
  int v1; // ecx@1
  char v2; // al@2
  int v3; // eax@4
  int v4; // eax@5

  v1 = a1;
  if ( !(a1 & 3) )
    goto LABEL_4;
  do
  {
    v2 = *(_BYTE *)v1++;
    if ( !v2 )
      return v1 - 1 - a1;
  }
  while ( v1 & 3 );
  while ( 1 )
  {
    do
    {
LABEL_4:
      v3 = (*(_DWORD *)v1 + 2130640639) ^ ~*(_DWORD *)v1;
      v1 += 4;
    }
    while ( !(v3 & 0x81010100) );
    v4 = *(_DWORD *)(v1 - 4);
    if ( !(_BYTE)v4 )
      break;
    if ( !BYTE1(v4) )
      return v1 - 3 - a1;
    if ( !((unsigned int)&unk_FF0000 & v4) )
      return v1 - 2 - a1;
    if ( !(v4 & 0xFF000000) )
      return v1 - 1 - a1;
  }
  return v1 - 4 - a1;
}

//----- (00435040) --------------------------------------------------------
int __cdecl sub_435040(int a1, int a2)
{
  int result; // eax@2
  unsigned __int16 v3; // [sp+0h] [bp-4h]@3

  if ( dword_6D5354C )
  {
    while ( 1 )
    {
      v3 = *(_BYTE *)a1;
      if ( !*(_BYTE *)a1 )
        break;
      if ( byte_6D53661[(unsigned __int8)v3] & 4 )
      {
        ++a1;
        if ( !*(_BYTE *)a1 )
          return 0;
        if ( a2 == (*(_BYTE *)a1 | (v3 << 8)) )
          return a1 - 1;
      }
      else
      {
        if ( a2 == *(_BYTE *)a1 )
          break;
      }
      ++a1;
    }
    if ( a2 == *(_BYTE *)a1 )
      result = a1;
    else
      result = 0;
  }
  else
  {
    result = sub_43D0D0(a1, a2);
  }
  return result;
}
// 6D5354C: using guessed type int dword_6D5354C;

//----- (00435110) --------------------------------------------------------
int __cdecl sub_435110()
{
  int result; // eax@1

  sub_435150();
  dword_6D51CA0 = sub_43D210();
  result = sub_43D190();
  __asm { fnclex }
  return result;
}
// 6D51CA0: using guessed type int dword_6D51CA0;

//----- (00435140) --------------------------------------------------------
void __cdecl sub_435140()
{
  ;
}

//----- (00435150) --------------------------------------------------------
void __cdecl sub_435150()
{
  off_482A90 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_43D930;
  off_482A94 = sub_43D310;
  off_482A98 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_43D420;
  off_482A9C = (int (__cdecl *)(_DWORD))sub_43D260;
  off_482AA0[0] = (int (*)())sub_43D3F0;
  off_482AA4 = (int (*)())sub_43D930;
}
// 482A90: using guessed type int (__cdecl *off_482A90)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 482A94: using guessed type int (__cdecl *off_482A94)(_DWORD);
// 482A98: using guessed type int (__cdecl *off_482A98)(_DWORD, _DWORD, _DWORD);
// 482A9C: using guessed type int (__cdecl *off_482A9C)(_DWORD);
// 482AA0: using guessed type int (*off_482AA0[2])();
// 482AA4: using guessed type int (*off_482AA4)();

//----- (004351BC) --------------------------------------------------------
signed __int64 __usercall sub_4351BC<edx:eax>(double a1<st0>)
{
  return (signed __int64)a1;
}

//----- (004351F0) --------------------------------------------------------
int __cdecl sub_4351F0(int a1, int a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  unsigned int v4; // eax@2
  unsigned __int8 v5; // cf@2
  unsigned int v6; // eax@6
  __int16 v8; // ax@16

  v2 = a1;
  v3 = a2;
  if ( !(a1 & 3) )
  {
LABEL_2:
    while ( 1 )
    {
      v4 = *(_DWORD *)v2;
      v5 = (unsigned __int8)*(_DWORD *)v2 < *(_BYTE *)v3;
      if ( (unsigned __int8)*(_DWORD *)v2 != *(_BYTE *)v3 )
        break;
      if ( !(_BYTE)v4 )
        return 0;
      v5 = BYTE1(v4) < *(_BYTE *)(v3 + 1);
      if ( BYTE1(v4) != *(_BYTE *)(v3 + 1) )
        break;
      if ( !BYTE1(v4) )
        return 0;
      v6 = v4 >> 16;
      v5 = (unsigned __int8)v6 < *(_BYTE *)(v3 + 2);
      if ( (_BYTE)v6 != *(_BYTE *)(v3 + 2) )
        break;
      if ( !(_BYTE)v6 )
        return 0;
      v5 = BYTE1(v6) < *(_BYTE *)(v3 + 3);
      if ( BYTE1(v6) != *(_BYTE *)(v3 + 3) )
        break;
      v3 += 4;
      v2 += 4;
      if ( !BYTE1(v6) )
        return 0;
    }
    return -2 * v5 + 1;
  }
  if ( a1 & 1 )
  {
    v2 = a1 + 1;
    v5 = *(_BYTE *)a1 < *(_BYTE *)a2;
    if ( *(_BYTE *)a1 != *(_BYTE *)a2 )
      return -2 * v5 + 1;
    v3 = a2 + 1;
    if ( !*(_BYTE *)a1 )
      return 0;
    if ( !(v2 & 2) )
      goto LABEL_2;
  }
  v8 = *(_WORD *)v2;
  v2 += 2;
  v5 = (unsigned __int8)v8 < *(_BYTE *)v3;
  if ( (_BYTE)v8 != *(_BYTE *)v3 )
    return -2 * v5 + 1;
  if ( !(_BYTE)v8 )
    return 0;
  v5 = HIBYTE(v8) < *(_BYTE *)(v3 + 1);
  if ( HIBYTE(v8) == *(_BYTE *)(v3 + 1) )
  {
    if ( HIBYTE(v8) )
    {
      v3 += 2;
      goto LABEL_2;
    }
    return 0;
  }
  return -2 * v5 + 1;
}

//----- (004352B0) --------------------------------------------------------
int __usercall sub_4352B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4)
{
  __int16 v4; // dx@3
  __int16 v5; // dx@12
  int result; // eax@16
  int v7; // [sp+0h] [bp-14h]@11
  int v8; // [sp+4h] [bp-10h]@2
  signed int v9; // [sp+8h] [bp-Ch]@6
  int v10; // [sp+Ch] [bp-8h]@9
  signed int v11; // [sp+10h] [bp-4h]@6
  int v12; // [sp+1Ch] [bp+8h]@6

  while ( 1 )
  {
    if ( cbMultiByte <= 1 )
    {
      v4 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * *(_BYTE *)a4);
      v8 = v4 & 8;
    }
    else
    {
      v8 = sub_43D9C0(a1, a2, a3, *(_BYTE *)a4, 8);
    }
    if ( !v8 )
      break;
    a4 = (signed int *)((char *)a4 + 1);
  }
  v11 = *(_BYTE *)a4;
  v12 = (int)((char *)a4 + 1);
  v9 = v11;
  if ( v11 == 45 || v11 == 43 )
    v11 = *(_BYTE *)v12++;
  v10 = 0;
  while ( 1 )
  {
    if ( cbMultiByte <= 1 )
    {
      v5 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v11);
      v7 = v5 & 4;
    }
    else
    {
      v7 = sub_43D9C0(a1, a2, a3, v11, 4);
    }
    if ( !v7 )
      break;
    v10 = 10 * v10 + v11 - 48;
    v11 = *(_BYTE *)v12++;
  }
  if ( v9 == 45 )
    result = -v10;
  else
    result = v10;
  return result;
}
// 482AA8: using guessed type __int16 off_482AA8[2];

//----- (004353B0) --------------------------------------------------------
int __usercall sub_4353B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4)
{
  return sub_4352B0(a1, a2, a3, a4);
}

//----- (00435500) --------------------------------------------------------
unsigned int __usercall sub_435500<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, unsigned int a5, int a6)
{
  unsigned int result; // eax@2
  DWORD v7; // [sp+0h] [bp-24h]@15
  unsigned int v8; // [sp+4h] [bp-20h]@10
  unsigned int v9; // [sp+8h] [bp-1Ch]@4
  int v10; // [sp+10h] [bp-14h]@17
  int v11; // [sp+14h] [bp-10h]@1
  unsigned int v12; // [sp+18h] [bp-Ch]@1
  int v13; // [sp+1Ch] [bp-8h]@1
  signed int v14; // [sp+20h] [bp-4h]@22

  v13 = a3;
  v11 = a5 * a4;
  v12 = a5 * a4;
  if ( a5 * a4 )
  {
    if ( *(_DWORD *)(a6 + 12) & 0x10C )
      v9 = *(_DWORD *)(a6 + 24);
    else
      v9 = 4096;
    while ( v12 )
    {
      if ( *(_DWORD *)(a6 + 12) & 0x10C && *(_DWORD *)(a6 + 4) )
      {
        if ( v12 >= *(_DWORD *)(a6 + 4) )
          v8 = *(_DWORD *)(a6 + 4);
        else
          v8 = v12;
        sub_434C80((void *)v13, *(const void **)a6, v8);
        v12 -= v8;
        *(_DWORD *)(a6 + 4) -= v8;
        *(_DWORD *)a6 += v8;
        v13 += v8;
      }
      else
      {
        if ( v12 < v9 )
        {
          v14 = sub_43C2A0(a1, a2, a6);
          if ( v14 == -1 )
            return (v11 - v12) / a4;
          *(_BYTE *)v13++ = v14;
          --v12;
          v9 = *(_DWORD *)(a6 + 24);
        }
        else
        {
          if ( v9 )
            v7 = v12 - v12 % v9;
          else
            v7 = v12;
          v10 = sub_43DAC0(*(_DWORD *)(a6 + 16), v13, v7);
          if ( !v10 )
          {
            *(_DWORD *)(a6 + 12) |= 0x10u;
            return (v11 - v12) / a4;
          }
          if ( v10 == -1 )
          {
            *(_DWORD *)(a6 + 12) |= 0x20u;
            return (v11 - v12) / a4;
          }
          v12 -= v10;
          v13 += v10;
        }
      }
    }
    result = a5;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (004356D0) --------------------------------------------------------
int __usercall sub_4356D0<eax>(int a1<ebx>, int a2<esi>, int a3, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int result; // eax@8
  char v6; // [sp+0h] [bp-10h]@0

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"fseek.c", 146, 0, "str != NULL", v6) == 1 )
    __debugbreak();
  if ( *(_DWORD *)(a3 + 12) & 0x83 && (!dwMoveMethod || dwMoveMethod == 1 || dwMoveMethod == 2) )
  {
    *(_DWORD *)(a3 + 12) &= 0xFFFFFFEFu;
    if ( dwMoveMethod == 1 )
    {
      lDistanceToMove += sub_43DF20(a1, a2, a3);
      dwMoveMethod = 0;
    }
    sub_438BF0(a3);
    if ( *(_DWORD *)(a3 + 12) & 0x80 )
    {
      *(_DWORD *)(a3 + 12) &= 0xFFFFFFFCu;
    }
    else
    {
      if ( *(_DWORD *)(a3 + 12) & 1 && *(_DWORD *)(a3 + 12) & 8 )
      {
        if ( !(*(_DWORD *)(a3 + 12) & 0x400) )
          *(_DWORD *)(a3 + 24) = 512;
      }
    }
    result = (sub_4361B0(*(_DWORD *)(a3 + 16), lDistanceToMove, dwMoveMethod) != -1) - 1;
  }
  else
  {
    dword_6D51CC0 = 22;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00435800) --------------------------------------------------------
int __cdecl sub_435800(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // ecx@1
  unsigned int v4; // ebx@2
  int v5; // esi@2
  int v6; // edi@2
  unsigned int v7; // ecx@3
  char v8; // al@5
  int v10; // ecx@16
  int v11; // eax@21
  int v12; // edx@21

  v3 = a3;
  if ( !a3 )
    return a1;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( !(a2 & 3) )
  {
    v7 = a3 >> 2;
    if ( a3 >> 2 )
      goto LABEL_21;
LABEL_10:
    while ( 1 )
    {
      v8 = *(_BYTE *)v5++;
      *(_BYTE *)v6++ = v8;
      if ( !v8 )
        break;
      --v4;
      if ( !v4 )
        return a1;
    }
    while ( 1 )
    {
      --v4;
      if ( !v4 )
        break;
LABEL_17:
      *(_BYTE *)v6++ = v8;
    }
    return a1;
  }
  do
  {
    v8 = *(_BYTE *)v5++;
    *(_BYTE *)v6++ = v8;
    --v3;
    if ( !v3 )
      return a1;
    if ( !v8 )
    {
      while ( v6 & 3 )
      {
        *(_BYTE *)v6++ = 0;
        --v3;
        if ( !v3 )
          return a1;
      }
      v4 = v3;
      v10 = v3 >> 2;
      if ( !v10 )
        goto LABEL_17;
      goto LABEL_31;
    }
  }
  while ( v5 & 3 );
  LOBYTE(v4) = v3;
  v7 = v3 >> 2;
  if ( !v7 )
  {
LABEL_9:
    v4 &= 3u;
    if ( v4 )
      goto LABEL_10;
    return a1;
  }
  while ( 1 )
  {
LABEL_21:
    v11 = (*(_DWORD *)v5 + 2130640639) ^ ~*(_DWORD *)v5;
    v12 = *(_DWORD *)v5;
    v5 += 4;
    if ( !(v11 & 0x81010100) )
      goto LABEL_20;
    if ( !(_BYTE)v12 )
      break;
    if ( !BYTE1(v12) )
    {
      *(_DWORD *)v6 = (unsigned __int8)v12;
      goto LABEL_30;
    }
    if ( !((unsigned int)&unk_FF0000 & v12) )
    {
      *(_DWORD *)v6 = (unsigned __int16)v12;
      goto LABEL_30;
    }
    if ( !(v12 & 0xFF000000) )
    {
      *(_DWORD *)v6 = v12;
      goto LABEL_30;
    }
LABEL_20:
    *(_DWORD *)v6 = v12;
    v6 += 4;
    --v7;
    if ( !v7 )
      goto LABEL_9;
  }
  *(_DWORD *)v6 = 0;
LABEL_30:
  v6 += 4;
  v8 = 0;
  v10 = v7 - 1;
  if ( v10 )
  {
LABEL_31:
    v8 = 0;
    do
    {
      *(_DWORD *)v6 = 0;
      v6 += 4;
      --v10;
    }
    while ( v10 );
  }
  v4 &= 3u;
  if ( v4 )
    goto LABEL_17;
  return a1;
}

//----- (00435900) --------------------------------------------------------
signed int __cdecl sub_435900(int a1, int a2, signed int a3)
{
  signed int v3; // ecx@1
  int v4; // edi@2
  char v5; // zf@4
  int v6; // ecx@5
  int v7; // edi@5
  int v8; // esi@5
  unsigned __int8 v9; // al@8

  v3 = a3;
  if ( a3 )
  {
    v4 = a1;
    do
    {
      if ( !v3 )
        break;
      v5 = *(_BYTE *)v4++ == 0;
      --v3;
    }
    while ( !v5 );
    v6 = a3 - v3;
    v7 = a1;
    v8 = a2;
    do
    {
      if ( !v6 )
        break;
      v5 = *(_BYTE *)v8++ == *(_BYTE *)v7++;
      --v6;
    }
    while ( v5 );
    v9 = *(_BYTE *)(v8 - 1);
    v3 = 0;
    if ( v9 > *(_BYTE *)(v7 - 1) )
      return ~v3;
    if ( v9 != *(_BYTE *)(v7 - 1) )
    {
      v3 = -2;
      return ~v3;
    }
  }
  return v3;
}

//----- (00435940) --------------------------------------------------------
int __usercall sub_435940<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4)
{
  int result; // eax@2
  int v5; // [sp+0h] [bp-8h]@5
  int v6; // [sp+4h] [bp-4h]@5

  if ( *a4 >= 0 )
  {
    sub_43E1B0(a1, a2, a3);
    if ( *a4 <= 259200 || *a4 >= 2147224447 )
    {
      v5 = (int)sub_43EA60(a4);
      if ( sub_43E560(v5) )
        v6 = *(_DWORD *)v5 - (dword_482CC8 + dword_482CC0);
      else
        v6 = *(_DWORD *)v5 - dword_482CC0;
      *(_DWORD *)v5 = v6 % 60;
      if ( *(_DWORD *)v5 < 0 )
      {
        *(_DWORD *)v5 += 60;
        v6 -= 60;
      }
      v6 = v6 / 60 + *(_DWORD *)(v5 + 4);
      *(_DWORD *)(v5 + 4) = v6 % 60;
      if ( *(_DWORD *)(v5 + 4) < 0 )
      {
        *(_DWORD *)(v5 + 4) += 60;
        v6 -= 60;
      }
      v6 = v6 / 60 + *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v5 + 8) = v6 % 24;
      if ( *(_DWORD *)(v5 + 8) < 0 )
      {
        *(_DWORD *)(v5 + 8) += 24;
        v6 -= 24;
      }
      v6 /= 24;
      if ( v6 <= 0 )
      {
        if ( v6 < 0 )
        {
          *(_DWORD *)(v5 + 24) = (*(_DWORD *)(v5 + 24) + v6 + 7) % 7;
          *(_DWORD *)(v5 + 12) += v6;
          if ( *(_DWORD *)(v5 + 12) > 0 )
          {
            *(_DWORD *)(v5 + 28) += v6;
          }
          else
          {
            *(_DWORD *)(v5 + 12) += 31;
            *(_DWORD *)(v5 + 28) = 364;
            *(_DWORD *)(v5 + 16) = 11;
            --*(_DWORD *)(v5 + 20);
          }
        }
      }
      else
      {
        *(_DWORD *)(v5 + 24) = (v6 + *(_DWORD *)(v5 + 24)) % 7;
        *(_DWORD *)(v5 + 12) += v6;
        *(_DWORD *)(v5 + 28) += v6;
      }
    }
    else
    {
      v6 = *a4 - dword_482CC0;
      v5 = (int)sub_43EA60(&v6);
      if ( dword_482CC4 )
      {
        if ( sub_43E560(v5) )
        {
          v6 -= dword_482CC8;
          v5 = (int)sub_43EA60(&v6);
          *(_DWORD *)(v5 + 32) = 1;
        }
      }
    }
    result = v5;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 482CC0: using guessed type int dword_482CC0;
// 482CC4: using guessed type int dword_482CC4;
// 482CC8: using guessed type int dword_482CC8;

//----- (00435BA0) --------------------------------------------------------
int __usercall sub_435BA0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  int v5; // [sp+0h] [bp-D8h]@6
  DWORD v6; // [sp+4h] [bp-D4h]@7
  struct _TIME_ZONE_INFORMATION TimeZoneInformation; // [sp+8h] [bp-D0h]@7
  struct _SYSTEMTIME SystemTime; // [sp+B4h] [bp-24h]@1
  int v9; // [sp+C4h] [bp-14h]@16
  int v10; // [sp+C8h] [bp-10h]@1
  __int64 v11; // [sp+CCh] [bp-Ch]@1
  int v12; // [sp+D4h] [bp-4h]@15

  GetLocalTime(&SystemTime);
  GetSystemTime((LPSYSTEMTIME)&v10);
  if ( WORD3(v11) != WORD3(qword_6D51CB4)
    || WORD2(v11) != WORD2(qword_6D51CB4)
    || WORD1(v11) != WORD1(qword_6D51CB4)
    || HIWORD(v10) != HIWORD(dword_6D51CB0)
    || (unsigned __int16)v10 != (unsigned __int16)dword_6D51CB0 )
  {
    v6 = GetTimeZoneInformation(&TimeZoneInformation);
    if ( v6 == -1 )
      v5 = -1;
    else
      v5 = v6 == 2 && TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias;
    dword_6D51CA8 = v5;
    dword_6D51CB0 = v10;
    qword_6D51CB4 = v11;
    dword_6D51CBC = v12;
  }
  else
  {
    v5 = dword_6D51CA8;
  }
  v9 = sub_43EC30(
         a1,
         a2,
         a3,
         SystemTime.wYear,
         SystemTime.wMonth,
         SystemTime.wDay,
         SystemTime.wHour,
         SystemTime.wMinute,
         SystemTime.wSecond,
         v5);
  if ( a4 )
    *(_DWORD *)a4 = v9;
  return v9;
}
// 6D51CA8: using guessed type int dword_6D51CA8;
// 6D51CB0: using guessed type int dword_6D51CB0;
// 6D51CB4: using guessed type __int64 qword_6D51CB4;
// 6D51CBC: using guessed type int dword_6D51CBC;

//----- (00435D30) --------------------------------------------------------
unsigned int __cdecl sub_435D30()
{
  if ( off_4828F8 )
    off_4828F8();
  sub_435ED0((unsigned int)&unk_47A330, (unsigned int)&unk_47A648);
  return sub_435ED0((unsigned int)&unk_47A000, (unsigned int)&unk_47A22C);
}
// 4828F8: using guessed type int (*off_4828F8)(void);

//----- (00435D70) --------------------------------------------------------
unsigned int __usercall sub_435D70<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT uExitCode)
{
  return sub_435DF0(a1, a2, a3, uExitCode, 0, 0);
}

//----- (00435D90) --------------------------------------------------------
unsigned int __usercall sub_435D90<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT uExitCode)
{
  return sub_435DF0(a1, a2, a3, uExitCode, 1, 0);
}

//----- (00435DF0) --------------------------------------------------------
unsigned int __usercall sub_435DF0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT uExitCode, int a5, int a6)
{
  HANDLE v6; // eax@2
  unsigned int result; // eax@11
  unsigned int v8; // [sp+0h] [bp-4h]@5

  if ( dword_6D51D08 == 1 )
  {
    v6 = GetCurrentProcess();
    TerminateProcess(v6, uExitCode);
  }
  dword_6D51D04 = 1;
  byte_6D51D00 = a6;
  if ( !a5 )
  {
    if ( dword_6D537A4 )
    {
      v8 = dword_6D537A0;
      while ( 1 )
      {
        v8 -= 4;
        if ( v8 < dword_6D537A4 )
          break;
        if ( *(_DWORD *)v8 )
          (*(void (**)(void))v8)();
      }
    }
    sub_435ED0((unsigned int)&unk_47A74C, (unsigned int)&unk_47A954);
  }
  result = sub_435ED0((unsigned int)&unk_47AA58, (unsigned int)&unk_47AC60);
  if ( !dword_6D51D0C )
  {
    result = sub_4377C0(-1) & 0x20;
    if ( result )
    {
      dword_6D51D0C = 1;
      result = sub_438080(a1, a2, a3);
    }
  }
  if ( !a6 )
  {
    dword_6D51D08 = 1;
    ExitProcess(uExitCode);
  }
  return result;
}
// 6D51D00: using guessed type char byte_6D51D00;
// 6D51D04: using guessed type int dword_6D51D04;
// 6D51D08: using guessed type int dword_6D51D08;
// 6D51D0C: using guessed type int dword_6D51D0C;
// 6D537A0: using guessed type int dword_6D537A0;
// 6D537A4: using guessed type int dword_6D537A4;

//----- (00435ED0) --------------------------------------------------------
unsigned int __cdecl sub_435ED0(unsigned int a1, unsigned int a2)
{
  unsigned int result; // eax@1

  while ( 1 )
  {
    result = a1;
    if ( a1 >= a2 )
      break;
    if ( *(_DWORD *)a1 )
      (*(void (**)(void))a1)();
    a1 += 4;
  }
  return result;
}

//----- (00435F00) --------------------------------------------------------
int __cdecl sub_435F00(signed int a1, signed int lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax@3
  int v4; // [sp+0h] [bp-420h]@4
  char v5; // [sp+4h] [bp-41Ch]@14
  DWORD NumberOfBytesWritten; // [sp+8h] [bp-418h]@17
  char Buffer; // [sp+Ch] [bp-414h]@11
  int v8; // [sp+410h] [bp-10h]@4
  unsigned int v9; // [sp+414h] [bp-Ch]@9
  char *i; // [sp+418h] [bp-8h]@11
  int v11; // [sp+41Ch] [bp-4h]@9

  if ( a1 < uNumber && *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    v8 = 0;
    v4 = 0;
    if ( nNumberOfBytesToWrite )
    {
      if ( *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x20 )
        sub_4361B0(a1, 0, 2u);
      if ( *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x80 )
      {
        v11 = lpBuffer;
        v9 = 0;
        while ( v11 - lpBuffer < nNumberOfBytesToWrite )
        {
          for ( i = &Buffer; (signed int)(i - &Buffer) < 1024 && v11 - lpBuffer < nNumberOfBytesToWrite; ++i )
          {
            v5 = *(_BYTE *)v11++;
            if ( v5 == 10 )
            {
              ++v4;
              *i++ = 13;
            }
            *i = v5;
          }
          if ( !WriteFile(
                  *(HANDLE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)),
                  &Buffer,
                  i - &Buffer,
                  &NumberOfBytesWritten,
                  0) )
          {
            v9 = GetLastError();
            break;
          }
          v8 += NumberOfBytesWritten;
          if ( (signed int)NumberOfBytesWritten < (signed int)(i - &Buffer) )
            break;
        }
      }
      else
      {
        if ( WriteFile(
               *(HANDLE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)),
               (LPCVOID)lpBuffer,
               nNumberOfBytesToWrite,
               &NumberOfBytesWritten,
               0) )
        {
          v9 = 0;
          v8 = NumberOfBytesWritten;
        }
        else
        {
          v9 = GetLastError();
        }
      }
      if ( v8 )
      {
        result = v8 - v4;
      }
      else
      {
        if ( v9 )
        {
          if ( v9 == 5 )
          {
            dword_6D51CC0 = 9;
            dword_6D51CC4 = 5;
          }
          else
          {
            sub_43ED20(v9);
          }
          result = -1;
        }
        else
        {
          if ( *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x40 && *(_BYTE *)lpBuffer == 26 )
          {
            result = 0;
          }
          else
          {
            dword_6D51CC0 = 28;
            dword_6D51CC4 = 0;
            result = -1;
          }
        }
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (004361B0) --------------------------------------------------------
signed int __cdecl sub_4361B0(UINT a1, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  signed int result; // eax@3
  void *hFile; // [sp+0h] [bp-Ch]@4
  DWORD v5; // [sp+4h] [bp-8h]@6
  unsigned int v6; // [sp+8h] [bp-4h]@7

  if ( a1 < uNumber && *(_BYTE *)(dword_6D53380[(signed int)a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    hFile = (void *)sub_43F3D0(a1);
    if ( hFile == (void *)-1 )
    {
      dword_6D51CC0 = 9;
      result = -1;
    }
    else
    {
      v5 = SetFilePointer(hFile, lDistanceToMove, 0, dwMoveMethod);
      if ( v5 == -1 )
        v6 = GetLastError();
      else
        v6 = 0;
      if ( v6 )
      {
        sub_43ED20(v6);
        result = -1;
      }
      else
      {
        *(_BYTE *)(dword_6D53380[(signed int)a1 >> 5] + 8 * (a1 & 0x1F) + 4) &= 0xFDu;
        result = v5;
      }
    }
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (004362A0) --------------------------------------------------------
signed int __cdecl sub_4362A0(signed int a1)
{
  signed int result; // eax@3
  signed int lDistanceToMove; // [sp+0h] [bp-8h]@4
  signed int v3; // [sp+4h] [bp-4h]@5

  if ( a1 < uNumber && *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    lDistanceToMove = sub_4361B0(a1, 0, 1u);
    if ( lDistanceToMove == -1 )
    {
      v3 = -1;
    }
    else
    {
      v3 = sub_4361B0(a1, 0, 2u);
      if ( lDistanceToMove != v3 )
        sub_4361B0(a1, lDistanceToMove, 0);
    }
    result = v3;
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (00436340) --------------------------------------------------------
int __usercall sub_436340<eax>(int a1<ebx>, int a2<esi>, unsigned int a3)
{
  return sub_4363B0(a1, a2, a3, dword_6D51E2C, 1, 0, 0);
}

//----- (00436360) --------------------------------------------------------
int __usercall sub_436360<eax>(int ebx0<ebx>, int esi0<esi>, unsigned int a1, int a2, int a3, int a4)
{
  return sub_4363B0(ebx0, esi0, a1, dword_6D51E2C, a2, a3, a4);
}

//----- (004363B0) --------------------------------------------------------
int __usercall sub_4363B0<eax>(int ebx0<ebx>, int esi0<esi>, unsigned int a1, int a2, int a3, int a4, int a5)
{
  int v8; // [sp+0h] [bp-4h]@1

  do
  {
    v8 = sub_436420(ebx0, esi0, a1, a3, a4, a5);
    if ( v8 || !a2 )
      return v8;
  }
  while ( sub_43F550(a1) );
  return 0;
}

//----- (00436420) --------------------------------------------------------
int __usercall sub_436420<eax>(int ebx0<ebx>, int esi0<esi>, unsigned int a1, int a2, int a3, int a4)
{
  int result; // eax@14
  char v7; // [sp+0h] [bp-1Ch]@0
  signed int v8; // [sp+10h] [bp-Ch]@1
  int v9; // [sp+14h] [bp-8h]@5
  int v10; // [sp+18h] [bp-4h]@29

  v8 = 0;
  if ( dword_482910 & 4
    && !sub_437460(ebx0, esi0)
    && sub_43A570(ebx0, esi0, 2, (int)"dbgheap.c", 321, 0, "_CrtCheckMemory()", v7) == 1 )
    __debugbreak();
  v9 = dword_482914;
  if ( dword_482914 == dword_482918 )
    __debugbreak();
  if ( off_482EE8(1, 0, a1, a2, dword_482914, a3, a4) )
  {
    if ( (unsigned __int16)a2 != 2 && !(dword_482910 & 1) )
      v8 = 1;
    if ( a1 <= 0xFFFFFFE0 && a1 + 36 <= 0xFFFFFFE0 )
    {
      if ( (unsigned __int16)a2 != 4
        && a2 != 1
        && (unsigned __int16)a2 != 2
        && a2 != 3
        && sub_43A570(ebx0, esi0, 1, 0, 0, 0, "%s", (unsigned int)"Error: memory allocation: bad memory block type.\n") == 1 )
        __debugbreak();
      v10 = (int)sub_43F600(a1 + 36);
      if ( v10 )
      {
        ++dword_482914;
        if ( v8 )
        {
          *(_DWORD *)v10 = 0;
          *(_DWORD *)(v10 + 4) = 0;
          *(_DWORD *)(v10 + 8) = 0;
          *(_DWORD *)(v10 + 12) = -19088708;
          *(_DWORD *)(v10 + 16) = a1;
          *(_DWORD *)(v10 + 20) = 3;
          *(_DWORD *)(v10 + 24) = 0;
        }
        else
        {
          dword_6D51D14 += a1;
          dword_6D51D1C += a1;
          if ( dword_6D51D1C > (unsigned int)dword_6D51D20 )
            dword_6D51D20 = dword_6D51D1C;
          if ( dword_6D51D18 )
            *(_DWORD *)(dword_6D51D18 + 4) = v10;
          else
            dword_6D51D10 = v10;
          *(_DWORD *)v10 = dword_6D51D18;
          *(_DWORD *)(v10 + 4) = 0;
          *(_DWORD *)(v10 + 8) = a3;
          *(_DWORD *)(v10 + 12) = a4;
          *(_DWORD *)(v10 + 16) = a1;
          *(_DWORD *)(v10 + 20) = a2;
          *(_DWORD *)(v10 + 24) = v9;
          dword_6D51D18 = v10;
        }
        sub_434AB0((void *)(v10 + 28), byte_48291C, 4u);
        sub_434AB0((void *)(v10 + a1 + 32), byte_48291C, 4u);
        sub_434AB0((void *)(v10 + 32), byte_48291E, a1);
        result = v10 + 32;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( sub_43A570(ebx0, esi0, 1, 0, 0, 0, "Invalid allocation size: %u bytes.\n", a1) == 1 )
        __debugbreak();
      result = 0;
    }
  }
  else
  {
    if ( a3 )
    {
      if ( sub_43A570(ebx0, esi0, 0, 0, 0, 0, "Client hook allocation failure at file %hs line %d.\n", a3) == 1 )
        __debugbreak();
    }
    else
    {
      if ( sub_43A570(ebx0, esi0, 0, 0, 0, 0, "%s", (unsigned int)"Client hook allocation failure.\n") == 1 )
        __debugbreak();
    }
    result = 0;
  }
  return result;
}
// 482910: using guessed type int dword_482910;
// 482914: using guessed type int dword_482914;
// 482918: using guessed type int dword_482918;
// 48291C: using guessed type char byte_48291C;
// 48291E: using guessed type char byte_48291E;
// 482EE8: using guessed type int (__cdecl *off_482EE8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 6D51D10: using guessed type int dword_6D51D10;
// 6D51D14: using guessed type int dword_6D51D14;
// 6D51D18: using guessed type int dword_6D51D18;
// 6D51D1C: using guessed type int dword_6D51D1C;
// 6D51D20: using guessed type int dword_6D51D20;

//----- (00436760) --------------------------------------------------------
int __usercall sub_436760<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int i; // [sp+0h] [bp-Ch]@2
  int v9; // [sp+4h] [bp-8h]@1
  unsigned int v10; // [sp+18h] [bp+Ch]@1

  v10 = a3 * a4;
  v9 = sub_436360(a1, a2, v10, a5, a6, a7);
  if ( v9 )
  {
    for ( i = v9; i < v10 + v9; ++i )
      *(_BYTE *)i = 0;
  }
  return v9;
}

//----- (004367E0) --------------------------------------------------------
int __usercall sub_4367E0<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, int a5, int a6, int a7)
{
  return sub_436810(a1, a2, a3, a4, a5, a6, a7, 1);
}

//----- (00436810) --------------------------------------------------------
int __usercall sub_436810<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax@2
  char v9; // [sp+0h] [bp-20h]@0
  signed int v10; // [sp+Ch] [bp-14h]@1
  int v11; // [sp+10h] [bp-10h]@10
  int v12; // [sp+14h] [bp-Ch]@47
  int lpMem; // [sp+18h] [bp-8h]@32
  int v14; // [sp+1Ch] [bp-4h]@55

  v10 = 0;
  if ( !a3 )
    return sub_436360(a1, a2, a4, a5, a6, a7);
  if ( a8 && !a4 )
  {
    sub_436DA0(a1, a2, a3, a5);
    return 0;
  }
  if ( dword_482910 & 4
    && !sub_437460(a1, a2)
    && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 569, 0, "_CrtCheckMemory()", v9) == 1 )
    __debugbreak();
  v11 = dword_482914;
  if ( dword_482914 == dword_482918 )
    __debugbreak();
  if ( off_482EE8(2, a3, a4, a5, dword_482914, a6, a7) )
  {
    if ( a4 <= 0xFFFFFFDB )
    {
      if ( a5 != 1
        && (unsigned __int16)a5 != 4
        && (unsigned __int16)a5 != 2
        && sub_43A570(a1, a2, 1, 0, 0, 0, "%s", (unsigned int)"Error: memory allocation: bad memory block type.\n") == 1 )
        __debugbreak();
      if ( !sub_4378A0(a3)
        && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 609, 0, "_CrtIsValidHeapPointer(pUserData)", v9) == 1 )
        __debugbreak();
      lpMem = a3 - 32;
      if ( *(_DWORD *)(a3 - 32 + 20) == 3 )
        v10 = 1;
      if ( v10 )
      {
        if ( (*(_DWORD *)(lpMem + 12) != -19088708 || *(_DWORD *)(lpMem + 24))
          && sub_43A570(
               a1,
               a2,
               2,
               (int)"dbgheap.c",
               619,
               0,
               "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ",
               v9) == 1 )
          __debugbreak();
      }
      else
      {
        if ( (*(_DWORD *)(lpMem + 20) & 0xFFFF) == 2 && (unsigned __int16)a5 == 1 )
          a5 = 2;
        if ( (*(_DWORD *)(lpMem + 20) & 0xFFFF) != (unsigned __int16)a5
          && sub_43A570(
               a1,
               a2,
               2,
               (int)"dbgheap.c",
               626,
               0,
               "_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)",
               v9) == 1 )
          __debugbreak();
      }
      if ( a8 )
      {
        v12 = (int)sub_43F700(lpMem, a4 + 36);
        if ( !v12 )
          return 0;
      }
      else
      {
        v12 = (int)sub_43F670((LPVOID)lpMem, a4 + 36);
        if ( !v12 )
          return 0;
      }
      ++dword_482914;
      if ( !v10 )
      {
        dword_6D51D14 -= *(_DWORD *)(v12 + 16);
        dword_6D51D14 += a4;
        dword_6D51D1C -= *(_DWORD *)(v12 + 16);
        dword_6D51D1C += a4;
        if ( dword_6D51D1C > (unsigned int)dword_6D51D20 )
          dword_6D51D20 = dword_6D51D1C;
      }
      v14 = v12 + 32;
      if ( a4 > *(_DWORD *)(v12 + 16) )
        sub_434AB0((void *)(*(_DWORD *)(v12 + 16) + v14), byte_48291E, a4 - *(_DWORD *)(v12 + 16));
      sub_434AB0((void *)(a4 + v14), byte_48291C, 4u);
      if ( !v10 )
      {
        *(_DWORD *)(v12 + 8) = a6;
        *(_DWORD *)(v12 + 12) = a7;
        *(_DWORD *)(v12 + 24) = v11;
      }
      *(_DWORD *)(v12 + 16) = a4;
      if ( !a8
        && v12 != lpMem
        && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 680, 0, "fRealloc || (!fRealloc && pNewBlock == pOldBlock)", v9) == 1 )
        __debugbreak();
      if ( v12 == lpMem || v10 )
      {
        result = v12 + 32;
      }
      else
      {
        if ( *(_DWORD *)v12 )
        {
          *(_DWORD *)(*(_DWORD *)v12 + 4) = *(_DWORD *)(v12 + 4);
        }
        else
        {
          if ( dword_6D51D10 != lpMem
            && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 695, 0, "_pLastBlock == pOldBlock", v9) == 1 )
            __debugbreak();
          dword_6D51D10 = *(_DWORD *)(v12 + 4);
        }
        if ( *(_DWORD *)(v12 + 4) )
        {
          **(_DWORD **)(v12 + 4) = *(_DWORD *)v12;
        }
        else
        {
          if ( dword_6D51D18 != lpMem
            && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 706, 0, "_pFirstBlock == pOldBlock", v9) == 1 )
            __debugbreak();
          dword_6D51D18 = *(_DWORD *)v12;
        }
        if ( dword_6D51D18 )
          *(_DWORD *)(dword_6D51D18 + 4) = v12;
        else
          dword_6D51D10 = v12;
        *(_DWORD *)v12 = dword_6D51D18;
        *(_DWORD *)(v12 + 4) = 0;
        dword_6D51D18 = v12;
        result = v12 + 32;
      }
    }
    else
    {
      if ( sub_43A570(a1, a2, 1, 0, 0, 0, "Allocation too large or negative: %u bytes.\n", a4) == 1 )
        __debugbreak();
      result = 0;
    }
  }
  else
  {
    if ( a6 )
    {
      if ( sub_43A570(a1, a2, 0, 0, 0, 0, "Client hook re-allocation failure at file %hs line %d.\n", a6) == 1 )
        __debugbreak();
    }
    else
    {
      if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"Client hook re-allocation failure.\n") == 1 )
        __debugbreak();
    }
    result = 0;
  }
  return result;
}
// 482910: using guessed type int dword_482910;
// 482914: using guessed type int dword_482914;
// 482918: using guessed type int dword_482918;
// 48291C: using guessed type char byte_48291C;
// 48291E: using guessed type char byte_48291E;
// 482EE8: using guessed type int (__cdecl *off_482EE8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 6D51D10: using guessed type int dword_6D51D10;
// 6D51D14: using guessed type int dword_6D51D14;
// 6D51D18: using guessed type int dword_6D51D18;
// 6D51D1C: using guessed type int dword_6D51D1C;
// 6D51D20: using guessed type int dword_6D51D20;

//----- (00436D50) --------------------------------------------------------
int __usercall sub_436D50<eax>(int a1<ebx>, int a2<esi>, int a3, unsigned int a4, int a5, int a6, int a7)
{
  return sub_436810(a1, a2, a3, a4, a5, a6, a7, 0);
}

//----- (00436D80) --------------------------------------------------------
void __usercall sub_436D80(int a1<ebx>, int a2<esi>, int a3)
{
  sub_436DA0(a1, a2, a3, 1);
}

//----- (00436DA0) --------------------------------------------------------
void __usercall sub_436DA0(int a1<ebx>, int a2<esi>, int a3, signed int a4)
{
  char v4; // [sp+0h] [bp-10h]@0
  int lpMem; // [sp+Ch] [bp-4h]@13

  if ( dword_482910 & 4
    && !sub_437460(a1, a2)
    && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 993, 0, "_CrtCheckMemory()", v4) == 1 )
    __debugbreak();
  if ( a3 )
  {
    if ( off_482EE8(3, a3, 0, a4, 0, 0, 0) )
    {
      if ( !sub_4378A0(a3)
        && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1011, 0, "_CrtIsValidHeapPointer(pUserData)", v4) == 1 )
        __debugbreak();
      lpMem = a3 - 32;
      if ( (*(_DWORD *)(a3 - 32 + 20) & 0xFFFF) != 4
        && *(_DWORD *)(lpMem + 20) != 1
        && (*(_DWORD *)(lpMem + 20) & 0xFFFF) != 2
        && *(_DWORD *)(lpMem + 20) != 3
        && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1017, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)", v4) == 1 )
        __debugbreak();
      if ( !(dword_482910 & 4) )
      {
        if ( !sub_4373D0(a1, a2, lpMem + 28, byte_48291C, 4)
          && sub_43A570(
               a1,
               a2,
               1,
               0,
               0,
               0,
               "DAMAGE: before %hs block (#%d) at 0x%08X.\n",
               (unsigned int)off_482920[*(_DWORD *)(lpMem + 20) & 0xFFFF]) == 1 )
          __debugbreak();
        if ( !sub_4373D0(a1, a2, lpMem + *(_DWORD *)(lpMem + 16) + 32, byte_48291C, 4)
          && sub_43A570(
               a1,
               a2,
               1,
               0,
               0,
               0,
               "DAMAGE: after %hs block (#%d) at 0x%08X.\n",
               (unsigned int)off_482920[*(_DWORD *)(lpMem + 20) & 0xFFFF]) == 1 )
          __debugbreak();
      }
      if ( *(_DWORD *)(lpMem + 20) == 3 )
      {
        if ( *(_DWORD *)(lpMem + 12) != -19088708 || *(_DWORD *)(lpMem + 24) )
        {
          if ( sub_43A570(
                 a1,
                 a2,
                 2,
                 (int)"dbgheap.c",
                 1038,
                 0,
                 "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ",
                 v4) == 1 )
            __debugbreak();
        }
        sub_434AB0((void *)lpMem, byte_48291D, *(_DWORD *)(lpMem + 16) + 36);
        sub_43F8D0((LPVOID)lpMem);
      }
      else
      {
        if ( *(_DWORD *)(lpMem + 20) == 2 && a4 == 1 )
          a4 = 2;
        if ( *(_DWORD *)(lpMem + 20) != a4
          && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1051, 0, "pHead->nBlockUse == nBlockUse", v4) == 1 )
          __debugbreak();
        dword_6D51D1C -= *(_DWORD *)(lpMem + 16);
        if ( dword_482910 & 2 )
        {
          *(_DWORD *)(lpMem + 20) = 0;
          sub_434AB0((void *)a3, byte_48291D, *(_DWORD *)(a3 - 32 + 16));
        }
        else
        {
          if ( *(_DWORD *)lpMem )
          {
            *(_DWORD *)(*(_DWORD *)lpMem + 4) = *(_DWORD *)(lpMem + 4);
          }
          else
          {
            if ( dword_6D51D10 != lpMem
              && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1066, 0, "_pLastBlock == pHead", v4) == 1 )
              __debugbreak();
            dword_6D51D10 = *(_DWORD *)(lpMem + 4);
          }
          if ( *(_DWORD *)(lpMem + 4) )
          {
            **(_DWORD **)(lpMem + 4) = *(_DWORD *)lpMem;
          }
          else
          {
            if ( dword_6D51D18 != lpMem
              && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1076, 0, "_pFirstBlock == pHead", v4) == 1 )
              __debugbreak();
            dword_6D51D18 = *(_DWORD *)lpMem;
          }
          sub_434AB0((void *)lpMem, byte_48291D, *(_DWORD *)(lpMem + 16) + 36);
          sub_43F8D0((LPVOID)lpMem);
        }
      }
    }
    else
    {
      if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"Client hook free failure.\n") == 1 )
        __debugbreak();
    }
  }
}
// 482910: using guessed type int dword_482910;
// 48291C: using guessed type char byte_48291C;
// 48291D: using guessed type char byte_48291D;
// 482920: using guessed type char *off_482920[5];
// 482EE8: using guessed type int (__cdecl *off_482EE8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 6D51D10: using guessed type int dword_6D51D10;
// 6D51D18: using guessed type int dword_6D51D18;
// 6D51D1C: using guessed type int dword_6D51D1C;

//----- (004371B0) --------------------------------------------------------
int __usercall sub_4371B0<eax>(int a1<ebx>, int a2<esi>, int a3, signed int a4)
{
  char v5; // [sp+0h] [bp-14h]@0
  int v6; // [sp+Ch] [bp-8h]@8

  if ( dword_482910 & 4
    && !sub_437460(a1, a2)
    && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1148, 0, "_CrtCheckMemory()", v5) == 1 )
    __debugbreak();
  if ( !sub_4378A0(a3) && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1157, 0, "_CrtIsValidHeapPointer(pUserData)", v5) == 1 )
    __debugbreak();
  v6 = a3 - 32;
  if ( (*(_DWORD *)(a3 - 32 + 20) & 0xFFFF) != 4
    && *(_DWORD *)(v6 + 20) != 1
    && (*(_DWORD *)(v6 + 20) & 0xFFFF) != 2
    && *(_DWORD *)(v6 + 20) != 3
    && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1163, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)", v5) == 1 )
    __debugbreak();
  if ( *(_DWORD *)(v6 + 20) == 2 && a4 == 1 )
    a4 = 2;
  if ( *(_DWORD *)(v6 + 20) != 3
    && *(_DWORD *)(v6 + 20) != a4
    && sub_43A570(a1, a2, 2, (int)"dbgheap.c", 1170, 0, "pHead->nBlockUse == nBlockUse", v5) == 1 )
    __debugbreak();
  return *(_DWORD *)(v6 + 16);
}
// 482910: using guessed type int dword_482910;

//----- (004373D0) --------------------------------------------------------
signed int __usercall sub_4373D0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, unsigned __int8 a2, int a3)
{
  int v5; // eax@2
  int v6; // eax@3
  signed int v8; // [sp+Ch] [bp-4h]@1

  v8 = 1;
  while ( 1 )
  {
    v5 = a3--;
    if ( !v5 )
      break;
    v6 = *(_BYTE *)a1++;
    if ( v6 != a2 )
    {
      if ( sub_43A570(ebx0, esi0, 0, 0, 0, 0, "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n", a1 - 1) == 1 )
        __debugbreak();
      v8 = 0;
    }
  }
  return v8;
}

//----- (00437460) --------------------------------------------------------
signed int __usercall sub_437460<eax>(int a1<ebx>, int a2<esi>)
{
  signed int result; // eax@2
  char *v3; // [sp+10h] [bp-14h]@27
  signed int v4; // [sp+14h] [bp-10h]@23
  signed int v5; // [sp+18h] [bp-Ch]@3
  int i; // [sp+1Ch] [bp-8h]@21
  signed int v7; // [sp+20h] [bp-4h]@1

  v7 = 1;
  if ( dword_482910 & 1 )
  {
    v5 = sub_43F920();
    if ( v5 == -1 || v5 == -2 )
    {
      for ( i = dword_6D51D18; i; i = *(_DWORD *)i )
      {
        v4 = 1;
        if ( (*(_DWORD *)(i + 20) & 0xFFFF) != 4
          && *(_DWORD *)(i + 20) != 1
          && (*(_DWORD *)(i + 20) & 0xFFFF) != 2
          && *(_DWORD *)(i + 20) != 3 )
          v3 = "DAMAGED";
        else
          v3 = off_482920[*(_DWORD *)(i + 20) & 0xFFFF];
        if ( !sub_4373D0(a1, a2, i + 28, byte_48291C, 4) )
        {
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "DAMAGE: before %hs block (#%d) at 0x%08X.\n", (char)v3) == 1 )
            __debugbreak();
          v4 = 0;
        }
        if ( !sub_4373D0(a1, a2, i + *(_DWORD *)(i + 16) + 32, byte_48291C, 4) )
        {
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "DAMAGE: after %hs block (#%d) at 0x%08X.\n", (char)v3) == 1 )
            __debugbreak();
          v4 = 0;
        }
        if ( !*(_DWORD *)(i + 20) && !sub_4373D0(a1, a2, i + 32, byte_48291D, *(_DWORD *)(i + 16)) )
        {
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "DAMAGE: on top of Free block at 0x%08X.\n", i + 32) == 1 )
            __debugbreak();
          v4 = 0;
        }
        if ( !v4 )
        {
          if ( *(_DWORD *)(i + 8) && sub_43A570(a1, a2, 0, 0, 0, 0, "%hs allocated at file %hs(%d).\n", (char)v3) == 1 )
            __debugbreak();
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%hs located at 0x%08X is %u bytes long.\n", (char)v3) == 1 )
            __debugbreak();
          v7 = 0;
        }
      }
      result = v7;
    }
    else
    {
      switch ( v5 + 6 )
      {
        case 3:
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"_heapchk fails with _HEAPBADBEGIN.\n") == 1 )
            __debugbreak();
          break;
        case 2:
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"_heapchk fails with _HEAPBADNODE.\n") == 1 )
            __debugbreak();
          break;
        case 1:
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"_heapchk fails with _HEAPBADEND.\n") == 1 )
            __debugbreak();
          break;
        case 0:
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"_heapchk fails with _HEAPBADPTR.\n") == 1 )
            __debugbreak();
          break;
        default:
          if ( sub_43A570(a1, a2, 0, 0, 0, 0, "%s", (unsigned int)"_heapchk fails with unknown return value!\n") == 1 )
            __debugbreak();
          break;
      }
      result = 0;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
// 482910: using guessed type int dword_482910;
// 48291C: using guessed type char byte_48291C;
// 48291D: using guessed type char byte_48291D;
// 482920: using guessed type char *off_482920[5];
// 6D51D18: using guessed type int dword_6D51D18;

//----- (004377C0) --------------------------------------------------------
int __cdecl sub_4377C0(int a1)
{
  int v2; // [sp+0h] [bp-4h]@1

  v2 = dword_482910;
  if ( a1 != -1 )
    dword_482910 = a1;
  return v2;
}
// 482910: using guessed type int dword_482910;

//----- (00437850) --------------------------------------------------------
bool __cdecl sub_437850(const void *lp, UINT_PTR ucb, int a3)
{
  return lp && !IsBadReadPtr(lp, ucb) && (!a3 || !IsBadWritePtr((LPVOID)lp, ucb));
}

//----- (004378A0) --------------------------------------------------------
signed int __cdecl sub_4378A0(int a1)
{
  signed int result; // eax@2
  int v2; // [sp+0h] [bp-4h]@5

  if ( a1 )
  {
    if ( sub_437850((const void *)(a1 - 32), 0x20u, 1) )
    {
      v2 = sub_43FB10(a1 - 32);
      if ( v2 )
      {
        result = sub_43FB70(v2, a1 - 32);
      }
      else
      {
        if ( dword_6D51CCC & 0x8000 )
          result = 1;
        else
          result = HeapValidate(hHeap, 0, (LPCVOID)(a1 - 32));
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D51CCC: using guessed type int dword_6D51CCC;

//----- (00437A20) --------------------------------------------------------
int __usercall sub_437A20<eax>(int ebx0<ebx>, int a2<esi>, int a1)
{
  int result; // eax@4
  int j; // [sp+Ch] [bp-8h]@8
  signed int i; // [sp+10h] [bp-4h]@5

  if ( a1 )
  {
    *(_DWORD *)a1 = dword_6D51D18;
    for ( i = 0; i < 5; ++i )
    {
      *(_DWORD *)(a1 + 4 * i + 24) = 0;
      *(_DWORD *)(a1 + 4 * i + 4) = 0;
    }
    for ( j = dword_6D51D18; j; j = *(_DWORD *)j )
    {
      if ( (*(_DWORD *)(j + 20) & 0xFFFF) < 0 || (*(_DWORD *)(j + 20) & 0xFFFF) >= 5 )
      {
        if ( sub_43A570(ebx0, a2, 0, 0, 0, 0, "Bad memory block found at 0x%08X.\n", j) == 1 )
          __debugbreak();
      }
      else
      {
        ++*(_DWORD *)(a1 + 4 * (*(_DWORD *)(j + 20) & 0xFFFF) + 4);
        *(_DWORD *)(a1 + 4 * (*(_DWORD *)(j + 20) & 0xFFFF) + 24) += *(_DWORD *)(j + 16);
      }
    }
    *(_DWORD *)(a1 + 44) = dword_6D51D20;
    result = a1;
    *(_DWORD *)(a1 + 48) = dword_6D51D14;
  }
  else
  {
    if ( sub_43A570(ebx0, a2, 0, 0, 0, 0, "%s", (unsigned int)"_CrtMemCheckPoint: NULL state pointer.\n") == 1 )
      __debugbreak();
    result = 0;
  }
  return result;
}
// 6D51D14: using guessed type int dword_6D51D14;
// 6D51D18: using guessed type int dword_6D51D18;
// 6D51D20: using guessed type int dword_6D51D20;

//----- (00437CB0) --------------------------------------------------------
signed int __usercall sub_437CB0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  signed int result; // eax@38
  int v5; // [sp+Ch] [bp-8h]@1
  int i; // [sp+10h] [bp-4h]@5

  v5 = 0;
  if ( sub_43A570(a1, a3, 0, 0, 0, 0, "%s", (unsigned int)"Dumping objects ->\n") == 1 )
    __debugbreak();
  if ( a4 )
    v5 = *(_DWORD *)a4;
  for ( i = dword_6D51D18; i && i != v5; i = *(_DWORD *)i )
  {
    if ( (*(_DWORD *)(i + 20) & 0xFFFF) != 3
      && *(_DWORD *)(i + 20) & 0xFFFF
      && ((*(_DWORD *)(i + 20) & 0xFFFF) != 2 || dword_482910 & 0x10) )
    {
      if ( *(_DWORD *)(i + 8) )
      {
        if ( sub_437850(*(const void **)(i + 8), 1u, 0) )
        {
          if ( sub_43A570(a1, a3, 0, 0, 0, 0, "%hs(%d) : ", *(_DWORD *)(i + 8)) == 1 )
            __debugbreak();
        }
        else
        {
          if ( sub_43A570(a1, a3, 0, 0, 0, 0, "#File Error#(%d) : ", *(_DWORD *)(i + 12)) == 1 )
            __debugbreak();
        }
      }
      if ( sub_43A570(a1, a3, 0, 0, 0, 0, "{%ld} ", *(_DWORD *)(i + 24)) == 1 )
        __debugbreak();
      if ( (*(_DWORD *)(i + 20) & 0xFFFF) == 4 )
      {
        if ( sub_43A570(a1, a3, 0, 0, 0, 0, "client block at 0x%08X, subtype %x, %u bytes long.\n", i + 32) == 1 )
          __debugbreak();
        if ( dword_6D53780 )
          dword_6D53780(i + 32, *(_DWORD *)(i + 16));
        else
          sub_437F60(a1, a2, a3, i);
      }
      else
      {
        if ( *(_DWORD *)(i + 20) == 1 )
        {
          if ( sub_43A570(a1, a3, 0, 0, 0, 0, "normal block at 0x%08X, %u bytes long.\n", i + 32) == 1 )
            __debugbreak();
          sub_437F60(a1, a2, a3, i);
        }
        else
        {
          if ( (*(_DWORD *)(i + 20) & 0xFFFF) == 2 )
          {
            if ( sub_43A570(a1, a3, 0, 0, 0, 0, "crt block at 0x%08X, subtype %x, %u bytes long.\n", i + 32) == 1 )
              __debugbreak();
            sub_437F60(a1, a2, a3, i);
          }
        }
      }
    }
  }
  result = sub_43A570(a1, a3, 0, 0, 0, 0, "%s", (unsigned int)"Object dump complete.\n");
  if ( result == 1 )
    __debugbreak();
  return result;
}
// 482910: using guessed type int dword_482910;
// 6D51D18: using guessed type int dword_6D51D18;
// 6D53780: using guessed type int (__cdecl *dword_6D53780)(_DWORD, _DWORD);

//----- (00437F60) --------------------------------------------------------
signed int __usercall sub_437F60<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  signed int result; // eax@13
  char v5; // [sp+Ch] [bp-5Ch]@10
  int v6; // [sp+10h] [bp-58h]@7
  signed int v7; // [sp+14h] [bp-54h]@3
  char v8; // [sp+18h] [bp-50h]@6
  signed int i; // [sp+1Ch] [bp-4Ch]@1
  char v10[20]; // [sp+20h] [bp-48h]@12
  char v11[52]; // [sp+34h] [bp-34h]@12

  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(a4 + 16) >= 16 ? 16 : *(_DWORD *)(a4 + 16);
    if ( i >= v7 )
      break;
    v8 = *(_BYTE *)(i + a4 + 32);
    if ( cbMultiByte <= 1 )
      v6 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v8) & 0x157;
    else
      v6 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v8, 343);
    if ( v6 )
      v5 = v8;
    else
      v5 = 32;
    v10[i] = v5;
    sub_4343B0(a1, a3, (int)&v11[3 * i], (int)"%.2X ", v8);
  }
  v10[i] = 0;
  result = sub_43A570(a1, a3, 0, 0, 0, 0, " Data: <%s> %s\n", (unsigned int)v10);
  if ( result == 1 )
    __debugbreak();
  return result;
}
// 482AA8: using guessed type __int16 off_482AA8[2];
// 437F60: using guessed type char var_48[20];
// 437F60: using guessed type char var_34[52];

//----- (00438080) --------------------------------------------------------
signed int __usercall sub_438080<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  signed int result; // eax@7
  char v4; // [sp+Ch] [bp-34h]@1
  int v5; // [sp+14h] [bp-2Ch]@2
  int v6; // [sp+18h] [bp-28h]@4
  int v7; // [sp+20h] [bp-20h]@1

  sub_437A20(a1, a3, (int)&v4);
  if ( v7 || v5 || dword_482910 & 0x10 && v6 )
  {
    if ( sub_43A570(a1, a3, 0, 0, 0, 0, "%s", (unsigned int)"Detected memory leaks!\n") == 1 )
      __debugbreak();
    sub_437CB0(a1, a2, a3, 0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 482910: using guessed type int dword_482910;

//----- (004381D0) --------------------------------------------------------
int __cdecl sub_4381D0(int (*a1)(void), int a2)
{
  return a1();
}

//----- (00438210) --------------------------------------------------------
#error "FFFFFFFF: positive sp value has been found (funcsize=0)"

//----- (00438220) --------------------------------------------------------
#error "FFFFFFFF: positive sp value has been found (funcsize=0)"

//----- (00438230) --------------------------------------------------------
#error "FFFFFFFF: positive sp value has been found (funcsize=0)"

//----- (00438240) --------------------------------------------------------
PEXCEPTION_RECORD __userpurge sub_438240<eax>(int a1<eax>, PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  int v3; // ST1C_4@1
  PEXCEPTION_RECORD result; // eax@1

  v3 = a1;
  RtlUnwind(TargetFrame, loc_43826C, ExceptionRecord, 0);
  result = ExceptionRecord;
  ExceptionRecord->ExceptionFlags &= 0xFFFFFFFDu;
  *(_DWORD *)v3 = ExceptionRecord;
  return result;
}
// 43826C: using guessed type int __stdcall loc_43826C(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord);

//----- (004382A0) --------------------------------------------------------
int __usercall sub_4382A0<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, int a5, int a6, int a7, int a8)
{
  return sub_441720(a2, a3, a4, a5, a6, a7, a8, a1, 0, 0, 0);
}

//----- (00438310) --------------------------------------------------------
void __usercall sub_438310(int a1<edi>, int a2<esi>, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebp@0

  sub_442380(v7, a1, a2, a5, a3, a7);
}

//----- (00438380) --------------------------------------------------------
int __usercall sub_438380<eax>(int ebx0<ebx>, int edi0<edi>, int esi0<esi>, void *a1, int a2, int a3)
{
  return sub_441720(
           ebx0,
           edi0,
           esi0,
           (int)a1,
           *(_DWORD *)(a2 + 12),
           a3,
           0,
           *(_DWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 16),
           a2,
           0);
}

//----- (004383C0) --------------------------------------------------------
int __usercall sub_4383C0<eax>(int a1<ebx>, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // [sp+0h] [bp-40h]@1
  int v10; // [sp+Ch] [bp-34h]@1
  int v11; // [sp+10h] [bp-30h]@1
  int v12; // [sp+14h] [bp-2Ch]@1
  int v13; // [sp+18h] [bp-28h]@1
  int (__usercall *v14)<eax>(int<ebp>, int<ebx>, int<edi>, int<esi>); // [sp+1Ch] [bp-24h]@1
  int v15; // [sp+20h] [bp-20h]@1
  int v16; // [sp+24h] [bp-1Ch]@1
  int v17; // [sp+28h] [bp-18h]@1
  int v18; // [sp+2Ch] [bp-14h]@1
  int (__cdecl *v19)(int, int, int, int, int, int, int); // [sp+30h] [bp-10h]@1
  int *v20; // [sp+34h] [bp-Ch]@1
  int *v21; // [sp+38h] [bp-8h]@1
  int v22; // [sp+3Ch] [bp-4h]@1
  int v23; // [sp+40h] [bp+0h]@1

  v14 = sub_438490;
  v15 = a6;
  v16 = a3;
  v17 = a7;
  v18 = a8;
  v22 = 0;
  v19 = loc_43845A;
  v20 = &v9;
  v21 = &v23;
  v13 = a8;
  v10 = 1;
  v11 = a2;
  v12 = a4;
  dword_6D51E3C(*(_DWORD *)a2, &v11);
  v10 = 0;
  if ( v22 )
    *(_DWORD *)v13 = *(_DWORD *)a1;
  return v10;
}
// 43845A: using guessed type int __cdecl loc_43845A(int, int, int, int, int, int, int);
// 6D51E3C: using guessed type int (__cdecl *dword_6D51E3C)(_DWORD, _DWORD);

//----- (00438490) --------------------------------------------------------
int __usercall sub_438490<eax>(int a1<ebp>, int a2<ebx>, int a3<edi>, int a4<esi>)
{
  int result; // eax@2

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) & 0x66 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 36) = 1;
    result = 1;
  }
  else
  {
    sub_441720(
      a2,
      a3,
      a4,
      *(_DWORD *)(a1 + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12),
      *(_DWORD *)(a1 + 16),
      0,
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 16),
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 20),
      1);
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 12) + 36) )
      sub_438240(*(_DWORD *)(a1 + 12), *(PVOID *)(a1 + 12), *(PEXCEPTION_RECORD *)(a1 + 8));
    result = (*(int (**)(void))(*(_DWORD *)(a1 + 12) + 24))();
  }
  return result;
}

//----- (00438520) --------------------------------------------------------
int __cdecl sub_438520(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // esi@1
  int v7; // edi@1
  int v8; // ebx@1
  int v9; // eax@4
  int v10; // esi@10
  int v12; // [sp+Ch] [bp-4h]@1

  v5 = a1;
  v6 = *(_DWORD *)(a1 + 12);
  v12 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 12);
  if ( a2 >= 0 )
  {
    do
    {
      if ( v6 == -1 )
        sub_442480(v5, v8, v7, -1);
      --v6;
      v9 = v12 + 20 * v6;
      if ( *(_DWORD *)(v9 + 4) < a3 && a3 <= *(_DWORD *)(v9 + 8) || v6 == -1 )
      {
        v7 = v8;
        v8 = v6;
        --a2;
      }
      v5 = a2;
    }
    while ( a2 >= 0 );
    v5 = a1;
  }
  v10 = v6 + 1;
  *(_DWORD *)a4 = v10;
  *(_DWORD *)a5 = v7;
  if ( (unsigned int)v7 > *(_DWORD *)(v5 + 12) || v10 > (unsigned int)v7 )
    sub_442480(v5, v8, v7, v10);
  return v12 + 20 * v10;
}

//----- (004385B0) --------------------------------------------------------
void __cdecl sub_4385B0(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, loc_4385C8, 0, 0);
}
// 4385C8: using guessed type int __cdecl loc_4385C8(PVOID TargetFrame);

//----- (004385D0) --------------------------------------------------------
signed int __cdecl sub_4385D0(int a1, int a2, int a3, int a4)
{
  signed int result; // eax@1

  result = 1;
  if ( *(_DWORD *)(a1 + 4) & 6 )
  {
    *(_DWORD *)a4 = a2;
    result = 3;
  }
  return result;
}

//----- (004385F2) --------------------------------------------------------
int __usercall sub_4385F2<eax>(int a1<ebp>, int a2, int a3)
{
  int result; // eax@1
  int v4; // ebx@1
  int v5; // esi@1
  int v6; // esi@3

  while ( 1 )
  {
    result = a2;
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_DWORD *)(a2 + 12);
    if ( v5 == -1 )
      break;
    if ( v5 == a3 )
      break;
    v6 = 3 * v5;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v4 + 4 * v6);
    if ( !*(_DWORD *)(v4 + 4 * v6 + 4) )
    {
      sub_438686(*(_DWORD *)(v4 + 4 * v6 + 8), a1, 257);
      (*(void (**)(void))(v4 + 4 * v6 + 8))();
    }
  }
  return result;
}

//----- (0043865A) --------------------------------------------------------
signed int __thiscall sub_43865A(int this)
{
  signed int result; // eax@1

  result = 0;
  if ( *(signed int (__cdecl **)(int, int, int, int))(this + 4) == sub_4385D0 )
  {
    if ( *(_DWORD *)(this + 8) == *(_DWORD *)(*(_DWORD *)(this + 12) + 12) )
      result = 1;
  }
  return result;
}

//----- (0043867D) --------------------------------------------------------
void __cdecl sub_43867D()
{
  JUMPOUT(loc_438690);
}
// 438690: using guessed type int __stdcall loc_438690(int);

//----- (00438686) --------------------------------------------------------
int __userpurge sub_438686<eax>(int result<eax>, int a2<ebp>, int a3)
{
  dword_482934[2] = *(_DWORD *)(a2 + 8);
  dword_482934[1] = result;
  dword_482934[3] = a2;
  return result;
}

//----- (004386A0) --------------------------------------------------------
void __usercall sub_4386A0(int a1<ebx>, int a2<esi>, int a3)
{
  char v3; // [sp+0h] [bp-10h]@0
  int v4; // [sp+Ch] [bp-4h]@2

  if ( a3 )
  {
    v4 = a3 - 32;
    if ( (*(_DWORD *)(a3 - 32 + 20) & 0xFFFF) != 4
      && *(_DWORD *)(v4 + 20) != 1
      && (*(_DWORD *)(v4 + 20) & 0xFFFF) != 2
      && *(_DWORD *)(v4 + 20) != 3 )
    {
      if ( sub_43A570(a1, a2, 2, (int)"dbgdel.cpp", 47, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)", v3) == 1 )
        __debugbreak();
    }
    sub_436DA0(a1, a2, a3, *(_DWORD *)(v4 + 20));
  }
}

//----- (00438730) --------------------------------------------------------
int __usercall sub_438730<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, char a5)
{
  int v5; // ST28_4@7
  int v6; // ST24_4@7
  char v8; // [sp+0h] [bp-1Ch]@0

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"fprintf.c", 56, 0, "str != NULL", v8) == 1 )
    __debugbreak();
  if ( !a4 && sub_43A570(a1, a2, 2, (int)"fprintf.c", 57, 0, "format != NULL", v8) == 1 )
    __debugbreak();
  v5 = sub_442510(a1, a2, a3);
  v6 = sub_4395C0(a1, a2, a3, a4, (int)&a5);
  sub_442670(a1, a2, v5, a3);
  return v6;
}

//----- (004387E0) --------------------------------------------------------
int __cdecl sub_4387E0(int a1, int a2, int a3, void (__thiscall *a4)(_DWORD))
{
  int v4; // ebp@0
  int i; // [sp+4h] [bp-1Ch]@1

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
  return sub_438851(v4);
}

//----- (00438851) --------------------------------------------------------
int __usercall sub_438851<eax>(int a1<ebp>)
{
  int result; // eax@2

  if ( !*(_DWORD *)(a1 - 32) )
    result = sub_438A50(
               *(_DWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 12),
               *(_DWORD *)(a1 - 28),
               *(void (__thiscall **)(_DWORD))(a1 + 24));
  return result;
}

//----- (00438880) --------------------------------------------------------
int __usercall sub_438880<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  int v3; // eax@2
  int v5; // [sp+0h] [bp-4h]@2

  if ( sub_4371B0(a1, a2, dword_6D537A4, 2) < (unsigned int)(dword_6D537A0 - dword_6D537A4 + 4) )
  {
    v3 = sub_4371B0(a1, a2, dword_6D537A4, 2);
    v5 = sub_4367E0(a1, a2, dword_6D537A4, v3 + 16, 2, (int)"onexit.c", 104);
    if ( !v5 )
      return 0;
    dword_6D537A0 = v5 + 4 * ((dword_6D537A0 - dword_6D537A4) >> 2);
    dword_6D537A4 = v5;
  }
  *(_DWORD *)dword_6D537A0 = a3;
  dword_6D537A0 += 4;
  return a3;
}
// 6D537A0: using guessed type int dword_6D537A0;
// 6D537A4: using guessed type int dword_6D537A4;

//----- (00438930) --------------------------------------------------------
int __usercall sub_438930<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  return (sub_438880(a1, a2, a3) != 0) - 1;
}

//----- (00438950) --------------------------------------------------------
int __usercall sub_438950<eax>(int a1<ebx>, int a2<esi>)
{
  int result; // eax@3

  dword_6D537A4 = sub_436360(a1, a2, 0x80u, 2, (int)"onexit.c", 182);
  if ( !dword_6D537A4 )
    sub_4392E0(a1, a2, 24);
  result = dword_6D537A4;
  *(_DWORD *)dword_6D537A4 = 0;
  dword_6D537A0 = dword_6D537A4;
  return result;
}
// 6D537A0: using guessed type int dword_6D537A0;
// 6D537A4: using guessed type int dword_6D537A4;

//----- (004389A0) --------------------------------------------------------
int __cdecl sub_4389A0(int a1, int a2, int a3, void (__thiscall *a4)(_DWORD))
{
  int v4; // ebp@0
  int i; // [sp+24h] [bp+8h]@1

  for ( i = a3 * a2 + a1; ; a4(i) )
  {
    --a3;
    if ( a3 < 0 )
      break;
    i -= a2;
  }
  return sub_438A15(v4);
}

//----- (00438A15) --------------------------------------------------------
int __usercall sub_438A15<eax>(int a1<ebp>)
{
  int result; // eax@2

  if ( !*(_DWORD *)(a1 - 28) )
    result = sub_438A50(
               *(_DWORD *)(a1 + 12),
               *(_DWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 12),
               *(_DWORD *)(a1 + 16),
               *(void (__thiscall **)(_DWORD))(a1 + 20));
  return result;
}

//----- (00438A50) --------------------------------------------------------
int __userpurge sub_438A50<eax>(int a1<eax>, int a2, int a3, int a4, void (__thiscall *a5)(_DWORD))
{
  int result; // eax@2
  int v6; // [sp-Ch] [bp-24h]@1
  int *v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+8h] [bp-10h]@1
  signed int (__usercall *v9)<eax>(int<ebp>); // [sp+Ch] [bp-Ch]@1
  _UNKNOWN *v10; // [sp+10h] [bp-8h]@1
  int v11; // [sp+14h] [bp-4h]@1

  v10 = &unk_4787B0;
  v9 = sub_44272C;
  v8 = a1;
  v7 = &v6;
  v11 = 0;
  while ( 1 )
  {
    result = a4-- - 1;
    if ( a4 < 0 )
      break;
    a2 -= a3;
    a5(a2);
  }
  return result;
}

//----- (00438AD0) --------------------------------------------------------
int __usercall sub_438AD0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  if ( **(_DWORD **)a4 == -529697949 )
    sub_4423D0(-529697949, a1, a2, a3);
  return 0;
}

//----- (00438B00) --------------------------------------------------------
int __usercall sub_438B00<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, char *a5, char a6)
{
  char v7; // [sp+0h] [bp-14h]@0

  if ( !a4 && sub_43A570(a1, a3, 2, (int)"fscanf.c", 54, 0, "stream != NULL", v7) == 1 )
    __debugbreak();
  if ( !a5 && sub_43A570(a1, a3, 2, (int)"fscanf.c", 55, 0, "format != NULL", v7) == 1 )
    __debugbreak();
  return sub_43ADA0(a1, a2, a3, a4, a5, (int)&a6);
}

//----- (00438B90) --------------------------------------------------------
signed int __cdecl sub_438B90(int a1)
{
  signed int result; // eax@2

  if ( a1 )
  {
    if ( sub_438BF0(a1) )
    {
      result = -1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 12) & 0x4000 )
        result = -(sub_442810(*(_DWORD *)(a1 + 16)) != 0);
      else
        result = 0;
    }
  }
  else
  {
    result = sub_438CC0(0);
  }
  return result;
}
// 438B90: using guessed type _DWORD __cdecl sub_438B90(_DWORD);

//----- (00438BF0) --------------------------------------------------------
signed int __cdecl sub_438BF0(int a1)
{
  DWORD nNumberOfBytesToWrite; // [sp+0h] [bp-Ch]@3
  signed int v3; // [sp+8h] [bp-4h]@1

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 3) == 2 )
  {
    if ( *(_DWORD *)(a1 + 12) & 0x108 )
    {
      nNumberOfBytesToWrite = *(_DWORD *)a1 - *(_DWORD *)(a1 + 8);
      if ( (signed int)nNumberOfBytesToWrite > 0 )
      {
        if ( sub_435F00(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), nNumberOfBytesToWrite) == nNumberOfBytesToWrite )
        {
          if ( *(_DWORD *)(a1 + 12) & 0x80 )
            *(_DWORD *)(a1 + 12) &= 0xFFFFFFFDu;
        }
        else
        {
          *(_DWORD *)(a1 + 12) |= 0x20u;
          v3 = -1;
        }
      }
    }
  }
  *(_DWORD *)a1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  return v3;
}

//----- (00438CB0) --------------------------------------------------------
signed int __cdecl sub_438CB0()
{
  return sub_438CC0(1);
}

//----- (00438CC0) --------------------------------------------------------
signed int __cdecl sub_438CC0(int a1)
{
  signed int result; // eax@15
  int i; // [sp+0h] [bp-Ch]@1
  signed int v3; // [sp+4h] [bp-8h]@1
  signed int v4; // [sp+8h] [bp-4h]@1

  v4 = 0;
  v3 = 0;
  for ( i = 0; i < dword_6D53340; ++i )
  {
    if ( *(_DWORD *)(dword_6D51FEC + 4 * i) && *(_DWORD *)(*(_DWORD *)(dword_6D51FEC + 4 * i) + 12) & 0x83 )
    {
      if ( a1 == 1 )
      {
        if ( sub_438B90(*(_DWORD *)(dword_6D51FEC + 4 * i)) != -1 )
          ++v4;
      }
      else
      {
        if ( !a1
          && *(_DWORD *)(*(_DWORD *)(dword_6D51FEC + 4 * i) + 12) & 2
          && sub_438B90(*(_DWORD *)(dword_6D51FEC + 4 * i)) == -1 )
          v3 = -1;
      }
    }
  }
  if ( a1 == 1 )
    result = v4;
  else
    result = v3;
  return result;
}
// 438B90: using guessed type _DWORD __cdecl sub_438B90(_DWORD);
// 6D51FEC: using guessed type int dword_6D51FEC;
// 6D53340: using guessed type int dword_6D53340;

//----- (00438DA0) --------------------------------------------------------
int __cdecl sub_438DA0(int a1, int a2, unsigned int a3)
{
  int result; // eax@1
  int v4; // esi@2
  int v5; // edi@2
  unsigned __int8 v6; // cf@4
  unsigned __int8 v7; // cl@7
  unsigned __int8 v8; // dl@7
  char v9; // zf@10
  unsigned int v10; // ecx@10
  unsigned int v11; // ecx@14
  unsigned int v12; // edx@14
  unsigned int v13; // ecx@16
  unsigned int v14; // edx@16
  int v15; // edx@20
  int v16; // ecx@20
  unsigned int v17; // ecx@24
  unsigned int v18; // edx@24

  result = a3;
  if ( !a3 )
    return result;
  v4 = a1;
  v5 = a2;
  if ( !(((unsigned __int8)a2 | (unsigned __int8)a1) & 3) )
  {
    result = a3 & 3;
    v10 = a3 >> 2;
    v9 = a3 >> 2 == 0;
    if ( !(a3 >> 2) )
      goto LABEL_28;
    do
    {
      if ( !v10 )
        break;
      v9 = *(_DWORD *)v4 == *(_DWORD *)v5;
      v4 += 4;
      v5 += 4;
      --v10;
    }
    while ( v9 );
    if ( v9 )
    {
LABEL_28:
      if ( !result )
        return result;
      v15 = *(_DWORD *)v4;
      v16 = *(_DWORD *)v5;
      v6 = (unsigned __int8)*(_DWORD *)v4 < (unsigned __int8)*(_DWORD *)v5;
      if ( (unsigned __int8)*(_DWORD *)v4 == (unsigned __int8)*(_DWORD *)v5 )
      {
        --result;
        if ( !result )
          return result;
        v6 = BYTE1(v15) < BYTE1(v16);
        if ( BYTE1(v15) == BYTE1(v16) )
        {
          --result;
          if ( !result )
            return result;
          v17 = (unsigned int)&unk_FF0000 & v16;
          v18 = (unsigned int)&unk_FF0000 & v15;
          v6 = v18 < v17;
          if ( v18 == v17 )
          {
            --result;
            return result;
          }
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(v4 - 4);
      v12 = *(_DWORD *)(v5 - 4);
      v6 = (unsigned __int8)v11 < (unsigned __int8)v12;
      if ( (_BYTE)v11 == (_BYTE)v12 )
      {
        v6 = BYTE1(v11) < BYTE1(v12);
        if ( BYTE1(v11) == BYTE1(v12) )
        {
          v13 = v11 >> 16;
          v14 = v12 >> 16;
          v6 = (unsigned __int8)v13 < (unsigned __int8)v14;
          if ( (_BYTE)v13 == (_BYTE)v14 )
            v6 = BYTE1(v13) < BYTE1(v14);
        }
      }
    }
    return -v6 - (v6 - 1);
  }
  if ( !(a3 & 1) )
  {
LABEL_6:
    while ( 1 )
    {
      v6 = *(_BYTE *)v4 < *(_BYTE *)v5;
      if ( *(_BYTE *)v4 != *(_BYTE *)v5 )
        break;
      v7 = *(_BYTE *)(v4 + 1);
      v8 = *(_BYTE *)(v5 + 1);
      v6 = v7 < v8;
      if ( v7 != v8 )
        break;
      v5 += 2;
      v4 += 2;
      result -= 2;
      if ( !result )
        return result;
    }
    return -v6 - (v6 - 1);
  }
  v6 = *(_BYTE *)a1 < *(_BYTE *)a2;
  if ( *(_BYTE *)a1 != *(_BYTE *)a2 )
    return -v6 - (v6 - 1);
  v4 = a1 + 1;
  v5 = a2 + 1;
  result = a3 - 1;
  if ( a3 != 1 )
    goto LABEL_6;
  return result;
}

//----- (00438E50) --------------------------------------------------------
signed int __usercall sub_438E50<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, LPCSTR lpFileName, int a5)
{
  signed int result; // eax@6
  HANDLE v6; // [sp+4h] [bp-148h]@1
  struct _WIN32_FIND_DATAA FindFileData; // [sp+8h] [bp-144h]@1
  DWORD v8; // [sp+148h] [bp-4h]@2

  v6 = FindFirstFileA(lpFileName, &FindFileData);
  if ( v6 == (HANDLE)-1 )
  {
    v8 = GetLastError();
    switch ( v8 )
    {
      case 2u:
      case 3u:
      case 0x12u:
        dword_6D51CC0 = 2;
        break;
      case 8u:
        dword_6D51CC0 = 12;
        break;
      default:
        dword_6D51CC0 = 22;
        break;
    }
    result = -1;
  }
  else
  {
    *(_DWORD *)a5 = FindFileData.dwFileAttributes != 128 ? FindFileData.dwFileAttributes : 0;
    *(_DWORD *)(a5 + 4) = sub_4390F0(a1, a2, a3, &FindFileData.ftCreationTime);
    *(_DWORD *)(a5 + 8) = sub_4390F0(a1, a2, a3, &FindFileData.ftLastAccessTime);
    *(_DWORD *)(a5 + 12) = sub_4390F0(a1, a2, a3, &FindFileData.ftLastWriteTime);
    *(_DWORD *)(a5 + 16) = FindFileData.nFileSizeLow;
    sub_434B90(a5 + 20);
    result = (signed int)v6;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00438F90) --------------------------------------------------------
signed int __usercall sub_438F90<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, HANDLE hFindFile, int a5)
{
  signed int result; // eax@6
  struct _WIN32_FIND_DATAA FindFileData; // [sp+4h] [bp-144h]@1
  DWORD v7; // [sp+144h] [bp-4h]@2

  if ( FindNextFileA(hFindFile, &FindFileData) )
  {
    *(_DWORD *)a5 = FindFileData.dwFileAttributes != 128 ? FindFileData.dwFileAttributes : 0;
    *(_DWORD *)(a5 + 4) = sub_4390F0(a1, a2, a3, &FindFileData.ftCreationTime);
    *(_DWORD *)(a5 + 8) = sub_4390F0(a1, a2, a3, &FindFileData.ftLastAccessTime);
    *(_DWORD *)(a5 + 12) = sub_4390F0(a1, a2, a3, &FindFileData.ftLastWriteTime);
    *(_DWORD *)(a5 + 16) = FindFileData.nFileSizeLow;
    sub_434B90(a5 + 20);
    result = 0;
  }
  else
  {
    v7 = GetLastError();
    switch ( v7 )
    {
      case 2u:
      case 3u:
      case 0x12u:
        dword_6D51CC0 = 2;
        break;
      case 8u:
        dword_6D51CC0 = 12;
        break;
      default:
        dword_6D51CC0 = 22;
        break;
    }
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (004390C0) --------------------------------------------------------
signed int __cdecl sub_4390C0(HANDLE hFindFile)
{
  signed int result; // eax@2

  if ( FindClose(hFindFile) )
  {
    result = 0;
  }
  else
  {
    dword_6D51CC0 = 22;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (004390F0) --------------------------------------------------------
signed int __usercall sub_4390F0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, const FILETIME *lpFileTime)
{
  signed int result; // eax@3
  struct _SYSTEMTIME SystemTime; // [sp+0h] [bp-18h]@5
  struct _FILETIME LocalFileTime; // [sp+10h] [bp-8h]@4

  if ( lpFileTime->dwLowDateTime || lpFileTime->dwHighDateTime )
  {
    if ( FileTimeToLocalFileTime(lpFileTime, &LocalFileTime) && FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
      result = sub_43EC30(
                 a1,
                 a2,
                 a3,
                 SystemTime.wYear,
                 SystemTime.wMonth,
                 SystemTime.wDay,
                 SystemTime.wHour,
                 SystemTime.wMinute,
                 SystemTime.wSecond,
                 -1);
    else
      result = -1;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (00439180) --------------------------------------------------------
LONG __usercall sub_439180<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>)
{
  unsigned int v4; // eax@1
  int v5; // ST0C_4@6
  unsigned __int8 *v6; // ST08_4@6
  HMODULE v7; // eax@6
  int v9; // [sp-Ch] [bp-78h]@1
  int v10; // [sp-8h] [bp-74h]@1
  int v11; // [sp-4h] [bp-70h]@1
  int v12; // [sp+0h] [bp-6Ch]@4
  int v13; // [sp+4h] [bp-68h]@6
  unsigned __int8 *v14; // [sp+8h] [bp-64h]@3
  UINT v15; // [sp+Ch] [bp-60h]@6
  struct _STARTUPINFOA StartupInfo; // [sp+10h] [bp-5Ch]@3
  int *v17; // [sp+54h] [bp-18h]@1
  struct _EXCEPTION_POINTERS *ExceptionInfo; // [sp+58h] [bp-14h]@6
  int v19; // [sp+5Ch] [bp-10h]@1
  signed int (__usercall *v20)<eax>(int<ebp>); // [sp+60h] [bp-Ch]@1
  _UNKNOWN *v21; // [sp+64h] [bp-8h]@1
  int v22; // [sp+68h] [bp-4h]@1

  v22 = -1;
  v21 = &unk_4787D8;
  v20 = sub_44272C;
  v19 = a1;
  v11 = a2;
  v10 = a4;
  v9 = a3;
  v17 = &v9;
  v4 = GetVersion();
  dword_6D51CD8 = (unsigned __int16)v4 >> 8;
  dword_6D51CD4 = (unsigned __int8)v4;
  dword_6D51CD0 = dword_6D51CD8 + ((unsigned __int8)v4 << 8);
  dword_6D51CCC = v4 >> 16;
  if ( !sub_43F990(0) )
    sub_439310(a2, a4, 28);
  v22 = 0;
  sub_43EDB0(a2, a4);
  dword_6D53774 = (int)GetCommandLineA();
  dword_6D51D24 = sub_443340(a2, a4);
  sub_442E30(a2, a3, a4);
  sub_442CE0(a2, a3, a4);
  sub_435D30();
  StartupInfo.dwFlags = 0;
  GetStartupInfoA(&StartupInfo);
  v14 = sub_442C20(a2, a3, a4);
  if ( StartupInfo.dwFlags & 1 )
    v12 = StartupInfo.wShowWindow;
  else
    v12 = 10;
  v5 = v12;
  v6 = v14;
  v7 = GetModuleHandleA(0);
  v15 = sub_4013B6(v7, 0, v6, v5);
  sub_435D70(a2, a3, a4, v15);
  v13 = ExceptionInfo->ExceptionRecord->ExceptionCode;
  return sub_442A10(v13, ExceptionInfo);
}
// 4013B6: using guessed type _DWORD __stdcall sub_4013B6(_DWORD, _DWORD, _DWORD, _DWORD);
// 6D51CCC: using guessed type int dword_6D51CCC;
// 6D51CD0: using guessed type int dword_6D51CD0;
// 6D51CD4: using guessed type int dword_6D51CD4;
// 6D51CD8: using guessed type int dword_6D51CD8;
// 6D51D24: using guessed type int dword_6D51D24;
// 6D53774: using guessed type int dword_6D53774;

//----- (004392BA) --------------------------------------------------------
unsigned int __usercall sub_4392BA<eax>(int a1<ebx>, int a2<ebp>, int a3<edi>, int a4<esi>)
{
  return sub_435D90(a1, a3, a4, *(_DWORD *)(a2 - 104));
}

//----- (004392E0) --------------------------------------------------------
int __usercall sub_4392E0<eax>(int ebx0<ebx>, int a2<esi>, int a1)
{
  if ( dword_6D51D2C == 1 )
    sub_443560(ebx0, a2);
  sub_4435B0(ebx0, a2, a1);
  return off_482950(255);
}
// 482950: using guessed type int (__cdecl *off_482950)(_DWORD);
// 6D51D2C: using guessed type int dword_6D51D2C;

//----- (00439310) --------------------------------------------------------
void __usercall sub_439310(int a1<ebx>, int a2<esi>, int a3)
{
  if ( dword_6D51D2C == 1 )
    sub_443560(a1, a2);
  sub_4435B0(a1, a2, a3);
  ExitProcess(0xFFu);
}
// 6D51D2C: using guessed type int dword_6D51D2C;

//----- (00439340) --------------------------------------------------------
signed int __usercall sub_439340<eax>(int a1<ebx>, int esi0<esi>, unsigned __int8 Buffer, int a2)
{
  int v4; // eax@6
  signed int result; // eax@6
  char v6; // [sp+0h] [bp-20h]@0
  int v7; // [sp+Ch] [bp-14h]@23
  signed int v8; // [sp+10h] [bp-10h]@4
  int v9; // [sp+14h] [bp-Ch]@11
  int v10; // [sp+18h] [bp-8h]@4
  DWORD nNumberOfBytesToWrite; // [sp+1Ch] [bp-4h]@20

  if ( !a2 && sub_43A570(a1, esi0, 2, (int)"_flsbuf.c", 105, 0, "str != NULL", v6) == 1 )
    __debugbreak();
  v10 = a2;
  v8 = *(_DWORD *)(a2 + 16);
  if ( !(*(_DWORD *)(a2 + 12) & 0x82) || *(_DWORD *)(a2 + 12) & 0x40 )
  {
    v4 = *(_DWORD *)(a2 + 12);
    LOBYTE(v4) = v4 | 0x20;
    *(_DWORD *)(a2 + 12) = v4;
    return -1;
  }
  if ( *(_DWORD *)(a2 + 12) & 1 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    if ( !(*(_DWORD *)(v10 + 12) & 0x10) )
    {
      *(_DWORD *)(v10 + 12) |= 0x20u;
      return -1;
    }
    *(_DWORD *)v10 = *(_DWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 12) &= 0xFFFFFFFEu;
  }
  *(_DWORD *)(v10 + 12) |= 2u;
  *(_DWORD *)(v10 + 12) &= 0xFFFFFFEFu;
  *(_DWORD *)(v10 + 4) = 0;
  v9 = 0;
  if ( !(*(_DWORD *)(v10 + 12) & 0x10C)
    && ((_UNKNOWN *)v10 != &unk_482F28 && (_UNKNOWN *)v10 != &unk_482F48 || !sub_443890(v8)) )
    sub_4437C0(a1, esi0, v10);
  if ( *(_DWORD *)(v10 + 12) & 0x108 )
  {
    if ( *(_DWORD *)v10 - *(_DWORD *)(v10 + 8) < 0
      && sub_43A570(
           a1,
           esi0,
           2,
           (int)"_flsbuf.c",
           160,
           0,
           "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)",
           v6) == 1 )
      __debugbreak();
    nNumberOfBytesToWrite = *(_DWORD *)v10 - *(_DWORD *)(v10 + 8);
    *(_DWORD *)v10 = *(_DWORD *)(v10 + 8) + 1;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(v10 + 24) - 1;
    if ( (signed int)nNumberOfBytesToWrite <= 0 )
    {
      if ( v8 == -1 )
        v7 = (int)&unk_482EE0;
      else
        v7 = dword_6D53380[v8 >> 5] + 8 * (v8 & 0x1F);
      if ( *(_BYTE *)(v7 + 4) & 0x20 )
        sub_4361B0(v8, 0, 2u);
    }
    else
    {
      v9 = sub_435F00(v8, *(_DWORD *)(v10 + 8), nNumberOfBytesToWrite);
    }
    **(_BYTE **)(v10 + 8) = Buffer;
  }
  else
  {
    nNumberOfBytesToWrite = 1;
    v9 = sub_435F00(v8, (signed int)&Buffer, 1u);
  }
  if ( v9 == nNumberOfBytesToWrite )
  {
    result = Buffer;
  }
  else
  {
    *(_DWORD *)(v10 + 12) |= 0x20u;
    result = -1;
  }
  return result;
}
// 6D53380: using guessed type int dword_6D53380[];

//----- (004395C0) --------------------------------------------------------
int __usercall sub_4395C0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3)
{
  int v5; // eax@17
  int v6; // edx@19
  int v7; // eax@20
  int v8; // eax@24
  int v9; // edx@39
  int v10; // eax@41
  int v11; // ecx@42
  int v12; // ecx@46
  int v13; // edx@61
  int v14; // eax@69
  int v15; // edx@76
  int v16; // eax@86
  int v17; // eax@91
  int v18; // ecx@98
  int v19; // edx@109
  int v20; // edx@123
  int v21; // edx@133
  int v22; // edx@158
  const WCHAR v23; // ST22_2@159
  char v25; // [sp+0h] [bp-2B4h]@0
  signed int v26; // [sp+10h] [bp-2A4h]@63
  int v27; // [sp+24h] [bp-290h]@6
  int v28; // [sp+28h] [bp-28Ch]@159
  char v29; // [sp+2Ch] [bp-288h]@159
  int v30; // [sp+30h] [bp-284h]@157
  const WCHAR *v31; // [sp+34h] [bp-280h]@157
  int v32; // [sp+38h] [bp-27Ch]@150
  __int64 v33; // [sp+3Ch] [bp-278h]@111
  int v34; // [sp+44h] [bp-270h]@135
  __int64 v35; // [sp+48h] [bp-26Ch]@123
  int v36; // [sp+50h] [bp-264h]@91
  int v37; // [sp+54h] [bp-260h]@91
  int v38; // [sp+58h] [bp-25Ch]@81
  int v39; // [sp+5Ch] [bp-258h]@65
  char *i; // [sp+60h] [bp-254h]@68
  char *j; // [sp+64h] [bp-250h]@75
  int v42; // [sp+68h] [bp-24Ch]@53
  __int16 v43; // [sp+6Ch] [bp-248h]@51
  int v44; // [sp+70h] [bp-244h]@14
  char v45; // [sp+74h] [bp-240h]@106
  char v46; // [sp+75h] [bp-23Fh]@106
  int v47; // [sp+78h] [bp-23Ch]@14
  int v48; // [sp+7Ch] [bp-238h]@100
  int v49; // [sp+80h] [bp-234h]@14
  int v50; // [sp+84h] [bp-230h]@103
  int v51; // [sp+88h] [bp-22Ch]@1
  CHAR MultiByteStr; // [sp+8Ch] [bp-228h]@48
  char v53; // [sp+28Bh] [bp-29h]@132
  int v54; // [sp+28Ch] [bp-28h]@2
  int v55; // [sp+290h] [bp-24h]@1
  char *k; // [sp+294h] [bp-20h]@52
  int v57; // [sp+298h] [bp-1Ch]@9
  int v58; // [sp+29Ch] [bp-18h]@1
  WCHAR WideCharStr; // [sp+2A0h] [bp-14h]@48
  int v60; // [sp+2A4h] [bp-10h]@14
  int v61; // [sp+2A8h] [bp-Ch]@8
  int v62; // [sp+2ACh] [bp-8h]@14
  int v63; // [sp+2B0h] [bp-4h]@14

  v55 = 0;
  v51 = 0;
  v58 = 0;
  while ( 1 )
  {
    LOBYTE(v54) = *(_BYTE *)a2++;
    if ( !(_BYTE)v54 )
      return v51;
    if ( v51 < 0 )
      return v51;
    if ( (char)v54 < 32 || (char)v54 > 120 )
      v27 = 0;
    else
      v27 = aInconsistentIo[(char)v54 + 44] & 0xF;
    v61 = v27;
    v58 = *(&byte_478830[8 * v27] + v58) >> 4;
    switch ( v58 )
    {
      case 0:
LABEL_9:
        v57 = 0;
        if ( *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v54) & 0x8000 )
        {
          sub_43A2F0(ebx0, esi0, v54, a1, (int)&v51);
          LOBYTE(v54) = *(_BYTE *)a2++;
          if ( !(_BYTE)v54 )
          {
            if ( sub_43A570(ebx0, esi0, 2, (int)"output.c", 390, 0, "ch != _T('\\0')", v25) == 1 )
              __debugbreak();
          }
        }
        sub_43A2F0(ebx0, esi0, v54, a1, (int)&v51);
        break;
      case 1:
        v62 = 0;
        v47 = 0;
        v44 = 0;
        v60 = 0;
        v63 = 0;
        v49 = -1;
        v57 = 0;
        break;
      case 2:
        switch ( (char)v54 )
        {
          case 45:
            v63 |= 4u;
            break;
          case 43:
            v5 = v63;
            LOBYTE(v5) = v63 | 1;
            v63 = v5;
            break;
          case 32:
            v63 |= 2u;
            break;
          case 35:
            v6 = v63;
            LOBYTE(v6) = v63 | 0x80;
            v63 = v6;
            break;
          case 48:
            v7 = v63;
            LOBYTE(v7) = v63 | 8;
            v63 = v7;
            break;
          default:
            continue;
        }
        continue;
      case 3:
        if ( (char)v54 == 42 )
        {
          v44 = sub_43A400((int)&a3);
          if ( v44 < 0 )
          {
            v8 = v63;
            LOBYTE(v8) = v63 | 4;
            v63 = v8;
            v44 = -v44;
          }
        }
        else
        {
          v44 = 10 * v44 + (char)v54 - 48;
        }
        break;
      case 4:
        v49 = 0;
        break;
      case 5:
        if ( (char)v54 == 42 )
        {
          v49 = sub_43A400((int)&a3);
          if ( v49 < 0 )
            v49 = -1;
        }
        else
        {
          v49 = 10 * v49 + (char)v54 - 48;
        }
        break;
      case 6:
        switch ( (char)v54 )
        {
          case 108:
            v63 |= 0x10u;
            break;
          case 73:
            if ( *(_BYTE *)a2 != 54 || *(_BYTE *)(a2 + 1) != 52 )
            {
              v58 = 0;
              goto LABEL_9;
            }
            a2 += 2;
            v9 = v63;
            BYTE1(v9) |= 0x80u;
            v63 = v9;
            break;
          case 104:
            v10 = v63;
            LOBYTE(v10) = v63 | 0x20;
            v63 = v10;
            break;
          case 119:
            v11 = v63;
            BYTE1(v11) |= 8u;
            v63 = v11;
            break;
          default:
            continue;
        }
        continue;
      case 7:
        switch ( (char)v54 )
        {
          case 67:
            if ( !(v63 & 0x830) )
            {
              v12 = v63;
              BYTE1(v12) |= 8u;
              v63 = v12;
            }
            goto LABEL_47;
          case 99:
LABEL_47:
            if ( v63 & 0x810 )
            {
              WideCharStr = sub_43A440((int)&a3);
              v55 = sub_4438C0(&MultiByteStr, WideCharStr);
              if ( v55 < 0 )
                v47 = 1;
            }
            else
            {
              v43 = sub_43A400((int)&a3);
              MultiByteStr = v43;
              v55 = 1;
            }
            k = &MultiByteStr;
            break;
          case 90:
            v42 = sub_43A400((int)&a3);
            if ( v42 && *(_DWORD *)(v42 + 4) )
            {
              if ( v63 & 0x800 )
              {
                k = *(char **)(v42 + 4);
                v55 = (unsigned int)*(_WORD *)v42 >> 1;
                v57 = 1;
              }
              else
              {
                v57 = 0;
                k = *(char **)(v42 + 4);
                v55 = *(_WORD *)v42;
              }
            }
            else
            {
              k = off_482958;
              v55 = sub_434FC0((int)off_482958);
            }
            break;
          case 83:
            if ( !(v63 & 0x830) )
            {
              v13 = v63;
              BYTE1(v13) |= 8u;
              v63 = v13;
            }
            goto LABEL_62;
          case 115:
LABEL_62:
            if ( v49 == -1 )
              v26 = 2147483647;
            else
              v26 = v49;
            v39 = v26;
            k = (char *)sub_43A400((int)&a3);
            if ( v63 & 0x810 )
            {
              if ( !k )
                k = (char *)off_48295C;
              v57 = 1;
              for ( i = k; ; i += 2 )
              {
                v14 = v39--;
                if ( !v14 )
                  break;
                if ( !*(_WORD *)i )
                  break;
              }
              v55 = (signed int)(i - k) >> 1;
            }
            else
            {
              if ( !k )
                k = off_482958;
              for ( j = k; ; ++j )
              {
                v15 = v39--;
                if ( !v15 )
                  break;
                if ( !*j )
                  break;
              }
              v55 = j - k;
            }
            break;
          case 110:
            v38 = sub_43A400((int)&a3);
            if ( v63 & 0x20 )
              *(_WORD *)v38 = v51;
            else
              *(_DWORD *)v38 = v51;
            v47 = 1;
            break;
          case 69:
          case 71:
            v62 = 1;
            LOBYTE(v54) = v54 + 32;
            goto LABEL_86;
          case 101:
          case 102:
          case 103:
LABEL_86:
            v16 = v63;
            LOBYTE(v16) = v63 | 0x40;
            v63 = v16;
            k = &MultiByteStr;
            if ( v49 >= 0 )
            {
              if ( !v49 && (char)v54 == 103 )
                v49 = 1;
            }
            else
            {
              v49 = 6;
            }
            a3 += 8;
            v17 = *(_DWORD *)(a3 - 8 + 4);
            v36 = *(_DWORD *)(a3 - 8);
            v37 = v17;
            off_482A90(&v36, k, (char)v54, v49, v62);
            if ( v63 & 0x80 && !v49 )
              off_482A9C(k);
            if ( (char)v54 == 103 && !(v63 & 0x80) )
              off_482A94(k);
            if ( *k == 45 )
            {
              v18 = v63;
              BYTE1(v18) |= 1u;
              v63 = v18;
              ++k;
            }
            v55 = sub_434FC0((int)k);
            break;
          case 100:
          case 105:
            v63 |= 0x40u;
            v48 = 10;
            goto LABEL_110;
          case 117:
            v48 = 10;
            goto LABEL_110;
          case 112:
            v49 = 8;
            goto LABEL_103;
          case 88:
LABEL_103:
            v50 = 7;
            goto LABEL_105;
          case 120:
            v50 = 39;
LABEL_105:
            v48 = 16;
            if ( v63 & 0x80 )
            {
              v45 = 48;
              v46 = v50 + 81;
              v60 = 2;
            }
            goto LABEL_110;
          case 111:
            v48 = 8;
            if ( v63 & 0x80 )
            {
              v19 = v63;
              BYTE1(v19) |= 2u;
              v63 = v19;
            }
LABEL_110:
            if ( v63 & 0x8000 )
            {
              v33 = sub_43A420((int)&a3);
            }
            else
            {
              if ( v63 & 0x20 )
              {
                if ( v63 & 0x40 )
                  v33 = (signed __int16)sub_43A400((int)&a3);
                else
                  v33 = (unsigned __int16)sub_43A400((int)&a3);
              }
              else
              {
                if ( v63 & 0x40 )
                  v33 = sub_43A400((int)&a3);
                else
                  v33 = (unsigned int)sub_43A400((int)&a3);
              }
            }
            if ( v63 & 0x40 && SHIDWORD(v33) <= 0 && SHIDWORD(v33) < 0 )
            {
              v35 = -v33;
              v20 = v63;
              BYTE1(v20) |= 1u;
              v63 = v20;
            }
            else
            {
              v35 = v33;
            }
            if ( !(v63 & 0x8000) )
              HIDWORD(v35) = 0;
            if ( v49 >= 0 )
              v63 &= 0xFFFFFFF7u;
            else
              v49 = 1;
            if ( !v35 )
              v60 = 0;
            for ( k = &v53; ; --k )
            {
              v21 = v49--;
              if ( v21 <= 0 )
              {
                if ( !v35 )
                  break;
              }
              v34 = sub_4439D0(v35, v48) + 48;
              v35 = sub_443960(v35, v48, (unsigned __int64)v48 >> 32);
              if ( v34 > 57 )
                v34 += v50;
              *k = v34;
            }
            v55 = &v53 - k++;
            if ( v63 & 0x200 && (*k != 48 || !v55) )
            {
              --k;
              *k = 48;
              ++v55;
            }
            break;
          default:
            break;
        }
        if ( !v47 )
        {
          if ( v63 & 0x40 )
          {
            if ( v63 & 0x100 )
            {
              v45 = 45;
              v60 = 1;
            }
            else
            {
              if ( v63 & 1 )
              {
                v45 = 43;
                v60 = 1;
              }
              else
              {
                if ( v63 & 2 )
                {
                  v45 = 32;
                  v60 = 1;
                }
              }
            }
          }
          v32 = v44 - v55 - v60;
          if ( !(v63 & 0xC) )
            sub_43A370(ebx0, esi0, 0x20u, v32, a1, (int)&v51);
          sub_43A3B0(ebx0, esi0, (int)&v45, v60, a1, (int)&v51);
          if ( v63 & 8 && !(v63 & 4) )
            sub_43A370(ebx0, esi0, 0x30u, v32, a1, (int)&v51);
          if ( v57 && v55 > 0 )
          {
            v31 = (const WCHAR *)k;
            v30 = v55;
            while ( 1 )
            {
              v22 = v30--;
              if ( !v22 )
                break;
              v23 = *v31;
              ++v31;
              v28 = sub_4438C0(&v29, v23);
              if ( v28 <= 0 )
                break;
              sub_43A3B0(ebx0, esi0, (int)&v29, v28, a1, (int)&v51);
            }
          }
          else
          {
            sub_43A3B0(ebx0, esi0, (int)k, v55, a1, (int)&v51);
          }
          if ( v63 & 4 )
            sub_43A370(ebx0, esi0, 0x20u, v32, a1, (int)&v51);
        }
        break;
      default:
        continue;
    }
  }
}
// 482958: using guessed type char *off_482958;
// 48295C: using guessed type wchar_t *off_48295C;
// 482A90: using guessed type int (__cdecl *off_482A90)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 482A94: using guessed type int (__cdecl *off_482A94)(_DWORD);
// 482A9C: using guessed type int (__cdecl *off_482A9C)(_DWORD);
// 482AA8: using guessed type __int16 off_482AA8[2];

//----- (0043A2F0) --------------------------------------------------------
signed int __usercall sub_43A2F0<eax>(int a1<ebx>, int esi0<esi>, unsigned __int8 Buffer, int a2, int a3)
{
  signed int result; // eax@2
  signed int v6; // [sp+0h] [bp-4h]@2

  --*(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 4) < 0 )
  {
    result = sub_439340(a1, esi0, Buffer, a2);
    v6 = result;
  }
  else
  {
    **(_BYTE **)a2 = Buffer;
    v6 = Buffer;
    result = *(_DWORD *)a2 + 1;
    *(_DWORD *)a2 = result;
  }
  if ( v6 == -1 )
  {
    *(_DWORD *)a3 = -1;
  }
  else
  {
    result = *(_DWORD *)a3 + 1;
    *(_DWORD *)a3 = result;
  }
  return result;
}

//----- (0043A370) --------------------------------------------------------
signed int __usercall sub_43A370<eax>(int a1<ebx>, int esi0<esi>, unsigned __int8 Buffer, int a2, int a3, int a4)
{
  signed int result; // eax@1

  do
  {
    result = a2--;
    if ( result <= 0 )
      break;
    result = sub_43A2F0(a1, esi0, Buffer, a3, a4);
  }
  while ( *(_DWORD *)a4 != -1 );
  return result;
}

//----- (0043A3B0) --------------------------------------------------------
signed int __usercall sub_43A3B0<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3, int a4)
{
  signed int result; // eax@1
  unsigned __int8 v7; // ST00_1@2

  do
  {
    result = a2--;
    if ( result <= 0 )
      break;
    v7 = *(_BYTE *)a1++;
    result = sub_43A2F0(ebx0, esi0, v7, a3, a4);
  }
  while ( *(_DWORD *)a4 != -1 );
  return result;
}

//----- (0043A400) --------------------------------------------------------
int __cdecl sub_43A400(int a1)
{
  *(_DWORD *)a1 += 4;
  return *(_DWORD *)(*(_DWORD *)a1 - 4);
}

//----- (0043A420) --------------------------------------------------------
__int64 __cdecl sub_43A420(int a1)
{
  *(_DWORD *)a1 += 8;
  return *(_QWORD *)(*(_DWORD *)a1 - 8);
}

//----- (0043A440) --------------------------------------------------------
__int16 __cdecl sub_43A440(int a1)
{
  *(_DWORD *)a1 += 4;
  return *(_WORD *)(*(_DWORD *)a1 - 4);
}

//----- (0043A460) --------------------------------------------------------
void __cdecl sub_43A460()
{
  DebugBreak();
}

//----- (0043A570) --------------------------------------------------------
signed int __usercall sub_43A570<eax>(int a1<ebx>, int a2<esi>, int a3, int a4, int a5, int a6, const char *a7, char a8)
{
  signed int result; // eax@3
  int v9; // eax@32
  int v10; // [sp+4h] [bp-302Ch]@37
  char v11; // [sp+Ch] [bp-3024h]@37
  DWORD NumberOfBytesWritten; // [sp+20h] [bp-3010h]@32
  HMODULE hModule; // [sp+24h] [bp-300Ch]@7
  char v14; // [sp+28h] [bp-3008h]@1
  char v15; // [sp+29h] [bp-3007h]@1
  __int16 v16; // [sp+1025h] [bp-200Bh]@1
  char v17; // [sp+1027h] [bp-2009h]@1
  const CHAR Buffer; // [sp+1028h] [bp-2008h]@1
  char v19; // [sp+1029h] [bp-2007h]@1
  __int16 v20; // [sp+2025h] [bp-100Bh]@1
  char v21; // [sp+2027h] [bp-1009h]@1
  int v22; // [sp+2028h] [bp-1008h]@26
  int v23; // [sp+202Ch] [bp-1004h]@1
  char v24; // [sp+2030h] [bp-1000h]@1
  char v25; // [sp+2031h] [bp-FFFh]@1
  __int16 v26; // [sp+302Dh] [bp-3h]@1
  char v27; // [sp+302Fh] [bp-1h]@1
  int v28; // [sp+3030h] [bp+0h]@39

  v14 = 0;
  memset(&v15, 0, 0xFFCu);
  v16 = 0;
  v17 = 0;
  Buffer = 0;
  memset(&v19, 0, 0xFFCu);
  v20 = 0;
  v21 = 0;
  v24 = 0;
  memset(&v25, 0, 0xFFCu);
  v26 = 0;
  v27 = 0;
  v23 = (int)&a8;
  if ( a3 >= 0 && a3 < 3 )
  {
    if ( a3 != 2 || InterlockedIncrement(&Addend) <= 0 )
    {
      if ( a7 && sub_443E40(a1, a2, (int)&v24, 4077, (int)a7, v23) < 0 )
        sub_434B90((int)&v24);
      if ( a3 == 2 )
        sub_434B90((int)&v14);
      sub_434BA0((int)&v14, (int)&v24);
      if ( a3 == 2 )
      {
        if ( dword_482964[2] & 1 )
          sub_434BA0((int)&v14, (int)"\r");
        sub_434BA0((int)&v14, (int)"\n");
      }
      if ( a4 )
      {
        if ( sub_443D40(a1, a2, (int)&Buffer, 4096, (int)"%s(%d) : %s", a4) < 0 )
          sub_434B90((int)&Buffer);
      }
      else
      {
        sub_434B90((int)&Buffer);
      }
      if ( dword_6D53768 && dword_6D53768(a3, &Buffer, &v22) )
      {
        if ( a3 == 2 )
          InterlockedDecrement(&Addend);
        result = v22;
      }
      else
      {
        if ( dword_482964[a3] & 1 && *(&hFile + a3) != (HANDLE)-1 )
        {
          v9 = sub_434FC0((int)&Buffer);
          WriteFile(*(&hFile + a3), &Buffer, v9, &NumberOfBytesWritten, 0);
        }
        if ( dword_482964[a3] & 2 )
          OutputDebugStringA(&Buffer);
        if ( dword_482964[a3] & 4 )
        {
          if ( a5 )
            v10 = sub_443A50(a5, (int)&v11, 0xAu);
          else
            v10 = 0;
          v22 = sub_43A900(a1, (int)&v28, a2, a3, a4, v10, a6, (int)&v24);
          if ( a3 == 2 )
            InterlockedDecrement(&Addend);
          result = v22;
        }
        else
        {
          if ( a3 == 2 )
            InterlockedDecrement(&Addend);
          result = 0;
        }
      }
    }
    else
    {
      if ( dword_6D51D30
        || (hModule = LoadLibraryA("user32.dll")) != 0
        && (dword_6D51D30 = (int (*)(_DWORD, const char *, ...))GetProcAddress(hModule, "wsprintfA")) != 0 )
      {
        dword_6D51D30(&Buffer, "Second Chance Assertion Failed: File %s, Line %d\n", a4, a5);
        OutputDebugStringA(&Buffer);
        InterlockedDecrement(&Addend);
        sub_43A460();
        result = -1;
      }
      else
      {
        result = -1;
      }
    }
  }
  else
  {
    result = -1;
  }
  return result;
}
// 482964: using guessed type int dword_482964[];
// 6D51D30: using guessed type int (*dword_6D51D30)(_DWORD, const char *, ...);
// 6D53768: using guessed type int (__cdecl *dword_6D53768)(_DWORD, _DWORD, _DWORD);

//----- (0043A900) --------------------------------------------------------
bool __usercall sub_43A900<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax@7
  int v9; // ST64_4@10
  char v11; // [sp+0h] [bp-1138h]@0
  char v12; // [sp+2Ch] [bp-110Ch]@11
  int v13; // [sp+102Ch] [bp-10Ch]@13
  CHAR Filename; // [sp+1030h] [bp-108h]@4
  int v15; // [sp+1134h] [bp-4h]@6

  if ( !a8 && sub_43A570(a1, a3, 2, (int)"dbgrpt.c", 474, 0, "szUserMessage != NULL", v11) == 1 )
    sub_43A460();
  if ( !GetModuleFileNameA(0, &Filename, 0x104u) )
    sub_434B90((int)&Filename);
  v15 = (int)&Filename;
  if ( (unsigned int)sub_434FC0((int)&Filename) > 0x40 )
  {
    v8 = sub_434FC0(v15);
    v15 = v15 + v8 - 64;
    sub_435800(v15, (int)"...", 3u);
  }
  if ( a7 && (unsigned int)sub_434FC0(a7) > 0x40 )
  {
    v9 = a7 + sub_434FC0(a7) - 64;
    sub_435800(v9, (int)"...", 3u);
  }
  if ( sub_443D40(
         a1,
         a3,
         (int)&v12,
         4096,
         (int)"Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)",
         (unsigned int)off_48297C[a4]) < 0 )
    sub_434B90((int)&v12);
  v13 = sub_444370((int)&v12, (int)"Microsoft Visual C++ Debug Library", 73746);
  if ( v13 == 3 )
  {
    sub_444150(a1, a2, a3, 22);
    sub_435D90(a1, a2, a3, 3u);
  }
  return v13 == 4;
}
// 48297C: using guessed type char *off_48297C[3];

//----- (0043AC10) --------------------------------------------------------
signed int __cdecl sub_43AC10(UINT a1)
{
  signed int result; // eax@3
  signed int v2; // esi@7
  void *v3; // eax@8
  unsigned int v4; // [sp+4h] [bp-4h]@9

  if ( a1 < uNumber && *(_BYTE *)(dword_6D53380[(signed int)a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    if ( sub_43F3D0(a1) == -1
      || (a1 == 1 || a1 == 2) && (v2 = sub_43F3D0(1), v2 == sub_43F3D0(2))
      || (v3 = (void *)sub_43F3D0(a1), CloseHandle(v3)) )
      v4 = 0;
    else
      v4 = GetLastError();
    sub_43F300(a1);
    *(_BYTE *)(dword_6D53380[(signed int)a1 >> 5] + 8 * (a1 & 0x1F) + 4) = 0;
    if ( v4 )
    {
      sub_43ED20(v4);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043AD00) --------------------------------------------------------
int __usercall sub_43AD00<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  int result; // eax@4
  char v4; // [sp+0h] [bp-Ch]@0

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"_freebuf.c", 48, 0, "stream != NULL", v4) == 1 )
    __debugbreak();
  result = 0;
  if ( *(_DWORD *)(a3 + 12) & 0x83 )
  {
    result = a3;
    if ( *(_DWORD *)(a3 + 12) & 8 )
    {
      sub_436DA0(a1, a2, *(_DWORD *)(a3 + 8), 2);
      *(_DWORD *)(a3 + 12) &= 0xFFFFFBF7u;
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 8) = 0;
      result = a3;
      *(_DWORD *)(a3 + 4) = 0;
    }
  }
  return result;
}

//----- (0043ADA0) --------------------------------------------------------
int __usercall sub_43ADA0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, char *a5, int a6)
{
  __int16 v6; // dx@11
  int v7; // eax@13
  __int16 v8; // cx@20
  int v9; // eax@83
  __int16 v10; // cx@133
  __int64 v11; // qax@135
  __int16 v12; // cx@140
  __int64 v13; // qax@144
  __int64 v14; // qax@147
  __int64 v15; // qax@147
  __int16 v16; // ax@166
  __int16 v17; // cx@173
  int v18; // eax@199
  __int16 v19; // cx@216
  int v20; // edx@218
  int v21; // eax@221
  __int16 v22; // cx@225
  int v23; // edx@227
  int v24; // ecx@232
  int v25; // eax@236
  __int16 v26; // dx@241
  int v27; // eax@243
  int result; // eax@272
  char v29; // [sp+0h] [bp-230h]@0
  signed int v30; // [sp+Ch] [bp-224h]@270
  int v31; // [sp+10h] [bp-220h]@240
  int v32; // [sp+14h] [bp-21Ch]@224
  int v33; // [sp+18h] [bp-218h]@215
  int v34; // [sp+1Ch] [bp-214h]@172
  int v35; // [sp+20h] [bp-210h]@165
  int v36; // [sp+24h] [bp-20Ch]@139
  int v37; // [sp+28h] [bp-208h]@132
  int v38; // [sp+34h] [bp-1FCh]@19
  int v39; // [sp+38h] [bp-1F8h]@10
  int v40; // [sp+3Ch] [bp-1F4h]@259
  const CHAR MultiByteStr; // [sp+40h] [bp-1F0h]@88
  char v42; // [sp+41h] [bp-1EFh]@89
  int v43; // [sp+44h] [bp-1ECh]@66
  int v44; // [sp+48h] [bp-1E8h]@16
  int v45; // [sp+4Ch] [bp-1E4h]@81
  char *v46; // [sp+50h] [bp-1E0h]@54
  int v47; // [sp+54h] [bp-1DCh]@16
  int v48; // [sp+58h] [bp-1D8h]@45
  int v49; // [sp+5Ch] [bp-1D4h]@36
  char v50; // [sp+60h] [bp-1D0h]@207
  char v51; // [sp+1C0h] [bp-70h]@16
  int v52; // [sp+1C4h] [bp-6Ch]@16
  char v53; // [sp+1C8h] [bp-68h]@16
  char v54; // [sp+1CCh] [bp-64h]@16
  char v55[11]; // [sp+1D0h] [bp-60h]@62
  char v56; // [sp+1DBh] [bp-55h]@64
  int v57; // [sp+1F0h] [bp-40h]@16
  int v58; // [sp+1F4h] [bp-3Ch]@36
  char v59; // [sp+1F8h] [bp-38h]@16
  int v60; // [sp+1FCh] [bp-34h]@7
  __int64 v61; // [sp+200h] [bp-30h]@27
  char v62; // [sp+208h] [bp-28h]@7
  int v63; // [sp+20Ch] [bp-24h]@71
  int v64; // [sp+210h] [bp-20h]@7
  int v65; // [sp+214h] [bp-1Ch]@16
  char v66; // [sp+218h] [bp-18h]@16
  char v67; // [sp+21Ch] [bp-14h]@16
  char v68; // [sp+220h] [bp-10h]@16
  int v69; // [sp+224h] [bp-Ch]@18
  int v70; // [sp+228h] [bp-8h]@16
  WCHAR WideCharStr; // [sp+22Ch] [bp-4h]@90

  if ( !a5 && sub_43A570(a1, a3, 2, (int)"input.c", 265, 0, "format != NULL", v29) == 1 )
    __debugbreak();
  if ( !a4 && sub_43A570(a1, a3, 2, (int)"input.c", 268, 0, "stream != NULL", v29) == 1 )
    __debugbreak();
  v62 = 0;
  v64 = 0;
  v60 = 0;
  while ( 1 )
  {
    if ( !*a5 )
      goto LABEL_267;
    if ( cbMultiByte <= 1 )
    {
      v6 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)*a5);
      v39 = v6 & 8;
    }
    else
    {
      v39 = sub_43D9C0(a1, a2, a3, (unsigned __int8)*a5, 8);
    }
    if ( v39 )
    {
      --v64;
      v7 = sub_43C260(a1, a2, a3, (int)&v64, a4);
      sub_43C240(a1, a3, v7, a4);
      do
        ++a5;
      while ( sub_4446F0(a1, a2, a3, (unsigned __int8)*a5) );
    }
    if ( (unsigned __int8)*a5 == 37 )
    {
      v57 = 0;
      LOBYTE(v70) = 0;
      v52 = 0;
      v44 = 0;
      v65 = 0;
      v68 = 0;
      v53 = 0;
      v51 = 0;
      v66 = 0;
      v54 = 0;
      v67 = 0;
      v59 = 1;
      v47 = 0;
LABEL_17:
      while ( !v66 )
      {
        ++a5;
        v69 = (unsigned __int8)*a5;
        if ( cbMultiByte <= 1 )
        {
          v8 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v69);
          v38 = v8 & 4;
        }
        else
        {
          v38 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v69, 4);
        }
        if ( v38 )
        {
          ++v44;
          v65 = v69 + 10 * v65 - 48;
        }
        else
        {
          switch ( v69 )
          {
            case 70:
            case 78:
              goto LABEL_17;
            case 104:
              --v59;
              --v67;
              break;
            case 73:
              if ( (unsigned __int8)a5[1] != 54 || (unsigned __int8)a5[2] != 52 )
                goto LABEL_33;
              a5 += 2;
              ++v47;
              v61 = 0i64;
              break;
            case 76:
              ++v59;
              break;
            case 108:
              ++v59;
              goto LABEL_31;
            case 119:
LABEL_31:
              ++v67;
              break;
            case 42:
              ++v51;
              break;
            default:
LABEL_33:
              ++v66;
              break;
          }
        }
      }
      if ( !v51 )
      {
        v49 = a6;
        a6 += 4;
        v58 = *(_DWORD *)(a6 - 4);
      }
      v66 = 0;
      if ( !v67 )
      {
        if ( (unsigned __int8)*a5 != 83 && (unsigned __int8)*a5 != 67 )
          --v67;
        else
          ++v67;
      }
      v69 = (unsigned __int8)*a5 | 0x20;
      if ( v69 != 110 )
      {
        if ( v69 == 99 || v69 == 123 )
        {
          ++v64;
          v48 = sub_43C1E0(a1, a3, a4);
        }
        else
        {
          v48 = sub_43C260(a1, a2, a3, (int)&v64, a4);
        }
      }
      if ( v44 && !v65 )
      {
        --v64;
        sub_43C240(a1, a3, v48, a4);
        goto LABEL_267;
      }
      switch ( v69 )
      {
        case 99:
          if ( !v44 )
          {
            v44 = 1;
            ++v65;
          }
          if ( v67 > 0 )
            ++v54;
          v46 = "]";
          --v68;
          goto LABEL_62;
        case 115:
          if ( v67 > 0 )
            ++v54;
          v46 = " \t-\r]";
          --v68;
          goto LABEL_62;
        case 123:
          if ( v67 > 0 )
            ++v54;
          ++a5;
          v46 = a5;
          if ( (unsigned __int8)*a5 == 94 )
          {
            ++v46;
            --v68;
          }
LABEL_62:
          sub_434AB0(v55, 0, 0x20u);
          if ( v69 == 123 && (unsigned __int8)*v46 == 93 )
          {
            LOBYTE(v70) = 93;
            ++v46;
            v56 = 32;
          }
          while ( (unsigned __int8)*v46 != 93 )
          {
            LOBYTE(v43) = *v46++;
            if ( (unsigned __int8)v43 == 45 && (_BYTE)v70 && (unsigned __int8)*v46 != 93 )
            {
              LOBYTE(v43) = *v46++;
              if ( (unsigned __int8)v70 >= (signed int)(unsigned __int8)v43 )
              {
                LOBYTE(v63) = v70;
                LOBYTE(v70) = v43;
              }
              else
              {
                LOBYTE(v63) = v43;
              }
              LOBYTE(v43) = v70;
              while ( (unsigned __int8)v43 <= (signed int)(unsigned __int8)v63 )
              {
                v55[(signed int)(unsigned __int8)v43 >> 3] |= 1 << (v43 & 7);
                LOBYTE(v43) = v43 + 1;
              }
              LOBYTE(v70) = 0;
            }
            else
            {
              LOBYTE(v70) = v43;
              v55[(signed int)(unsigned __int8)v43 >> 3] |= 1 << (v43 & 7);
            }
          }
          if ( !*v46 )
            goto LABEL_267;
          if ( v69 == 123 )
            a5 = v46;
          v45 = v58;
          --v64;
          sub_43C240(a1, a3, v48, a4);
          while ( 2 )
          {
            if ( !v44 || (v9 = v65, --v65, v9) )
            {
              ++v64;
              v48 = sub_43C1E0(a1, a3, a4);
              if ( v48 != -1 && (1 << (v48 & 7)) & (v68 ^ v55[v48 >> 3]) )
              {
                if ( v51 )
                {
                  ++v45;
                }
                else
                {
                  if ( v54 )
                  {
                    MultiByteStr = v48;
                    if ( *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v48) & 0x8000 )
                    {
                      ++v64;
                      v42 = sub_43C1E0(a1, a3, a4);
                    }
                    sub_444430(a1, a3, &WideCharStr, &MultiByteStr, cbMultiByte);
                    *(_WORD *)v58 = WideCharStr;
                    v58 += 2;
                  }
                  else
                  {
                    *(_BYTE *)v58++ = v48;
                  }
                }
                continue;
              }
              --v64;
              sub_43C240(a1, a3, v48, a4);
            }
            break;
          }
          if ( v45 == v58 )
            goto LABEL_267;
          if ( !v51 )
          {
            ++v60;
            if ( v69 != 99 )
            {
              if ( v54 )
                *(_WORD *)v58 = 0;
              else
                *(_BYTE *)v58 = 0;
            }
          }
          goto LABEL_254;
        case 105:
          v69 = 100;
          goto LABEL_105;
        case 120:
LABEL_105:
          if ( v48 == 45 )
          {
            ++v53;
          }
          else
          {
            if ( v48 != 43 )
              goto LABEL_112;
          }
          --v65;
          if ( v65 || !v44 )
          {
            ++v64;
            v48 = sub_43C1E0(a1, a3, a4);
          }
          else
          {
            ++v66;
          }
LABEL_112:
          if ( v48 == 48 )
          {
            ++v64;
            v48 = sub_43C1E0(a1, a3, a4);
            if ( (char)v48 != 120 && (char)v48 != 88 )
            {
              ++v52;
              if ( v69 == 120 )
              {
                --v64;
                sub_43C240(a1, a3, v48, a4);
                v48 = 48;
              }
              else
              {
                v69 = 111;
              }
            }
            else
            {
              ++v64;
              v48 = sub_43C1E0(a1, a3, a4);
              v69 = 120;
            }
          }
          goto LABEL_128;
        case 112:
          v59 = 1;
          goto LABEL_121;
        case 100:
        case 111:
        case 117:
LABEL_121:
          if ( v48 == 45 )
          {
            ++v53;
          }
          else
          {
            if ( v48 != 43 )
              goto LABEL_128;
          }
          --v65;
          if ( v65 || !v44 )
          {
            ++v64;
            v48 = sub_43C1E0(a1, a3, a4);
          }
          else
          {
            ++v66;
          }
LABEL_128:
          if ( v47 )
          {
            while ( !v66 )
            {
              if ( v69 == 120 )
              {
                if ( cbMultiByte <= 1 )
                {
                  v10 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
                  v37 = v10 & 0x80;
                }
                else
                {
                  v37 = sub_43D9C0(a1, a2, a3, v48, 128);
                }
                if ( v37 )
                {
                  LODWORD(v11) = sub_444980(v61, 4u);
                  v61 = v11;
                  v48 = sub_43C180(a1, a2, a3, v48);
                }
                else
                {
                  ++v66;
                }
              }
              else
              {
                if ( cbMultiByte <= 1 )
                {
                  v12 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
                  v36 = v12 & 4;
                }
                else
                {
                  v36 = sub_43D9C0(a1, a2, a3, v48, 4);
                }
                if ( v36 )
                {
                  if ( v69 == 111 )
                  {
                    if ( v48 >= 56 )
                    {
                      ++v66;
                    }
                    else
                    {
                      LODWORD(v13) = sub_444980(v61, 3u);
                      v61 = v13;
                    }
                  }
                  else
                  {
                    LODWORD(v14) = sub_444980(v61, 2u);
                    LODWORD(v15) = sub_444980(v61 + v14, 1u);
                    v61 = v15;
                  }
                }
                else
                {
                  ++v66;
                }
              }
              if ( v66 )
              {
                --v64;
                sub_43C240(a1, a3, v48, a4);
              }
              else
              {
                ++v52;
                v61 += v48 - 48;
                if ( !v44 || (--v65, v65) )
                {
                  ++v64;
                  v48 = sub_43C1E0(a1, a3, a4);
                }
                else
                {
                  ++v66;
                }
              }
            }
            if ( v53 )
              v61 = -v61;
          }
          else
          {
            while ( !v66 )
            {
              if ( v69 != 120 && v69 != 112 )
              {
                if ( cbMultiByte <= 1 )
                {
                  v17 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
                  v34 = v17 & 4;
                }
                else
                {
                  v34 = sub_43D9C0(a1, a2, a3, v48, 4);
                }
                if ( v34 )
                {
                  if ( v69 == 111 )
                  {
                    if ( v48 >= 56 )
                      ++v66;
                    else
                      v57 *= 8;
                  }
                  else
                  {
                    v57 *= 10;
                  }
                }
                else
                {
                  ++v66;
                }
              }
              else
              {
                if ( cbMultiByte <= 1 )
                {
                  v16 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
                  v35 = v16 & 0x80;
                }
                else
                {
                  v35 = sub_43D9C0(a1, a2, a3, v48, 128);
                }
                if ( v35 )
                {
                  v57 *= 16;
                  v48 = sub_43C180(a1, a2, a3, v48);
                }
                else
                {
                  ++v66;
                }
              }
              if ( v66 )
              {
                --v64;
                sub_43C240(a1, a3, v48, a4);
              }
              else
              {
                ++v52;
                v57 = v57 + v48 - 48;
                if ( !v44 || (--v65, v65) )
                {
                  ++v64;
                  v48 = sub_43C1E0(a1, a3, a4);
                }
                else
                {
                  ++v66;
                }
              }
            }
            if ( v53 )
              v57 = -v57;
          }
          if ( v69 == 70 )
            v52 = 0;
          if ( !v52 )
            goto LABEL_267;
          if ( !v51 )
          {
            ++v60;
LABEL_198:
            if ( v47 )
            {
              v18 = v58;
              *(_DWORD *)v58 = v61;
              *(_DWORD *)(v18 + 4) = HIDWORD(v61);
            }
            else
            {
              if ( v59 )
                *(_DWORD *)v58 = v57;
              else
                *(_WORD *)v58 = v57;
            }
          }
          goto LABEL_254;
        case 110:
          v57 = v64;
          if ( v51 )
            goto LABEL_254;
          goto LABEL_198;
        case 101:
        case 102:
        case 103:
          v46 = &v50;
          if ( v48 == 45 )
          {
            *v46++ = 45;
          }
          else
          {
            if ( v48 != 43 )
              goto LABEL_211;
          }
          --v65;
          ++v64;
          v48 = sub_43C1E0(a1, a3, a4);
LABEL_211:
          if ( !v44 || v65 > 349 )
            v65 = 349;
          while ( 1 )
          {
            if ( cbMultiByte <= 1 )
            {
              v19 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
              v33 = v19 & 4;
            }
            else
            {
              v33 = sub_43D9C0(a1, a2, a3, v48, 4);
            }
            if ( !v33 )
              break;
            v20 = v65--;
            if ( !v20 )
              break;
            ++v52;
            *v46++ = v48;
            ++v64;
            v48 = sub_43C1E0(a1, a3, a4);
          }
          if ( byte_482CB8 == (char)v48 )
          {
            v21 = v65--;
            if ( v21 )
            {
              ++v64;
              v48 = sub_43C1E0(a1, a3, a4);
              *v46++ = byte_482CB8;
              while ( 1 )
              {
                if ( cbMultiByte <= 1 )
                {
                  v22 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
                  v32 = v22 & 4;
                }
                else
                {
                  v32 = sub_43D9C0(a1, a2, a3, v48, 4);
                }
                if ( !v32 )
                  break;
                v23 = v65--;
                if ( !v23 )
                  break;
                ++v52;
                *v46++ = v48;
                ++v64;
                v48 = sub_43C1E0(a1, a3, a4);
              }
            }
          }
          if ( !v52 || v48 != 101 && v48 != 69 || (v24 = v65, --v65, !v24) )
            goto LABEL_245;
          *v46++ = 101;
          ++v64;
          v48 = sub_43C1E0(a1, a3, a4);
          if ( v48 == 45 )
          {
            *v46++ = 45;
          }
          else
          {
            if ( v48 != 43 )
              goto LABEL_239;
          }
          v25 = v65--;
          if ( v25 )
          {
            ++v64;
            v48 = sub_43C1E0(a1, a3, a4);
          }
          else
          {
            ++v65;
          }
LABEL_239:
          while ( 1 )
          {
            if ( cbMultiByte <= 1 )
            {
              v26 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * v48);
              v31 = v26 & 4;
            }
            else
            {
              v31 = sub_43D9C0(a1, a2, a3, v48, 4);
            }
            if ( !v31 )
              break;
            v27 = v65--;
            if ( !v27 )
              break;
            ++v52;
            *v46++ = v48;
            ++v64;
            v48 = sub_43C1E0(a1, a3, a4);
          }
LABEL_245:
          --v64;
          sub_43C240(a1, a3, v48, a4);
          if ( !v52 )
            goto LABEL_267;
          if ( !v51 )
          {
            ++v60;
            *v46 = 0;
            off_482A98(v59 - 1, v58, &v50);
          }
          goto LABEL_254;
        default:
          if ( (unsigned __int8)*a5 != v48 )
          {
            --v64;
            sub_43C240(a1, a3, v48, a4);
            goto LABEL_267;
          }
          --v62;
          if ( !v51 )
            a6 = v49;
LABEL_254:
          ++v62;
          ++a5;
          break;
      }
      goto LABEL_262;
    }
    ++v64;
    a3 = (unsigned __int8)*a5;
    v48 = sub_43C1E0(a1, a3, a4);
    ++a5;
    if ( a3 != v48 )
    {
      --v64;
      sub_43C240(a1, a3, v48, a4);
      goto LABEL_267;
    }
    if ( *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v48) & 0x8000 )
      break;
LABEL_262:
    if ( v48 == -1 && ((unsigned __int8)*a5 != 37 || (unsigned __int8)a5[1] != 110) )
      goto LABEL_267;
  }
  ++v64;
  a3 = (unsigned __int8)*a5;
  v40 = sub_43C1E0(a1, a3, a4);
  ++a5;
  if ( a3 == v40 )
  {
    --v64;
    goto LABEL_262;
  }
  --v64;
  sub_43C240(a1, a3, v40, a4);
  --v64;
  sub_43C240(a1, a3, v48, a4);
LABEL_267:
  if ( v48 == -1 )
  {
    if ( v60 || v62 )
      v30 = v60;
    else
      v30 = -1;
    result = v30;
  }
  else
  {
    result = v60;
  }
  return result;
}
// 482A98: using guessed type int (__cdecl *off_482A98)(_DWORD, _DWORD, _DWORD);
// 482AA8: using guessed type __int16 off_482AA8[2];
// 482CB8: using guessed type char byte_482CB8;
// 43ADA0: using guessed type char var_60[11];

//----- (0043C180) --------------------------------------------------------
int __usercall sub_43C180<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4)
{
  __int16 v4; // ax@3
  int v6; // [sp+0h] [bp-8h]@5
  int v7; // [sp+4h] [bp-4h]@2

  if ( cbMultiByte <= 1 )
  {
    v4 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * a4);
    v7 = v4 & 4;
  }
  else
  {
    v7 = sub_43D9C0(a1, a2, a3, a4, 4);
  }
  if ( v7 )
    v6 = a4;
  else
    v6 = (a4 & 0xFFFFFFDF) - 7;
  return v6;
}
// 482AA8: using guessed type __int16 off_482AA8[2];

//----- (0043C1E0) --------------------------------------------------------
signed int __usercall sub_43C1E0<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  signed int v4; // [sp+0h] [bp-4h]@2

  --*(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 4) < 0 )
    v4 = sub_43C2A0(a1, a2, a3);
  else
    v4 = *(_BYTE *)(*(_DWORD *)a3)++;
  return v4;
}

//----- (0043C240) --------------------------------------------------------
signed int __usercall sub_43C240<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  signed int result; // eax@2

  if ( a3 != -1 )
    result = sub_4449A0(a1, a2, a3, a4);
  return result;
}

//----- (0043C260) --------------------------------------------------------
signed int __usercall sub_43C260<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5)
{
  signed int v6; // [sp+0h] [bp-4h]@1

  do
  {
    ++*(_DWORD *)a4;
    v6 = sub_43C1E0(a1, a3, a5);
  }
  while ( sub_4446F0(a1, a2, a3, v6) );
  return v6;
}

//----- (0043C2A0) --------------------------------------------------------
signed int __usercall sub_43C2A0<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  signed int result; // eax@6
  int v4; // eax@8
  int v5; // eax@9
  int v6; // edx@20
  char v7; // [sp+0h] [bp-14h]@0
  _UNKNOWN *v8; // [sp+Ch] [bp-8h]@17

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"_filbuf.c", 105, 0, "str != NULL", v7) == 1 )
    __debugbreak();
  if ( *(_DWORD *)(a3 + 12) & 0x83 && !(*(_DWORD *)(a3 + 12) & 0x40) )
  {
    if ( *(_DWORD *)(a3 + 12) & 2 )
    {
      v4 = *(_DWORD *)(a3 + 12);
      LOBYTE(v4) = v4 | 0x20;
      *(_DWORD *)(a3 + 12) = v4;
      result = -1;
    }
    else
    {
      v5 = *(_DWORD *)(a3 + 12);
      LOBYTE(v5) = v5 | 1;
      *(_DWORD *)(a3 + 12) = v5;
      if ( *(_DWORD *)(a3 + 12) & 0x10C )
        *(_DWORD *)a3 = *(_DWORD *)(a3 + 8);
      else
        sub_4437C0(a1, a2, a3);
      *(_DWORD *)(a3 + 4) = sub_43DAC0(*(_DWORD *)(a3 + 16), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 24));
      if ( *(_DWORD *)(a3 + 4) && *(_DWORD *)(a3 + 4) != -1 )
      {
        if ( !(*(_DWORD *)(a3 + 12) & 0x82) )
        {
          v8 = *(_DWORD *)(a3 + 16) == -1 ? &unk_482EE0 : dword_6D53380[*(_DWORD *)(a3 + 16) >> 5]
                                                        + 8 * (*(_DWORD *)(a3 + 16) & 0x1F);
          if ( (unsigned __int8)(*((_BYTE *)v8 + 4) & 0x82) == 130 )
          {
            v6 = *(_DWORD *)(a3 + 12);
            BYTE1(v6) |= 0x20u;
            *(_DWORD *)(a3 + 12) = v6;
          }
        }
        if ( *(_DWORD *)(a3 + 24) == 512 && *(_DWORD *)(a3 + 12) & 8 )
        {
          if ( !(*(_DWORD *)(a3 + 12) & 0x400) )
            *(_DWORD *)(a3 + 24) = 4096;
        }
        --*(_DWORD *)(a3 + 4);
        result = *(_BYTE *)(*(_DWORD *)a3)++;
      }
      else
      {
        *(_DWORD *)(a3 + 12) |= *(_DWORD *)(a3 + 4) != 0 ? 32 : 16;
        *(_DWORD *)(a3 + 4) = 0;
        result = -1;
      }
    }
  }
  else
  {
    result = -1;
  }
  return result;
}
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043C480) --------------------------------------------------------
int __usercall sub_43C480<eax>(int a1<ebx>, int a2<esi>, LPCSTR lpFileName, int a4, int a5, int a6)
{
  int v6; // eax@14
  int result; // eax@13
  int v8; // eax@23
  int v9; // edx@23
  int v10; // eax@23
  int v11; // edx@27
  int v12; // ecx@31
  int v13; // edx@35
  int v14; // eax@39
  int v15; // ecx@51
  int v16; // eax@55
  char v17; // [sp+0h] [bp-30h]@0
  char v18; // [sp+10h] [bp-20h]@10
  int v19; // [sp+14h] [bp-1Ch]@1
  int v20; // [sp+14h] [bp-1Ch]@14
  signed int v21; // [sp+18h] [bp-18h]@1
  int v22; // [sp+1Ch] [bp-14h]@14
  signed int v23; // [sp+20h] [bp-10h]@1
  int v24; // [sp+28h] [bp-8h]@59
  signed int v25; // [sp+2Ch] [bp-4h]@17

  v19 = dword_6D51F80;
  v21 = 0;
  v23 = 0;
  if ( !lpFileName && sub_43A570(a1, a2, 2, (int)"_open.c", 71, 0, "filename != NULL", v17) == 1 )
    __debugbreak();
  if ( !a4 && sub_43A570(a1, a2, 2, (int)"_open.c", 72, 0, "mode != NULL", v17) == 1 )
    __debugbreak();
  if ( !a6 && sub_43A570(a1, a2, 2, (int)"_open.c", 73, 0, "str != NULL", v17) == 1 )
    __debugbreak();
  v18 = *(_BYTE *)a4;
  if ( *(_BYTE *)a4 == 97 )
  {
    v22 = 265;
    v20 = v19 | 2;
  }
  else
  {
    if ( v18 == 114 )
    {
      v22 = 0;
      v6 = v19;
      LOBYTE(v6) = v19 | 1;
      v20 = v6;
    }
    else
    {
      if ( v18 != 119 )
        return 0;
      v22 = 769;
      v20 = v19 | 2;
    }
  }
  v25 = 1;
  while ( 1 )
  {
    ++a4;
    if ( !*(_BYTE *)a4 )
      break;
    if ( !v25 )
      break;
    switch ( *(_BYTE *)a4 )
    {
      case 43:
        if ( v22 & 2 )
        {
          v25 = 0;
        }
        else
        {
          v8 = v22;
          LOBYTE(v8) = v22 | 2;
          v22 = v8 & 0xFFFFFFFE;
          v9 = v20;
          LOBYTE(v9) = v20 | 0x80;
          v10 = v9;
          LOBYTE(v10) = ((unsigned __int8)v20 | 0x80) & 0xFC;
          v20 = v10;
        }
        break;
      case 98:
        if ( v22 & 0xC000 )
        {
          v25 = 0;
        }
        else
        {
          v11 = v22;
          BYTE1(v11) |= 0x80u;
          v22 = v11;
        }
        break;
      case 116:
        if ( v22 & 0xC000 )
        {
          v25 = 0;
        }
        else
        {
          v12 = v22;
          BYTE1(v12) |= 0x40u;
          v22 = v12;
        }
        break;
      case 99:
        if ( v21 )
        {
          v25 = 0;
        }
        else
        {
          v21 = 1;
          v13 = v20;
          BYTE1(v13) |= 0x40u;
          v20 = v13;
        }
        break;
      case 110:
        if ( v21 )
        {
          v25 = 0;
        }
        else
        {
          v21 = 1;
          v14 = v20;
          BYTE1(v14) &= 0xBFu;
          v20 = v14;
        }
        break;
      case 83:
        if ( v23 )
        {
          v25 = 0;
        }
        else
        {
          v23 = 1;
          v22 |= 0x20u;
        }
        break;
      case 82:
        if ( v23 )
        {
          v25 = 0;
        }
        else
        {
          v23 = 1;
          v22 |= 0x10u;
        }
        break;
      case 84:
        if ( v22 & 0x1000 )
        {
          v25 = 0;
        }
        else
        {
          v15 = v22;
          BYTE1(v15) |= 0x10u;
          v22 = v15;
        }
        break;
      case 68:
        if ( v22 & 0x40 )
        {
          v25 = 0;
        }
        else
        {
          v16 = v22;
          LOBYTE(v16) = v22 | 0x40;
          v22 = v16;
        }
        break;
      default:
        v25 = 0;
        break;
    }
  }
  v24 = sub_444B20(a1, a2, lpFileName, v22, a5, 420);
  if ( v24 >= 0 )
  {
    ++dword_6D51E4C;
    *(_DWORD *)(a6 + 12) = v20;
    *(_DWORD *)(a6 + 4) = 0;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_DWORD *)(a6 + 28) = 0;
    *(_DWORD *)(a6 + 16) = v24;
    result = a6;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D51E4C: using guessed type int dword_6D51E4C;
// 6D51F80: using guessed type int dword_6D51F80;

//----- (0043C810) --------------------------------------------------------
int __usercall sub_43C810<eax>(int a1<ebx>, int a2<esi>)
{
  int v3; // [sp+0h] [bp-8h]@1
  int i; // [sp+4h] [bp-4h]@1

  v3 = 0;
  for ( i = 0; i < dword_6D53340; ++i )
  {
    if ( !*(_DWORD *)(dword_6D51FEC + 4 * i) )
    {
      *(_DWORD *)(dword_6D51FEC + 4 * i) = sub_436360(a1, a2, 0x20u, 2, (int)"stream.c", 85);
      if ( *(_DWORD *)(dword_6D51FEC + 4 * i) )
        v3 = *(_DWORD *)(dword_6D51FEC + 4 * i);
      break;
    }
    if ( !(*(_DWORD *)(*(_DWORD *)(dword_6D51FEC + 4 * i) + 12) & 0x83) )
    {
      v3 = *(_DWORD *)(dword_6D51FEC + 4 * i);
      break;
    }
  }
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 16) = -1;
  }
  return v3;
}
// 6D51FEC: using guessed type int dword_6D51FEC;
// 6D53340: using guessed type int dword_6D53340;

//----- (0043C900) --------------------------------------------------------
signed int __usercall sub_43C900<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, UINT CodePage)
{
  signed int result; // eax@2
  char *ii; // [sp+0h] [bp-28h]@31
  unsigned int j; // [sp+4h] [bp-24h]@8
  unsigned int m; // [sp+4h] [bp-24h]@16
  unsigned int n; // [sp+4h] [bp-24h]@27
  unsigned int jj; // [sp+4h] [bp-24h]@34
  signed int kk; // [sp+4h] [bp-24h]@38
  struct _cpinfo CPInfo; // [sp+8h] [bp-20h]@26
  unsigned int k; // [sp+1Ch] [bp-Ch]@11
  int l; // [sp+20h] [bp-8h]@13
  unsigned int i; // [sp+24h] [bp-4h]@5
  UINT CodePagea; // [sp+30h] [bp+8h]@1

  CodePagea = sub_43CC00(CodePage);
  if ( CodePagea == ::CodePage )
  {
    result = 0;
  }
  else
  {
    if ( CodePagea )
    {
      for ( i = 0; i < 5; ++i )
      {
        if ( dword_4829A0[12 * i] == CodePagea )
        {
          for ( j = 0; j < 0x101; ++j )
            byte_6D53660[j] = 0;
          for ( k = 0; k < 4; ++k )
          {
            for ( l = (int)((char *)&unk_4829B0 + 48 * i + 8 * k); *(_BYTE *)l && *(_BYTE *)(l + 1); l += 2 )
            {
              for ( m = *(_BYTE *)l; m <= *(_BYTE *)(l + 1); ++m )
                byte_6D53661[m] |= byte_482998[k];
            }
          }
          ::CodePage = CodePagea;
          dword_6D5354C = 1;
          Locale = sub_43CC60(CodePagea);
          for ( k = 0; k < 6; ++k )
            word_6D53540[k] = *(&word_4829A4[24 * i] + k);
          sub_43CD60(a1, a2, a3);
          return 0;
        }
      }
      if ( GetCPInfo(CodePagea, &CPInfo) == 1 )
      {
        for ( n = 0; n < 0x101; ++n )
          byte_6D53660[n] = 0;
        ::CodePage = CodePagea;
        Locale = 0;
        if ( CPInfo.MaxCharSize <= 1 )
        {
          dword_6D5354C = 0;
        }
        else
        {
          for ( ii = (char *)CPInfo.LeadByte; *ii && ii[1]; ii += 2 )
          {
            for ( jj = (unsigned __int8)*ii; jj <= (unsigned __int8)ii[1]; ++jj )
              byte_6D53661[jj] |= 4u;
          }
          for ( kk = 1; (unsigned int)kk < 0xFF; ++kk )
            byte_6D53661[kk] |= 8u;
          Locale = sub_43CC60(::CodePage);
          dword_6D5354C = 1;
        }
        for ( k = 0; k < 6; ++k )
          word_6D53540[k] = 0;
        sub_43CD60(a1, a2, a3);
        result = 0;
      }
      else
      {
        if ( dword_6D51D34 )
        {
          sub_43CCE0();
          sub_43CD60(a1, a2, a3);
          result = 0;
        }
        else
        {
          result = -1;
        }
      }
    }
    else
    {
      sub_43CCE0();
      sub_43CD60(a1, a2, a3);
      result = 0;
    }
  }
  return result;
}
// 4829A0: using guessed type int dword_4829A0[];
// 4829A4: using guessed type __int16 word_4829A4[];
// 6D51D34: using guessed type int dword_6D51D34;
// 6D53540: using guessed type __int16 word_6D53540[];
// 6D5354C: using guessed type int dword_6D5354C;

//----- (0043CC00) --------------------------------------------------------
UINT __cdecl sub_43CC00(UINT a1)
{
  UINT result; // eax@2

  dword_6D51D34 = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFEu:
      dword_6D51D34 = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFDu:
      dword_6D51D34 = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFCu:
      dword_6D51D34 = 1;
      result = dword_6D51F9C;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}
// 6D51D34: using guessed type int dword_6D51D34;

//----- (0043CC60) --------------------------------------------------------
signed int __cdecl sub_43CC60(int a1)
{
  signed int result; // eax@2

  switch ( a1 )
  {
    case 932:
      result = 1041;
      break;
    case 936:
      result = 2052;
      break;
    case 949:
      result = 1042;
      break;
    case 950:
      result = 1028;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0043CCE0) --------------------------------------------------------
int __cdecl sub_43CCE0()
{
  int result; // eax@3
  signed int i; // [sp+0h] [bp-4h]@1
  signed int j; // [sp+0h] [bp-4h]@4

  for ( i = 0; i < 257; ++i )
  {
    byte_6D53660[i] = 0;
    result = i + 1;
  }
  CodePage = 0;
  dword_6D5354C = 0;
  Locale = 0;
  for ( j = 0; j < 6; ++j )
  {
    result = j;
    word_6D53540[j] = 0;
  }
  return result;
}
// 6D53540: using guessed type __int16 word_6D53540[];
// 6D5354C: using guessed type int dword_6D5354C;

//----- (0043CD60) --------------------------------------------------------
BOOL __usercall sub_43CD60<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  BOOL result; // eax@1
  WORD v4; // dx@13
  WORD v5; // cx@15
  unsigned int i; // [sp+0h] [bp-51Ch]@2
  unsigned int k; // [sp+0h] [bp-51Ch]@7
  unsigned int l; // [sp+0h] [bp-51Ch]@11
  unsigned int m; // [sp+0h] [bp-51Ch]@20
  char v10[256]; // [sp+4h] [bp-518h]@11
  CHAR DestStr[256]; // [sp+104h] [bp-418h]@11
  struct _cpinfo CPInfo; // [sp+204h] [bp-318h]@1
  const CHAR MultiByteStr[256]; // [sp+218h] [bp-304h]@4
  WORD CharType[256]; // [sp+318h] [bp-204h]@11
  BYTE *j; // [sp+518h] [bp-4h]@5

  result = GetCPInfo(CodePage, &CPInfo);
  if ( result == 1 )
  {
    for ( i = 0; i < 0x100; ++i )
      MultiByteStr[i] = i;
    MultiByteStr[0] = 32;
    for ( j = CPInfo.LeadByte; *j; j += 2 )
    {
      for ( k = *j; k <= j[1]; ++k )
        MultiByteStr[k] = 32;
    }
    sub_445370((int)MultiByteStr, a1, a2, a3, 1u, MultiByteStr, 256, CharType, CodePage, Locale, 0);
    sub_445010((int)MultiByteStr, a1, a2, a3, Locale, 0x100u, MultiByteStr, 256, DestStr, 256, CodePage, 0);
    result = sub_445010((int)v10, a1, a2, a3, Locale, 0x200u, MultiByteStr, 256, v10, 256, CodePage, 0);
    for ( l = 0; l < 0x100; ++l )
    {
      v4 = CharType[l];
      if ( v4 & 1 )
      {
        byte_6D53661[l] |= 0x10u;
        byte_6D53560[l] = DestStr[l];
      }
      else
      {
        v5 = CharType[l];
        if ( v5 & 2 )
        {
          byte_6D53661[l] |= 0x20u;
          byte_6D53560[l] = v10[l];
        }
        else
        {
          byte_6D53560[l] = 0;
        }
      }
      result = l + 1;
    }
  }
  else
  {
    for ( m = 0; m < 0x100; ++m )
    {
      if ( m < 0x41 || m > 0x5A )
      {
        if ( m < 0x61 || m > 0x7A )
        {
          byte_6D53560[m] = 0;
        }
        else
        {
          byte_6D53661[m] |= 0x20u;
          byte_6D53560[m] = m - 32;
        }
      }
      else
      {
        byte_6D53661[m] |= 0x10u;
        byte_6D53560[m] = m + 32;
      }
      result = m + 1;
    }
  }
  return result;
}
// 43CD60: using guessed type const CHAR MultiByteStr[256];
// 43CD60: using guessed type WORD CharType[256];
// 43CD60: using guessed type CHAR DestStr[256];
// 43CD60: using guessed type char var_518[256];

//----- (0043D090) --------------------------------------------------------
signed int __usercall sub_43D090<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  signed int result; // eax@2

  if ( !dword_6D5379C )
  {
    result = sub_43C900(a1, a2, a3, 0xFFFFFFFDu);
    dword_6D5379C = 1;
  }
  return result;
}
// 6D5379C: using guessed type int dword_6D5379C;

//----- (0043D0D0) --------------------------------------------------------
int __cdecl sub_43D0D0(int a1, unsigned __int8 a2)
{
  int v2; // edx@1
  char v3; // cl@2
  int v4; // ecx@5
  int v5; // esi@5
  int v6; // eax@5
  int v7; // eax@6
  int result; // eax@9
  unsigned int v9; // eax@10
  unsigned int v10; // eax@14

  v2 = a1;
  if ( a1 & 3 )
  {
    while ( 1 )
    {
      v3 = *(_BYTE *)v2++;
      if ( v3 == a2 )
        break;
      if ( !v3 )
        return 0;
      if ( !(v2 & 3) )
        goto LABEL_5;
    }
    result = v2 - 1;
  }
  else
  {
    while ( 1 )
    {
LABEL_5:
      while ( 1 )
      {
        v4 = ((a2 << 8) | a2 | (((a2 << 8) | a2) << 16)) ^ *(_DWORD *)v2;
        v5 = *(_DWORD *)v2 + 2130640639;
        v6 = (*(_DWORD *)v2 + 2130640639) ^ ~*(_DWORD *)v2;
        v2 += 4;
        if ( ((v4 + 2130640639) ^ ~v4) & 0x81010100 )
          break;
        v7 = v6 & 0x81010100;
        if ( v7 && ((unsigned int)&unk_1010100 & v7 || !(v5 & 0x80000000)) )
          return 0;
      }
      v9 = *(_DWORD *)(v2 - 4);
      if ( (_BYTE)v9 == a2 )
        break;
      if ( !(_BYTE)v9 )
        return 0;
      if ( BYTE1(v9) == a2 )
        return v2 - 3;
      if ( !BYTE1(v9) )
        return 0;
      v10 = v9 >> 16;
      if ( (_BYTE)v10 == a2 )
        return v2 - 2;
      if ( !(_BYTE)v10 )
        return 0;
      if ( BYTE1(v10) == a2 )
        return v2 - 1;
      if ( !BYTE1(v10) )
        return 0;
    }
    result = v2 - 4;
  }
  return result;
}

//----- (0043D190) --------------------------------------------------------
int __cdecl sub_43D190()
{
  return sub_4455C0(65536, 196608);
}

//----- (0043D1B0) --------------------------------------------------------
bool __cdecl sub_43D1B0()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

//----- (0043D210) --------------------------------------------------------
bool __cdecl sub_43D210()
{
  bool result; // eax@3
  FARPROC v1; // [sp+0h] [bp-8h]@2
  HMODULE hModule; // [sp+4h] [bp-4h]@1

  hModule = GetModuleHandleA("KERNEL32");
  if ( hModule && (v1 = GetProcAddress(hModule, "IsProcessorFeaturePresent")) != 0 )
    result = ((int (__stdcall *)(_DWORD))v1)(0);
  else
    result = sub_43D1B0();
  return result;
}

//----- (0043D260) --------------------------------------------------------
int __usercall sub_43D260<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int *a4)
{
  __int16 v4; // dx@4
  char v5; // ST10_1@7
  int v6; // edx@7
  int result; // eax@7
  int v8; // [sp+0h] [bp-Ch]@3
  char v9; // [sp+4h] [bp-8h]@6
  int v10; // [sp+14h] [bp+8h]@6

  if ( sub_4459E0(a1, a2, a3, *(_BYTE *)a4) != 101 )
  {
    do
    {
      a4 = (signed int *)((char *)a4 + 1);
      if ( cbMultiByte <= 1 )
      {
        v4 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * *(_BYTE *)a4);
        v8 = v4 & 4;
      }
      else
      {
        v8 = sub_43D9C0(a1, a2, a3, *(_BYTE *)a4, 4);
      }
    }
    while ( v8 );
  }
  v9 = *(_BYTE *)a4;
  *(_BYTE *)a4 = byte_482CB8;
  v10 = (int)((char *)a4 + 1);
  do
  {
    v5 = *(_BYTE *)v10;
    *(_BYTE *)v10 = v9;
    v9 = v5;
    v6 = *(_BYTE *)v10;
    result = v10++ + 1;
  }
  while ( v6 );
  return result;
}
// 482AA8: using guessed type __int16 off_482AA8[2];
// 482CB8: using guessed type char byte_482CB8;

//----- (0043D310) --------------------------------------------------------
int __cdecl sub_43D310(int a1)
{
  int result; // eax@4
  int v2; // ecx@4
  int v3; // [sp+0h] [bp-4h]@9
  int v4; // [sp+Ch] [bp+8h]@4
  int i; // [sp+Ch] [bp+8h]@9

  while ( *(_BYTE *)a1 && *(_BYTE *)a1 != byte_482CB8 )
    ++a1;
  result = a1;
  v2 = *(_BYTE *)a1;
  v4 = a1 + 1;
  if ( v2 )
  {
    while ( *(_BYTE *)v4 && *(_BYTE *)v4 != 101 && *(_BYTE *)v4 != 69 )
      ++v4;
    v3 = v4;
    for ( i = v4 - 1; *(_BYTE *)i == 48; --i )
      ;
    if ( *(_BYTE *)i == byte_482CB8 )
      --i;
    do
    {
      ++i;
      *(_BYTE *)i = *(_BYTE *)v3;
      result = *(_BYTE *)i;
      ++v3;
    }
    while ( *(_BYTE *)i );
  }
  return result;
}
// 482CB8: using guessed type char byte_482CB8;

//----- (0043D3F0) --------------------------------------------------------
bool __cdecl sub_43D3F0(int a1)
{
  return *(double *)a1 >= 0.0;
}

//----- (0043D420) --------------------------------------------------------
int __usercall sub_43D420<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6)
{
  int result; // eax@2
  int v7; // [sp+0h] [bp-Ch]@3
  int v8; // [sp+4h] [bp-8h]@2
  int v9; // [sp+8h] [bp-4h]@2

  if ( a4 )
  {
    sub_446230(a1, a2, a3, (int)&v8, a6);
    result = v8;
    *(_DWORD *)a5 = v8;
    *(_DWORD *)(a5 + 4) = v9;
  }
  else
  {
    result = sub_4462B0(a1, a2, a3, (int)&v7, a6);
    *(_DWORD *)a5 = v7;
  }
  return result;
}

//----- (0043D470) --------------------------------------------------------
int __cdecl sub_43D470(char *a1, int a2, int a3, int a4)
{
  int v4; // eax@8
  signed int v6; // [sp+0h] [bp-Ch]@11
  int v7; // [sp+4h] [bp-8h]@2
  int v8; // [sp+8h] [bp-4h]@4

  if ( byte_6D51D3C )
  {
    v7 = dword_6D51D38;
    sub_43D990((*(_DWORD *)dword_6D51D38 == 45) + a2, a3 > 0);
  }
  else
  {
    v7 = (int)sub_4463F0(*(_DWORD *)a1);
    sub_4462F0((a3 > 0) + (*(_DWORD *)v7 == 45) + a2, a3 + 1, v7);
  }
  v8 = a2;
  if ( *(_DWORD *)v7 == 45 )
  {
    *(_BYTE *)a2 = 45;
    v8 = a2 + 1;
  }
  if ( a3 > 0 )
  {
    *(_BYTE *)v8 = *(_BYTE *)(v8 + 1);
    ++v8;
    *(_BYTE *)v8 = byte_482CB8;
  }
  sub_434B90((byte_6D51D3C == 0) + a3 + v8);
  if ( a4 )
    *(_BYTE *)v4 = 69;
  if ( **(_BYTE **)(v7 + 12) != 48 )
  {
    v6 = *(_DWORD *)(v7 + 4) - 1;
    if ( v6 < 0 )
    {
      v6 = -v6;
      *(_BYTE *)(v4 + 1) = 45;
    }
    if ( v6 >= 100 )
    {
      *(_BYTE *)(v4 + 2) += v6 / 100;
      v6 %= 100;
    }
    if ( v6 >= 10 )
    {
      *(_BYTE *)(v4 + 3) += v6 / 10;
      v6 %= 10;
    }
    *(_BYTE *)(v4 + 4) += v6;
  }
  return a2;
}
// 482CB8: using guessed type char byte_482CB8;
// 6D51D38: using guessed type int dword_6D51D38;
// 6D51D3C: using guessed type char byte_6D51D3C;

//----- (0043D630) --------------------------------------------------------
int __cdecl sub_43D630(char *a1, int a2, int a3)
{
  int v3; // ST10_4@3
  int v5; // [sp+0h] [bp-10h]@16
  int v6; // [sp+8h] [bp-8h]@2
  int v7; // [sp+Ch] [bp-4h]@2
  int v8; // [sp+Ch] [bp-4h]@6
  int v9; // [sp+Ch] [bp-4h]@9
  int v10; // [sp+Ch] [bp-4h]@12
  int v11; // [sp+20h] [bp+10h]@14

  if ( byte_6D51D3C )
  {
    v6 = dword_6D51D38;
    v7 = (*(_DWORD *)dword_6D51D38 == 45) + a2;
    if ( dword_6D51D40 == a3 )
    {
      v3 = dword_6D51D40 + v7;
      *(_BYTE *)(dword_6D51D40 + v7) = 48;
      *(_BYTE *)(v3 + 1) = 0;
    }
  }
  else
  {
    v6 = (int)sub_4463F0(*(_DWORD *)a1);
    sub_4462F0((*(_DWORD *)v6 == 45) + a2, *(_DWORD *)(v6 + 4) + a3, v6);
  }
  v8 = a2;
  if ( *(_DWORD *)v6 == 45 )
  {
    *(_BYTE *)a2 = 45;
    v8 = a2 + 1;
  }
  if ( *(_DWORD *)(v6 + 4) > 0 )
  {
    v9 = *(_DWORD *)(v6 + 4) + v8;
  }
  else
  {
    sub_43D990(v8, 1);
    *(_BYTE *)v8 = 48;
    v9 = v8 + 1;
  }
  if ( a3 > 0 )
  {
    sub_43D990(v9, 1);
    *(_BYTE *)v9 = byte_482CB8;
    v10 = v9 + 1;
    if ( *(_DWORD *)(v6 + 4) < 0 )
    {
      if ( byte_6D51D3C )
      {
        v11 = -*(_DWORD *)(v6 + 4);
      }
      else
      {
        if ( a3 >= -*(_DWORD *)(v6 + 4) )
          v5 = -*(_DWORD *)(v6 + 4);
        else
          v5 = a3;
        v11 = v5;
      }
      sub_43D990(v10, v11);
      sub_434AB0((void *)v10, 0x30u, v11);
    }
  }
  return a2;
}
// 482CB8: using guessed type char byte_482CB8;
// 6D51D38: using guessed type int dword_6D51D38;
// 6D51D3C: using guessed type char byte_6D51D3C;
// 6D51D40: using guessed type int dword_6D51D40;

//----- (0043D7C0) --------------------------------------------------------
int __cdecl sub_43D7C0(char *a1, int a2, int a3, int a4)
{
  int result; // eax@3
  int v5; // edx@5
  int v6; // [sp+0h] [bp-4h]@1

  dword_6D51D38 = (int)sub_4463F0(*(_DWORD *)a1);
  dword_6D51D40 = *(_DWORD *)(dword_6D51D38 + 4) - 1;
  v6 = (*(_DWORD *)dword_6D51D38 == 45) + a2;
  sub_4462F0(v6, a3, dword_6D51D38);
  byte_6D51D44 = dword_6D51D40 < *(_DWORD *)(dword_6D51D38 + 4) - 1;
  dword_6D51D40 = *(_DWORD *)(dword_6D51D38 + 4) - 1;
  if ( dword_6D51D40 >= -4 && dword_6D51D40 < a3 )
  {
    if ( byte_6D51D44 )
    {
      do
        v5 = *(_BYTE *)v6++;
      while ( v5 );
      *(_BYTE *)(v6 - 2) = 0;
    }
    result = sub_43D900(a1, a2, a3);
  }
  else
  {
    result = sub_43D8C0(a1, a2, a3, a4);
  }
  return result;
}
// 6D51D38: using guessed type int dword_6D51D38;
// 6D51D40: using guessed type int dword_6D51D40;
// 6D51D44: using guessed type char byte_6D51D44;

//----- (0043D8C0) --------------------------------------------------------
int __cdecl sub_43D8C0(char *a1, int a2, int a3, int a4)
{
  int result; // eax@1

  byte_6D51D3C = 1;
  result = sub_43D470(a1, a2, a3, a4);
  byte_6D51D3C = 0;
  return result;
}
// 6D51D3C: using guessed type char byte_6D51D3C;

//----- (0043D900) --------------------------------------------------------
int __cdecl sub_43D900(char *a1, int a2, int a3)
{
  int result; // eax@1

  byte_6D51D3C = 1;
  result = sub_43D630(a1, a2, a3);
  byte_6D51D3C = 0;
  return result;
}
// 6D51D3C: using guessed type char byte_6D51D3C;

//----- (0043D930) --------------------------------------------------------
int __cdecl sub_43D930(char *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax@3

  if ( a3 != 101 && a3 != 69 )
  {
    if ( a3 == 102 )
      result = sub_43D630(a1, a2, a4);
    else
      result = sub_43D7C0(a1, a2, a4, a5);
  }
  else
  {
    result = sub_43D470(a1, a2, a4, a5);
  }
  return result;
}

//----- (0043D990) --------------------------------------------------------
void __cdecl sub_43D990(int a1, int a2)
{
  int v2; // eax@2

  if ( a2 )
  {
    v2 = sub_434FC0(a1);
    sub_4465E0((void *)(a2 + a1), (const void *)a1, v2 + 1);
  }
}

//----- (0043D9C0) --------------------------------------------------------
int __usercall sub_43D9C0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4, __int16 a5)
{
  int result; // eax@2
  const CHAR MultiByteStr; // [sp+0h] [bp-Ch]@4
  char v7; // [sp+1h] [bp-Bh]@4
  char v8; // [sp+2h] [bp-Ah]@4
  int cbMultiByte; // [sp+4h] [bp-8h]@4
  WORD CharType[2]; // [sp+8h] [bp-4h]@6

  if ( (unsigned int)(a4 + 1) > 0x100 )
  {
    if ( *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * ((a4 >> 8) & 0xFF)) & 0x8000 )
    {
      MultiByteStr = BYTE1(a4);
      v7 = a4;
      v8 = 0;
      cbMultiByte = 2;
    }
    else
    {
      MultiByteStr = a4;
      v7 = 0;
      cbMultiByte = 1;
    }
    if ( sub_445370((int)&MultiByteStr, a1, a2, a3, 1u, &MultiByteStr, cbMultiByte, CharType, 0, 0, 1) )
      result = (unsigned __int16)(a5 & CharType[0]);
    else
      result = 0;
  }
  else
  {
    result = (unsigned __int16)(a5 & *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * a4));
  }
  return result;
}
// 482AA8: using guessed type __int16 off_482AA8[2];

//----- (0043DA80) --------------------------------------------------------
unsigned __int64 __stdcall sub_43DA80(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // qax@2

  if ( HIDWORD(a1) | HIDWORD(a2) )
    result = a2 * a1;
  else
    result = (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
  return result;
}

//----- (0043DAC0) --------------------------------------------------------
signed int __cdecl sub_43DAC0(signed int a1, int a2, DWORD nNumberOfBytesToRead)
{
  signed int result; // eax@3
  char Buffer; // [sp+4h] [bp-1Ch]@34
  int v5; // [sp+8h] [bp-18h]@4
  LPVOID lpBuffer; // [sp+Ch] [bp-14h]@4
  DWORD NumberOfBytesRead; // [sp+10h] [bp-10h]@10
  int v8; // [sp+14h] [bp-Ch]@21
  unsigned int v9; // [sp+18h] [bp-8h]@11
  unsigned int v10; // [sp+1Ch] [bp-4h]@21

  if ( a1 < uNumber && *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    v5 = 0;
    lpBuffer = (LPVOID)a2;
    if ( nNumberOfBytesToRead && !(*(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 2) )
    {
      if ( *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x48
        && *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 5) != 10 )
      {
        *(_BYTE *)lpBuffer++ = *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 5);
        ++v5;
        --nNumberOfBytesToRead;
        *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 5) = 10;
      }
      if ( ReadFile(
             *(HANDLE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)),
             lpBuffer,
             nNumberOfBytesToRead,
             &NumberOfBytesRead,
             0) )
      {
        v5 += NumberOfBytesRead;
        if ( *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x80 )
        {
          if ( NumberOfBytesRead && *(_BYTE *)a2 == 10 )
            *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) |= 4u;
          else
            *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) &= 0xFBu;
          v8 = a2;
          v10 = a2;
          while ( v10 < v5 + a2 )
          {
            if ( *(_BYTE *)v10 == 26 )
            {
              if ( !(*(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x40) )
                *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) |= 2u;
              break;
            }
            if ( *(_BYTE *)v10 == 13 )
            {
              if ( v10 >= a2 + v5 - 1 )
              {
                ++v10;
                v9 = 0;
                if ( !ReadFile(
                        *(HANDLE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)),
                        &Buffer,
                        1u,
                        &NumberOfBytesRead,
                        0) )
                  v9 = GetLastError();
                if ( !v9 && NumberOfBytesRead )
                {
                  if ( *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x48 )
                  {
                    if ( Buffer == 10 )
                    {
                      *(_BYTE *)v8++ = 10;
                    }
                    else
                    {
                      *(_BYTE *)v8++ = 13;
                      *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 5) = Buffer;
                    }
                  }
                  else
                  {
                    if ( v8 != a2 || Buffer != 10 )
                    {
                      sub_4361B0(a1, -1, 1u);
                      if ( Buffer != 10 )
                        *(_BYTE *)v8++ = 13;
                    }
                    else
                    {
                      *(_BYTE *)v8++ = 10;
                    }
                  }
                }
                else
                {
                  *(_BYTE *)v8++ = 13;
                }
              }
              else
              {
                if ( *(_BYTE *)(v10 + 1) == 10 )
                {
                  v10 += 2;
                  *(_BYTE *)v8++ = 10;
                }
                else
                {
                  *(_BYTE *)v8++ = *(_BYTE *)v10++;
                }
              }
            }
            else
            {
              *(_BYTE *)v8++ = *(_BYTE *)v10++;
            }
          }
          v5 = v8 - a2;
        }
        result = v5;
      }
      else
      {
        v9 = GetLastError();
        if ( v9 == 5 )
        {
          dword_6D51CC0 = 9;
          dword_6D51CC4 = 5;
          result = -1;
        }
        else
        {
          if ( v9 == 109 )
          {
            result = 0;
          }
          else
          {
            sub_43ED20(v9);
            result = -1;
          }
        }
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043DF20) --------------------------------------------------------
int __usercall sub_43DF20<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  int result; // eax@7
  char v4; // [sp+0h] [bp-28h]@0
  signed int lDistanceToMove; // [sp+Ch] [bp-1Ch]@6
  int v6; // [sp+10h] [bp-18h]@10
  int v7; // [sp+14h] [bp-14h]@27
  int v8; // [sp+18h] [bp-10h]@25
  signed int v9; // [sp+20h] [bp-8h]@4
  unsigned int i; // [sp+24h] [bp-4h]@12
  unsigned int j; // [sp+24h] [bp-4h]@27

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"ftell.c", 99, 0, "str != NULL", v4) == 1 )
    __debugbreak();
  v9 = *(_DWORD *)(a3 + 16);
  if ( *(_DWORD *)(a3 + 4) < 0 )
    *(_DWORD *)(a3 + 4) = 0;
  lDistanceToMove = sub_4361B0(v9, 0, 1u);
  if ( lDistanceToMove < 0 )
    return -1;
  if ( !(*(_DWORD *)(a3 + 12) & 0x108) )
    return lDistanceToMove - *(_DWORD *)(a3 + 4);
  v6 = *(_DWORD *)a3 - *(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 12) & 3 )
  {
    if ( *(_BYTE *)(dword_6D53380[v9 >> 5] + 8 * (v9 & 0x1F) + 4) & 0x80 )
    {
      for ( i = *(_DWORD *)(a3 + 8); i < *(_DWORD *)a3; ++i )
      {
        if ( *(_BYTE *)i == 10 )
          ++v6;
      }
    }
  }
  else
  {
    if ( !(*(_DWORD *)(a3 + 12) & 0x80) )
    {
      dword_6D51CC0 = 22;
      return -1;
    }
  }
  if ( lDistanceToMove )
  {
    if ( *(_DWORD *)(a3 + 12) & 1 )
    {
      if ( *(_DWORD *)(a3 + 4) )
      {
        v8 = *(_DWORD *)a3 - *(_DWORD *)(a3 + 8) + *(_DWORD *)(a3 + 4);
        if ( *(_BYTE *)(dword_6D53380[v9 >> 5] + 8 * (v9 & 0x1F) + 4) & 0x80 )
        {
          if ( sub_4361B0(v9, 0, 2u) == lDistanceToMove )
          {
            v7 = v8 + *(_DWORD *)(a3 + 8);
            for ( j = *(_DWORD *)(a3 + 8); j < v7; ++j )
            {
              if ( *(_BYTE *)j == 10 )
                ++v8;
            }
            if ( *(_DWORD *)(a3 + 12) & 0x2000 )
              ++v8;
          }
          else
          {
            sub_4361B0(v9, lDistanceToMove, 0);
            if ( (unsigned int)v8 > 0x200 || !(*(_DWORD *)(a3 + 12) & 8) || *(_DWORD *)(a3 + 12) & 0x400 )
              v8 = *(_DWORD *)(a3 + 24);
            else
              v8 = 512;
            if ( *(_BYTE *)(dword_6D53380[v9 >> 5] + 8 * (v9 & 0x1F) + 4) & 4 )
              ++v8;
          }
        }
        lDistanceToMove -= v8;
      }
      else
      {
        v6 = 0;
      }
    }
    result = v6 + lDistanceToMove;
  }
  else
  {
    result = v6;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043E1B0) --------------------------------------------------------
int __usercall sub_43E1B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  int result; // eax@3

  if ( !dword_6D51E00 )
  {
    if ( !dword_6D51E00 )
    {
      sub_43E1E0(a1, a2, a3);
      result = dword_6D51E00++ + 1;
    }
  }
  return result;
}
// 6D51E00: using guessed type int dword_6D51E00;

//----- (0043E1E0) --------------------------------------------------------
int __usercall sub_43E1E0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  int result; // eax@2
  int v4; // eax@22
  int v5; // [sp+0h] [bp-Ch]@1
  int v6; // [sp+0h] [bp-Ch]@23
  BOOL UsedDefaultChar; // [sp+4h] [bp-8h]@9
  int v8; // [sp+8h] [bp-4h]@1

  v8 = 0;
  dword_6D51D48 = 0;
  dword_482D68 = -1;
  dword_482D58 = -1;
  v5 = sub_446930(a1, a2, a3, (int)"TZ");
  if ( v5 )
  {
    result = *(_BYTE *)v5;
    if ( *(_BYTE *)v5 )
    {
      if ( !dword_6D51DFC || (result = sub_4351F0(v5, dword_6D51DFC)) != 0 )
      {
        sub_436DA0(a1, a3, dword_6D51DFC, 2);
        v4 = sub_434FC0(v5);
        result = sub_436360(a1, a3, v4 + 1, 2, (int)"tzset.c", 268);
        dword_6D51DFC = result;
        if ( result )
        {
          sub_434B90(dword_6D51DFC);
          sub_435800((int)lpMultiByteStr, v5, 3u);
          lpMultiByteStr[3] = 0;
          v6 = v5 + 3;
          if ( *(_BYTE *)v6 == 45 )
          {
            ++v8;
            ++v6;
          }
          dword_482CC0 = 3600 * sub_4352B0(a1, a2, a3, (signed int *)v6);
          while ( *(_BYTE *)v6 == 43 || (signed int)*(_BYTE *)v6 >= 48 && (signed int)*(_BYTE *)v6 <= 57 )
            ++v6;
          if ( *(_BYTE *)v6 == 58 )
          {
            ++v6;
            dword_482CC0 += 60 * sub_4352B0(a1, a2, a3, (signed int *)v6);
            while ( (signed int)*(_BYTE *)v6 >= 48 && (signed int)*(_BYTE *)v6 <= 57 )
              ++v6;
            if ( *(_BYTE *)v6 == 58 )
            {
              ++v6;
              dword_482CC0 += sub_4352B0(a1, a2, a3, (signed int *)v6);
              while ( (signed int)*(_BYTE *)v6 >= 48 && (signed int)*(_BYTE *)v6 <= 57 )
                ++v6;
            }
          }
          if ( v8 )
            dword_482CC0 = -dword_482CC0;
          result = v6;
          dword_482CC4 = *(_BYTE *)v6;
          if ( dword_482CC4 )
          {
            result = sub_435800((int)off_482D50, v6, 3u);
            off_482D50[3] = 0;
          }
          else
          {
            *off_482D50 = 0;
          }
        }
      }
    }
  }
  else
  {
    result = GetTimeZoneInformation(&TimeZoneInformation);
    if ( result != -1 )
    {
      dword_6D51D48 = 1;
      dword_482CC0 = 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.StandardDate.wMonth )
        dword_482CC0 += 60 * TimeZoneInformation.StandardBias;
      if ( TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias )
      {
        dword_482CC4 = 1;
        dword_482CC8 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
      }
      else
      {
        dword_482CC4 = 0;
        dword_482CC8 = 0;
      }
      if ( !WideCharToMultiByte(
              dword_6D51F9C,
              0x220u,
              TimeZoneInformation.StandardName,
              -1,
              lpMultiByteStr,
              63,
              0,
              &UsedDefaultChar)
        || UsedDefaultChar )
        *lpMultiByteStr = 0;
      else
        lpMultiByteStr[63] = 0;
      result = WideCharToMultiByte(
                 dword_6D51F9C,
                 0x220u,
                 TimeZoneInformation.DaylightName,
                 -1,
                 off_482D50,
                 63,
                 0,
                 &UsedDefaultChar);
      if ( !result || UsedDefaultChar )
      {
        *off_482D50 = 0;
      }
      else
      {
        result = (int)off_482D50;
        off_482D50[63] = 0;
      }
    }
  }
  return result;
}
// 482CC0: using guessed type int dword_482CC0;
// 482CC4: using guessed type int dword_482CC4;
// 482CC8: using guessed type int dword_482CC8;
// 482D58: using guessed type int dword_482D58;
// 482D68: using guessed type int dword_482D68;
// 6D51D48: using guessed type int dword_6D51D48;
// 6D51DFC: using guessed type int dword_6D51DFC;

//----- (0043E560) --------------------------------------------------------
bool __cdecl sub_43E560(int a1)
{
  bool result; // eax@2
  int v2; // [sp+0h] [bp-4h]@28

  if ( !dword_482CC4 )
    return 0;
  if ( *(_DWORD *)(a1 + 20) != dword_482D58 || *(_DWORD *)(a1 + 20) != dword_482D68 )
  {
    if ( dword_6D51D48 )
    {
      if ( TimeZoneInformation.DaylightDate.wYear )
        sub_43E860(
          1,
          0,
          *(_DWORD *)(a1 + 20),
          TimeZoneInformation.DaylightDate.wMonth,
          0,
          0,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wHour,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      else
        sub_43E860(
          1,
          1,
          *(_DWORD *)(a1 + 20),
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wDayOfWeek,
          0,
          TimeZoneInformation.DaylightDate.wHour,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      if ( TimeZoneInformation.StandardDate.wYear )
        sub_43E860(
          0,
          0,
          *(_DWORD *)(a1 + 20),
          TimeZoneInformation.StandardDate.wMonth,
          0,
          0,
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wHour,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
      else
        sub_43E860(
          0,
          1,
          *(_DWORD *)(a1 + 20),
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wDayOfWeek,
          0,
          TimeZoneInformation.StandardDate.wHour,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
    }
    else
    {
      sub_43E860(1, 1, *(_DWORD *)(a1 + 20), 4, 1, 0, 0, 2, 0, 0, 0);
      sub_43E860(0, 1, *(_DWORD *)(a1 + 20), 10, 5, 0, 0, 2, 0, 0, 0);
    }
  }
  if ( dword_482D5C >= dword_482D6C )
  {
    if ( *(_DWORD *)(a1 + 28) < dword_482D6C || *(_DWORD *)(a1 + 28) > dword_482D5C )
      return 1;
    if ( *(_DWORD *)(a1 + 28) > dword_482D6C && *(_DWORD *)(a1 + 28) < dword_482D5C )
      return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 28) < dword_482D5C || *(_DWORD *)(a1 + 28) > dword_482D6C )
      return 0;
    if ( *(_DWORD *)(a1 + 28) > dword_482D5C && *(_DWORD *)(a1 + 28) < dword_482D6C )
      return 1;
  }
  v2 = 1000 * (3600 * *(_DWORD *)(a1 + 8) + 60 * *(_DWORD *)(a1 + 4) + *(_DWORD *)a1);
  if ( *(_DWORD *)(a1 + 28) == dword_482D5C )
    result = v2 >= dword_482D60;
  else
    result = v2 < dword_482D70;
  return result;
}
// 482CC4: using guessed type int dword_482CC4;
// 482D58: using guessed type int dword_482D58;
// 482D5C: using guessed type int dword_482D5C;
// 482D60: using guessed type int dword_482D60;
// 482D68: using guessed type int dword_482D68;
// 482D6C: using guessed type int dword_482D6C;
// 482D70: using guessed type int dword_482D70;
// 6D51D48: using guessed type int dword_6D51D48;

//----- (0043E860) --------------------------------------------------------
int __cdecl sub_43E860(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int result; // eax@20
  int v12; // [sp+0h] [bp-14h]@16
  int v13; // [sp+4h] [bp-10h]@10
  int v14; // [sp+8h] [bp-Ch]@3
  int v15; // [sp+Ch] [bp-8h]@5
  int v16; // [sp+Ch] [bp-8h]@6
  int v17; // [sp+10h] [bp-4h]@5

  if ( a2 == 1 )
  {
    if ( a3 & 3 )
      v14 = dword_483300[a4];
    else
      v14 = dword_4832CC[a4];
    v15 = v14 + 1;
    v17 = (365 * (a3 - 70) + v14 + 1 + ((a3 - 1) >> 2) - 13) % 7;
    if ( (365 * (a3 - 70) + v14 + 1 + ((a3 - 1) >> 2) - 13) % 7 >= a6 )
      v16 = a6 - v17 + v15 + 7 * a5;
    else
      v16 = a6 - v17 + v15 + 7 * (a5 - 1);
    if ( a5 == 5 )
    {
      v13 = a3 & 3 ? dword_483304[a4] : dword_4832D0[a4];
      if ( v16 > v13 )
        v16 -= 7;
    }
  }
  else
  {
    if ( a3 & 3 )
      v12 = dword_483300[a4];
    else
      v12 = dword_4832CC[a4];
    v16 = a7 + v12;
  }
  if ( a1 == 1 )
  {
    dword_482D5C = v16;
    result = 1000 * (60 * (60 * a8 + a9) + a10);
    dword_482D60 = result + a11;
    dword_482D58 = a3;
  }
  else
  {
    dword_482D6C = v16;
    result = 1000 * dword_482CC8 + 1000 * (60 * (60 * a8 + a9) + a10) + a11;
    dword_482D70 = 1000 * dword_482CC8 + 1000 * (60 * (60 * a8 + a9) + a10) + a11;
    if ( dword_482D70 >= 0 )
    {
      if ( dword_482D70 >= (signed int)&unk_5265C00 )
      {
        result = dword_482D70 - (_DWORD)&unk_5265C00;
        dword_482D70 -= (signed int)&unk_5265C00;
        ++dword_482D6C;
      }
    }
    else
    {
      dword_482D70 += (int)&unk_5265C00;
      --dword_482D6C;
    }
    dword_482D68 = a3;
  }
  return result;
}
// 482CC8: using guessed type int dword_482CC8;
// 482D58: using guessed type int dword_482D58;
// 482D5C: using guessed type int dword_482D5C;
// 482D60: using guessed type int dword_482D60;
// 482D68: using guessed type int dword_482D68;
// 482D6C: using guessed type int dword_482D6C;
// 482D70: using guessed type int dword_482D70;
// 4832CC: using guessed type int dword_4832CC[];
// 4832D0: using guessed type int dword_4832D0[];
// 483300: using guessed type int dword_483300[];
// 483304: using guessed type int dword_483304[];

//----- (0043EA60) --------------------------------------------------------
_UNKNOWN *__cdecl sub_43EA60(signed int *a1)
{
  _UNKNOWN *result; // eax@2
  int v2; // ST00_4@3
  int v3; // ST00_4@14
  signed int v4; // ST08_4@14
  int v5; // [sp+0h] [bp-14h]@3
  signed int i; // [sp+0h] [bp-14h]@11
  int v7; // [sp+4h] [bp-10h]@9
  signed int v8; // [sp+8h] [bp-Ch]@1
  int v9; // [sp+8h] [bp-Ch]@3
  signed int v10; // [sp+8h] [bp-Ch]@8
  signed int v11; // [sp+Ch] [bp-8h]@1

  v8 = *a1;
  v11 = 0;
  if ( *a1 >= 0 )
  {
    v2 = v8 / 126230400;
    v9 = v8 % 126230400;
    v5 = 4 * v2 + 70;
    if ( v9 >= (signed int)&unk_1E13380 )
    {
      ++v5;
      v9 -= (signed int)&unk_1E13380;
      if ( v9 >= (signed int)&unk_1E13380 )
      {
        ++v5;
        v9 -= (signed int)&unk_1E13380;
        if ( v9 < (signed int)&unk_1E28500 )
        {
          v11 = 1;
        }
        else
        {
          ++v5;
          v9 -= (signed int)&unk_1E28500;
        }
      }
    }
    dword_6D51E08[5] = v5;
    dword_6D51E08[7] = v9 / 86400;
    v10 = v9 - 86400 * dword_6D51E08[7];
    if ( v11 )
      v7 = (int)dword_4832D0;
    else
      v7 = (int)dword_483304;
    for ( i = 1; *(_DWORD *)(v7 + 4 * i) < dword_6D51E08[7]; ++i )
      ;
    v3 = i - 1;
    dword_6D51E08[4] = v3;
    dword_6D51E08[3] = dword_6D51E08[7] - *(_DWORD *)(v7 + 4 * v3);
    dword_6D51E08[6] = (*a1 / 86400 + 4) % 7;
    dword_6D51E08[2] = v10 / 3600;
    v4 = v10 - 3600 * dword_6D51E08[2];
    dword_6D51E08[1] = v4 / 60;
    dword_6D51E08[0] = v4 - 60 * dword_6D51E08[1];
    dword_6D51E08[8] = 0;
    result = (_UNKNOWN *)dword_6D51E08;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 4832D0: using guessed type int dword_4832D0[];
// 483304: using guessed type int dword_483304[];

//----- (0043EC30) --------------------------------------------------------
signed int __usercall sub_43EC30<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, signed int a5, int a6, int a7, int a8, int a9, int a10)
{
  signed int result; // eax@3
  int v11; // [sp+0h] [bp-2Ch]@4
  char v12; // [sp+4h] [bp-28h]@10
  int v13; // [sp+Ch] [bp-20h]@7
  int v14; // [sp+14h] [bp-18h]@7
  int v15; // [sp+18h] [bp-14h]@7
  int v16; // [sp+20h] [bp-Ch]@7
  int v17; // [sp+28h] [bp-4h]@7
  int v18; // [sp+34h] [bp+8h]@1

  v18 = a4 - 1900;
  if ( v18 >= 70 && v18 <= 138 )
  {
    v11 = dword_483300[a5] + a6;
    if ( !(v18 & 3) && a5 > 2 )
      ++v11;
    sub_43E1B0(a1, a2, a3);
    v17 = dword_482CC0 + a9 + 60 * (a8 + 60 * (a7 + 24 * (((v18 - 1) >> 2) + 365 * (v18 - 70) + v11 - 17)));
    v16 = v11;
    v15 = v18;
    v14 = a5 - 1;
    v13 = a7;
    if ( a10 == 1 || a10 == -1 && dword_482CC4 && sub_43E560((int)&v12) )
      v17 += dword_482CC8;
    result = v17;
  }
  else
  {
    result = -1;
  }
  return result;
}
// 482CC0: using guessed type int dword_482CC0;
// 482CC4: using guessed type int dword_482CC4;
// 482CC8: using guessed type int dword_482CC8;
// 483300: using guessed type int dword_483300[];

//----- (0043ED20) --------------------------------------------------------
unsigned int __cdecl sub_43ED20(unsigned int a1)
{
  unsigned int result; // eax@1
  unsigned int i; // [sp+0h] [bp-4h]@1

  result = a1;
  dword_6D51CC4 = a1;
  for ( i = 0; i < 0x2D; ++i )
  {
    result = a1;
    if ( a1 == dword_482D78[2 * i] )
    {
      dword_6D51CC0 = dword_482D7C[2 * i];
      return result;
    }
  }
  if ( a1 < 0x13 || a1 > 0x24 )
  {
    if ( a1 < 0xBC || a1 > 0xCA )
      dword_6D51CC0 = 22;
    else
      dword_6D51CC0 = 8;
  }
  else
  {
    dword_6D51CC0 = 13;
  }
  return result;
}
// 482D78: using guessed type int dword_482D78[];
// 482D7C: using guessed type int dword_482D7C[];
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;

//----- (0043EDB0) --------------------------------------------------------
UINT __usercall sub_43EDB0<eax>(int a1<ebx>, int a2<esi>)
{
  int v2; // ST2C_4@25
  DWORD nStdHandle; // [sp+0h] [bp-6Ch]@31
  signed int v5; // [sp+4h] [bp-68h]@9
  signed int v6; // [sp+8h] [bp-64h]@8
  UINT v7; // [sp+8h] [bp-64h]@11
  HANDLE *v8; // [sp+Ch] [bp-60h]@8
  signed int v9; // [sp+10h] [bp-5Ch]@11
  signed int v10; // [sp+14h] [bp-58h]@19
  signed int i; // [sp+14h] [bp-58h]@27
  DWORD v12; // [sp+18h] [bp-54h]@34
  int v13; // [sp+1Ch] [bp-50h]@1
  int v14; // [sp+1Ch] [bp-50h]@13
  int v15; // [sp+1Ch] [bp-50h]@29
  HANDLE hFile; // [sp+20h] [bp-4Ch]@33
  struct _STARTUPINFOA StartupInfo; // [sp+24h] [bp-48h]@6
  LPBYTE v18; // [sp+68h] [bp-4h]@8

  v13 = sub_436360(a1, a2, 0x100u, 2, (int)"ioinit.c", 129);
  if ( !v13 )
    sub_4392E0(a1, a2, 27);
  dword_6D53380[0] = v13;
  uNumber = 32;
  while ( v13 < (unsigned int)(dword_6D53380[0] + 256) )
  {
    *(_BYTE *)(v13 + 4) = 0;
    *(_DWORD *)v13 = -1;
    *(_BYTE *)(v13 + 5) = 10;
    v13 += 8;
  }
  GetStartupInfoA(&StartupInfo);
  if ( StartupInfo.cbReserved2 && StartupInfo.lpReserved2 )
  {
    v6 = *(_DWORD *)StartupInfo.lpReserved2;
    v18 = StartupInfo.lpReserved2 + 4;
    v8 = (HANDLE *)&StartupInfo.lpReserved2[v6 + 4];
    if ( v6 >= 2048 )
      v5 = 2048;
    else
      v5 = v6;
    v7 = v5;
    v9 = 1;
    while ( (signed int)uNumber < v5 )
    {
      v14 = sub_436360(a1, a2, 0x100u, 2, (int)"ioinit.c", 182);
      if ( !v14 )
      {
        v7 = uNumber;
        break;
      }
      dword_6D53380[v9] = v14;
      uNumber += 32;
      while ( v14 < (unsigned int)(dword_6D53380[v9] + 256) )
      {
        *(_BYTE *)(v14 + 4) = 0;
        *(_DWORD *)v14 = -1;
        *(_BYTE *)(v14 + 5) = 10;
        v14 += 8;
      }
      ++v9;
    }
    v10 = 0;
    while ( v10 < (signed int)v7 )
    {
      if ( *v8 != (HANDLE)-1 && *v18 & 1 && (*v18 & 8 || GetFileType(*v8)) )
      {
        v2 = dword_6D53380[v10 >> 5] + 8 * (v10 & 0x1F);
        *(_DWORD *)v2 = *v8;
        *(_BYTE *)(v2 + 4) = *v18;
      }
      ++v10;
      ++v18;
      ++v8;
    }
  }
  for ( i = 0; i < 3; ++i )
  {
    v15 = dword_6D53380[0] + 8 * i;
    if ( *(_DWORD *)(dword_6D53380[0] + 8 * i) == -1 )
    {
      *(_BYTE *)(v15 + 4) = -127;
      if ( i )
        nStdHandle = -(i != 1) - 11;
      else
        nStdHandle = -10;
      hFile = GetStdHandle(nStdHandle);
      if ( hFile != (HANDLE)-1 && (v12 = GetFileType(hFile)) != 0 )
      {
        *(_DWORD *)v15 = hFile;
        if ( (unsigned __int8)v12 == 2 )
        {
          *(_BYTE *)(v15 + 4) |= 0x40u;
        }
        else
        {
          if ( (unsigned __int8)v12 == 3 )
            *(_BYTE *)(v15 + 4) |= 8u;
        }
      }
      else
      {
        *(_BYTE *)(v15 + 4) |= 0x40u;
      }
    }
    else
    {
      *(_BYTE *)(v15 + 4) |= 0x80u;
    }
  }
  return SetHandleCount(uNumber);
}
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043F120) --------------------------------------------------------
int __usercall sub_43F120<eax>(int a1<ebx>, int a2<esi>)
{
  signed int i; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+4h] [bp-8h]@1
  unsigned int j; // [sp+8h] [bp-4h]@4
  int v6; // [sp+8h] [bp-4h]@11

  v4 = -1;
  for ( i = 0; i < 64; ++i )
  {
    if ( !dword_6D53380[i] )
    {
      v6 = sub_436360(a1, a2, 0x100u, 2, (int)"osfinfo.c", 121);
      if ( v6 )
      {
        dword_6D53380[i] = v6;
        uNumber += 32;
        while ( v6 < (unsigned int)(dword_6D53380[i] + 256) )
        {
          *(_BYTE *)(v6 + 4) = 0;
          *(_DWORD *)v6 = -1;
          *(_BYTE *)(v6 + 5) = 10;
          v6 += 8;
        }
        v4 = 32 * i;
      }
      return v4;
    }
    for ( j = dword_6D53380[i]; j < dword_6D53380[i] + 256; j += 8 )
    {
      if ( !(*(_BYTE *)(j + 4) & 1) )
      {
        *(_DWORD *)j = -1;
        v4 = ((signed int)(j - dword_6D53380[i]) >> 3) + 32 * i;
        break;
      }
    }
    if ( v4 != -1 )
      return v4;
  }
  return v4;
}
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043F250) --------------------------------------------------------
signed int __cdecl sub_43F250(signed int a1, HANDLE hHandle)
{
  signed int result; // eax@11

  if ( a1 >= uNumber || *(_DWORD *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)) != -1 )
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  else
  {
    if ( dword_482954 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5u, hHandle);
        }
        else
        {
          if ( a1 == 2 )
            SetStdHandle(0xFFFFFFF4u, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6u, hHandle);
      }
    }
    *(_DWORD *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)) = hHandle;
    result = 0;
  }
  return result;
}
// 482954: using guessed type int dword_482954;
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043F300) --------------------------------------------------------
signed int __cdecl sub_43F300(signed int a1)
{
  signed int result; // eax@12

  if ( a1 < uNumber
    && *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1
    && *(_DWORD *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)) != -1 )
  {
    if ( dword_482954 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5u, 0);
        }
        else
        {
          if ( a1 == 2 )
            SetStdHandle(0xFFFFFFF4u, 0);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6u, 0);
      }
    }
    *(_DWORD *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F)) = -1;
    result = 0;
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 482954: using guessed type int dword_482954;
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043F3D0) --------------------------------------------------------
signed int __cdecl sub_43F3D0(signed int a1)
{
  signed int result; // eax@3

  if ( a1 < uNumber && *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    result = *(_DWORD *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F));
  }
  else
  {
    dword_6D51CC0 = 9;
    dword_6D51CC4 = 0;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (0043F550) --------------------------------------------------------
bool __cdecl sub_43F550(int a1)
{
  return dword_6D51E30 && ((int (__cdecl *)(int))dword_6D51E30)(a1);
}
// 6D51E30: using guessed type int dword_6D51E30;

//----- (0043F580) --------------------------------------------------------
LPVOID __cdecl sub_43F580(int dwBytes)
{
  return sub_43F5A0(dwBytes, dword_6D51E2C);
}

//----- (0043F5A0) --------------------------------------------------------
LPVOID __cdecl sub_43F5A0(int dwBytes, int a2)
{
  LPVOID result; // eax@2
  LPVOID v3; // [sp+0h] [bp-4h]@4

  if ( (unsigned int)dwBytes <= 0xFFFFFFE0 )
  {
    do
    {
      if ( (unsigned int)dwBytes > 0xFFFFFFE0 )
        v3 = 0;
      else
        v3 = sub_43F600(dwBytes);
      if ( v3 || !a2 )
        return v3;
    }
    while ( sub_43F550(dwBytes) );
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0043F600) --------------------------------------------------------
LPVOID __cdecl sub_43F600(int dwBytes)
{
  LPVOID result; // eax@3
  int v2; // [sp+0h] [bp-4h]@2

  if ( dwBytes <= (unsigned int)dword_482EF0 && (v2 = sub_4401A0(dwBytes)) != 0 )
  {
    result = (LPVOID)v2;
  }
  else
  {
    if ( !dwBytes )
      dwBytes = 1;
    result = HeapAlloc(hHeap, 0, (dwBytes + 15) & 0xFFFFFFF0);
  }
  return result;
}
// 482EF0: using guessed type int dword_482EF0;

//----- (0043F660) --------------------------------------------------------
signed int __cdecl sub_43F660()
{
  return 1;
}

//----- (0043F670) --------------------------------------------------------
LPVOID __cdecl sub_43F670(LPVOID lpMem, int dwBytes)
{
  LPVOID result; // eax@2
  SIZE_T v3; // eax@10
  int v4; // [sp+0h] [bp-8h]@3
  LPVOID v5; // [sp+4h] [bp-4h]@4

  if ( (unsigned int)dwBytes <= 0xFFFFFFE0 )
  {
    v4 = sub_43FB10((int)lpMem);
    if ( v4 )
    {
      v5 = 0;
      if ( dwBytes <= (unsigned int)dword_482EF0 )
      {
        if ( sub_4409E0(v4, (int)lpMem, dwBytes) )
          v5 = lpMem;
      }
      result = v5;
    }
    else
    {
      if ( !dwBytes )
        dwBytes = 1;
      v3 = dwBytes + 15;
      LOBYTE(v3) = (dwBytes + 15) & 0xF0;
      result = HeapReAlloc(hHeap, 0x10u, lpMem, v3);
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
// 482EF0: using guessed type int dword_482EF0;

//----- (0043F700) --------------------------------------------------------
LPVOID __cdecl sub_43F700(int lpMem, int dwBytes)
{
  LPVOID result; // eax@2
  unsigned int v3; // [sp+0h] [bp-14h]@20
  unsigned int v4; // [sp+4h] [bp-10h]@12
  unsigned int v5; // [sp+8h] [bp-Ch]@6
  LPVOID v6; // [sp+Ch] [bp-8h]@5

  if ( lpMem )
  {
    if ( dwBytes )
    {
      do
      {
        v6 = 0;
        if ( (unsigned int)dwBytes <= 0xFFFFFFE0 )
        {
          v5 = sub_43FB10(lpMem);
          if ( v5 )
          {
            if ( dwBytes <= (unsigned int)dword_482EF0 )
            {
              if ( sub_4409E0(v5, lpMem, dwBytes) )
              {
                v6 = (LPVOID)lpMem;
              }
              else
              {
                v6 = (LPVOID)sub_4401A0(dwBytes);
                if ( v6 )
                {
                  if ( *(_DWORD *)(lpMem - 4) - 1 >= (unsigned int)dwBytes )
                    v4 = dwBytes;
                  else
                    v4 = *(_DWORD *)(lpMem - 4) - 1;
                  sub_434C80(v6, (const void *)lpMem, v4);
                  sub_43FBD0(v5, lpMem);
                }
              }
            }
            if ( !v6 )
            {
              if ( !dwBytes )
                dwBytes = 1;
              dwBytes = (dwBytes + 15) & 0xFFFFFFF0;
              v6 = HeapAlloc(hHeap, 0, dwBytes);
              if ( v6 )
              {
                if ( *(_DWORD *)(lpMem - 4) - 1 >= (unsigned int)dwBytes )
                  v3 = dwBytes;
                else
                  v3 = *(_DWORD *)(lpMem - 4) - 1;
                sub_434C80(v6, (const void *)lpMem, v3);
                sub_43FBD0(v5, lpMem);
              }
            }
          }
          else
          {
            if ( !dwBytes )
              dwBytes = 1;
            dwBytes = (dwBytes + 15) & 0xFFFFFFF0;
            v6 = HeapReAlloc(hHeap, 0, (LPVOID)lpMem, dwBytes);
          }
        }
        if ( v6 || !dword_6D51E2C )
          return v6;
      }
      while ( sub_43F550(dwBytes) );
      result = 0;
    }
    else
    {
      sub_43F8D0((LPVOID)lpMem);
      result = 0;
    }
  }
  else
  {
    result = sub_43F580(dwBytes);
  }
  return result;
}
// 482EF0: using guessed type int dword_482EF0;

//----- (0043F8D0) --------------------------------------------------------
void __cdecl sub_43F8D0(LPVOID lpMem)
{
  unsigned int v1; // [sp+0h] [bp-4h]@2

  if ( lpMem )
  {
    v1 = sub_43FB10((int)lpMem);
    if ( v1 )
      sub_43FBD0(v1, (int)lpMem);
    else
      HeapFree(hHeap, 0, lpMem);
  }
}

//----- (0043F920) --------------------------------------------------------
signed int __cdecl sub_43F920()
{
  signed int v1; // [sp+0h] [bp-4h]@1

  v1 = -2;
  if ( sub_441100() < 0 )
    v1 = -4;
  if ( !HeapValidate(hHeap, 0, 0) )
  {
    if ( GetLastError() == 120 )
    {
      dword_6D51CC4 = 120;
      dword_6D51CC0 = 40;
    }
    else
    {
      v1 = -4;
    }
  }
  return v1;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;

//----- (0043F990) --------------------------------------------------------
signed int __cdecl sub_43F990(int a1)
{
  signed int result; // eax@2

  hHeap = HeapCreate(a1 == 0, 0x1000u, 0);
  if ( hHeap )
  {
    if ( sub_43FAB0() )
    {
      result = 1;
    }
    else
    {
      HeapDestroy(hHeap);
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0043FAB0) --------------------------------------------------------
signed int __cdecl sub_43FAB0()
{
  signed int result; // eax@2

  lpMem = HeapAlloc(hHeap, 0, 0x140u);
  if ( lpMem )
  {
    dword_6D53358 = (int)lpMem;
    dword_6D5335C = 0;
    dword_6D53360 = 0;
    dword_6D53344 = 16;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D53344: using guessed type int dword_6D53344;
// 6D53358: using guessed type int dword_6D53358;
// 6D5335C: using guessed type int dword_6D5335C;
// 6D53360: using guessed type int dword_6D53360;

//----- (0043FB10) --------------------------------------------------------
unsigned int __cdecl sub_43FB10(int a1)
{
  unsigned int i; // [sp+4h] [bp-8h]@1

  for ( i = (unsigned int)lpMem; i < (unsigned int)((char *)lpMem + 20 * dword_6D53360); i += 20 )
  {
    if ( (unsigned int)(a1 - *(_DWORD *)(i + 12)) < 0x100000 )
      return i;
  }
  return 0;
}
// 6D53360: using guessed type int dword_6D53360;

//----- (0043FB70) --------------------------------------------------------
bool __cdecl sub_43FB70(int a1, int a2)
{
  unsigned int v4; // [sp+4h] [bp-8h]@1

  v4 = a2 - *(_DWORD *)(a1 + 12);
  return !((0x80000000u >> (v4 >> 15)) & *(_DWORD *)(a1 + 8)) && !(v4 & 0xF) && v4 & 0xFFF;
}

//----- (0043FBD0) --------------------------------------------------------
int __cdecl sub_43FBD0(unsigned int a1, int a2)
{
  int v2; // ST28_4@31
  int v3; // edx@33
  int v4; // edx@36
  int result; // eax@39
  int v6; // eax@42
  int v7; // [sp+0h] [bp-3Ch]@1
  int v8; // [sp+4h] [bp-38h]@1
  int v9; // [sp+8h] [bp-34h]@15
  signed int v10; // [sp+Ch] [bp-30h]@1
  int v11; // [sp+10h] [bp-2Ch]@0
  int v12; // [sp+14h] [bp-28h]@12
  int v13; // [sp+18h] [bp-24h]@2
  int v14; // [sp+20h] [bp-1Ch]@1
  signed int v15; // [sp+28h] [bp-14h]@1
  signed int v16; // [sp+30h] [bp-Ch]@1
  int v17; // [sp+34h] [bp-8h]@1
  unsigned int v18; // [sp+38h] [bp-4h]@1

  v7 = *(_DWORD *)(a1 + 16);
  v18 = (unsigned int)(a2 - *(_DWORD *)(a1 + 12)) >> 15;
  v17 = v7 + 516 * v18 + 324;
  v14 = a2 - 4;
  v10 = *(_DWORD *)(a2 - 4) - 1;
  v8 = v10 + a2 - 4;
  v15 = *(_DWORD *)(v10 + a2 - 4);
  v16 = *(_DWORD *)(a2 - 8);
  if ( !(v15 & 1) )
  {
    v13 = (v15 >> 4) - 1;
    if ( (unsigned int)v13 > 0x3F )
      v13 = 63;
    if ( *(_DWORD *)(v8 + 4) == *(_DWORD *)(v8 + 8) )
    {
      if ( (unsigned int)v13 >= 0x20 )
      {
        *(_DWORD *)(v7 + 4 * v18 + 196) &= ~(0x80000000u >> (v13 - 32));
        --*(_BYTE *)(v13 + v7 + 4);
        if ( !*(_BYTE *)(v13 + v7 + 4) )
          *(_DWORD *)(a1 + 4) &= ~(0x80000000u >> (v13 - 32));
      }
      else
      {
        *(_DWORD *)(v7 + 4 * v18 + 68) &= ~(0x80000000u >> v13);
        --*(_BYTE *)(v13 + v7 + 4);
        if ( !*(_BYTE *)(v13 + v7 + 4) )
          *(_DWORD *)a1 &= ~(0x80000000u >> v13);
      }
    }
    *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4) = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(*(_DWORD *)(v8 + 4) + 8) = *(_DWORD *)(v8 + 8);
    v10 += v15;
  }
  v12 = (v10 >> 4) - 1;
  if ( (unsigned int)v12 > 0x3F )
    v12 = 63;
  if ( !(v16 & 1) )
  {
    v9 = v14 - v16;
    v11 = (v16 >> 4) - 1;
    if ( (unsigned int)v11 > 0x3F )
      v11 = 63;
    v10 += v16;
    v12 = (v10 >> 4) - 1;
    if ( (unsigned int)v12 > 0x3F )
      v12 = 63;
    if ( v11 != v12 )
    {
      if ( *(_DWORD *)(v9 + 4) == *(_DWORD *)(v9 + 8) )
      {
        if ( (unsigned int)v11 >= 0x20 )
        {
          *(_DWORD *)(v7 + 4 * v18 + 196) &= ~(0x80000000u >> (v11 - 32));
          --*(_BYTE *)(v11 + v7 + 4);
          if ( !*(_BYTE *)(v11 + v7 + 4) )
            *(_DWORD *)(a1 + 4) &= ~(0x80000000u >> (v11 - 32));
        }
        else
        {
          *(_DWORD *)(v7 + 4 * v18 + 68) &= ~(0x80000000u >> v11);
          --*(_BYTE *)(v11 + v7 + 4);
          if ( !*(_BYTE *)(v11 + v7 + 4) )
            *(_DWORD *)a1 &= ~(0x80000000u >> v11);
        }
      }
      *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4) = *(_DWORD *)(v9 + 4);
      *(_DWORD *)(*(_DWORD *)(v9 + 4) + 8) = *(_DWORD *)(v9 + 8);
    }
    v14 -= v16;
  }
  if ( v16 & 1 || v11 != v12 )
  {
    v2 = v17 + 8 * v12;
    *(_DWORD *)(v14 + 4) = *(_DWORD *)(v17 + 8 * v12 + 4);
    *(_DWORD *)(v14 + 8) = v2;
    *(_DWORD *)(v2 + 4) = v14;
    *(_DWORD *)(*(_DWORD *)(v14 + 4) + 8) = v14;
    if ( *(_DWORD *)(v14 + 4) == *(_DWORD *)(v14 + 8) )
    {
      if ( (unsigned int)v12 >= 0x20 )
      {
        v4 = (*(_BYTE *)(v12 + v7 + 4))++;
        if ( !v4 )
          *(_DWORD *)(a1 + 4) |= 0x80000000u >> (v12 - 32);
        *(_DWORD *)(v7 + 4 * v18 + 196) |= 0x80000000u >> (v12 - 32);
      }
      else
      {
        v3 = (*(_BYTE *)(v12 + v7 + 4))++;
        if ( !v3 )
          *(_DWORD *)a1 |= 0x80000000u >> v12;
        *(_DWORD *)(v7 + 4 * v18 + 68) |= 0x80000000u >> v12;
      }
    }
  }
  *(_DWORD *)v14 = v10;
  *(_DWORD *)(v10 + v14 - 4) = v10;
  result = *(_DWORD *)v17 - 1;
  *(_DWORD *)v17 = result;
  if ( !*(_DWORD *)v17 )
  {
    if ( dword_6D5335C )
    {
      VirtualFree((LPVOID)((dword_6D53354 << 15) + *(_DWORD *)(dword_6D5335C + 12)), 0x8000u, 0x4000u);
      *(_DWORD *)(dword_6D5335C + 8) |= 0x80000000u >> dword_6D53354;
      *(_DWORD *)(*(_DWORD *)(dword_6D5335C + 16) + 4 * dword_6D53354 + 196) = 0;
      --*(_BYTE *)(*(_DWORD *)(dword_6D5335C + 16) + 67);
      if ( !*(_BYTE *)(*(_DWORD *)(dword_6D5335C + 16) + 67) )
      {
        v6 = *(_DWORD *)(dword_6D5335C + 4);
        LOBYTE(v6) = v6 & 0xFE;
        *(_DWORD *)(dword_6D5335C + 4) = v6;
      }
      if ( *(_DWORD *)(dword_6D5335C + 8) == -1 )
      {
        VirtualFree(*(LPVOID *)(dword_6D5335C + 12), 0, 0x8000u);
        HeapFree(hHeap, 0, *(LPVOID *)(dword_6D5335C + 16));
        sub_4465E0(
          (void *)dword_6D5335C,
          (const void *)(dword_6D5335C + 20),
          (unsigned int)((char *)lpMem + 20 * dword_6D53360-- - dword_6D5335C - 20));
        if ( a1 > dword_6D5335C )
          a1 -= 20;
        dword_6D53358 = (int)lpMem;
      }
    }
    dword_6D5335C = a1;
    result = v18;
    dword_6D53354 = v18;
  }
  return result;
}
// 6D53354: using guessed type int dword_6D53354;
// 6D53358: using guessed type int dword_6D53358;
// 6D5335C: using guessed type int dword_6D5335C;
// 6D53360: using guessed type int dword_6D53360;

//----- (004401A0) --------------------------------------------------------
int __cdecl sub_4401A0(int a1)
{
  int result; // eax@24
  int v2; // ST34_4@47
  int v3; // ecx@49
  int v4; // ecx@52
  int v5; // ecx@57
  int v6; // [sp+4h] [bp-38h]@27
  unsigned int v7; // [sp+8h] [bp-34h]@2
  int j; // [sp+Ch] [bp-30h]@27
  char *v9; // [sp+10h] [bp-2Ch]@1
  int v10; // [sp+14h] [bp-28h]@1
  unsigned int v11; // [sp+18h] [bp-24h]@2
  int v12; // [sp+1Ch] [bp-20h]@1
  signed int v13; // [sp+1Ch] [bp-20h]@32
  int v14; // [sp+20h] [bp-1Ch]@32
  int i; // [sp+24h] [bp-18h]@4
  int v16; // [sp+28h] [bp-14h]@36
  int v17; // [sp+2Ch] [bp-10h]@36
  int v18; // [sp+2Ch] [bp-10h]@57
  signed int v19; // [sp+34h] [bp-8h]@36
  int v20; // [sp+38h] [bp-4h]@32

  v9 = (char *)lpMem + 20 * dword_6D53360;
  v10 = (a1 + 23) & 0xFFFFFFF0;
  v12 = (((a1 + 23) & 0xFFFFFFF0) >> 4) - 1;
  if ( v12 >= 32 )
  {
    v11 = 0;
    v7 = 0xFFFFFFFFu >> ((((a1 + 23) & 0xFFFFFFF0) >> 4) - 33);
  }
  else
  {
    v11 = 0xFFFFFFFFu >> v12;
    v7 = -1;
  }
  for ( i = dword_6D53358; i < (unsigned int)v9 && !(*(_DWORD *)(i + 4) & v7 | *(_DWORD *)i & v11); i += 20 )
    ;
  if ( (char *)i != v9 )
    goto LABEL_64;
  for ( i = (int)lpMem; i < (unsigned int)dword_6D53358 && !(*(_DWORD *)(i + 4) & v7 | *(_DWORD *)i & v11); i += 20 )
    ;
  if ( i != dword_6D53358 )
    goto LABEL_64;
  while ( i < (unsigned int)v9 && !*(_DWORD *)(i + 8) )
    i += 20;
  if ( (char *)i == v9 )
  {
    for ( i = (int)lpMem; i < (unsigned int)dword_6D53358 && !*(_DWORD *)(i + 8); i += 20 )
      ;
    if ( i == dword_6D53358 )
    {
      i = (int)sub_4406E0();
      if ( !i )
        return 0;
    }
  }
  **(_DWORD **)(i + 16) = sub_4407F0(i);
  if ( **(_DWORD **)(i + 16) != -1 )
  {
LABEL_64:
    dword_6D53358 = i;
    v6 = *(_DWORD *)(i + 16);
    j = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 == -1 || !(*(_DWORD *)(v6 + 4 * j + 196) & v7 | *(_DWORD *)(v6 + 4 * j + 68) & v11) )
    {
      for ( j = 0; !(*(_DWORD *)(v6 + 4 * j + 196) & v7 | *(_DWORD *)(v6 + 4 * j + 68) & v11); ++j )
        ;
    }
    v20 = v6 + 516 * j + 324;
    v13 = 0;
    v14 = *(_DWORD *)(v6 + 4 * j + 68) & v11;
    if ( !v14 )
    {
      v13 = 32;
      v14 = *(_DWORD *)(v6 + 4 * j + 196) & v7;
    }
    while ( v14 >= 0 )
    {
      v14 *= 2;
      ++v13;
    }
    v17 = *(_DWORD *)(v20 + 8 * v13 + 4);
    v19 = *(_DWORD *)v17 - v10;
    v16 = (v19 >> 4) - 1;
    if ( v16 > 63 )
      v16 = 63;
    if ( v16 != v13 )
    {
      if ( *(_DWORD *)(v17 + 4) == *(_DWORD *)(v17 + 8) )
      {
        if ( v13 >= 32 )
        {
          *(_DWORD *)(v6 + 4 * j + 196) &= ~(0x80000000u >> (v13 - 32));
          --*(_BYTE *)(v13 + v6 + 4);
          if ( !*(_BYTE *)(v13 + v6 + 4) )
            *(_DWORD *)(i + 4) &= ~(0x80000000u >> (v13 - 32));
        }
        else
        {
          *(_DWORD *)(v6 + 4 * j + 68) &= ~(0x80000000u >> v13);
          --*(_BYTE *)(v13 + v6 + 4);
          if ( !*(_BYTE *)(v13 + v6 + 4) )
            *(_DWORD *)i &= ~(0x80000000u >> v13);
        }
      }
      *(_DWORD *)(*(_DWORD *)(v17 + 8) + 4) = *(_DWORD *)(v17 + 4);
      *(_DWORD *)(*(_DWORD *)(v17 + 4) + 8) = *(_DWORD *)(v17 + 8);
      if ( v19 )
      {
        v2 = v20 + 8 * v16;
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(v20 + 8 * v16 + 4);
        *(_DWORD *)(v17 + 8) = v2;
        *(_DWORD *)(v2 + 4) = v17;
        *(_DWORD *)(*(_DWORD *)(v17 + 4) + 8) = v17;
        if ( *(_DWORD *)(v17 + 4) == *(_DWORD *)(v17 + 8) )
        {
          if ( v16 >= 32 )
          {
            v4 = (*(_BYTE *)(v16 + v6 + 4))++;
            if ( !v4 )
              *(_DWORD *)(i + 4) |= 0x80000000u >> (v16 - 32);
            *(_DWORD *)(v6 + 4 * j + 196) |= 0x80000000u >> (v16 - 32);
          }
          else
          {
            v3 = (*(_BYTE *)(v16 + v6 + 4))++;
            if ( !v3 )
              *(_DWORD *)i |= 0x80000000u >> v16;
            *(_DWORD *)(v6 + 4 * j + 68) |= 0x80000000u >> v16;
          }
        }
      }
    }
    if ( v19 )
    {
      *(_DWORD *)v17 = v19;
      *(_DWORD *)(v19 + v17 - 4) = v19;
    }
    v18 = v19 + v17;
    *(_DWORD *)v18 = v10 + 1;
    *(_DWORD *)(v10 + v18 - 4) = v10 + 1;
    v5 = (*(_DWORD *)v20)++;
    if ( !v5 && i == dword_6D5335C )
    {
      if ( j == dword_6D53354 )
        dword_6D5335C = 0;
    }
    *(_DWORD *)v6 = j;
    result = v18 + 4;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D53354: using guessed type int dword_6D53354;
// 6D53358: using guessed type int dword_6D53358;
// 6D5335C: using guessed type int dword_6D5335C;
// 6D53360: using guessed type int dword_6D53360;

//----- (004406E0) --------------------------------------------------------
char *__cdecl sub_4406E0()
{
  char *result; // eax@3
  void *v1; // [sp+0h] [bp-4h]@2
  char *v2; // [sp+0h] [bp-4h]@5

  if ( dword_6D53360 == dword_6D53344 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_6D53344 + 16));
    if ( !v1 )
      return 0;
    lpMem = v1;
    dword_6D53344 += 16;
  }
  v2 = (char *)lpMem + 20 * dword_6D53360;
  *((_DWORD *)v2 + 4) = HeapAlloc(hHeap, 8u, 0x41C4u);
  if ( *((_DWORD *)v2 + 4) )
  {
    *((_DWORD *)v2 + 3) = VirtualAlloc(0, 0x100000u, 0x2000u, 4u);
    if ( *((_DWORD *)v2 + 3) )
    {
      *(_DWORD *)v2 = 0;
      *((_DWORD *)v2 + 1) = 0;
      *((_DWORD *)v2 + 2) = -1;
      ++dword_6D53360;
      **((_DWORD **)v2 + 4) = -1;
      result = v2;
    }
    else
    {
      HeapFree(hHeap, 0, *((LPVOID *)v2 + 4));
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D53344: using guessed type int dword_6D53344;
// 6D53360: using guessed type int dword_6D53360;

//----- (004407F0) --------------------------------------------------------
signed int __cdecl sub_4407F0(int a1)
{
  signed int result; // eax@8
  int v2; // edx@12
  int v3; // [sp+0h] [bp-2Ch]@1
  signed int v4; // [sp+4h] [bp-28h]@1
  signed int i; // [sp+Ch] [bp-20h]@4
  int lpAddress; // [sp+1Ch] [bp-10h]@7
  int v7; // [sp+20h] [bp-Ch]@4
  int v8; // [sp+24h] [bp-8h]@1
  unsigned int j; // [sp+28h] [bp-4h]@9

  v3 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 8);
  v4 = 0;
  while ( v8 >= 0 )
  {
    v8 *= 2;
    ++v4;
  }
  v7 = v3 + 516 * v4 + 324;
  for ( i = 0; i < 63; ++i )
  {
    *(_DWORD *)(v7 + 8 * i + 8) = v7 + 8 * i;
    *(_DWORD *)(v7 + 8 * i + 4) = v7 + 8 * i;
  }
  lpAddress = (v4 << 15) + *(_DWORD *)(a1 + 12);
  if ( VirtualAlloc((LPVOID)((v4 << 15) + *(_DWORD *)(a1 + 12)), 0x8000u, 0x1000u, 4u) )
  {
    for ( j = lpAddress; j <= lpAddress + 28672; j += 4096 )
    {
      *(_DWORD *)(j + 8) = -1;
      *(_DWORD *)(j + 4092) = -1;
      *(_DWORD *)(j + 12) = 4080;
      *(_DWORD *)(j + 16) = j + 4108;
      *(_DWORD *)(j + 20) = j - 4084;
      *(_DWORD *)(j + 4088) = 4080;
    }
    *(_DWORD *)(v3 + 516 * v4 + 832) = lpAddress + 12;
    *(_DWORD *)(*(_DWORD *)(v3 + 516 * v4 + 832) + 8) = v3 + 516 * v4 + 828;
    *(_DWORD *)(v3 + 516 * v4 + 836) = lpAddress + 28684;
    *(_DWORD *)(*(_DWORD *)(v3 + 516 * v4 + 836) + 4) = v3 + 516 * v4 + 828;
    *(_DWORD *)(v3 + 4 * v4 + 68) = 0;
    *(_DWORD *)(v3 + 4 * v4 + 196) = 1;
    v2 = (*(_BYTE *)(v3 + 67))++;
    if ( !v2 )
      *(_DWORD *)(a1 + 4) |= 1u;
    *(_DWORD *)(a1 + 8) &= ~(0x80000000u >> v4);
    result = v4;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (004409E0) --------------------------------------------------------
signed int __cdecl sub_4409E0(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v5; // ST18_4@17
  int v6; // edx@19
  int v7; // edx@22
  int v8; // ST18_4@42
  int v9; // ecx@44
  int v10; // ecx@47
  int v11; // [sp+0h] [bp-30h]@1
  int v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+4h] [bp-2Ch]@15
  int v14; // [sp+8h] [bp-28h]@1
  signed int v15; // [sp+8h] [bp-28h]@28
  int v16; // [sp+Ch] [bp-24h]@28
  int v17; // [sp+10h] [bp-20h]@5
  int v18; // [sp+10h] [bp-20h]@15
  int v19; // [sp+10h] [bp-20h]@31
  int v20; // [sp+1Ch] [bp-14h]@1
  int v21; // [sp+1Ch] [bp-14h]@28
  signed int v22; // [sp+20h] [bp-10h]@1
  signed int v23; // [sp+20h] [bp-10h]@14
  int v24; // [sp+28h] [bp-8h]@1
  unsigned int v25; // [sp+2Ch] [bp-4h]@1

  v3 = a3 + 23;
  LOBYTE(v3) = (a3 + 23) & 0xF0;
  v11 = *(_DWORD *)(a1 + 16);
  v25 = (unsigned int)(a2 - *(_DWORD *)(a1 + 12)) >> 15;
  v24 = v11 + 516 * v25 + 324;
  v20 = a2 - 4;
  v14 = *(_DWORD *)(a2 - 4) - 1;
  v12 = v14 + a2 - 4;
  v22 = *(_DWORD *)(v14 + a2 - 4);
  if ( v3 <= v14 )
  {
    if ( v3 < v14 )
    {
      *(_DWORD *)v20 = v3 + 1;
      *(_DWORD *)(v3 + v20 - 4) = v3 + 1;
      v21 = v3 + v20;
      v15 = v14 - v3;
      v16 = (v15 >> 4) - 1;
      if ( (unsigned int)v16 > 0x3F )
        v16 = 63;
      if ( !(v22 & 1) )
      {
        v19 = (v22 >> 4) - 1;
        if ( (unsigned int)v19 > 0x3F )
          v19 = 63;
        if ( *(_DWORD *)(v12 + 4) == *(_DWORD *)(v12 + 8) )
        {
          if ( (unsigned int)v19 >= 0x20 )
          {
            *(_DWORD *)(v11 + 4 * v25 + 196) &= ~(0x80000000u >> (v19 - 32));
            --*(_BYTE *)(v19 + v11 + 4);
            if ( !*(_BYTE *)(v19 + v11 + 4) )
              *(_DWORD *)(a1 + 4) &= ~(0x80000000u >> (v19 - 32));
          }
          else
          {
            *(_DWORD *)(v11 + 4 * v25 + 68) &= ~(0x80000000u >> v19);
            --*(_BYTE *)(v19 + v11 + 4);
            if ( !*(_BYTE *)(v19 + v11 + 4) )
              *(_DWORD *)a1 &= ~(0x80000000u >> v19);
          }
        }
        *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4) = *(_DWORD *)(v12 + 4);
        *(_DWORD *)(*(_DWORD *)(v12 + 4) + 8) = *(_DWORD *)(v12 + 8);
        v15 += v22;
        v16 = (v15 >> 4) - 1;
        if ( (unsigned int)v16 > 0x3F )
          v16 = 63;
      }
      v8 = v24 + 8 * v16;
      *(_DWORD *)(v21 + 4) = *(_DWORD *)(v24 + 8 * v16 + 4);
      *(_DWORD *)(v21 + 8) = v8;
      *(_DWORD *)(v8 + 4) = v21;
      *(_DWORD *)(*(_DWORD *)(v21 + 4) + 8) = v21;
      if ( *(_DWORD *)(v21 + 4) == *(_DWORD *)(v21 + 8) )
      {
        if ( (unsigned int)v16 >= 0x20 )
        {
          v10 = (*(_BYTE *)(v16 + v11 + 4))++;
          if ( !v10 )
            *(_DWORD *)(a1 + 4) |= 0x80000000u >> (v16 - 32);
          *(_DWORD *)(v11 + 4 * v25 + 196) |= 0x80000000u >> (v16 - 32);
        }
        else
        {
          v9 = (*(_BYTE *)(v16 + v11 + 4))++;
          if ( !v9 )
            *(_DWORD *)a1 |= 0x80000000u >> v16;
          *(_DWORD *)(v11 + 4 * v25 + 68) |= 0x80000000u >> v16;
        }
      }
      *(_DWORD *)v21 = v15;
      *(_DWORD *)(v15 + v21 - 4) = v15;
    }
  }
  else
  {
    if ( v22 & 1 || v3 > v22 + v14 )
      return 0;
    v17 = (v22 >> 4) - 1;
    if ( (unsigned int)v17 > 0x3F )
      v17 = 63;
    if ( *(_DWORD *)(v12 + 4) == *(_DWORD *)(v12 + 8) )
    {
      if ( (unsigned int)v17 >= 0x20 )
      {
        *(_DWORD *)(v11 + 4 * v25 + 196) &= ~(0x80000000u >> (v17 - 32));
        --*(_BYTE *)(v17 + v11 + 4);
        if ( !*(_BYTE *)(v17 + v11 + 4) )
          *(_DWORD *)(a1 + 4) &= ~(0x80000000u >> (v17 - 32));
      }
      else
      {
        *(_DWORD *)(v11 + 4 * v25 + 68) &= ~(0x80000000u >> v17);
        --*(_BYTE *)(v17 + v11 + 4);
        if ( !*(_BYTE *)(v17 + v11 + 4) )
          *(_DWORD *)a1 &= ~(0x80000000u >> v17);
      }
    }
    *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4) = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(*(_DWORD *)(v12 + 4) + 8) = *(_DWORD *)(v12 + 8);
    v23 = v22 + v14 - v3;
    if ( v23 > 0 )
    {
      v13 = v3 + v20;
      v18 = (v23 >> 4) - 1;
      if ( (unsigned int)v18 > 0x3F )
        v18 = 63;
      v5 = v24 + 8 * v18;
      *(_DWORD *)(v13 + 4) = *(_DWORD *)(v24 + 8 * v18 + 4);
      *(_DWORD *)(v13 + 8) = v5;
      *(_DWORD *)(v5 + 4) = v13;
      *(_DWORD *)(*(_DWORD *)(v13 + 4) + 8) = v13;
      if ( *(_DWORD *)(v13 + 4) == *(_DWORD *)(v13 + 8) )
      {
        if ( (unsigned int)v18 >= 0x20 )
        {
          v7 = (*(_BYTE *)(v18 + v11 + 4))++;
          if ( !v7 )
            *(_DWORD *)(a1 + 4) |= 0x80000000u >> (v18 - 32);
          *(_DWORD *)(v11 + 4 * v25 + 196) |= 0x80000000u >> (v18 - 32);
        }
        else
        {
          v6 = (*(_BYTE *)(v18 + v11 + 4))++;
          if ( !v6 )
            *(_DWORD *)a1 |= 0x80000000u >> v18;
          *(_DWORD *)(v11 + 4 * v25 + 68) |= 0x80000000u >> v18;
        }
      }
      *(_DWORD *)v13 = v23;
      *(_DWORD *)(v23 + v13 - 4) = v23;
    }
    *(_DWORD *)v20 = v3 + 1;
    *(_DWORD *)(v3 + v20 - 4) = v3 + 1;
  }
  return 1;
}

//----- (00441100) --------------------------------------------------------
signed int __cdecl sub_441100()
{
  signed int result; // eax@2
  int v1; // [sp+0h] [bp-168h]@41
  int lp; // [sp+8h] [bp-160h]@5
  unsigned int v3; // [sp+Ch] [bp-15Ch]@42
  int v4; // [sp+10h] [bp-158h]@7
  signed int v5; // [sp+14h] [bp-154h]@20
  int v6; // [sp+18h] [bp-150h]@9
  signed int k; // [sp+1Ch] [bp-14Ch]@9
  int v8; // [sp+1Ch] [bp-14Ch]@24
  int v9; // [sp+1Ch] [bp-14Ch]@53
  signed int v10; // [sp+20h] [bp-148h]@20
  int v11; // [sp+24h] [bp-144h]@7
  signed int l; // [sp+28h] [bp-140h]@15
  LPVOID v13; // [sp+2Ch] [bp-13Ch]@3
  int v14; // [sp+30h] [bp-138h]@17
  int v15; // [sp+34h] [bp-134h]@39
  int v16; // [sp+38h] [bp-130h]@17
  unsigned int v17; // [sp+38h] [bp-130h]@41
  int v18; // [sp+3Ch] [bp-12Ch]@9
  void *v19; // [sp+40h] [bp-128h]@7
  int v20; // [sp+44h] [bp-124h]@47
  int i; // [sp+48h] [bp-120h]@3
  int v22; // [sp+4Ch] [bp-11Ch]@9
  int v23[64]; // [sp+50h] [bp-118h]@11
  int v24; // [sp+150h] [bp-18h]@7
  int m; // [sp+154h] [bp-14h]@39
  unsigned int v26; // [sp+158h] [bp-10h]@47
  int j; // [sp+15Ch] [bp-Ch]@7
  void *v28; // [sp+160h] [bp-8h]@15
  int v29; // [sp+164h] [bp-4h]@7

  if ( IsBadWritePtr(lpMem, 20 * dword_6D53360) )
  {
    result = -1;
  }
  else
  {
    v13 = lpMem;
    for ( i = 0; i < dword_6D53360; ++i )
    {
      lp = *((_DWORD *)v13 + 4);
      if ( IsBadWritePtr(*((LPVOID *)v13 + 4), 0x41C4u) )
        return -2;
      v19 = (void *)*((_DWORD *)v13 + 3);
      v24 = lp + 324;
      v29 = *((_DWORD *)v13 + 2);
      v11 = 0;
      v4 = 0;
      for ( j = 0; j < 32; ++j )
      {
        v22 = 0;
        v6 = 0;
        v18 = 0;
        for ( k = 0; k < 64; ++k )
          v23[k] = 0;
        if ( v29 >= 0 )
        {
          if ( IsBadWritePtr(v19, 0x8000u) )
            return -4;
          v28 = v19;
          for ( l = 0; l < 8; ++l )
          {
            v16 = (int)((char *)v28 + 12);
            v14 = (int)((char *)v28 + 4092);
            if ( *((_DWORD *)v28 + 2) != -1 || *(_DWORD *)v14 != -1 )
              return -5;
            do
            {
              v10 = *(_DWORD *)v16;
              v5 = *(_DWORD *)v16;
              if ( *(_DWORD *)v16 & 1 )
              {
                --v10;
                if ( v10 > 1024 )
                  return -6;
                ++v18;
              }
              else
              {
                v8 = (v10 >> 4) - 1;
                if ( v8 > 63 )
                  v8 = 63;
                ++v23[v8];
              }
              if ( v10 < 16 || v10 & 0xF || v10 > 4080 )
                return -7;
              if ( *(_DWORD *)(v10 + v16 - 4) != v5 )
                return -8;
              v16 += v10;
            }
            while ( v16 < (unsigned int)v14 );
            if ( v16 != v14 )
              return -8;
            v28 = (char *)v28 + 4096;
          }
          if ( *(_DWORD *)v24 != v18 )
            return -9;
          v15 = v24;
          for ( m = 0; m < 64; ++m )
          {
            v1 = 0;
            v17 = v15;
            while ( 1 )
            {
              v3 = *(_DWORD *)(v17 + 4);
              if ( v3 == v15 )
                break;
              if ( v1 == v23[m] )
                break;
              if ( v3 < (unsigned int)v19 || v3 >= (unsigned int)((char *)v19 + 32768) )
                return -10;
              v26 = (v3 & 0xFFFFF000) + 12;
              v20 = (v3 & 0xFFFFF000) + 4092;
              while ( v26 != v20 && v26 != v3 )
                v26 += *(_DWORD *)v26 & 0xFFFFFFFE;
              if ( v26 == v20 )
                return -11;
              v9 = (*(_DWORD *)v3 >> 4) - 1;
              if ( v9 > 63 )
                v9 = 63;
              if ( v9 != m )
                return -12;
              if ( *(_DWORD *)(v3 + 8) != v17 )
                return -13;
              v17 = v3;
              ++v1;
            }
            if ( v1 )
            {
              if ( m >= 32 )
              {
                v6 |= 0x80000000u >> (m - 32);
                v4 |= 0x80000000u >> (m - 32);
              }
              else
              {
                v22 |= 0x80000000u >> m;
                v11 |= 0x80000000u >> m;
              }
            }
            if ( *(_DWORD *)(v17 + 4) != v15 || v1 != v23[m] )
              return -14;
            if ( *(_DWORD *)(v15 + 8) != v17 )
              return -15;
            v15 += 8;
          }
        }
        if ( v22 != *(_DWORD *)(lp + 4 * j + 68) || v6 != *(_DWORD *)(lp + 4 * j + 196) )
          return -16;
        v19 = (char *)v19 + 32768;
        v24 += 516;
        v29 *= 2;
      }
      if ( v11 != *(_DWORD *)v13 || v4 != *((_DWORD *)v13 + 1) )
        return -17;
      v13 = (char *)v13 + 20;
    }
    result = 0;
  }
  return result;
}
// 6D53360: using guessed type int dword_6D53360;
// 441100: using guessed type int var_118[64];

//----- (00441720) --------------------------------------------------------
int __usercall sub_441720<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int lp, int a5, int a6, int a7, int a8, int a9, int a10, char a11)
{
  int result; // eax@7
  int (__cdecl *v12)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+4h] [bp-4h]@11

  if ( *(_DWORD *)a8 != 429065504 )
    sub_442480(a8, a1, a2, a3);
  if ( *(_DWORD *)(lp + 4) & 0x66 )
  {
    if ( *(_DWORD *)(a8 + 4) )
    {
      if ( !a9 )
        sub_441C90(a5, a1, a2, a3, a5, a7, a8, -1);
    }
    result = 1;
  }
  else
  {
    if ( *(_DWORD *)(a8 + 12) )
    {
      if ( *(_DWORD *)lp == -529697949 )
      {
        if ( *(_DWORD *)(lp + 20) > 0x19930520u )
        {
          v12 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(lp + 28)
                                                                                                  + 8);
          if ( v12 )
            return v12(lp, a5, a6, a7, a8, a9, a10, (unsigned __int8)a11);
        }
      }
      sub_441810(a1, a2, a3, lp, a5, a6, a7, a8, a11, a9, a10);
    }
    result = 1;
  }
  return result;
}

//----- (00441810) --------------------------------------------------------
int __usercall sub_441810<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int ExceptionRecord, int TargetFrame, int a6, int a7, int a8, char a9, int a10, int a11)
{
  int v11; // eax@1
  int result; // eax@6
  int v13; // [sp+Ch] [bp-24h]@25
  int v14; // [sp+10h] [bp-20h]@27
  unsigned int v15; // [sp+14h] [bp-1Ch]@25
  int *v16; // [sp+18h] [bp-18h]@27
  unsigned int v17; // [sp+1Ch] [bp-14h]@19
  int v18; // [sp+20h] [bp-10h]@19
  unsigned int v19; // [sp+24h] [bp-Ch]@19
  char v20; // [sp+28h] [bp-8h]@1
  int v21; // [sp+2Ch] [bp-4h]@1

  v20 = 0;
  v11 = TargetFrame;
  v21 = *(_DWORD *)(TargetFrame + 8);
  if ( v21 < -1 || (v11 = v21, v21 >= *(_DWORD *)(a8 + 4)) )
    sub_442480(v11, a1, a2, a3);
  if ( *(_DWORD *)ExceptionRecord == -529697949 )
  {
    if ( *(_DWORD *)(ExceptionRecord + 16) == 3 )
    {
      result = ExceptionRecord;
      if ( *(_DWORD *)(ExceptionRecord + 20) == 429065504 )
      {
        if ( !*(_DWORD *)(ExceptionRecord + 28) )
        {
          if ( !dword_6D51E34 )
            return result;
          ExceptionRecord = dword_6D51E34;
          a6 = dword_6D51E38;
          v20 = 1;
          if ( !sub_446AA0((const void *)dword_6D51E34, 1u) )
            sub_442480(0, a1, a2, a3);
          if ( *(_DWORD *)ExceptionRecord == -529697949
            && *(_DWORD *)(ExceptionRecord + 16) == 3
            && *(_DWORD *)(ExceptionRecord + 20) == 429065504
            && !*(_DWORD *)(ExceptionRecord + 28) )
            sub_442480(ExceptionRecord, a1, a2, a3);
        }
      }
    }
  }
  if ( *(_DWORD *)ExceptionRecord != -529697949
    || *(_DWORD *)(ExceptionRecord + 16) != 3
    || *(_DWORD *)(ExceptionRecord + 20) != 429065504 )
  {
    if ( a9 )
      result = sub_4423D0(ExceptionRecord, a1, a2, a3);
    else
      result = sub_441AB0(a1, a2, a3, (PEXCEPTION_RECORD)ExceptionRecord, TargetFrame, a6, a7, a8, v21, a10, a11);
  }
  else
  {
    result = sub_438520(a8, a10, v21, (int)&v17, (int)&v19);
    v18 = result;
    while ( v17 < v19 )
    {
      if ( *(_DWORD *)v18 <= v21 && v21 <= *(_DWORD *)(v18 + 4) )
      {
        v15 = *(_DWORD *)(v18 + 16);
        v13 = *(_DWORD *)(v18 + 12);
        while ( v13 > 0 )
        {
          v16 = (int *)(*(_DWORD *)(*(_DWORD *)(ExceptionRecord + 28) + 12) + 4);
          v14 = **(_DWORD **)(*(_DWORD *)(ExceptionRecord + 28) + 12);
          while ( v14 > 0 )
          {
            if ( sub_441BD0(v15, *v16, *(_DWORD *)(ExceptionRecord + 28)) )
            {
              sub_441DC0(
                a1,
                a2,
                a3,
                (PEXCEPTION_RECORD)ExceptionRecord,
                TargetFrame,
                a6,
                a7,
                a8,
                v15,
                *v16,
                v18,
                a10,
                (void *)a11);
              goto LABEL_20;
            }
            --v14;
            ++v16;
          }
          --v13;
          v15 += 16;
        }
      }
LABEL_20:
      ++v17;
      result = v18 + 20;
      v18 += 20;
    }
    if ( a9 )
      result = sub_4422A0(ExceptionRecord, ExceptionRecord);
  }
  return result;
}
// 6D51E34: using guessed type int dword_6D51E34;
// 6D51E38: using guessed type int dword_6D51E38;

//----- (00441AB0) --------------------------------------------------------
int __usercall sub_441AB0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, PEXCEPTION_RECORD ExceptionRecord, int TargetFrame, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int result; // eax@2
  unsigned int v12; // [sp+0h] [bp-Ch]@3
  int v13; // [sp+4h] [bp-8h]@3
  unsigned int v14; // [sp+8h] [bp-4h]@3

  if ( !dword_6D51E3C || (result = sub_4383C0(a1, (int)ExceptionRecord, TargetFrame, a6, a7, a8, a10, a11)) == 0 )
  {
    result = sub_438520(a8, a10, a9, (int)&v12, (int)&v14);
    v13 = result;
    while ( v12 < v14 )
    {
      if ( a9 >= *(_DWORD *)v13
        && a9 <= *(_DWORD *)(v13 + 4)
        && (!*(_DWORD *)(*(_DWORD *)(v13 + 16) + 16 * (*(_DWORD *)(v13 + 12) - 1) + 4)
         || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v13 + 16) + 16 * (*(_DWORD *)(v13 + 12) - 1) + 4) + 8)) )
        sub_441DC0(
          a1,
          a2,
          a3,
          ExceptionRecord,
          TargetFrame,
          a6,
          a7,
          a8,
          16 * (*(_DWORD *)(v13 + 12) - 1) + *(_DWORD *)(v13 + 16),
          0,
          v13,
          a10,
          (void *)a11);
      result = v12++ + 1;
      v13 += 20;
    }
  }
  return result;
}
// 6D51E3C: using guessed type int (__cdecl *dword_6D51E3C)(_DWORD, _DWORD);

//----- (00441BD0) --------------------------------------------------------
signed int __cdecl sub_441BD0(int a1, int a2, int a3)
{
  signed int result; // eax@3
  bool v4; // [sp+0h] [bp-4h]@13

  if ( *(_DWORD *)(a1 + 4) && *(_BYTE *)(*(_DWORD *)(a1 + 4) + 8) )
  {
    if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)(a2 + 4) && sub_4351F0(*(_DWORD *)(a1 + 4) + 8, *(_DWORD *)(a2 + 4) + 8) )
    {
      result = 0;
    }
    else
    {
      v4 = (!(*(_DWORD *)a2 & 2) || *(_DWORD *)a1 & 8)
        && (!(*(_DWORD *)a3 & 1) || *(_DWORD *)a1 & 1)
        && (!(*(_DWORD *)a3 & 2) || *(_DWORD *)a1 & 2);
      result = v4;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (00441C90) --------------------------------------------------------
unsigned int __usercall sub_441C90<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, int a5, int a6, int a7, int a8)
{
  int v8; // ebp@0
  int v9; // eax@1
  unsigned int result; // eax@10
  int v11; // [sp-Ch] [bp-30h]@1
  int v12; // [sp-8h] [bp-2Ch]@1
  int v13; // [sp-4h] [bp-28h]@1
  unsigned int v14; // [sp+0h] [bp-24h]@11
  unsigned int v15; // [sp+4h] [bp-20h]@5
  int i; // [sp+8h] [bp-1Ch]@1
  int *v17; // [sp+Ch] [bp-18h]@1
  int v18; // [sp+14h] [bp-10h]@1
  signed int (__usercall *v19)<eax>(int<ebp>); // [sp+18h] [bp-Ch]@1
  _UNKNOWN *v20; // [sp+1Ch] [bp-8h]@1
  int v21; // [sp+20h] [bp-4h]@1

  v21 = -1;
  v20 = &unk_478BE0;
  v19 = sub_44272C;
  v18 = a1;
  v13 = a2;
  v12 = a4;
  v11 = a3;
  v17 = &v11;
  v9 = a5;
  for ( i = *(_DWORD *)(a5 + 8); i != a8; i = *(_DWORD *)(v9 + 8 * i) )
  {
    if ( i <= -1 || (v9 = a7, i >= *(_DWORD *)(a7 + 4)) )
      v15 = sub_442480(v9, a2, a3, a4);
    else
      v15 = 0;
    v21 = 0;
    if ( *(_DWORD *)(*(_DWORD *)(a7 + 8) + 8 * i + 4) )
      sub_442380(v8, a3, a4, *(_DWORD *)(*(_DWORD *)(a7 + 8) + 8 * i + 4), a5, 259);
    v21 = -1;
    v9 = *(_DWORD *)(a7 + 8);
  }
  result = i;
  if ( i == a8 )
  {
    v14 = 0;
  }
  else
  {
    result = sub_442480(i, a2, a3, a4);
    v14 = result;
  }
  *(_DWORD *)(a5 + 8) = i;
  return result;
}

//----- (00441D90) --------------------------------------------------------
int __usercall sub_441D90<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  if ( **(_DWORD **)a4 == -529697949 )
    sub_4423D0(-529697949, a1, a2, a3);
  return 0;
}

//----- (00441DC0) --------------------------------------------------------
int __usercall sub_441DC0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, PEXCEPTION_RECORD ExceptionRecord, int TargetFrame, int a6, int a7, int a8, unsigned int a9, int a10, int a11, int a12, void *a13)
{
  int v13; // eax@1
  int result; // eax@6

  v13 = TargetFrame;
  if ( a10 )
    v13 = sub_442020(TargetFrame, a1, a2, a3, (int)ExceptionRecord, TargetFrame, a9, a10);
  if ( a13 )
    sub_438240(v13, a13, ExceptionRecord);
  else
    sub_438240(TargetFrame, (PVOID)TargetFrame, ExceptionRecord);
  sub_441C90(a7, a1, a2, a3, TargetFrame, a7, a8, *(_DWORD *)a11);
  *(_DWORD *)(TargetFrame + 8) = *(_DWORD *)(a11 + 4) + 1;
  result = sub_441E80(a6, a2, a3, (int)ExceptionRecord, TargetFrame, a6, a8, *(_DWORD *)(a9 + 12), a12, 256);
  if ( result )
    result = sub_4381D0((int (*)(void))result, TargetFrame);
  return result;
}

//----- (00441E80) --------------------------------------------------------
int __usercall sub_441E80<eax>(int a1<eax>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ebp@0
  int v11; // eax@1
  int v13; // [sp-Ch] [bp-3Ch]@1
  int v14; // [sp+4h] [bp-2Ch]@1
  int v15; // [sp+8h] [bp-28h]@1
  int v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1
  int v18; // [sp+14h] [bp-1Ch]@1
  int *v19; // [sp+18h] [bp-18h]@1
  int v20; // [sp+20h] [bp-10h]@1
  signed int (__usercall *v21)<eax>(int<ebp>); // [sp+24h] [bp-Ch]@1
  _UNKNOWN *v22; // [sp+28h] [bp-8h]@1
  int v23; // [sp+2Ch] [bp-4h]@1

  v23 = -1;
  v22 = &unk_478BF0;
  v21 = sub_44272C;
  v20 = a1;
  v19 = &v13;
  v14 = a8;
  v16 = 0;
  v15 = *(_DWORD *)(a5 - 4);
  v18 = dword_6D51E34;
  v17 = dword_6D51E38;
  dword_6D51E34 = a4;
  dword_6D51E38 = a6;
  v23 = 1;
  sub_438310(a2, a3, a5, a7, a8, a9, a10);
  v14 = v11;
  v23 = -1;
  sub_441F53(v10);
  return v14;
}
// 6D51E34: using guessed type int dword_6D51E34;
// 6D51E38: using guessed type int dword_6D51E38;

//----- (00441F53) --------------------------------------------------------
int __usercall sub_441F53<eax>(int a1<ebp>)
{
  int result; // eax@1
  int v2; // ecx@2

  *(_DWORD *)(*(_DWORD *)(a1 + 12) - 4) = *(_DWORD *)(a1 - 40);
  dword_6D51E34 = *(_DWORD *)(a1 - 28);
  dword_6D51E38 = *(_DWORD *)(a1 - 32);
  result = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)result == -529697949 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(v2 + 16) == 3 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) == 429065504 && !*(_DWORD *)(a1 - 36) )
      {
        if ( *(_DWORD *)(a1 - 44) )
        {
          sub_43865A(v2);
          result = sub_4422A0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 8));
        }
      }
    }
  }
  return result;
}
// 6D51E34: using guessed type int dword_6D51E34;
// 6D51E38: using guessed type int dword_6D51E38;

//----- (00441FD0) --------------------------------------------------------
bool __cdecl sub_441FD0(int a1)
{
  _DWORD *v2; // [sp+0h] [bp-4h]@1

  v2 = *(_DWORD **)a1;
  return **(_DWORD **)a1 == -529697949 && v2[4] == 3 && v2[5] == 429065504 && !v2[7];
}

//----- (00442020) --------------------------------------------------------
unsigned int __usercall sub_442020<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, int a5, int a6, unsigned int a7, int a8)
{
  unsigned int result; // eax@1
  int v9; // edx@2
  int v10; // eax@6
  int v11; // eax@12
  int v12; // eax@21
  unsigned int v13; // ST0C_4@23
  int v14; // eax@23
  int v15; // eax@26
  int v16; // [sp-Ch] [bp-28h]@1
  int v17; // [sp-8h] [bp-24h]@1
  int v18; // [sp-4h] [bp-20h]@1
  LPVOID lp; // [sp+0h] [bp-1Ch]@5
  int *v20; // [sp+4h] [bp-18h]@1
  int v21; // [sp+Ch] [bp-10h]@1
  signed int (__usercall *v22)<eax>(int<ebp>); // [sp+10h] [bp-Ch]@1
  _UNKNOWN *v23; // [sp+14h] [bp-8h]@1
  int v24; // [sp+18h] [bp-4h]@1

  v24 = -1;
  v23 = &unk_478C08;
  v22 = sub_44272C;
  v21 = a1;
  v18 = a2;
  v17 = a4;
  v16 = a3;
  v20 = &v16;
  result = a7;
  if ( *(_DWORD *)(a7 + 4) )
  {
    v9 = *(_DWORD *)(a7 + 4);
    result = *(_BYTE *)(v9 + 8);
    if ( *(_BYTE *)(v9 + 8) )
    {
      if ( *(_DWORD *)(a7 + 8) )
      {
        lp = (LPVOID)(a6 + *(_DWORD *)(a7 + 8) + 12);
        v24 = 0;
        if ( *(_DWORD *)a7 & 8 )
        {
          v10 = sub_446AA0(*(const void **)(a5 + 24), 1u);
          if ( v10 && (v10 = sub_446AD0(lp, 1u)) != 0 )
          {
            *(_DWORD *)lp = *(_DWORD *)(a5 + 24);
            result = sub_442330(*(_DWORD *)lp, a8 + 8);
            *(_DWORD *)lp = result;
          }
          else
          {
            result = sub_442480(v10, a2, a3, a4);
          }
        }
        else
        {
          if ( *(_DWORD *)a8 & 1 )
          {
            v11 = sub_446AA0(*(const void **)(a5 + 24), 1u);
            if ( v11 && (v11 = sub_446AD0(lp, 1u)) != 0 )
            {
              result = (unsigned int)sub_4465E0(lp, *(const void **)(a5 + 24), *(_DWORD *)(a8 + 20));
              if ( *(_DWORD *)(a8 + 20) == 4 && *(_DWORD *)lp )
              {
                result = sub_442330(*(_DWORD *)lp, a8 + 8);
                *(_DWORD *)lp = result;
              }
            }
            else
            {
              result = sub_442480(v11, a2, a3, a4);
            }
          }
          else
          {
            if ( *(_DWORD *)(a8 + 24) )
            {
              v15 = sub_446AA0(*(const void **)(a5 + 24), 1u);
              if ( v15 && (v15 = sub_446AD0(lp, 1u)) != 0 && (v15 = sub_446B00(*(FARPROC *)(a8 + 24))) != 0 )
              {
                if ( *(_DWORD *)a8 & 4 )
                {
                  sub_442330(*(_DWORD *)(a5 + 24), a8 + 8);
                  result = sub_438230(lp, *(_DWORD *)(a8 + 24));
                }
                else
                {
                  sub_442330(*(_DWORD *)(a5 + 24), a8 + 8);
                  result = sub_438220(lp, *(_DWORD *)(a8 + 24));
                }
              }
              else
              {
                result = sub_442480(v15, a2, a3, a4);
              }
            }
            else
            {
              v12 = sub_446AA0(*(const void **)(a5 + 24), 1u);
              if ( v12 && (v12 = sub_446AD0(lp, 1u)) != 0 )
              {
                v13 = *(_DWORD *)(a8 + 20);
                v14 = sub_442330(*(_DWORD *)(a5 + 24), a8 + 8);
                result = (unsigned int)sub_4465E0(lp, (const void *)v14, v13);
              }
              else
              {
                result = sub_442480(v12, a2, a3, a4);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
// 438220: using guessed type _DWORD __cdecl sub_438220(_DWORD, _DWORD);
// 438230: using guessed type _DWORD __cdecl sub_438230(_DWORD, _DWORD);

//----- (004422A0) --------------------------------------------------------
int __usercall sub_4422A0<eax>(int result<eax>, int a2)
{
  int v2; // [sp-Ch] [bp-24h]@1
  int *v3; // [sp+0h] [bp-18h]@1
  int v4; // [sp+8h] [bp-10h]@1
  signed int (__usercall *v5)<eax>(int<ebp>); // [sp+Ch] [bp-Ch]@1
  _UNKNOWN *v6; // [sp+10h] [bp-8h]@1
  int v7; // [sp+14h] [bp-4h]@1

  v7 = -1;
  v6 = &unk_478C18;
  v5 = sub_44272C;
  v4 = result;
  v3 = &v2;
  if ( a2 )
  {
    result = a2;
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) )
    {
      v7 = 0;
      result = sub_438210(*(_DWORD *)(a2 + 24), *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4));
    }
  }
  return result;
}
// 438210: using guessed type _DWORD __cdecl sub_438210(_DWORD, _DWORD);

//----- (00442330) --------------------------------------------------------
int __cdecl sub_442330(int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@1

  v3 = *(_DWORD *)a2 + a1;
  if ( *(_DWORD *)(a2 + 4) >= 0 )
    v3 += *(_DWORD *)(a2 + 4) + *(_DWORD *)(*(_DWORD *)(a1 + *(_DWORD *)(a2 + 4)) + *(_DWORD *)(a2 + 8));
  return v3;
}

//----- (00442380) --------------------------------------------------------
void __userpurge sub_442380(int a1<ebp>, int a2<edi>, int a3<esi>, int a4, int a5, int a6)
{
  void (__stdcall *v6)(_DWORD, _DWORD); // eax@1

  *(_DWORD *)(a1 - 4) = *(_DWORD *)(a1 + 12) + 12;
  sub_43867D();
  v6(a2, a3);
  sub_43867D();
}

//----- (004423D0) --------------------------------------------------------
unsigned int __usercall sub_4423D0<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>)
{
  int v5; // [sp-Ch] [bp-24h]@1
  int v6; // [sp-8h] [bp-20h]@1
  int v7; // [sp-4h] [bp-1Ch]@1
  int *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+8h] [bp-10h]@1
  signed int (__usercall *v10)<eax>(int<ebp>); // [sp+Ch] [bp-Ch]@1
  _UNKNOWN *v11; // [sp+10h] [bp-8h]@1
  int v12; // [sp+14h] [bp-4h]@1

  v11 = &unk_478C28;
  v10 = sub_44272C;
  v9 = a1;
  v7 = a2;
  v6 = a4;
  v5 = a3;
  v8 = &v5;
  v12 = 0;
  if ( dword_6D51E40 )
  {
    v12 = 1;
    dword_6D51E40();
    v12 = 0;
  }
  v12 = -1;
  return sub_44243A(a2, a3, a4);
}
// 6D51E40: using guessed type int (*dword_6D51E40)(void);

//----- (0044243A) --------------------------------------------------------
unsigned int __usercall sub_44243A<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  return sub_446B30(a1, a2, a3);
}

//----- (00442480) --------------------------------------------------------
unsigned int __usercall sub_442480<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>)
{
  int v5; // [sp-Ch] [bp-24h]@1
  int v6; // [sp-8h] [bp-20h]@1
  int v7; // [sp-4h] [bp-1Ch]@1
  int *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+8h] [bp-10h]@1
  signed int (__usercall *v10)<eax>(int<ebp>); // [sp+Ch] [bp-Ch]@1
  _UNKNOWN *v11; // [sp+10h] [bp-8h]@1
  int v12; // [sp+14h] [bp-4h]@1

  v11 = &unk_478C40;
  v10 = sub_44272C;
  v9 = a1;
  v7 = a2;
  v6 = a4;
  v5 = a3;
  v8 = &v5;
  v12 = 0;
  if ( off_482F04 )
  {
    v12 = 1;
    a1 = off_482F04();
    v12 = 0;
  }
  v12 = -1;
  return sub_4424EA(a1, a2, a3, a4);
}
// 482F04: using guessed type int (*off_482F04)(void);

//----- (004424EA) --------------------------------------------------------
unsigned int __usercall sub_4424EA<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>)
{
  return sub_4423D0(a1, a2, a3, a4);
}

//----- (00442510) --------------------------------------------------------
signed int __usercall sub_442510<eax>(int a1<ebx>, int a2<esi>, int a3)
{
  signed int result; // eax@5
  char v4; // [sp+0h] [bp-14h]@0
  signed int v5; // [sp+Ch] [bp-8h]@7

  if ( !a3 && sub_43A570(a1, a2, 2, (int)"_sftbuf.c", 65, 0, "str != NULL", v4) == 1 )
    __debugbreak();
  if ( !sub_443890(*(_DWORD *)(a3 + 16)) )
    return 0;
  if ( (_UNKNOWN *)a3 == &unk_482F28 )
  {
    v5 = 0;
  }
  else
  {
    if ( (_UNKNOWN *)a3 != &unk_482F48 )
      return 0;
    v5 = 1;
  }
  ++dword_6D51E4C;
  if ( *(_DWORD *)(a3 + 12) & 0x10C )
  {
    result = 0;
  }
  else
  {
    if ( dword_6D51E44[v5] || (dword_6D51E44[v5] = sub_436360(a1, a2, 0x1000u, 2, (int)"_sftbuf.c", 94)) != 0 )
    {
      *(_DWORD *)(a3 + 8) = dword_6D51E44[v5];
      *(_DWORD *)a3 = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 24) = 4096;
      *(_DWORD *)(a3 + 4) = 4096;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = a3 + 20;
      *(_DWORD *)a3 = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 24) = 2;
      *(_DWORD *)(a3 + 4) = 2;
    }
    *(_DWORD *)(a3 + 12) |= 0x1102u;
    result = 1;
  }
  return result;
}
// 6D51E44: using guessed type int dword_6D51E44[];
// 6D51E4C: using guessed type int dword_6D51E4C;

//----- (00442670) --------------------------------------------------------
int __usercall sub_442670<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  int result; // eax@6
  int v5; // eax@7
  char v6; // [sp+0h] [bp-10h]@0

  if ( a3 && a3 != 1 && sub_43A570(a1, a2, 2, (int)"_sftbuf.c", 161, 0, "flag == 0 || flag == 1", v6) == 1 )
    __debugbreak();
  if ( a3 )
  {
    result = *(_DWORD *)(a4 + 12) & 0x1000;
    if ( result )
    {
      sub_438BF0(a4);
      v5 = *(_DWORD *)(a4 + 12);
      BYTE1(v5) &= 0xEEu;
      *(_DWORD *)(a4 + 12) = v5;
      *(_DWORD *)(a4 + 24) = 0;
      result = a4;
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 8) = 0;
    }
  }
  else
  {
    result = *(_DWORD *)(a4 + 12) & 0x1000;
    if ( result )
      result = sub_438BF0(a4);
  }
  return result;
}

//----- (0044272C) --------------------------------------------------------
signed int __usercall sub_44272C<eax>(int a1<ebp>)
{
  int v1; // ebx@1
  int v2; // eax@1
  int v3; // esi@2
  int v4; // edi@2
  int v5; // eax@5
  int v6; // edi@7
  int v7; // ecx@7
  signed int result; // eax@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 4) & 6 )
  {
    sub_4385F2(v1 + 16, v1, -1);
    result = 1;
  }
  else
  {
    *(_DWORD *)(a1 - 8) = v2;
    *(_DWORD *)(a1 - 4) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(v1 - 4) = a1 - 8;
    v3 = *(_DWORD *)(v1 + 12);
    v4 = *(_DWORD *)(v1 + 8);
    while ( v3 != -1 )
    {
      if ( *(_DWORD *)(v4 + 12 * v3 + 4) )
      {
        v5 = (*(int (**)(void))(v4 + 12 * v3 + 4))();
        v1 = *(_DWORD *)(a1 + 12);
        if ( v5 )
        {
          if ( v5 < 0 )
            return 0;
          v6 = *(_DWORD *)(v1 + 8);
          sub_4385B0(*(PVOID *)(a1 + 12));
          a1 = v1 + 16;
          sub_4385F2(v1 + 16, v1, v3);
          sub_438686(*(_DWORD *)(v6 + 12 * v3 + 8), v1 + 16, 1);
          *(_DWORD *)(v1 + 12) = *(_DWORD *)(v6 + 4 * v7);
          (*(void (**)(void))(v6 + 4 * v7 + 8))();
        }
      }
      v4 = *(_DWORD *)(v1 + 8);
      v3 = *(_DWORD *)(v4 + 12 * v3);
    }
    result = 1;
  }
  return result;
}

//----- (00442810) --------------------------------------------------------
signed int __cdecl sub_442810(UINT a1)
{
  void *v2; // eax@5
  DWORD v3; // [sp+0h] [bp-4h]@6

  if ( a1 >= uNumber || !(*(_BYTE *)(dword_6D53380[(signed int)a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1) )
  {
    dword_6D51CC0 = 9;
    return -1;
  }
  if ( *(_BYTE *)(dword_6D53380[(signed int)a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1 )
  {
    v2 = (void *)sub_43F3D0(a1);
    if ( FlushFileBuffers(v2) )
      v3 = 0;
    else
      v3 = GetLastError();
    if ( !v3 )
      return v3;
    dword_6D51CC4 = v3;
  }
  dword_6D51CC0 = 9;
  return -1;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (004428C0) --------------------------------------------------------
int __usercall sub_4428C0<eax>(int a1<ebx>, int a2<esi>)
{
  int result; // eax@5
  signed int i; // [sp+0h] [bp-4h]@8
  signed int j; // [sp+0h] [bp-4h]@11

  if ( dword_6D53340 )
  {
    if ( dword_6D53340 < 20 )
      dword_6D53340 = 20;
  }
  else
  {
    dword_6D53340 = 512;
  }
  result = sub_436760(a1, a2, dword_6D53340, 4, 2, (int)"_file.c", 131);
  dword_6D51FEC = result;
  if ( !result )
  {
    dword_6D53340 = 20;
    result = sub_436760(a1, a2, 20, 4, 2, (int)"_file.c", 134);
    dword_6D51FEC = result;
    if ( !result )
      result = sub_4392E0(a1, a2, 26);
  }
  for ( i = 0; i < 20; ++i )
  {
    result = (int)(&off_482F08 + 8 * i);
    *(_DWORD *)(dword_6D51FEC + 4 * i) = result;
  }
  for ( j = 0; j < 3; ++j )
  {
    if ( *(_DWORD *)(dword_6D53380[j >> 5] + 8 * (j & 0x1F)) == -1
      || !*(_DWORD *)(dword_6D53380[j >> 5] + 8 * (j & 0x1F)) )
      dword_482F18[8 * j] = -1;
    result = j + 1;
  }
  return result;
}
// 482F08: using guessed type void *off_482F08;
// 482F18: using guessed type int dword_482F18[];
// 6D51FEC: using guessed type int dword_6D51FEC;
// 6D53340: using guessed type int dword_6D53340;
// 6D53380: using guessed type int dword_6D53380[];

//----- (004429F0) --------------------------------------------------------
int __usercall sub_4429F0<eax>(int a1<ebx>, int a2<esi>)
{
  int result; // eax@1

  sub_438CB0();
  result = byte_6D51D00;
  if ( byte_6D51D00 )
    result = sub_446B50(a1, a2);
  return result;
}
// 6D51D00: using guessed type char byte_6D51D00;

//----- (00442A10) --------------------------------------------------------
LONG __cdecl sub_442A10(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  LONG result; // eax@3
  int v3; // [sp+0h] [bp-14h]@8
  int i; // [sp+4h] [bp-10h]@9
  unsigned int v5; // [sp+8h] [bp-Ch]@1
  int v6; // [sp+Ch] [bp-8h]@12
  void (__cdecl *v7)(signed int, int); // [sp+10h] [bp-4h]@8

  v5 = sub_442BC0(a1);
  if ( v5 && *(_DWORD *)(v5 + 8) )
  {
    if ( *(_DWORD *)(v5 + 8) == 5 )
    {
      *(_DWORD *)(v5 + 8) = 0;
      result = 1;
    }
    else
    {
      if ( *(_DWORD *)(v5 + 8) == 1 )
      {
        result = -1;
      }
      else
      {
        v7 = *(void (__cdecl **)(signed int, int))(v5 + 8);
        v3 = dword_6D51E50;
        dword_6D51E50 = (int)ExceptionInfo;
        if ( *(_DWORD *)(v5 + 4) == 8 )
        {
          for ( i = dword_483200; i < dword_483204 + dword_483200; ++i )
            dword_483190[3 * i] = 0;
          v6 = dword_48320C;
          switch ( *(_DWORD *)v5 )
          {
            case 0xC000008E:
              dword_48320C = 131;
              break;
            case 0xC0000090:
              dword_48320C = 129;
              break;
            case 0xC0000091:
              dword_48320C = 132;
              break;
            case 0xC0000093:
              dword_48320C = 133;
              break;
            case 0xC000008D:
              dword_48320C = 130;
              break;
            case 0xC000008F:
              dword_48320C = 134;
              break;
            case 0xC0000092:
              dword_48320C = 138;
              break;
          }
          v7(8, dword_48320C);
          dword_48320C = v6;
        }
        else
        {
          *(_DWORD *)(v5 + 8) = 0;
          ((void (__cdecl *)(_DWORD))v7)(*(_DWORD *)(v5 + 4));
        }
        dword_6D51E50 = v3;
        result = -1;
      }
    }
  }
  else
  {
    result = UnhandledExceptionFilter(ExceptionInfo);
  }
  return result;
}
// 483190: using guessed type int dword_483190[];
// 483200: using guessed type int dword_483200;
// 483204: using guessed type int dword_483204;
// 48320C: using guessed type int dword_48320C;
// 6D51E50: using guessed type int dword_6D51E50;

//----- (00442BC0) --------------------------------------------------------
unsigned int __cdecl sub_442BC0(int a1)
{
  unsigned int result; // eax@6
  unsigned int v2; // [sp+0h] [bp-4h]@1

  v2 = (unsigned int)&unk_483188;
  do
  {
    if ( *(_DWORD *)v2 == a1 )
      break;
    v2 += 12;
  }
  while ( v2 < (unsigned int)((char *)&unk_483188 + 12 * dword_483208) );
  if ( v2 < (unsigned int)((char *)&unk_483188 + 12 * dword_483208) && *(_DWORD *)v2 == a1 )
    result = v2;
  else
    result = 0;
  return result;
}
// 483208: using guessed type int dword_483208;

//----- (00442C20) --------------------------------------------------------
unsigned __int8 *__usercall sub_442C20<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  unsigned __int8 *v4; // [sp+0h] [bp-4h]@3

  if ( !dword_6D5379C )
    sub_43D090(a1, a2, a3);
  v4 = (unsigned __int8 *)dword_6D53774;
  if ( *(_BYTE *)dword_6D53774 == 34 )
  {
    while ( 1 )
    {
      ++v4;
      if ( *v4 == 34 )
        break;
      if ( !*v4 )
        break;
      if ( sub_446D00(*v4) )
        ++v4;
    }
    if ( *v4 == 34 )
      ++v4;
  }
  else
  {
    while ( (signed int)*v4 > 32 )
      ++v4;
  }
  while ( *v4 && (signed int)*v4 <= 32 )
    ++v4;
  return v4;
}
// 6D53774: using guessed type int dword_6D53774;
// 6D5379C: using guessed type int dword_6D5379C;

//----- (00442CE0) --------------------------------------------------------
int __usercall sub_442CE0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  int result; // eax@17
  unsigned int v4; // [sp+0h] [bp-10h]@12
  int v5; // [sp+4h] [bp-Ch]@8
  int v6; // [sp+8h] [bp-8h]@3
  int i; // [sp+Ch] [bp-4h]@3
  int j; // [sp+Ch] [bp-4h]@10

  if ( !dword_6D5379C )
    sub_43D090(a1, a2, a3);
  v6 = 0;
  for ( i = dword_6D51D24; *(_BYTE *)i; i += sub_434FC0(i) + 1 )
  {
    if ( *(_BYTE *)i != 61 )
      ++v6;
  }
  v5 = sub_436360(a1, a3, 4 * v6 + 4, 2, (int)"stdenvp.c", 109);
  dword_6D51CE8 = v5;
  if ( !v5 )
    sub_4392E0(a1, a3, 9);
  for ( j = dword_6D51D24; *(_BYTE *)j; j += v4 )
  {
    v4 = sub_434FC0(j) + 1;
    if ( *(_BYTE *)j != 61 )
    {
      *(_DWORD *)v5 = sub_436360(a1, a3, v4, 2, (int)"stdenvp.c", 121);
      if ( !*(_DWORD *)v5 )
        sub_4392E0(a1, a3, 9);
      sub_434B90(*(_DWORD *)v5);
      v5 += 4;
    }
  }
  sub_436DA0(a1, a3, dword_6D51D24, 2);
  dword_6D51D24 = 0;
  result = v5;
  *(_DWORD *)v5 = 0;
  dword_6D5378C = 1;
  return result;
}
// 6D51CE8: using guessed type int dword_6D51CE8;
// 6D51D24: using guessed type int dword_6D51D24;
// 6D5378C: using guessed type int dword_6D5378C;
// 6D5379C: using guessed type int dword_6D5379C;

//----- (00442E30) --------------------------------------------------------
int __usercall sub_442E30<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  int result; // eax@8
  int v4; // [sp+0h] [bp-14h]@4
  int v5; // [sp+8h] [bp-Ch]@6
  int v6; // [sp+Ch] [bp-8h]@6
  int v7; // [sp+10h] [bp-4h]@6

  if ( !dword_6D5379C )
    sub_43D090(a1, a2, a3);
  GetModuleFileNameA(0, Filename, 0x104u);
  dword_6D51CF8 = (int)Filename;
  if ( *(_BYTE *)dword_6D53774 )
    v4 = dword_6D53774;
  else
    v4 = dword_6D51CF8;
  sub_442F10(v4, 0, 0, (int)&v5, (int)&v7);
  v6 = sub_436360(a1, a3, v7 + 4 * v5, 2, (int)"stdargv.c", 128);
  if ( !v6 )
    sub_4392E0(a1, a3, 8);
  sub_442F10(v4, v6, v6 + 4 * v5, (int)&v5, (int)&v7);
  result = v5 - 1;
  dword_6D51CDC = v5 - 1;
  dword_6D51CE0 = v6;
  return result;
}
// 6D51CDC: using guessed type int dword_6D51CDC;
// 6D51CE0: using guessed type int dword_6D51CE0;
// 6D51CF8: using guessed type int dword_6D51CF8;
// 6D53774: using guessed type int dword_6D53774;
// 6D5379C: using guessed type int dword_6D5379C;

//----- (00442F10) --------------------------------------------------------
int __cdecl sub_442F10(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ecx@52
  int result; // eax@75
  bool v7; // [sp+0h] [bp-14h]@30
  unsigned int v8; // [sp+4h] [bp-10h]@39
  unsigned __int8 v9; // [sp+8h] [bp-Ch]@19
  signed int v10; // [sp+Ch] [bp-8h]@39
  int v11; // [sp+10h] [bp-4h]@1

  *(_DWORD *)a5 = 0;
  *(_DWORD *)a4 = 1;
  v11 = a1;
  if ( a2 )
  {
    *(_DWORD *)a2 = a3;
    a2 += 4;
  }
  if ( *(_BYTE *)a1 == 34 )
  {
    while ( 1 )
    {
      ++v11;
      if ( *(_BYTE *)v11 == 34 )
        break;
      if ( !*(_BYTE *)v11 )
        break;
      if ( byte_6D53661[*(_BYTE *)v11] & 4 )
      {
        ++*(_DWORD *)a5;
        if ( a3 )
          *(_BYTE *)a3++ = *(_BYTE *)v11++;
      }
      ++*(_DWORD *)a5;
      if ( a3 )
        *(_BYTE *)a3++ = *(_BYTE *)v11;
    }
    ++*(_DWORD *)a5;
    if ( a3 )
      *(_BYTE *)a3++ = 0;
    if ( *(_BYTE *)v11 == 34 )
      ++v11;
  }
  else
  {
    do
    {
      ++*(_DWORD *)a5;
      if ( a3 )
        *(_BYTE *)a3++ = *(_BYTE *)v11;
      v9 = *(_BYTE *)v11++;
      if ( byte_6D53661[v9] & 4 )
      {
        ++*(_DWORD *)a5;
        if ( a3 )
          *(_BYTE *)a3++ = *(_BYTE *)v11;
        ++v11;
      }
    }
    while ( v9 != 32 && v9 && v9 != 9 );
    if ( v9 )
    {
      if ( a3 )
        *(_BYTE *)(a3 - 1) = 0;
    }
    else
    {
      --v11;
    }
  }
  v7 = 0;
  while ( 1 )
  {
    if ( *(_BYTE *)v11 )
    {
      while ( *(_BYTE *)v11 == 32 || *(_BYTE *)v11 == 9 )
        ++v11;
    }
    if ( !*(_BYTE *)v11 )
      break;
    if ( a2 )
    {
      *(_DWORD *)a2 = a3;
      a2 += 4;
    }
    ++*(_DWORD *)a4;
    while ( 1 )
    {
      v10 = 1;
      v8 = 0;
      while ( *(_BYTE *)v11 == 92 )
      {
        ++v11;
        ++v8;
      }
      if ( *(_BYTE *)v11 == 34 )
      {
        if ( !(v8 % 2) )
        {
          if ( v7 )
          {
            if ( *(_BYTE *)(v11 + 1) == 34 )
              ++v11;
            else
              v10 = 0;
          }
          else
          {
            v10 = 0;
          }
          v7 = v7 == 0;
        }
        v8 >>= 1;
      }
      while ( 1 )
      {
        v5 = v8--;
        if ( !v5 )
          break;
        if ( a3 )
          *(_BYTE *)a3++ = 92;
        ++*(_DWORD *)a5;
      }
      if ( !*(_BYTE *)v11 || !v7 && (*(_BYTE *)v11 == 32 || *(_BYTE *)v11 == 9) )
        break;
      if ( v10 )
      {
        if ( a3 )
        {
          if ( byte_6D53661[*(_BYTE *)v11] & 4 )
          {
            *(_BYTE *)a3++ = *(_BYTE *)v11++;
            ++*(_DWORD *)a5;
          }
          *(_BYTE *)a3++ = *(_BYTE *)v11;
        }
        else
        {
          if ( byte_6D53661[*(_BYTE *)v11] & 4 )
          {
            ++v11;
            ++*(_DWORD *)a5;
          }
        }
        ++*(_DWORD *)a5;
      }
      ++v11;
    }
    if ( a3 )
      *(_BYTE *)a3++ = 0;
    ++*(_DWORD *)a5;
  }
  if ( a2 )
    *(_DWORD *)a2 = 0;
  result = *(_DWORD *)a4 + 1;
  *(_DWORD *)a4 = result;
  return result;
}

//----- (00443340) --------------------------------------------------------
int __usercall sub_443340<eax>(int a1<ebx>, int a2<esi>)
{
  int result; // eax@6
  LPCH lpMultiByteStr; // [sp+0h] [bp-18h]@1
  int lpMultiByteStra; // [sp+0h] [bp-18h]@17
  const WCHAR *lpWideCharStr; // [sp+4h] [bp-14h]@1
  int cbMultiByte; // [sp+8h] [bp-10h]@16
  unsigned int cbMultiBytea; // [sp+8h] [bp-10h]@31
  LPCH v8; // [sp+Ch] [bp-Ch]@26
  int v9; // [sp+Ch] [bp-Ch]@31
  const WCHAR *v10; // [sp+10h] [bp-8h]@11

  lpWideCharStr = 0;
  lpMultiByteStr = 0;
  if ( !dword_6D51F58 )
  {
    lpWideCharStr = GetEnvironmentStringsW();
    if ( lpWideCharStr )
    {
      dword_6D51F58 = 1;
    }
    else
    {
      lpMultiByteStr = GetEnvironmentStrings();
      if ( !lpMultiByteStr )
        return 0;
      dword_6D51F58 = 2;
    }
  }
  if ( dword_6D51F58 == 1 )
  {
    if ( lpWideCharStr || (lpWideCharStr = GetEnvironmentStringsW()) != 0 )
    {
      v10 = lpWideCharStr;
      while ( *v10 )
      {
        ++v10;
        if ( !*v10 )
          ++v10;
      }
      cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, v10 - lpWideCharStr + 1, 0, 0, 0, 0);
      if ( cbMultiByte && (lpMultiByteStra = sub_436360(a1, a2, cbMultiByte, 2, (int)"a_env.c", 100)) != 0 )
      {
        if ( !WideCharToMultiByte(
                0,
                0,
                lpWideCharStr,
                v10 - lpWideCharStr + 1,
                (LPSTR)lpMultiByteStra,
                cbMultiByte,
                0,
                0) )
        {
          sub_436DA0(a1, a2, lpMultiByteStra, 2);
          lpMultiByteStra = 0;
        }
        FreeEnvironmentStringsW((LPWCH)lpWideCharStr);
        result = lpMultiByteStra;
      }
      else
      {
        FreeEnvironmentStringsW((LPWCH)lpWideCharStr);
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    if ( dword_6D51F58 == 2 )
    {
      if ( lpMultiByteStr || (lpMultiByteStr = GetEnvironmentStrings()) != 0 )
      {
        v8 = lpMultiByteStr;
        while ( *v8 )
        {
          ++v8;
          if ( !*v8 )
            ++v8;
        }
        cbMultiBytea = v8 - lpMultiByteStr + 1;
        v9 = sub_436360(a1, a2, v8 - lpMultiByteStr + 1, 2, (int)"a_env.c", 143);
        if ( v9 )
        {
          sub_434C80((void *)v9, lpMultiByteStr, cbMultiBytea);
          FreeEnvironmentStringsA(lpMultiByteStr);
          result = v9;
        }
        else
        {
          FreeEnvironmentStringsA(lpMultiByteStr);
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  return result;
}
// 6D51F58: using guessed type int dword_6D51F58;

//----- (00443560) --------------------------------------------------------
signed int __usercall sub_443560<eax>(int a1<ebx>, int a2<esi>)
{
  signed int result; // eax@6

  if ( dword_6D51D2C == 1 || !dword_6D51D2C && dword_482954 == 1 )
  {
    sub_4435B0(a1, a2, 252);
    if ( dword_6D51F5C )
      dword_6D51F5C();
    result = sub_4435B0(a1, a2, 255);
  }
  return result;
}
// 482954: using guessed type int dword_482954;
// 6D51D2C: using guessed type int dword_6D51D2C;
// 6D51F5C: using guessed type int (*dword_6D51F5C)(void);

//----- (004435B0) --------------------------------------------------------
signed int __usercall sub_4435B0<eax>(int ebx0<ebx>, int a2<esi>, int a1)
{
  signed int result; // eax@5
  int v4; // ST08_4@12
  const void *v5; // ST04_4@12
  HANDLE v6; // eax@12
  int v7; // eax@17
  char v8; // [sp+0h] [bp-1BCh]@0
  char v9; // [sp+Ch] [bp-1B0h]@18
  CHAR Filename; // [sp+ACh] [bp-110h]@14
  int v11; // [sp+1B0h] [bp-Ch]@16
  unsigned int i; // [sp+1B4h] [bp-8h]@1
  DWORD NumberOfBytesWritten; // [sp+1B8h] [bp-4h]@12

  for ( i = 0; i < 0x12 && a1 != dword_483210[2 * i]; ++i )
    ;
  result = i;
  if ( a1 == dword_483210[2 * i] )
  {
    if ( a1 != 252 )
    {
      result = sub_43A570(ebx0, a2, 1, 0, 0, 0, (const char *)*(&lpBuffer + 2 * i), v8);
      if ( result == 1 )
        __debugbreak();
    }
    if ( dword_6D51D2C != 1 && (dword_6D51D2C || dword_482954 != 1) )
    {
      if ( a1 != 252 )
      {
        if ( !GetModuleFileNameA(0, &Filename, 0x104u) )
          sub_434B90((int)&Filename);
        v11 = (int)&Filename;
        if ( (unsigned int)(sub_434FC0((int)&Filename) + 1) > 0x3C )
        {
          v7 = sub_434FC0((int)&Filename);
          v11 = v11 + v7 - 59;
          sub_435800(v11, (int)"...", 3u);
        }
        sub_434B90((int)&v9);
        sub_434BA0((int)&v9, v11);
        sub_434BA0((int)&v9, (int)"\n\n");
        sub_434BA0((int)&v9, (int)*(&lpBuffer + 2 * i));
        result = sub_444370((int)&v9, (int)"Microsoft Visual C++ Runtime Library", 73744);
      }
    }
    else
    {
      v4 = sub_434FC0((int)*(&lpBuffer + 2 * i));
      v5 = *(&lpBuffer + 2 * i);
      v6 = GetStdHandle(0xFFFFFFF4u);
      result = WriteFile(v6, v5, v4, &NumberOfBytesWritten, 0);
    }
  }
  return result;
}
// 482954: using guessed type int dword_482954;
// 483210: using guessed type int dword_483210[];
// 6D51D2C: using guessed type int dword_6D51D2C;

//----- (004437C0) --------------------------------------------------------
int __usercall sub_4437C0<eax>(int ebx0<ebx>, int a2<esi>, int a1)
{
  int result; // eax@7
  char v4; // [sp+0h] [bp-10h]@0

  if ( !a1 && sub_43A570(ebx0, a2, 2, (int)"_getbuf.c", 46, 0, "str != NULL", v4) == 1 )
    __debugbreak();
  ++dword_6D51E4C;
  *(_DWORD *)(a1 + 8) = sub_436360(ebx0, a2, 0x1000u, 2, (int)"_getbuf.c", 59);
  if ( *(_DWORD *)(a1 + 8) )
  {
    *(_DWORD *)(a1 + 12) |= 8u;
    *(_DWORD *)(a1 + 24) = 4096;
  }
  else
  {
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 8) = a1 + 20;
    *(_DWORD *)(a1 + 24) = 2;
  }
  result = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = result;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
// 6D51E4C: using guessed type int dword_6D51E4C;

//----- (00443890) --------------------------------------------------------
int __cdecl sub_443890(signed int a1)
{
  int result; // eax@2

  if ( a1 < uNumber )
    result = *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x40;
  else
    result = 0;
  return result;
}
// 6D53380: using guessed type int dword_6D53380[];

//----- (004438C0) --------------------------------------------------------
signed int __cdecl sub_4438C0(LPSTR lpMultiByteStr, const WCHAR WideCharStr)
{
  signed int result; // eax@2
  BOOL UsedDefaultChar; // [sp+0h] [bp-8h]@7
  int v4; // [sp+4h] [bp-4h]@7

  if ( lpMultiByteStr )
  {
    if ( dword_6D51F8C )
    {
      UsedDefaultChar = 0;
      v4 = WideCharToMultiByte(dword_6D51F9C, 0x220u, &WideCharStr, 1, lpMultiByteStr, cbMultiByte, 0, &UsedDefaultChar);
      if ( v4 && !UsedDefaultChar )
      {
        result = v4;
      }
      else
      {
        dword_6D51CC0 = 42;
        result = -1;
      }
    }
    else
    {
      if ( (signed int)WideCharStr <= 255 )
      {
        *lpMultiByteStr = WideCharStr;
        result = 1;
      }
      else
      {
        dword_6D51CC0 = 42;
        result = -1;
      }
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (00443960) --------------------------------------------------------
__int64 __stdcall sub_443960(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // qtt@2
  __int64 result; // qax@2
  unsigned int v5; // ecx@3
  unsigned int v6; // ebx@3
  unsigned __int64 v7; // qax@3
  unsigned __int8 v8; // cf@4
  unsigned int v9; // eax@5
  unsigned int v10; // esi@5
  int v11; // ecx@5
  unsigned __int64 v12; // qax@5

  if ( a3 )
  {
    v5 = a3;
    v6 = a2;
    v7 = a1;
    do
    {
      v8 = v5 & 1;
      v5 >>= 1;
      v6 = __RCR__(v6, v8);
      v8 = BYTE4(v7) & 1;
      HIDWORD(v7) >>= 1;
      LODWORD(v7) = __RCR__(v7, v8);
    }
    while ( v5 );
    v9 = v7 / v6;
    v10 = v9;
    v11 = a3 * v9;
    v12 = v9 * (unsigned __int64)a2;
    v8 = __CFADD__(v11, HIDWORD(v12));
    HIDWORD(v12) += v11;
    if ( v8 || HIDWORD(v12) > HIDWORD(a1) || HIDWORD(v12) >= HIDWORD(a1) && (unsigned int)v12 > (unsigned int)a1 )
      --v10;
    result = v10;
  }
  else
  {
    LODWORD(v3) = a1;
    HIDWORD(v3) = HIDWORD(a1) % a2;
    LODWORD(result) = v3 / a2;
    HIDWORD(result) = HIDWORD(a1) / a2;
  }
  return result;
}

//----- (004439D0) --------------------------------------------------------
int __stdcall sub_4439D0(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // qtt@2
  int result; // eax@2
  unsigned int v4; // ecx@3
  unsigned int v5; // ebx@3
  unsigned __int64 v6; // qax@3
  unsigned __int8 v7; // cf@4
  unsigned int v8; // eax@5
  int v9; // ecx@5
  unsigned __int64 v10; // qax@5

  if ( HIDWORD(a2) )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
      v7 = v4 & 1;
      v4 >>= 1;
      v5 = __RCR__(v5, v7);
      v7 = BYTE4(v6) & 1;
      HIDWORD(v6) >>= 1;
      LODWORD(v6) = __RCR__(v6, v7);
    }
    while ( v4 );
    v8 = v6 / v5;
    v9 = HIDWORD(a2) * v8;
    v10 = (unsigned int)a2 * (unsigned __int64)v8;
    v7 = __CFADD__(v9, HIDWORD(v10));
    HIDWORD(v10) += v9;
    if ( v7 || HIDWORD(v10) > HIDWORD(a1) || HIDWORD(v10) >= HIDWORD(a1) && (unsigned int)v10 > (unsigned int)a1 )
      LODWORD(v10) = v10 - a2;
    result = -(v10 - (_DWORD)a1);
  }
  else
  {
    LODWORD(v2) = a1;
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2;
    result = v2 % (unsigned int)a2;
  }
  return result;
}

//----- (00443A50) --------------------------------------------------------
int __cdecl sub_443A50(unsigned int a1, int a2, unsigned int a3)
{
  if ( a3 != 10 || (a1 & 0x80000000u) == 0 )
    sub_443AA0(a1, a2, a3, 0);
  else
    sub_443AA0(a1, a2, 0xAu, 1);
  return a2;
}

//----- (00443AA0) --------------------------------------------------------
int __cdecl sub_443AA0(unsigned int a1, int a2, unsigned int a3, int a4)
{
  char v4; // ST00_1@9
  int result; // eax@9
  int v6; // [sp+4h] [bp-Ch]@4
  int v7; // [sp+8h] [bp-8h]@3
  int v8; // [sp+Ch] [bp-4h]@1
  int v9; // [sp+Ch] [bp-4h]@8

  v8 = a2;
  if ( a4 )
  {
    *(_BYTE *)a2 = 45;
    v8 = a2 + 1;
    a1 = -a1;
  }
  v7 = v8;
  do
  {
    v6 = a1 % a3;
    a1 /= a3;
    if ( (unsigned int)v6 <= 9 )
      *(_BYTE *)v8++ = v6 + 48;
    else
      *(_BYTE *)v8++ = v6 + 87;
  }
  while ( a1 );
  *(_BYTE *)v8 = 0;
  v9 = v8 - 1;
  do
  {
    v4 = *(_BYTE *)v9;
    *(_BYTE *)v9 = *(_BYTE *)v7;
    *(_BYTE *)v7 = v4;
    --v9;
    result = v7++ + 1;
  }
  while ( v7 < (unsigned int)v9 );
  return result;
}

//----- (00443C20) --------------------------------------------------------
int __stdcall sub_443C20(__int64 a1, int a2, unsigned int a3, int a4)
{
  char v4; // ST10_1@9
  int result; // eax@9
  int v6; // [sp+4h] [bp-Ch]@4
  int v7; // [sp+8h] [bp-8h]@3
  int v8; // [sp+Ch] [bp-4h]@1
  int v9; // [sp+Ch] [bp-4h]@8

  v8 = a2;
  if ( a4 )
  {
    *(_BYTE *)a2 = 45;
    v8 = a2 + 1;
    a1 = -a1;
  }
  v7 = v8;
  do
  {
    v6 = sub_4439D0(a1, a3);
    a1 = sub_443960(a1, a3, 0);
    if ( (unsigned int)v6 <= 9 )
      *(_BYTE *)v8++ = v6 + 48;
    else
      *(_BYTE *)v8++ = v6 + 87;
  }
  while ( a1 );
  *(_BYTE *)v8 = 0;
  v9 = v8 - 1;
  do
  {
    v4 = *(_BYTE *)v9;
    *(_BYTE *)v9 = *(_BYTE *)v7;
    *(_BYTE *)v7 = v4;
    --v9;
    result = v7++ + 1;
  }
  while ( v7 < (unsigned int)v9 );
  return result;
}

//----- (00443D40) --------------------------------------------------------
int __usercall sub_443D40<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3, char a4)
{
  char v7; // [sp+0h] [bp-3Ch]@0
  int v8; // [sp+14h] [bp-28h]@7
  int v9; // [sp+1Ch] [bp-20h]@7
  int v10; // [sp+20h] [bp-1Ch]@7
  int v11; // [sp+24h] [bp-18h]@7
  signed int v12; // [sp+28h] [bp-14h]@7

  if ( !a1 && sub_43A570(ebx0, esi0, 2, (int)"sprintf.c", 93, 0, "string != NULL", v7) == 1 )
    __debugbreak();
  if ( !a3 && sub_43A570(ebx0, esi0, 2, (int)"sprintf.c", 94, 0, "format != NULL", v7) == 1 )
    __debugbreak();
  v12 = 66;
  v11 = a1;
  v9 = a1;
  v10 = a2;
  v8 = sub_4395C0(ebx0, esi0, (int)&v9, a3, (int)&a4);
  --v10;
  if ( v10 < 0 )
    sub_439340(ebx0, esi0, 0, (int)&v9);
  else
    *(_BYTE *)v9++ = 0;
  return v8;
}

//----- (00443E40) --------------------------------------------------------
int __usercall sub_443E40<eax>(int ebx0<ebx>, int esi0<esi>, int a1, int a2, int a3, int a4)
{
  char v7; // [sp+0h] [bp-38h]@0
  int v8; // [sp+10h] [bp-28h]@7
  int v9; // [sp+18h] [bp-20h]@7
  int v10; // [sp+1Ch] [bp-1Ch]@7
  int v11; // [sp+20h] [bp-18h]@7
  signed int v12; // [sp+24h] [bp-14h]@7

  if ( !a1 && sub_43A570(ebx0, esi0, 2, (int)"vsprintf.c", 90, 0, "string != NULL", v7) == 1 )
    __debugbreak();
  if ( !a3 && sub_43A570(ebx0, esi0, 2, (int)"vsprintf.c", 91, 0, "format != NULL", v7) == 1 )
    __debugbreak();
  v12 = 66;
  v11 = a1;
  v9 = a1;
  v10 = a2;
  v8 = sub_4395C0(ebx0, esi0, (int)&v9, a3, a4);
  --v10;
  if ( v10 < 0 )
    sub_439340(ebx0, esi0, 0, (int)&v9);
  else
    *(_BYTE *)v9++ = 0;
  return v8;
}

//----- (004440E0) --------------------------------------------------------
signed int __stdcall sub_4440E0(int a1)
{
  signed int result; // eax@5
  int v2; // [sp+0h] [bp-Ch]@2
  int *v3; // [sp+4h] [bp-8h]@2
  signed int v4; // [sp+8h] [bp-4h]@2

  if ( a1 )
  {
    v3 = &dword_6D51F64;
    v2 = dword_6D51F64;
    v4 = 21;
  }
  else
  {
    v3 = &dword_6D51F60;
    v2 = dword_6D51F60;
    v4 = 2;
  }
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      *v3 = 0;
      ((void (__cdecl *)(signed int))v2)(v4);
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 6D51F60: using guessed type int dword_6D51F60;
// 6D51F64: using guessed type int dword_6D51F64;

//----- (00444150) --------------------------------------------------------
signed int __usercall sub_444150<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  signed int result; // eax@7
  int v5; // [sp+4h] [bp-14h]@2
  int *v6; // [sp+8h] [bp-10h]@2
  int v7; // [sp+Ch] [bp-Ch]@0
  int i; // [sp+10h] [bp-8h]@18
  int v9; // [sp+14h] [bp-4h]@0

  switch ( a4 )
  {
    case 2:
      v6 = &dword_6D51F60;
      v5 = dword_6D51F60;
      goto LABEL_8;
    case 21:
      v6 = &dword_6D51F64;
      v5 = dword_6D51F64;
      goto LABEL_8;
    case 22:
      v6 = &dword_6D51F68;
      v5 = dword_6D51F68;
      goto LABEL_8;
    case 15:
      v6 = &dword_6D51F6C;
      v5 = dword_6D51F6C;
      goto LABEL_8;
    case 4:
    case 8:
    case 11:
      v6 = (int *)(sub_444310(a4) + 8);
      v5 = *v6;
LABEL_8:
      if ( v5 == 1 )
      {
        result = 0;
      }
      else
      {
        if ( !v5 )
          sub_435D90(a1, a2, a3, 3u);
        if ( a4 == 8 || a4 == 11 || a4 == 4 )
        {
          v7 = dword_6D51E50;
          dword_6D51E50 = 0;
          if ( a4 == 8 )
          {
            v9 = dword_48320C;
            dword_48320C = 140;
          }
        }
        if ( a4 == 8 )
        {
          for ( i = dword_483200; i < dword_483204 + dword_483200; ++i )
            dword_483190[3 * i] = 0;
        }
        else
        {
          *v6 = 0;
        }
        if ( a4 == 8 )
          ((void (__cdecl *)(_DWORD, _DWORD))v5)(8, dword_48320C);
        else
          ((void (__cdecl *)(_DWORD))v5)(a4);
        if ( a4 == 8 || a4 == 11 || a4 == 4 )
        {
          dword_6D51E50 = v7;
          if ( a4 == 8 )
            dword_48320C = v9;
        }
        result = 0;
      }
      break;
    default:
      result = -1;
      break;
  }
  return result;
}
// 483190: using guessed type int dword_483190[];
// 483200: using guessed type int dword_483200;
// 483204: using guessed type int dword_483204;
// 48320C: using guessed type int dword_48320C;
// 6D51E50: using guessed type int dword_6D51E50;
// 6D51F60: using guessed type int dword_6D51F60;
// 6D51F64: using guessed type int dword_6D51F64;
// 6D51F68: using guessed type int dword_6D51F68;
// 6D51F6C: using guessed type int dword_6D51F6C;

//----- (00444310) --------------------------------------------------------
unsigned int __cdecl sub_444310(int a1)
{
  unsigned int result; // eax@6
  unsigned int v2; // [sp+0h] [bp-4h]@1

  v2 = (unsigned int)&unk_483188;
  do
  {
    if ( *(_DWORD *)(v2 + 4) == a1 )
      break;
    v2 += 12;
  }
  while ( v2 < (unsigned int)((char *)&unk_483188 + 12 * dword_483208) );
  if ( v2 >= (unsigned int)((char *)&unk_483188 + 12 * dword_483208) || *(_DWORD *)(v2 + 4) != a1 )
    result = 0;
  else
    result = v2;
  return result;
}
// 483208: using guessed type int dword_483208;

//----- (00444370) --------------------------------------------------------
int __cdecl sub_444370(int a1, int a2, int a3)
{
  HMODULE hModule; // [sp+0h] [bp-8h]@2
  int v5; // [sp+4h] [bp-4h]@1

  v5 = 0;
  if ( !dword_6D51F74 )
  {
    hModule = LoadLibraryA("user32.dll");
    if ( !hModule
      || (dword_6D51F74 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(hModule, "MessageBoxA")) == 0 )
      return 0;
    dword_6D51F78 = GetProcAddress(hModule, "GetActiveWindow");
    dword_6D51F7C = (int (__stdcall *)(_DWORD))GetProcAddress(hModule, "GetLastActivePopup");
  }
  if ( dword_6D51F78 )
    v5 = dword_6D51F78();
  if ( v5 )
  {
    if ( dword_6D51F7C )
      v5 = dword_6D51F7C(v5);
  }
  return dword_6D51F74(v5, a1, a2, a3);
}
// 6D51F74: using guessed type int (__stdcall *dword_6D51F74)(_DWORD, _DWORD, _DWORD, _DWORD);
// 6D51F78: using guessed type int (*dword_6D51F78)(void);
// 6D51F7C: using guessed type int (__stdcall *dword_6D51F7C)(_DWORD);

//----- (00444430) --------------------------------------------------------
signed int __usercall sub_444430<eax>(int a1<ebx>, int a2<esi>, LPWSTR lpWideCharStr, LPCSTR lpMultiByteStr, unsigned int a5)
{
  signed int result; // eax@7
  char v6; // [sp+0h] [bp-Ch]@0

  if ( cbMultiByte != 1
    && cbMultiByte != 2
    && sub_43A570(a1, a2, 2, (int)"mbtowc.c", 79, 0, "MB_CUR_MAX == 1 || MB_CUR_MAX == 2", v6) == 1 )
    __debugbreak();
  if ( lpMultiByteStr && a5 )
  {
    if ( *lpMultiByteStr )
    {
      if ( dword_6D51F8C )
      {
        if ( *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)*lpMultiByteStr) & 0x8000 )
        {
          if ( cbMultiByte > 1
            && (signed int)a5 >= cbMultiByte
            && MultiByteToWideChar(dword_6D51F9C, 9u, lpMultiByteStr, cbMultiByte, lpWideCharStr, lpWideCharStr != 0)
            || a5 >= cbMultiByte && lpMultiByteStr[1] )
          {
            result = cbMultiByte;
          }
          else
          {
            dword_6D51CC0 = 42;
            result = -1;
          }
        }
        else
        {
          if ( MultiByteToWideChar(dword_6D51F9C, 9u, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != 0) )
          {
            result = 1;
          }
          else
          {
            dword_6D51CC0 = 42;
            result = -1;
          }
        }
      }
      else
      {
        if ( lpWideCharStr )
          *lpWideCharStr = (unsigned __int8)*lpMultiByteStr;
        result = 1;
      }
    }
    else
    {
      if ( lpWideCharStr )
        *lpWideCharStr = 0;
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
// 482AA8: using guessed type __int16 off_482AA8[2];
// 6D51CC0: using guessed type int dword_6D51CC0;

//----- (004446F0) --------------------------------------------------------
int __usercall sub_4446F0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4)
{
  __int16 v4; // ax@3
  int v6; // [sp+0h] [bp-4h]@2

  if ( cbMultiByte <= 1 )
  {
    v4 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * a4);
    v6 = v4 & 8;
  }
  else
  {
    v6 = sub_43D9C0(a1, a2, a3, a4, 8);
  }
  return v6;
}
// 482AA8: using guessed type __int16 off_482AA8[2];

//----- (00444980) --------------------------------------------------------
int __usercall sub_444980<eax>(__int64 a1<edx:eax>, unsigned __int8 a2<cl>)
{
  __int64 v2; // qax@3

  if ( a2 >= 0x40u )
  {
    LODWORD(v2) = 0;
  }
  else
  {
    if ( a2 >= 0x20u )
      LODWORD(v2) = 0;
    else
      v2 = a1 << (a2 & 0x1F);
  }
  return v2;
}

//----- (004449A0) --------------------------------------------------------
signed int __usercall sub_4449A0<eax>(int a1<ebx>, int a2<esi>, int a3, int a4)
{
  int v5; // eax@20
  int v6; // eax@20
  char v7; // [sp+0h] [bp-10h]@0

  if ( !a4 && sub_43A570(a1, a2, 2, (int)"ungetc.c", 96, 0, "str != NULL", v7) == 1 )
    __debugbreak();
  if ( a3 == -1 || !(*(_DWORD *)(a4 + 12) & 1) && (!(*(_DWORD *)(a4 + 12) & 0x80) || *(_DWORD *)(a4 + 12) & 2) )
    return -1;
  if ( !*(_DWORD *)(a4 + 8) )
    sub_4437C0(a1, a2, a4);
  if ( *(_DWORD *)a4 == *(_DWORD *)(a4 + 8) )
  {
    if ( *(_DWORD *)(a4 + 4) )
      return -1;
    ++*(_DWORD *)a4;
  }
  if ( *(_DWORD *)(a4 + 12) & 0x40 )
  {
    --*(_DWORD *)a4;
    if ( **(_BYTE **)a4 != (char)a3 )
    {
      ++*(_DWORD *)a4;
      return -1;
    }
  }
  else
  {
    --*(_DWORD *)a4;
    **(_BYTE **)a4 = a3;
  }
  ++*(_DWORD *)(a4 + 4);
  v5 = *(_DWORD *)(a4 + 12);
  LOBYTE(v5) = v5 & 0xEF;
  *(_DWORD *)(a4 + 12) = v5;
  v6 = *(_DWORD *)(a4 + 12);
  LOBYTE(v6) = v6 | 1;
  *(_DWORD *)(a4 + 12) = v6;
  return (unsigned __int8)a3;
}

//----- (00444AE0) --------------------------------------------------------
int __usercall sub_444AE0<eax>(int a1<ebx>, int a2<esi>, LPCSTR lpFileName, __int16 a4, int a5)
{
  return sub_444B20(a1, a2, lpFileName, a4, 64, a5);
}

//----- (00444B20) --------------------------------------------------------
int __usercall sub_444B20<eax>(int a1<ebx>, int a2<esi>, LPCSTR lpFileName, __int16 a4, int a5, int a6)
{
  DWORD v7; // ecx@47
  unsigned int v8; // eax@55
  unsigned int v9; // eax@57
  int v10; // [sp+0h] [bp-48h]@22
  int v11; // [sp+8h] [bp-40h]@9
  signed int lDistanceToMove; // [sp+Ch] [bp-3Ch]@65
  char v13; // [sp+10h] [bp-38h]@2
  char v14; // [sp+10h] [bp-38h]@62
  DWORD dwDesiredAccess; // [sp+14h] [bp-34h]@13
  int v16; // [sp+18h] [bp-30h]@69
  int v17; // [sp+1Ch] [bp-2Ch]@42
  DWORD dwFlagsAndAttributes; // [sp+20h] [bp-28h]@41
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [sp+24h] [bp-24h]@1
  DWORD dwCreationDisposition; // [sp+30h] [bp-18h]@35
  int v21; // [sp+34h] [bp-14h]@52
  int v22; // [sp+38h] [bp-10h]@42
  DWORD v23; // [sp+3Ch] [bp-Ch]@56
  DWORD dwShareMode; // [sp+40h] [bp-8h]@17
  HANDLE hHandle; // [sp+44h] [bp-4h]@54

  SecurityAttributes.nLength = 12;
  SecurityAttributes.lpSecurityDescriptor = 0;
  if ( a4 & 0x80 )
  {
    SecurityAttributes.bInheritHandle = 0;
    v13 = 16;
  }
  else
  {
    SecurityAttributes.bInheritHandle = 1;
    v13 = 0;
  }
  if ( !(a4 & 0x8000) )
  {
    if ( a4 & 0x4000 )
    {
      v13 |= 0x80u;
    }
    else
    {
      if ( dword_6D51FE4 != 32768 )
        v13 |= 0x80u;
    }
  }
  v11 = a4 & 3;
  if ( a4 & 3 )
  {
    if ( v11 == 1 )
    {
      dwDesiredAccess = 1073741824;
    }
    else
    {
      if ( v11 != 2 )
      {
        dword_6D51CC0 = 22;
        dword_6D51CC4 = 0;
        return -1;
      }
      dwDesiredAccess = -1073741824;
    }
  }
  else
  {
    dwDesiredAccess = -2147483648;
  }
  switch ( a5 )
  {
    case 16:
      dwShareMode = 0;
      goto LABEL_22;
    case 32:
      dwShareMode = 1;
      goto LABEL_22;
    case 48:
      dwShareMode = 2;
      goto LABEL_22;
    case 64:
      dwShareMode = 3;
LABEL_22:
      v10 = a4 & 0x700;
      if ( v10 > 1024 )
      {
        if ( v10 != 1280 )
        {
          if ( v10 == 1536 )
            goto LABEL_38;
          if ( v10 != 1792 )
            goto LABEL_40;
        }
        dwCreationDisposition = 1;
        goto LABEL_41;
      }
      if ( v10 == 1024 )
      {
LABEL_35:
        dwCreationDisposition = 3;
        goto LABEL_41;
      }
      if ( v10 > 512 )
      {
        if ( v10 != 768 )
          goto LABEL_40;
        dwCreationDisposition = 2;
        goto LABEL_41;
      }
      if ( v10 == 512 )
      {
LABEL_38:
        dwCreationDisposition = 5;
        goto LABEL_41;
      }
      if ( !(a4 & 0x700) )
        goto LABEL_35;
      if ( v10 != 256 )
      {
LABEL_40:
        dword_6D51CC0 = 22;
        dword_6D51CC4 = 0;
        return -1;
      }
      dwCreationDisposition = 4;
LABEL_41:
      dwFlagsAndAttributes = 128;
      if ( a4 & 0x100 )
      {
        v22 = a6;
        v17 = 0;
        if ( !((unsigned __int8)~(_BYTE)dword_6D51CC8 & (unsigned __int8)a6 & 0x80) )
          dwFlagsAndAttributes = 1;
      }
      if ( a4 & 0x40 )
      {
        dwFlagsAndAttributes |= (unsigned int)&unk_4000000;
        dwDesiredAccess |= 0x10000u;
      }
      if ( a4 & 0x1000 )
      {
        v7 = dwFlagsAndAttributes;
        BYTE1(v7) |= 1u;
        dwFlagsAndAttributes = v7;
      }
      if ( a4 & 0x20 )
      {
        dwFlagsAndAttributes |= 0x8000000u;
      }
      else
      {
        if ( a4 & 0x10 )
          dwFlagsAndAttributes |= 0x10000000u;
      }
      v21 = sub_43F120(a1, a2);
      if ( v21 == -1 )
      {
        dword_6D51CC0 = 24;
        dword_6D51CC4 = 0;
        return -1;
      }
      hHandle = CreateFileA(
                  lpFileName,
                  dwDesiredAccess,
                  dwShareMode,
                  &SecurityAttributes,
                  dwCreationDisposition,
                  dwFlagsAndAttributes,
                  0);
      if ( hHandle == (HANDLE)-1 )
      {
        v8 = GetLastError();
        sub_43ED20(v8);
        return -1;
      }
      v23 = GetFileType(hHandle);
      if ( !v23 )
      {
        CloseHandle(hHandle);
        v9 = GetLastError();
        sub_43ED20(v9);
        return -1;
      }
      if ( v23 == 2 )
      {
        v13 |= 0x40u;
      }
      else
      {
        if ( v23 == 3 )
          v13 |= 8u;
      }
      sub_43F250(v21, hHandle);
      v14 = v13 | 1;
      *(_BYTE *)(dword_6D53380[v21 >> 5] + 8 * (v21 & 0x1F) + 4) = v14;
      if ( !(v14 & 0x48) && v14 & 0x80 && a4 & 2 )
      {
        lDistanceToMove = sub_4361B0(v21, -1, 2u);
        if ( lDistanceToMove == -1 )
        {
          if ( dword_6D51CC4 != 131 )
          {
            sub_43AC10(v21);
            return -1;
          }
        }
        else
        {
          LOBYTE(v16) = 0;
          if ( !sub_43DAC0(v21, (int)&v16, 1u) && (char)v16 == 26 && sub_446DF0(a1, a2, v21, lDistanceToMove) == -1 )
          {
            sub_43AC10(v21);
            return -1;
          }
          if ( sub_4361B0(v21, 0, 0) == -1 )
          {
            sub_43AC10(v21);
            return -1;
          }
        }
      }
      if ( !(v14 & 0x48) )
      {
        if ( a4 & 8 )
          *(_BYTE *)(dword_6D53380[v21 >> 5] + 8 * (v21 & 0x1F) + 4) |= 0x20u;
      }
      return v21;
    default:
      dword_6D51CC0 = 22;
      dword_6D51CC4 = 0;
      return -1;
  }
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D51CC8: using guessed type int dword_6D51CC8;
// 6D51FE4: using guessed type int dword_6D51FE4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (00445010) --------------------------------------------------------
int __usercall sub_445010<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, LCID Locale, DWORD dwMapFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPSTR lpDestStr, int cchDest, UINT CodePage, int a12)
{
  int result; // eax@6
  int v13; // eax@16
  void *v14; // esp@16
  int v15; // eax@29
  void *v16; // esp@29
  int v17; // [sp-Ch] [bp-40h]@1
  int v18; // [sp-8h] [bp-3Ch]@1
  int v19; // [sp-4h] [bp-38h]@1
  int *v20; // [sp+0h] [bp-34h]@29
  int *v21; // [sp+4h] [bp-30h]@16
  int cchWideChar; // [sp+8h] [bp-2Ch]@29
  int v23; // [sp+Ch] [bp-28h]@20
  LPWSTR lpSrcStr; // [sp+10h] [bp-24h]@16
  LPCWSTR lpWideCharStr; // [sp+14h] [bp-20h]@29
  int cchSrc; // [sp+18h] [bp-1Ch]@14
  int *v27; // [sp+1Ch] [bp-18h]@1
  int v28; // [sp+24h] [bp-10h]@1
  signed int (__usercall *v29)<eax>(int<ebp>); // [sp+28h] [bp-Ch]@1
  _UNKNOWN *v30; // [sp+2Ch] [bp-8h]@1
  int v31; // [sp+30h] [bp-4h]@1

  v31 = -1;
  v30 = &unk_479000;
  v29 = sub_44272C;
  v28 = a1;
  v19 = a2;
  v18 = a4;
  v17 = a3;
  v27 = &v17;
  if ( !dword_6D51FA4 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, 0, 0) )
    {
      dword_6D51FA4 = 1;
    }
    else
    {
      if ( !LCMapStringA(0, 0x100u, String2, 1, 0, 0) )
        return 0;
      dword_6D51FA4 = 2;
    }
  }
  if ( cbMultiByte > 0 )
    cbMultiByte = sub_445320((int)lpMultiByteStr, cbMultiByte);
  if ( dword_6D51FA4 == 2 )
    return LCMapStringA(Locale, dwMapFlags, lpMultiByteStr, cbMultiByte, lpDestStr, cchDest);
  if ( dword_6D51FA4 == 1 )
  {
    if ( !CodePage )
      CodePage = dword_6D51F9C;
    cchSrc = MultiByteToWideChar(CodePage, a12 != 0 ? 9 : 1, lpMultiByteStr, cbMultiByte, 0, 0);
    if ( !cchSrc )
      return 0;
    v13 = 2 * cchSrc + 3;
    LOBYTE(v13) = v13 & 0xFC;
    v14 = alloca(v13);
    v21 = &v17;
    v27 = &v17;
    lpSrcStr = (LPWSTR)&v17;
    v31 = -1;
    if ( !&v17 )
      return 0;
    if ( !MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpSrcStr, cchSrc) )
      return 0;
    v23 = LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, 0, 0);
    if ( !v23 )
      return 0;
    if ( dwMapFlags & 0x400 )
    {
      if ( cchDest )
      {
        if ( v23 > cchDest )
          return 0;
        if ( !LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, (LPWSTR)lpDestStr, cchDest) )
          return 0;
      }
    }
    else
    {
      cchWideChar = v23;
      v15 = 2 * v23 + 3;
      LOBYTE(v15) = v15 & 0xFC;
      v16 = alloca(v15);
      v20 = &v17;
      v27 = &v17;
      lpWideCharStr = (LPCWSTR)&v17;
      v31 = -1;
      if ( !&v17 )
        return 0;
      if ( !LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, (LPWSTR)lpWideCharStr, cchWideChar) )
        return 0;
      if ( cchDest )
      {
        v23 = WideCharToMultiByte(CodePage, 0x220u, lpWideCharStr, cchWideChar, lpDestStr, cchDest, 0, 0);
        if ( !v23 )
          return 0;
      }
      else
      {
        v23 = WideCharToMultiByte(CodePage, 0x220u, lpWideCharStr, cchWideChar, 0, 0, 0, 0);
        if ( !v23 )
          return 0;
      }
    }
    result = v23;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 445010: could not find valid save-restore pair for ebx
// 445010: could not find valid save-restore pair for edi
// 445010: could not find valid save-restore pair for esi
// 6D51FA4: using guessed type int dword_6D51FA4;

//----- (00445320) --------------------------------------------------------
int __cdecl sub_445320(int a1, int a2)
{
  int v2; // edx@2
  int result; // eax@6
  int v4; // [sp+0h] [bp-8h]@1
  int i; // [sp+4h] [bp-4h]@1

  v4 = a2;
  for ( i = a1; ; ++i )
  {
    v2 = v4--;
    if ( !v2 )
      break;
    if ( !*(_BYTE *)i )
      break;
  }
  if ( *(_BYTE *)i )
    result = a2;
  else
    result = i - a1;
  return result;
}

//----- (00445370) --------------------------------------------------------
BOOL __usercall sub_445370<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, DWORD dwInfoType, LPCSTR lpMultiByteStr, int cbMultiByte, LPWORD lpCharType, UINT CodePage, LCID Locale, int a11)
{
  BOOL result; // eax@6
  int v12; // eax@16
  void *v13; // esp@16
  int v14; // [sp-Ch] [bp-38h]@1
  int v15; // [sp-8h] [bp-34h]@1
  int v16; // [sp-4h] [bp-30h]@1
  int *v17; // [sp+0h] [bp-2Ch]@16
  int cchSrc; // [sp+4h] [bp-28h]@18
  LPWSTR lpSrcStr; // [sp+8h] [bp-24h]@16
  int cchWideChar; // [sp+Ch] [bp-20h]@14
  WORD CharType; // [sp+10h] [bp-1Ch]@2
  int *v22; // [sp+14h] [bp-18h]@1
  int v23; // [sp+1Ch] [bp-10h]@1
  signed int (__usercall *v24)<eax>(int<ebp>); // [sp+20h] [bp-Ch]@1
  _UNKNOWN *v25; // [sp+24h] [bp-8h]@1
  int v26; // [sp+28h] [bp-4h]@1

  v26 = -1;
  v25 = &unk_479018;
  v24 = sub_44272C;
  v23 = a1;
  v16 = a2;
  v15 = a4;
  v14 = a3;
  v22 = &v14;
  if ( !dword_6D51FA8 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, &CharType) )
    {
      dword_6D51FA8 = 1;
    }
    else
    {
      if ( !GetStringTypeA(0, 1u, String2, 1, &CharType) )
        return 0;
      dword_6D51FA8 = 2;
    }
  }
  if ( dword_6D51FA8 == 2 )
  {
    if ( !Locale )
      Locale = dword_6D51F8C;
    result = GetStringTypeA(Locale, dwInfoType, lpMultiByteStr, cbMultiByte, lpCharType);
  }
  else
  {
    if ( dword_6D51FA8 == 1 )
    {
      if ( !CodePage )
        CodePage = dword_6D51F9C;
      cchWideChar = MultiByteToWideChar(CodePage, a11 != 0 ? 9 : 1, lpMultiByteStr, cbMultiByte, 0, 0);
      if ( cchWideChar )
      {
        v26 = 0;
        v12 = 2 * cchWideChar + 3;
        LOBYTE(v12) = v12 & 0xFC;
        v13 = alloca(v12);
        v17 = &v14;
        v22 = &v14;
        lpSrcStr = (LPWSTR)&v14;
        sub_434AB0(&v14, 0, 2 * cchWideChar);
        v26 = -1;
        if ( lpSrcStr )
        {
          cchSrc = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpSrcStr, cchWideChar);
          if ( cchSrc )
            result = GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
          else
            result = 0;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  return result;
}
// 445370: could not find valid save-restore pair for ebx
// 445370: could not find valid save-restore pair for edi
// 445370: could not find valid save-restore pair for esi
// 6D51FA8: using guessed type int dword_6D51FA8;

//----- (00445570) --------------------------------------------------------
int __cdecl sub_445570(int a1, int a2)
{
  int v2; // ST14_4@1
  __int16 v4; // [sp+Ch] [bp-10h]@0

  v2 = ~a2 & sub_445640(v4) | a2 & a1;
  sub_4457C0(v2);
  return v2;
}

//----- (004455C0) --------------------------------------------------------
int __cdecl sub_4455C0(int a1, int a2)
{
  return sub_445570(a1, a2 & 0xFFF7FFFF);
}

//----- (00445640) --------------------------------------------------------
signed int __cdecl sub_445640(__int16 a1)
{
  signed int v1; // eax@4
  signed int v2; // eax@10
  signed int v3; // edx@21
  signed int v4; // eax@22
  signed int v5; // ecx@23
  int v7; // [sp+4h] [bp-8h]@13
  signed int v8; // [sp+8h] [bp-4h]@1

  v8 = 0;
  if ( a1 & 1 )
    v8 = 16;
  if ( a1 & 4 )
  {
    v1 = v8;
    LOBYTE(v1) = v8 | 8;
    v8 = v1;
  }
  if ( a1 & 8 )
    v8 |= 4u;
  if ( a1 & 0x10 )
    v8 |= 2u;
  if ( a1 & 0x20 )
  {
    v2 = v8;
    LOBYTE(v2) = v8 | 1;
    v8 = v2;
  }
  if ( a1 & 2 )
    v8 |= 0x80000u;
  v7 = a1 & 0xC00;
  if ( v7 > 2048 )
  {
    if ( v7 == 3072 )
    {
      v5 = v8;
      BYTE1(v5) |= 3u;
      v8 = v5;
    }
  }
  else
  {
    if ( v7 == 2048 )
    {
      v3 = v8;
      BYTE1(v3) |= 2u;
      v8 = v3;
    }
    else
    {
      if ( a1 & 0xC00 && v7 == 1024 )
      {
        v4 = v8;
        BYTE1(v4) |= 1u;
        v8 = v4;
      }
    }
  }
  if ( a1 & 0x300 )
  {
    if ( (a1 & 0x300) == 512 )
      v8 |= 0x10000u;
  }
  else
  {
    v8 |= 0x20000u;
  }
  if ( a1 & 0x1000 )
    v8 |= 0x40000u;
  return v8;
}

//----- (004457C0) --------------------------------------------------------
signed __int16 __cdecl sub_4457C0(int a1)
{
  int v1; // ecx@11
  int v2; // edx@24
  int v3; // eax@29
  int v5; // [sp+4h] [bp-8h]@13
  signed __int16 v6; // [sp+8h] [bp-4h]@1

  v6 = 0;
  if ( a1 & 0x10 )
    v6 = 1;
  if ( a1 & 8 )
    v6 |= 4u;
  if ( a1 & 4 )
    v6 |= 8u;
  if ( a1 & 2 )
    v6 |= 0x10u;
  if ( a1 & 1 )
    v6 |= 0x20u;
  v1 = a1;
  if ( v1 & 0x80000 )
    v6 |= 2u;
  v5 = a1 & 0x300;
  if ( (unsigned int)v5 > 0x200 )
  {
    if ( v5 == 768 )
      v6 |= 0xC00u;
  }
  else
  {
    if ( v5 == 512 )
    {
      v6 |= 0x800u;
    }
    else
    {
      if ( a1 & 0x300 && v5 == 256 )
        v6 |= 0x400u;
    }
  }
  v2 = a1;
  if ( v2 & 0x30000 )
  {
    if ( (a1 & 0x30000) == 65536 )
      v6 |= 0x200u;
  }
  else
  {
    v6 |= 0x300u;
  }
  v3 = a1;
  if ( v3 & 0x40000 )
    v6 |= 0x1000u;
  return v6;
}

//----- (00445920) --------------------------------------------------------
signed int __cdecl sub_445920(char a1)
{
  signed int v1; // eax@4
  signed int v2; // eax@10
  signed int v4; // [sp+0h] [bp-4h]@1

  v4 = 0;
  if ( a1 & 1 )
    v4 = 16;
  if ( a1 & 4 )
  {
    v1 = v4;
    LOBYTE(v1) = v4 | 8;
    v4 = v1;
  }
  if ( a1 & 8 )
    v4 |= 4u;
  if ( a1 & 0x10 )
    v4 |= 2u;
  if ( a1 & 0x20 )
  {
    v2 = v4;
    LOBYTE(v2) = v4 | 1;
    v4 = v2;
  }
  if ( a1 & 2 )
    v4 |= 0x80000u;
  return v4;
}

//----- (004459E0) --------------------------------------------------------
int __usercall sub_4459E0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, signed int a4)
{
  int result; // eax@5
  __int16 v5; // cx@9
  int v6; // [sp+0h] [bp-10h]@8
  CHAR DestStr[4]; // [sp+4h] [bp-Ch]@15
  const CHAR MultiByteStr; // [sp+8h] [bp-8h]@13
  char v9; // [sp+9h] [bp-7h]@13
  char v10; // [sp+Ah] [bp-6h]@13
  int cbMultiByte; // [sp+Ch] [bp-4h]@13

  if ( dword_6D51F8C )
  {
    if ( a4 >= 256
      || (::cbMultiByte <= 1 ? (v5 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * a4), v6 = v5 & 1) : (v6 = sub_43D9C0(a1, a2, a3, a4, 1)),
          v6) )
    {
      if ( *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * ((a4 >> 8) & 0xFF)) & 0x8000 )
      {
        MultiByteStr = BYTE1(a4);
        v9 = a4;
        v10 = 0;
        cbMultiByte = 2;
      }
      else
      {
        MultiByteStr = a4;
        v9 = 0;
        cbMultiByte = 1;
      }
      cbMultiByte = sub_445010(
                      cbMultiByte,
                      a1,
                      a2,
                      a3,
                      dword_6D51F8C,
                      0x100u,
                      &MultiByteStr,
                      cbMultiByte,
                      DestStr,
                      3,
                      0,
                      1);
      if ( cbMultiByte )
      {
        if ( cbMultiByte == 1 )
          result = (unsigned __int8)DestStr[0];
        else
          result = ((unsigned __int8)DestStr[1] << 8) | (unsigned __int8)DestStr[0];
      }
      else
      {
        result = a4;
      }
    }
    else
    {
      result = a4;
    }
  }
  else
  {
    if ( a4 >= 65 )
    {
      if ( a4 <= 90 )
        a4 += 32;
    }
    result = a4;
  }
  return result;
}
// 482AA8: using guessed type __int16 off_482AA8[2];

//----- (00445B10) --------------------------------------------------------
signed int __cdecl sub_445B10(int a1, signed int a2)
{
  signed int result; // eax@2
  int i; // [sp+0h] [bp-Ch]@3

  if ( ~(-1 << (31 - a2 % 32)) & *(_DWORD *)(a1 + 4 * a2 / 32) )
  {
    result = 0;
  }
  else
  {
    for ( i = a2 / 32 + 1; i < 3; ++i )
    {
      if ( *(_DWORD *)(a1 + 4 * i) )
        return 0;
    }
    result = 1;
  }
  return result;
}

//----- (00445BA0) --------------------------------------------------------
signed int __cdecl sub_445BA0(int a1, signed int a2)
{
  signed int v3; // [sp+0h] [bp-10h]@1
  int i; // [sp+4h] [bp-Ch]@1

  v3 = sub_447060(*(_DWORD *)(a1 + 4 * a2 / 32), 1 << (31 - a2 % 32), a1 + 4 * a2 / 32);
  for ( i = a2 / 32 - 1; i >= 0 && v3; --i )
    v3 = sub_447060(*(_DWORD *)(a1 + 4 * i), 1u, a1 + 4 * i);
  return v3;
}

//----- (00445C50) --------------------------------------------------------
signed int __cdecl sub_445C50(int a1, signed int a2)
{
  signed int v3; // [sp+4h] [bp-18h]@1
  int v4; // [sp+8h] [bp-14h]@1
  int i; // [sp+Ch] [bp-10h]@4
  char v6; // [sp+14h] [bp-8h]@1

  v3 = 0;
  v4 = a2 / 32;
  v6 = 31 - a2 % 32;
  if ( (1 << v6) & *(_DWORD *)(a1 + 4 * a2 / 32) && !sub_445B10(a1, a2 + 1) )
    v3 = sub_445BA0(a1, a2 - 1);
  *(_DWORD *)(a1 + 4 * v4) &= -1 << v6;
  for ( i = v4 + 1; i < 3; ++i )
    *(_DWORD *)(a1 + 4 * i) = 0;
  return v3;
}

//----- (00445D30) --------------------------------------------------------
int __cdecl sub_445D30(int a1, int a2)
{
  int result; // eax@1
  signed int i; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+4h] [bp-8h]@1
  int v5; // [sp+8h] [bp-4h]@1

  result = a2;
  v5 = a2;
  v4 = a1;
  for ( i = 0; i < 3; ++i )
  {
    *(_DWORD *)v4 = *(_DWORD *)v5;
    result = v4 + 4;
    v4 += 4;
    v5 += 4;
  }
  return result;
}

//----- (00445D80) --------------------------------------------------------
int __cdecl sub_445D80(int a1)
{
  int result; // eax@3
  signed int i; // [sp+0h] [bp-4h]@1

  for ( i = 0; i < 3; ++i )
  {
    *(_DWORD *)(a1 + 4 * i) = 0;
    result = i + 1;
  }
  return result;
}

//----- (00445DB0) --------------------------------------------------------
signed int __cdecl sub_445DB0(int a1)
{
  signed int i; // [sp+0h] [bp-4h]@1

  for ( i = 0; i < 3; ++i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) )
      return 0;
  }
  return 1;
}

//----- (00445DF0) --------------------------------------------------------
int __cdecl sub_445DF0(int a1, signed int a2)
{
  int result; // eax@1
  int v3; // ST0C_4@3
  int v4; // [sp+4h] [bp-18h]@1
  signed int i; // [sp+10h] [bp-Ch]@1
  signed int j; // [sp+10h] [bp-Ch]@4
  int v7; // [sp+14h] [bp-8h]@1
  int v8; // [sp+18h] [bp-4h]@1

  v4 = a2 / 32;
  result = a2 % 32;
  v8 = a2 % 32;
  v7 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v3 = ~(-1 << a2 % 32) & *(_DWORD *)(a1 + 4 * i);
    *(_DWORD *)(a1 + 4 * i) >>= v8;
    *(_DWORD *)(a1 + 4 * i) |= v7;
    v7 = v3 << (32 - v8);
    result = i + 1;
  }
  for ( j = 2; j >= 0; --j )
  {
    if ( j < v4 )
      *(_DWORD *)(a1 + 4 * j) = 0;
    else
      *(_DWORD *)(a1 + 4 * j) = *(_DWORD *)(a1 + 4 * (j - v4));
    result = j - 1;
  }
  return result;
}

//----- (00445EE0) --------------------------------------------------------
int __cdecl sub_445EE0(int a1, int a2, int a3)
{
  signed int v3; // ST08_4@11
  char v5; // [sp+4h] [bp-30h]@6
  int v6; // [sp+10h] [bp-24h]@15
  int v7; // [sp+14h] [bp-20h]@1
  int v8; // [sp+18h] [bp-1Ch]@3
  int v9; // [sp+1Ch] [bp-18h]@1
  int v10; // [sp+20h] [bp-14h]@1
  int v11; // [sp+24h] [bp-10h]@1
  int v12; // [sp+28h] [bp-Ch]@15
  int v13; // [sp+2Ch] [bp-8h]@2
  int v14; // [sp+30h] [bp-4h]@1

  v14 = (*(_WORD *)(a1 + 10) & 0x7FFF) - 16383;
  v7 = *(_WORD *)(a1 + 10) & 0x8000;
  v9 = *(_DWORD *)(a1 + 6);
  v10 = *(_DWORD *)(a1 + 2);
  v11 = *(_WORD *)a1 << 16;
  if ( v14 == -16383 )
  {
    v13 = 0;
    if ( sub_445DB0((int)&v9) )
    {
      v8 = 0;
    }
    else
    {
      sub_445D80((int)&v9);
      v8 = 2;
    }
  }
  else
  {
    sub_445D30((int)&v5, (int)&v9);
    if ( sub_445C50((int)&v9, *(_DWORD *)(a3 + 8)) )
      ++v14;
    if ( v14 >= *(_DWORD *)(a3 + 4) - *(_DWORD *)(a3 + 8) )
    {
      if ( v14 > *(_DWORD *)(a3 + 4) )
      {
        if ( v14 < *(_DWORD *)a3 )
        {
          v13 = *(_DWORD *)(a3 + 20) + v14;
          v9 &= 0x7FFFFFFFu;
          sub_445DF0((int)&v9, *(_DWORD *)(a3 + 12));
          v8 = 0;
        }
        else
        {
          sub_445D80((int)&v9);
          v9 |= 0x80000000u;
          sub_445DF0((int)&v9, *(_DWORD *)(a3 + 12));
          v13 = *(_DWORD *)(a3 + 20) + *(_DWORD *)a3;
          v8 = 1;
        }
      }
      else
      {
        v3 = *(_DWORD *)(a3 + 4) - v14;
        sub_445D30((int)&v9, (int)&v5);
        sub_445DF0((int)&v9, v3);
        sub_445C50((int)&v9, *(_DWORD *)(a3 + 8));
        sub_445DF0((int)&v9, *(_DWORD *)(a3 + 12) + 1);
        v13 = 0;
        v8 = 2;
      }
    }
    else
    {
      sub_445D80((int)&v9);
      v13 = 0;
      v8 = 2;
    }
  }
  v12 = 32 - (*(_DWORD *)(a3 + 12) + 1);
  v6 = (v7 != 0 ? 0x80000000 : 0) | (v13 << v12) | v9;
  if ( *(_DWORD *)(a3 + 16) == 64 )
  {
    *(_DWORD *)(a2 + 4) = v6;
    *(_DWORD *)a2 = v10;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 16) == 32 )
      *(_DWORD *)a2 = v6;
  }
  return v8;
}

//----- (00446130) --------------------------------------------------------
int __cdecl sub_446130(int a1, int a2)
{
  return sub_445EE0(a1, a2, (int)&unk_4832A0);
}

//----- (00446150) --------------------------------------------------------
int __cdecl sub_446150(int a1, int a2)
{
  return sub_445EE0(a1, a2, (int)&unk_4832B8);
}

//----- (00446170) --------------------------------------------------------
signed int __cdecl sub_446170(int a1, int a2)
{
  __int16 v3; // [sp+0h] [bp-18h]@1
  signed int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-Ch]@1
  int v7; // [sp+10h] [bp-8h]@1
  int v8; // [sp+14h] [bp-4h]@1

  v4 = 0;
  LOWORD(v8) = *(_WORD *)(a1 + 10) & 0x7FFF;
  v3 = *(_WORD *)(a1 + 10) & 0x8000;
  v5 = *(_DWORD *)(a1 + 6);
  v6 = *(_DWORD *)(a1 + 2);
  v7 = *(_WORD *)a1 << 16;
  if ( sub_445C50((int)&v5, 64) )
  {
    v5 = -2147483648;
    LOWORD(v8) = v8 + 1;
  }
  if ( (unsigned __int16)v8 == 32767 )
    v4 = 1;
  *(_DWORD *)(a2 + 4) = v5;
  *(_DWORD *)a2 = v6;
  *(_WORD *)(a2 + 8) = v8 | v3;
  return v4;
}

//----- (00446230) --------------------------------------------------------
int __usercall sub_446230<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5)
{
  char v6; // [sp+0h] [bp-10h]@1
  char v7; // [sp+4h] [bp-Ch]@1

  sub_447360(a1, a2, a3, (int)&v7, (int)&v6, a5, 0, 0, 0, 0);
  return sub_446130((int)&v7, a4);
}

//----- (004462B0) --------------------------------------------------------
int __usercall sub_4462B0<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5)
{
  char v6; // [sp+0h] [bp-10h]@1
  char v7; // [sp+4h] [bp-Ch]@1

  sub_447360(a1, a2, a3, (int)&v7, (int)&v6, a5, 0, 0, 0, 0);
  return sub_446150((int)&v7, a4);
}

//----- (004462F0) --------------------------------------------------------
void *__cdecl sub_4462F0(int a1, int a2, int a3)
{
  void *result; // eax@14
  int v4; // eax@15
  char v5; // [sp+0h] [bp-Ch]@4
  int v6; // [sp+4h] [bp-8h]@1
  int v7; // [sp+8h] [bp-4h]@1
  int i; // [sp+8h] [bp-4h]@9

  v6 = *(_DWORD *)(a3 + 12);
  *(_BYTE *)a1 = 48;
  v7 = a1 + 1;
  while ( a2 > 0 )
  {
    if ( *(_BYTE *)v6 )
      v5 = *(_BYTE *)v6++;
    else
      v5 = 48;
    *(_BYTE *)v7++ = v5;
    --a2;
  }
  *(_BYTE *)v7 = 0;
  if ( a2 >= 0 && (signed int)*(_BYTE *)v6 >= 53 )
  {
    for ( i = v7 - 1; *(_BYTE *)i == 57; --i )
      *(_BYTE *)i = 48;
    ++*(_BYTE *)i;
  }
  if ( *(_BYTE *)a1 == 49 )
  {
    result = (void *)a3;
    ++*(_DWORD *)(a3 + 4);
  }
  else
  {
    v4 = sub_434FC0(a1 + 1);
    result = sub_4465E0((void *)a1, (const void *)(a1 + 1), v4 + 1);
  }
  return result;
}

//----- (004463F0) --------------------------------------------------------
int *__cdecl sub_4463F0(char a1)
{
  unsigned int v2; // [sp+0h] [bp-Ch]@1
  unsigned int v3; // [sp+4h] [bp-8h]@1
  __int16 v4; // [sp+8h] [bp-4h]@1

  sub_446470((int)&v2, (int)&a1);
  dword_6D51FD8 = sub_447EE0(v2, v3, v4, 17, 0, (int)&word_6D51FB0);
  dword_6D51FD0 = byte_6D51FB2;
  dword_6D51FD4 = word_6D51FB0;
  dword_6D51FDC = (int)&unk_6D51FB4;
  return &dword_6D51FD0;
}
// 6D51FB0: using guessed type __int16 word_6D51FB0;
// 6D51FB2: using guessed type char byte_6D51FB2;
// 6D51FD0: using guessed type int dword_6D51FD0;
// 6D51FD4: using guessed type int dword_6D51FD4;
// 6D51FD8: using guessed type int dword_6D51FD8;
// 6D51FDC: using guessed type int dword_6D51FDC;

//----- (00446470) --------------------------------------------------------
int __cdecl sub_446470(int a1, int a2)
{
  int v2; // edx@1
  int result; // eax@6
  unsigned __int16 v4; // [sp+4h] [bp-18h]@1
  unsigned __int16 v5; // [sp+8h] [bp-14h]@1
  unsigned int v6; // [sp+Ch] [bp-10h]@1
  signed int v7; // [sp+10h] [bp-Ch]@1
  int v8; // [sp+14h] [bp-8h]@1
  signed __int16 v9; // [sp+18h] [bp-4h]@3

  v7 = -2147483648;
  v5 = (*(_WORD *)(a2 + 6) & 0x7FF0) >> 4;
  v4 = *(_WORD *)(a2 + 6) & 0x8000;
  v2 = *(_DWORD *)(a2 + 4);
  v8 = v2 & 0xFFFFF;
  v6 = *(_DWORD *)a2;
  if ( v5 )
  {
    if ( v5 == 2047 )
      v9 = 32767;
    else
      v9 = v5 - 1023 + 16383;
  }
  else
  {
    if ( !v8 && !v6 )
    {
      result = a1;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
      *(_WORD *)(a1 + 8) = 0;
      return result;
    }
    v9 = 15361;
    v7 = 0;
  }
  *(_DWORD *)(a1 + 4) = (v6 >> 21) | (v8 << 11) | v7;
  *(_DWORD *)a1 = v6 << 11;
  while ( !(*(_DWORD *)(a1 + 4) & 0x80000000) )
  {
    *(_DWORD *)(a1 + 4) = (*(_DWORD *)a1 & 0x80000000) != 0 | 2 * *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 *= 2;
    --v9;
  }
  result = (unsigned __int16)v9 | v4;
  *(_WORD *)(a1 + 8) = result;
  return result;
}

//----- (004465E0) --------------------------------------------------------
void *__cdecl sub_4465E0(void *a1, const void *a2, unsigned int a3)
{
  int v3; // esi@1
  int v4; // edi@1
  unsigned int v5; // ecx@4
  void *result; // eax@18
  int v7; // esi@22
  int v8; // edi@22
  unsigned int v9; // ecx@23

  v3 = (int)a2;
  v4 = (int)a1;
  if ( a1 > a2 && a1 < (char *)a2 + a3 )
  {
    v7 = (int)((char *)a2 + a3 - 4);
    v8 = (int)((char *)a1 + a3 - 4);
    if ( v8 & 3 )
    {
      if ( a3 >= 4 )
        JUMPOUT(__CS__, *((_DWORD *)loc_4467C4 + (v8 & 3) + 1));
      switch ( a3 )
      {
        case 0u:
LABEL_30:
          result = a1;
          break;
        case 1u:
LABEL_31:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
          result = a1;
          break;
        case 2u:
LABEL_32:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
          *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
          result = a1;
          break;
        case 3u:
          goto LABEL_33;
      }
    }
    else
    {
      v9 = a3 >> 2;
      if ( a3 >> 2 < 8 )
      {
        switch ( -v9 )
        {
          case 0:
            break;
        }
      }
      else
      {
        memcpy((void *)v8, (const void *)v7, 4 * v9);
        v7 += 4 * v9;
        v8 += 4 * v9;
      }
      switch ( a3 & 3 )
      {
        case 0u:
          goto LABEL_30;
        case 1u:
          goto LABEL_31;
        case 2u:
          goto LABEL_32;
        case 3u:
          break;
      }
LABEL_33:
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
      *(_BYTE *)(v8 + 1) = *(_BYTE *)(v7 + 1);
      result = a1;
    }
  }
  else
  {
    if ( (unsigned __int8)a1 & 3 )
    {
      if ( a3 >= 4 )
        JUMPOUT(__CS__, *((_DWORD *)loc_44663C + ((unsigned __int8)a1 & 3) + 1));
      JUMPOUT(__CS__, *((_DWORD *)loc_446738 + a3 - 4));
    }
    v5 = a3 >> 2;
    if ( a3 >> 2 < 8 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_6;
        case 1u:
          goto LABEL_17;
        case 2u:
          goto LABEL_16;
        case 3u:
          goto LABEL_15;
        case 4u:
          goto LABEL_14;
        case 5u:
          goto LABEL_13;
        case 6u:
          break;
        case 7u:
          *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)a2 + v5 - 7);
          break;
      }
      *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)a2 + v5 - 6);
LABEL_13:
      *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)a2 + v5 - 5);
LABEL_14:
      *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)a2 + v5 - 4);
LABEL_15:
      *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)a2 + v5 - 3);
LABEL_16:
      *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)a2 + v5 - 2);
LABEL_17:
      *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)a2 + v5 - 1);
      v3 = (int)((char *)a2 + 4 * v5);
      v4 = (int)((char *)a1 + 4 * v5);
    }
    else
    {
      memcpy(a1, a2, 4 * v5);
      v3 = (int)((char *)a2 + 4 * v5);
      v4 = (int)((char *)a1 + 4 * v5);
    }
LABEL_6:
    switch ( a3 & 3 )
    {
      case 0u:
        result = a1;
        break;
      case 1u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        result = a1;
        break;
      case 2u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        result = a1;
        break;
      case 3u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        *(_BYTE *)(v4 + 2) = *(_BYTE *)(v3 + 2);
        result = a1;
        break;
    }
  }
  return result;
}
// 44663C: using guessed type int __cdecl loc_44663C(int, int, int);
// 446738: using guessed type int __cdecl loc_446738(int, int, int);
// 4467C4: using guessed type int __cdecl loc_4467C4(int, int, int);

//----- (00446920) --------------------------------------------------------
int __usercall sub_446920<eax>(int a1<ebx>, int a2<esi>)
{
  return sub_4392E0(a1, a2, 2);
}

//----- (00446930) --------------------------------------------------------
int __usercall sub_446930<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4)
{
  int *v5; // [sp+0h] [bp-8h]@1
  unsigned int v6; // [sp+4h] [bp-4h]@10

  v5 = (int *)dword_6D51CE8;
  if ( !dword_6D5378C )
    return 0;
  if ( !dword_6D51CE8 && dword_6D51CF0 )
  {
    if ( sub_448450(a1, a2, a3) )
      return 0;
    v5 = (int *)dword_6D51CE8;
  }
  if ( v5 && a4 )
  {
    v6 = sub_434FC0(a4);
    while ( *v5 )
    {
      if ( sub_434FC0(*v5) > v6 && *(_BYTE *)(*v5 + v6) == 61 && !sub_448400(a1, a2, a3, (PCNZCH)*v5, (PCNZCH)a4, v6) )
        return *v5 + v6 + 1;
      ++v5;
    }
  }
  return 0;
}
// 6D51CE8: using guessed type int dword_6D51CE8;
// 6D51CF0: using guessed type int dword_6D51CF0;
// 6D5378C: using guessed type int dword_6D5378C;

//----- (00446A00) --------------------------------------------------------
LONG __userpurge TopLevelExceptionFilter<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, struct _EXCEPTION_POINTERS *a4)
{
  LONG result; // eax@7

  if ( a4->ExceptionRecord->ExceptionCode == -529697949
    && a4->ExceptionRecord->NumberParameters == 3
    && a4->ExceptionRecord->ExceptionInformation[0] == 429065504 )
    sub_4423D0((int)a4->ExceptionRecord, a1, a2, a3);
  if ( lpTopLevelExceptionFilter && sub_446B00((FARPROC)lpTopLevelExceptionFilter) )
    result = lpTopLevelExceptionFilter(a4);
  else
    result = 0;
  return result;
}

//----- (00446A60) --------------------------------------------------------
LONG (__stdcall *__cdecl sub_446A60())(struct _EXCEPTION_POINTERS *)
{
  LONG (__stdcall *result)(struct _EXCEPTION_POINTERS *); // eax@1

  result = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)TopLevelExceptionFilter);
  lpTopLevelExceptionFilter = result;
  return result;
}

//----- (00446A80) --------------------------------------------------------
LPTOP_LEVEL_EXCEPTION_FILTER __cdecl sub_446A80()
{
  return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

//----- (00446AA0) --------------------------------------------------------
signed int __cdecl sub_446AA0(const void *lp, UINT_PTR ucb)
{
  signed int v3; // [sp+0h] [bp-4h]@1

  v3 = 1;
  if ( IsBadReadPtr(lp, ucb) )
    v3 = 0;
  return v3;
}

//----- (00446AD0) --------------------------------------------------------
signed int __cdecl sub_446AD0(LPVOID lp, UINT_PTR ucb)
{
  signed int v3; // [sp+0h] [bp-4h]@1

  v3 = 1;
  if ( IsBadWritePtr(lp, ucb) )
    v3 = 0;
  return v3;
}

//----- (00446B00) --------------------------------------------------------
signed int __cdecl sub_446B00(FARPROC lpfn)
{
  signed int v2; // [sp+0h] [bp-4h]@1

  v2 = 1;
  if ( IsBadCodePtr(lpfn) )
    v2 = 0;
  return v2;
}

//----- (00446B30) --------------------------------------------------------
unsigned int __usercall sub_446B30<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  sub_4435B0(a1, a3, 10);
  sub_444150(a1, a2, a3, 22);
  return sub_435D90(a1, a2, a3, 3u);
}

//----- (00446B50) --------------------------------------------------------
int __usercall sub_446B50<eax>(int a1<ebx>, int a2<esi>)
{
  signed int i; // [sp+0h] [bp-8h]@1
  int v4; // [sp+4h] [bp-4h]@1

  v4 = 0;
  for ( i = 3; i < dword_6D53340; ++i )
  {
    if ( *(_DWORD *)(dword_6D51FEC + 4 * i) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(dword_6D51FEC + 4 * i) + 12) & 0x83
        && sub_4346D0(a1, a2, *(_DWORD *)(dword_6D51FEC + 4 * i)) != -1 )
        ++v4;
      if ( i >= 20 )
      {
        sub_436DA0(a1, a2, *(_DWORD *)(dword_6D51FEC + 4 * i), 2);
        *(_DWORD *)(dword_6D51FEC + 4 * i) = 0;
      }
    }
  }
  return v4;
}
// 6D51FEC: using guessed type int dword_6D51FEC;
// 6D53340: using guessed type int dword_6D53340;

//----- (00446D00) --------------------------------------------------------
bool __cdecl sub_446D00(unsigned __int8 a1)
{
  return sub_446D80(a1, 0, 4);
}

//----- (00446D80) --------------------------------------------------------
bool __cdecl sub_446D80(unsigned __int8 a1, int a2, char a3)
{
  int v5; // [sp+4h] [bp-4h]@3

  return (unsigned __int8)(a3 & byte_6D53661[a1])
      || (!a2 ? (v5 = 0) : (v5 = (unsigned __int16)(a2 & word_482AB2[a1])), v5);
}
// 482AB2: using guessed type __int16 word_482AB2[];

//----- (00446DF0) --------------------------------------------------------
signed int __usercall sub_446DF0<eax>(int a1<ebx>, int a2<esi>, signed int a3, LONG lDistanceToMove)
{
  signed int result; // eax@3
  void *v5; // eax@22
  char v6; // [sp+0h] [bp-1030h]@0
  DWORD nNumberOfBytesToWrite; // [sp+Ch] [bp-1024h]@13
  int v8; // [sp+14h] [bp-101Ch]@1
  __int32 v9; // [sp+18h] [bp-1018h]@10
  signed int v10; // [sp+20h] [bp-1010h]@8
  signed int v11; // [sp+24h] [bp-100Ch]@7
  int v12; // [sp+28h] [bp-1008h]@15
  char v13; // [sp+2Ch] [bp-1004h]@11
  int v14; // [sp+102Ch] [bp-4h]@11

  v8 = 0;
  if ( a3 < uNumber && *(_BYTE *)(dword_6D53380[a3 >> 5] + 8 * (a3 & 0x1F) + 4) & 1 )
  {
    if ( lDistanceToMove < 0 && sub_43A570(a1, a2, 2, (int)"chsize.c", 129, 0, "size >= 0", v6) == 1 )
      __debugbreak();
    v11 = sub_4361B0(a3, 0, 1u);
    if ( v11 != -1 && (v10 = sub_4361B0(a3, 0, 2u), v10 != -1) )
    {
      v9 = lDistanceToMove - v10;
      if ( lDistanceToMove - v10 <= 0 )
      {
        if ( v9 < 0 )
        {
          sub_4361B0(a3, lDistanceToMove, 0);
          v5 = (void *)sub_43F3D0(a3);
          v8 = (SetEndOfFile(v5) != 0) - 1;
          if ( v8 == -1 )
          {
            dword_6D51CC0 = 13;
            dword_6D51CC4 = GetLastError();
          }
        }
      }
      else
      {
        sub_434AB0(&v13, 0, 0x1000u);
        v14 = sub_448500(a3, 32768);
        while ( 1 )
        {
          nNumberOfBytesToWrite = v9 < 4096 ? v9 : 4096;
          v12 = sub_435F00(a3, (signed int)&v13, nNumberOfBytesToWrite);
          if ( v12 == -1 )
            break;
          v9 -= v12;
          if ( v9 <= 0 )
            goto LABEL_20;
        }
        if ( dword_6D51CC4 == 5 )
          dword_6D51CC0 = 13;
        v8 = -1;
LABEL_20:
        sub_448500(a3, v14);
      }
      sub_4361B0(a3, v11, 0);
      result = v8;
    }
    else
    {
      result = -1;
    }
  }
  else
  {
    dword_6D51CC0 = 9;
    result = -1;
  }
  return result;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D51CC4: using guessed type int dword_6D51CC4;
// 6D53380: using guessed type int dword_6D53380[];

//----- (00447060) --------------------------------------------------------
signed int __cdecl sub_447060(unsigned int a1, unsigned int a2, int a3)
{
  signed int v4; // [sp+0h] [bp-8h]@1
  int v5; // [sp+4h] [bp-4h]@1

  v4 = 0;
  v5 = a2 + a1;
  if ( a2 + a1 < a1 || v5 < a2 )
    v4 = 1;
  *(_DWORD *)a3 = v5;
  return v4;
}

//----- (004470A0) --------------------------------------------------------
signed int __cdecl sub_4470A0(int a1, int a2)
{
  if ( sub_447060(*(_DWORD *)a1, *(_DWORD *)a2, a1) && sub_447060(*(_DWORD *)(a1 + 4), 1u, a1 + 4) )
    ++*(_DWORD *)(a1 + 8);
  if ( sub_447060(*(_DWORD *)(a1 + 4), *(_DWORD *)(a2 + 4), a1 + 4) )
    ++*(_DWORD *)(a1 + 8);
  return sub_447060(*(_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 8), a1 + 8);
}

//----- (00447150) --------------------------------------------------------
int __cdecl sub_447150(int a1)
{
  bool v1; // ST04_4@1
  bool v2; // ST00_4@1
  int result; // eax@1

  v1 = (*(_DWORD *)a1 & 0x80000000) != 0;
  v2 = (*(_DWORD *)(a1 + 4) & 0x80000000) != 0;
  *(_DWORD *)a1 *= 2;
  *(_DWORD *)(a1 + 4) = v1 | 2 * *(_DWORD *)(a1 + 4);
  result = a1;
  *(_DWORD *)(a1 + 8) = v2 | 2 * *(_DWORD *)(a1 + 8);
  return result;
}

//----- (004471B0) --------------------------------------------------------
int __cdecl sub_4471B0(int a1)
{
  int v1; // ST00_4@1
  int v2; // ST04_4@1
  int result; // eax@1

  v1 = (*(_DWORD *)(a1 + 8) & 1) != 0 ? 0x80000000 : 0;
  v2 = (*(_DWORD *)(a1 + 4) & 1) != 0 ? 0x80000000 : 0;
  *(_DWORD *)(a1 + 8) >>= 1;
  *(_DWORD *)(a1 + 4) = v1 | (*(_DWORD *)(a1 + 4) >> 1);
  result = a1;
  *(_DWORD *)a1 = v2 | (*(_DWORD *)a1 >> 1);
  return result;
}

//----- (00447220) --------------------------------------------------------
int __cdecl sub_447220(int a1, int a2, int a3)
{
  int result; // eax@8
  signed __int16 v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@3
  int v6; // [sp+8h] [bp-8h]@3
  int v7; // [sp+Ch] [bp-4h]@3

  v4 = 16462;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  while ( a2 )
  {
    v5 = *(_DWORD *)a3;
    v6 = *(_DWORD *)(a3 + 4);
    v7 = *(_DWORD *)(a3 + 8);
    sub_447150(a3);
    sub_447150(a3);
    sub_4470A0(a3, (int)&v5);
    sub_447150(a3);
    v5 = *(_BYTE *)a1;
    v6 = 0;
    v7 = 0;
    sub_4470A0(a3, (int)&v5);
    --a2;
    ++a1;
  }
  while ( !*(_DWORD *)(a3 + 8) )
  {
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4) >> 16;
    *(_DWORD *)(a3 + 4) = *(_QWORD *)a3 >> 16;
    *(_DWORD *)a3 <<= 16;
    v4 -= 16;
  }
  while ( !(*(_DWORD *)(a3 + 8) & 0x8000) )
  {
    sub_447150(a3);
    --v4;
  }
  result = a3;
  *(_WORD *)(a3 + 10) = v4;
  return result;
}

//----- (00447360) --------------------------------------------------------
int __usercall sub_447360<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  __int16 v10; // ax@45
  __int16 v11; // cx@63
  __int16 v12; // cx@75
  __int16 v13; // dx@109
  __int16 v14; // cx@118
  int v16; // [sp+4h] [bp-B0h]@117
  int v17; // [sp+8h] [bp-ACh]@108
  int v18; // [sp+14h] [bp-A0h]@74
  int v19; // [sp+1Ch] [bp-98h]@62
  int v20; // [sp+24h] [bp-90h]@44
  int v21; // [sp+38h] [bp-7Ch]@106
  signed int v22; // [sp+3Ch] [bp-78h]@1
  signed int v23; // [sp+40h] [bp-74h]@1
  int v24; // [sp+44h] [bp-70h]@1
  int v25; // [sp+48h] [bp-6Ch]@1
  char *v26; // [sp+4Ch] [bp-68h]@1
  int i; // [sp+4Ch] [bp-68h]@137
  int v28; // [sp+50h] [bp-64h]@1
  __int16 v29; // [sp+54h] [bp-60h]@140
  int v30; // [sp+56h] [bp-5Eh]@150
  int v31; // [sp+5Ah] [bp-5Ah]@150
  __int16 v32; // [sp+5Eh] [bp-56h]@150
  int v33; // [sp+60h] [bp-54h]@1
  int v34; // [sp+64h] [bp-50h]@150
  int v35; // [sp+68h] [bp-4Ch]@1
  __int16 v36; // [sp+6Ch] [bp-48h]@150
  int v37; // [sp+70h] [bp-44h]@1
  int v38; // [sp+74h] [bp-40h]@1
  int v39; // [sp+78h] [bp-3Ch]@8
  char v40; // [sp+7Ch] [bp-38h]@1
  char v41; // [sp+93h] [bp-21h]@133
  int v42; // [sp+98h] [bp-1Ch]@1
  int v43; // [sp+9Ch] [bp-18h]@1
  int v44; // [sp+A0h] [bp-14h]@1
  int v45; // [sp+A4h] [bp-10h]@150
  int v46; // [sp+A8h] [bp-Ch]@1
  int v47; // [sp+ACh] [bp-8h]@150
  int v48; // [sp+B0h] [bp-4h]@1

  v26 = &v40;
  LOWORD(v42) = 0;
  v23 = 1;
  v24 = 0;
  v33 = 0;
  v46 = 0;
  v43 = 0;
  v38 = 0;
  v22 = 0;
  v44 = 0;
  v25 = 0;
  v37 = 0;
  v35 = 0;
  v48 = a6;
  v28 = a6;
  while ( *(_BYTE *)v48 == 32 || *(_BYTE *)v48 == 9 || *(_BYTE *)v48 == 10 || *(_BYTE *)v48 == 13 )
    ++v48;
LABEL_7:
  while ( v35 != 10 )
  {
    LOBYTE(v39) = *(_BYTE *)v48++;
    switch ( v35 )
    {
      case 0:
        if ( (char)v39 < 49 || (char)v39 > 57 )
        {
          if ( (char)v39 == byte_482CB8 )
          {
            v35 = 5;
          }
          else
          {
            switch ( (_BYTE)v39 )
            {
              case 0x2B:
                v35 = 2;
                LOWORD(v42) = 0;
                break;
              case 0x2D:
                v35 = 2;
                LOWORD(v42) = -32768;
                break;
              case 0x30:
                v35 = 1;
                break;
              default:
                v35 = 10;
                --v48;
                break;
            }
          }
        }
        else
        {
          v35 = 3;
          --v48;
        }
        break;
      case 1:
        v33 = 1;
        if ( (char)v39 < 49 || (char)v39 > 57 )
        {
          if ( (char)v39 == byte_482CB8 )
          {
            v35 = 4;
          }
          else
          {
            switch ( (char)v39 )
            {
              case 48:
                v35 = 1;
                break;
              case 68:
              case 69:
              case 100:
              case 101:
                v35 = 6;
                break;
              case 43:
              case 45:
                --v48;
                v35 = 11;
                break;
              default:
                v35 = 10;
                --v48;
                break;
            }
          }
        }
        else
        {
          v35 = 3;
          --v48;
        }
        break;
      case 2:
        if ( (char)v39 < 49 || (char)v39 > 57 )
        {
          if ( (char)v39 == byte_482CB8 )
          {
            v35 = 5;
          }
          else
          {
            if ( (_BYTE)v39 == 48 )
            {
              v35 = 1;
            }
            else
            {
              v35 = 10;
              v48 = v28;
            }
          }
        }
        else
        {
          v35 = 3;
          --v48;
        }
        break;
      case 3:
        v33 = 1;
        while ( 1 )
        {
          if ( cbMultiByte <= 1 )
          {
            v10 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v39);
            v20 = v10 & 4;
          }
          else
          {
            v20 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v39, 4);
          }
          if ( !v20 )
            break;
          if ( (unsigned int)v24 >= 0x19 )
          {
            ++v25;
          }
          else
          {
            ++v24;
            *v26++ = v39 - 48;
          }
          LOBYTE(v39) = *(_BYTE *)v48++;
        }
        if ( (char)v39 == byte_482CB8 )
        {
          v35 = 4;
        }
        else
        {
          switch ( (char)v39 )
          {
            case 68:
            case 69:
            case 100:
            case 101:
              v35 = 6;
              break;
            case 43:
            case 45:
              --v48;
              v35 = 11;
              break;
            default:
              v35 = 10;
              --v48;
              break;
          }
        }
        break;
      case 4:
        v33 = 1;
        v46 = 1;
        if ( !v24 )
        {
          while ( (char)v39 == 48 )
          {
            --v25;
            LOBYTE(v39) = *(_BYTE *)v48++;
          }
        }
        while ( 1 )
        {
          if ( cbMultiByte <= 1 )
          {
            v11 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v39);
            v19 = v11 & 4;
          }
          else
          {
            v19 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v39, 4);
          }
          if ( !v19 )
            break;
          if ( (unsigned int)v24 < 0x19 )
          {
            ++v24;
            *v26++ = v39 - 48;
            --v25;
          }
          LOBYTE(v39) = *(_BYTE *)v48++;
        }
        switch ( (char)v39 )
        {
          case 68:
          case 69:
          case 100:
          case 101:
            v35 = 6;
            break;
          case 43:
          case 45:
            --v48;
            v35 = 11;
            break;
          default:
            v35 = 10;
            --v48;
            break;
        }
        break;
      case 5:
        v46 = 1;
        if ( cbMultiByte <= 1 )
        {
          v12 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v39);
          v18 = v12 & 4;
        }
        else
        {
          v18 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v39, 4);
        }
        if ( v18 )
        {
          v35 = 4;
          --v48;
        }
        else
        {
          v35 = 10;
          v48 = v28;
        }
        break;
      case 6:
        v28 = v48 - 2;
        if ( (char)v39 < 49 || (char)v39 > 57 )
        {
          switch ( (_BYTE)v39 )
          {
            case 0x2B:
              v35 = 7;
              break;
            case 0x2D:
              v35 = 7;
              v23 = -1;
              break;
            case 0x30:
              v35 = 8;
              break;
            default:
              v35 = 10;
              v48 -= 2;
              break;
          }
        }
        else
        {
          v35 = 9;
          --v48;
        }
        break;
      case 8:
        v43 = 1;
        while ( (char)v39 == 48 )
          LOBYTE(v39) = *(_BYTE *)v48++;
        if ( (char)v39 < 49 || (char)v39 > 57 )
        {
          v35 = 10;
          --v48;
        }
        else
        {
          v35 = 9;
          --v48;
        }
        break;
      case 7:
        if ( (char)v39 < 49 || (char)v39 > 57 )
        {
          if ( (_BYTE)v39 == 48 )
          {
            v35 = 8;
          }
          else
          {
            v35 = 10;
            v48 = v28;
          }
        }
        else
        {
          v35 = 9;
          --v48;
        }
        break;
      case 9:
        v43 = 1;
        v21 = 0;
        while ( 1 )
        {
          if ( cbMultiByte <= 1 )
          {
            v13 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v39);
            v17 = v13 & 4;
          }
          else
          {
            v17 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v39, 4);
          }
          if ( !v17 )
            break;
          v21 = 10 * v21 + (char)v39 - 48;
          if ( v21 > 5200 )
          {
            v21 = 5201;
            break;
          }
          LOBYTE(v39) = *(_BYTE *)v48++;
        }
        v44 = v21;
        while ( 1 )
        {
          if ( cbMultiByte <= 1 )
          {
            v14 = *(_WORD *)(*(_DWORD *)off_482AA8 + 2 * (unsigned __int8)v39);
            v16 = v14 & 4;
          }
          else
          {
            v16 = sub_43D9C0(a1, a2, a3, (unsigned __int8)v39, 4);
          }
          if ( !v16 )
            break;
          LOBYTE(v39) = *(_BYTE *)v48++;
        }
        v35 = 10;
        --v48;
        break;
      case 11:
        if ( a10 )
        {
          v28 = v48 - 1;
          if ( (_BYTE)v39 == 43 )
          {
            v35 = 7;
          }
          else
          {
            if ( (_BYTE)v39 == 45 )
            {
              v35 = 7;
              v23 = -1;
            }
            else
            {
              v35 = 10;
              --v48;
            }
          }
        }
        else
        {
          v35 = 10;
          --v48;
        }
        break;
      default:
        goto LABEL_7;
    }
  }
  *(_DWORD *)a5 = v48;
  if ( v33 && !v38 )
  {
    if ( (unsigned int)v24 > 0x18 )
    {
      if ( v41 >= 5 )
        ++v41;
      v24 = 24;
      --v26;
      ++v25;
    }
    if ( v24 )
    {
      for ( i = (int)(v26 - 1); !*(_BYTE *)i; --i )
      {
        --v24;
        ++v25;
      }
      sub_447220((int)&v40, v24, (int)&v29);
      if ( v23 < 0 )
        v44 = -v44;
      v44 += v25;
      if ( !v43 )
        v44 += a8;
      if ( !v46 )
        v44 -= a9;
      if ( v44 <= 5200 )
      {
        if ( v44 >= -5200 )
        {
          sub_448A40((int)&v29, v44, a7);
          v36 = v29;
          v47 = v30;
          v45 = v31;
          LOWORD(v34) = v32;
        }
        else
        {
          v22 = 1;
        }
      }
      else
      {
        v38 = 1;
      }
    }
    else
    {
      v36 = 0;
      LOWORD(v34) = 0;
      v45 = 0;
      v47 = 0;
    }
  }
  if ( v33 )
  {
    if ( v38 )
    {
      LOWORD(v34) = 32767;
      v45 = -2147483648;
      v47 = 0;
      v36 = 0;
      v37 |= 2u;
    }
    else
    {
      if ( v22 )
      {
        v36 = 0;
        LOWORD(v34) = 0;
        v45 = 0;
        v47 = 0;
        v37 |= 1u;
      }
    }
  }
  else
  {
    v36 = 0;
    LOWORD(v34) = 0;
    v45 = 0;
    v47 = 0;
    v37 |= 4u;
  }
  *(_WORD *)a4 = v36;
  *(_DWORD *)(a4 + 2) = v47;
  *(_DWORD *)(a4 + 6) = v45;
  *(_WORD *)(a4 + 10) = v42 | v34;
  return v37;
}
// 482AA8: using guessed type __int16 off_482AA8[2];
// 482CB8: using guessed type char byte_482CB8;

//----- (00447EE0) --------------------------------------------------------
signed int __cdecl sub_447EE0(unsigned int a1, unsigned int a2, __int16 a3, signed int a4, char a5, int a6)
{
  int j; // [sp+0h] [bp-74h]@33
  unsigned __int16 v8; // [sp+4h] [bp-70h]@1
  __int16 v9; // [sp+18h] [bp-5Ch]@22
  signed int v10; // [sp+1Ch] [bp-58h]@1
  char v11; // [sp+20h] [bp-54h]@1
  char v12; // [sp+21h] [bp-53h]@1
  char v13; // [sp+22h] [bp-52h]@1
  char v14; // [sp+23h] [bp-51h]@1
  char v15; // [sp+24h] [bp-50h]@1
  char v16; // [sp+25h] [bp-4Fh]@1
  char v17; // [sp+26h] [bp-4Eh]@1
  char v18; // [sp+27h] [bp-4Dh]@1
  char v19; // [sp+28h] [bp-4Ch]@1
  char v20; // [sp+29h] [bp-4Bh]@1
  char v21; // [sp+2Ah] [bp-4Ah]@1
  char v22; // [sp+2Bh] [bp-49h]@1
  unsigned int v23; // [sp+2Ch] [bp-48h]@1
  int i; // [sp+30h] [bp-44h]@29
  int v25; // [sp+34h] [bp-40h]@22
  int v26; // [sp+38h] [bp-3Ch]@1
  char v27[10]; // [sp+3Ch] [bp-38h]@22
  unsigned __int16 v28; // [sp+46h] [bp-2Eh]@22
  int v29; // [sp+48h] [bp-2Ch]@29
  char v30; // [sp+4Ch] [bp-28h]@39
  unsigned int v31; // [sp+50h] [bp-24h]@1
  int v32; // [sp+54h] [bp-20h]@1
  int v33; // [sp+58h] [bp-1Ch]@38
  __int64 v34; // [sp+5Ch] [bp-18h]@38
  int k; // [sp+64h] [bp-10h]@36
  __int16 v36; // [sp+68h] [bp-Ch]@22
  unsigned int v37; // [sp+6Ch] [bp-8h]@22
  int v38; // [sp+70h] [bp-4h]@36

  LOWORD(v26) = 77;
  v32 = 323162868;
  v11 = -52;
  v12 = -52;
  v13 = -52;
  v14 = -52;
  v15 = -52;
  v16 = -52;
  v17 = -52;
  v18 = -52;
  v19 = -52;
  v20 = -52;
  v21 = -5;
  v22 = 63;
  v10 = 1;
  v31 = a2;
  v23 = a1;
  v8 = a3 & 0x7FFF;
  if ( a3 & 0x8000 )
    *(_BYTE *)(a6 + 2) = 45;
  else
    *(_BYTE *)(a6 + 2) = 32;
  if ( !v8 && !v31 && !v23 )
  {
    *(_WORD *)a6 = 0;
    *(_BYTE *)(a6 + 2) = 32;
    *(_BYTE *)(a6 + 3) = 1;
    *(_BYTE *)(a6 + 4) = 48;
    *(_BYTE *)(a6 + 5) = 0;
    return 1;
  }
  if ( v8 == 32767 )
  {
    *(_WORD *)a6 = 1;
    if ( v31 == -2147483648 && !v23 || v31 & 0x40000000 )
    {
      if ( !(a3 & 0x8000) || v31 != -1073741824 || v23 )
      {
        if ( v31 != -2147483648 || v23 )
        {
          sub_434B90(a6 + 4);
          *(_BYTE *)(a6 + 3) = 6;
          v10 = 0;
        }
        else
        {
          sub_434B90(a6 + 4);
          *(_BYTE *)(a6 + 3) = 5;
          v10 = 0;
        }
      }
      else
      {
        sub_434B90(a6 + 4);
        *(_BYTE *)(a6 + 3) = 5;
        v10 = 0;
      }
    }
    else
    {
      sub_434B90(a6 + 4);
      *(_BYTE *)(a6 + 3) = 6;
      v10 = 0;
    }
  }
  else
  {
    v36 = (unsigned __int8)a3;
    LOWORD(v25) = v31 >> 24;
    v37 = 154 * (v31 >> 24) + (unsigned __int16)((signed int)v8 >> 8) * (unsigned __int16)v26 + 19728 * v8 - v32;
    v9 = (154 * (v31 >> 24) + (unsigned __int16)((signed int)v8 >> 8) * (unsigned __int16)v26 + 19728 * v8 - v32) >> 16;
    v28 = a3 & 0x7FFF;
    *(_QWORD *)&v27[2] = __PAIR__(v31, v23);
    *(_WORD *)v27 = 0;
    sub_448A40(
      (int)v27,
      -(signed __int16)((154 * (v31 >> 24)
                       + (unsigned __int16)((signed int)v8 >> 8) * (unsigned __int16)v26
                       + 19728 * v8
                       - v32) >> 16),
      1);
    if ( (signed int)v28 >= 16383 )
    {
      ++v9;
      sub_448600((int)v27, (int)&v11);
    }
    *(_WORD *)a6 = v9;
    if ( a5 & 1 )
    {
      a4 += v9;
      if ( a4 <= 0 )
      {
        *(_WORD *)a6 = 0;
        *(_BYTE *)(a6 + 2) = 32;
        *(_BYTE *)(a6 + 3) = 1;
        *(_BYTE *)(a6 + 4) = 48;
        *(_BYTE *)(a6 + 5) = 0;
        return 1;
      }
    }
    if ( a4 > 21 )
      a4 = 21;
    v29 = v28 - 16382;
    v28 = 0;
    for ( i = 0; i < 8; ++i )
      sub_447150((int)v27);
    if ( v29 < 0 )
    {
      for ( j = -v29 & 0xFF; j > 0; --j )
        sub_4471B0((int)v27);
    }
    v38 = a6 + 4;
    for ( k = a4 + 1; k > 0; --k )
    {
      v33 = *(_DWORD *)v27;
      v34 = *(_QWORD *)&v27[4];
      sub_447150((int)v27);
      sub_447150((int)v27);
      sub_4470A0((int)v27, (int)&v33);
      sub_447150((int)v27);
      *(_BYTE *)v38++ = HIBYTE(v28) + 48;
      HIBYTE(v28) = 0;
    }
    --v38;
    v30 = *(_BYTE *)v38--;
    if ( v30 < 53 )
    {
      while ( v38 >= (unsigned int)(a6 + 4) && *(_BYTE *)v38 == 48 )
        --v38;
      if ( v38 < (unsigned int)(a6 + 4) )
      {
        *(_WORD *)a6 = 0;
        *(_BYTE *)(a6 + 2) = 32;
        *(_BYTE *)(a6 + 3) = 1;
        *(_BYTE *)(a6 + 4) = 48;
        *(_BYTE *)(a6 + 5) = 0;
        return 1;
      }
    }
    else
    {
      while ( v38 >= (unsigned int)(a6 + 4) && *(_BYTE *)v38 == 57 )
        *(_BYTE *)v38-- = 48;
      if ( v38 < (unsigned int)(a6 + 4) )
      {
        ++v38;
        ++*(_WORD *)a6;
      }
      ++*(_BYTE *)v38;
    }
    *(_BYTE *)(a6 + 3) = (_BYTE)v38 - (a6 + 4) + 1;
    *(_BYTE *)(a6 + *(_BYTE *)(a6 + 3) + 4) = 0;
  }
  return v10;
}

//----- (00448400) --------------------------------------------------------
int __usercall sub_448400<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, PCNZCH lpMultiByteStr, PCNZCH lpString2, int cchCount2)
{
  int result; // eax@2
  int v7; // [sp+0h] [bp-4h]@3

  if ( cchCount2 )
  {
    v7 = sub_448B10(cchCount2, a1, a2, a3, Locale, 1u, lpMultiByteStr, cchCount2, lpString2, cchCount2, CodePage);
    if ( v7 )
      result = v7 - 2;
    else
      result = 2147483647;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (00448450) --------------------------------------------------------
signed int __usercall sub_448450<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  int cbMultiByte; // [sp+0h] [bp-Ch]@3
  int lpMultiByteStr; // [sp+4h] [bp-8h]@5
  LPCWSTR *i; // [sp+8h] [bp-4h]@1

  for ( i = (LPCWSTR *)dword_6D51CF0; *i; ++i )
  {
    cbMultiByte = WideCharToMultiByte(1u, 0, *i, -1, 0, 0, 0, 0);
    if ( !cbMultiByte )
      return -1;
    lpMultiByteStr = sub_436360(a1, a3, cbMultiByte, 2, (int)"wtombenv.c", 61);
    if ( !lpMultiByteStr )
      return -1;
    if ( !WideCharToMultiByte(1u, 0, *i, -1, (LPSTR)lpMultiByteStr, cbMultiByte, 0, 0) )
      return -1;
    sub_448F60(a1, a2, a3, lpMultiByteStr, 0);
  }
  return 0;
}
// 6D51CF0: using guessed type int dword_6D51CF0;

//----- (00448500) --------------------------------------------------------
signed int __cdecl sub_448500(signed int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@4

  if ( a1 >= uNumber || !(*(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 1) )
  {
    dword_6D51CC0 = 9;
    return -1;
  }
  v3 = *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) & 0x80;
  if ( a2 == 32768 )
  {
    *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) &= 0x7Fu;
  }
  else
  {
    if ( a2 != 16384 )
    {
      dword_6D51CC0 = 22;
      return -1;
    }
    *(_BYTE *)(dword_6D53380[a1 >> 5] + 8 * (a1 & 0x1F) + 4) |= 0x80u;
  }
  return v3 != 0 ? 16384 : 32768;
}
// 6D51CC0: using guessed type int dword_6D51CC0;
// 6D53380: using guessed type int dword_6D53380[];

//----- (00448600) --------------------------------------------------------
int __cdecl sub_448600(int a1, int a2)
{
  __int16 v2; // ST3C_2@1
  __int16 v3; // ST34_2@1
  int result; // eax@4
  int v5; // ecx@38
  int j; // [sp+14h] [bp-34h]@19
  unsigned __int16 v7; // [sp+18h] [bp-30h]@1
  unsigned __int16 k; // [sp+18h] [bp-30h]@25
  unsigned __int16 v9; // [sp+1Ch] [bp-2Ch]@1
  int v10; // [sp+20h] [bp-28h]@17
  int v11; // [sp+24h] [bp-24h]@19
  unsigned __int16 v12; // [sp+28h] [bp-20h]@1
  signed int i; // [sp+2Ch] [bp-1Ch]@17
  unsigned __int16 v14; // [sp+30h] [bp-18h]@1
  int v15; // [sp+34h] [bp-14h]@1
  int v16; // [sp+38h] [bp-10h]@1
  int v17; // [sp+3Ch] [bp-Ch]@1
  int v18; // [sp+40h] [bp-8h]@19
  int v19; // [sp+44h] [bp-4h]@1

  v19 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v2 = *(_WORD *)(a1 + 10);
  v3 = *(_WORD *)(a2 + 10);
  v9 = (v3 ^ v2) & 0x8000;
  v14 = v2 & 0x7FFF;
  v12 = v3 & 0x7FFF;
  v7 = v12 + v14;
  if ( (signed int)v14 < 32767 && (signed int)v12 < 32767 && (signed int)v7 <= 49149 )
  {
    if ( (signed int)v7 > 16319 )
    {
      if ( v14 || (++v7, *(_DWORD *)(a1 + 8) & 0x7FFFFFFF) || *(_DWORD *)(a1 + 4) || *(_DWORD *)a1 )
      {
        if ( v12 || (++v7, *(_DWORD *)(a2 + 8) & 0x7FFFFFFF) || *(_DWORD *)(a2 + 4) || *(_DWORD *)a2 )
        {
          v10 = 0;
          for ( i = 0; i < 5; ++i )
          {
            v11 = 2 * i;
            v18 = 8;
            for ( j = 5 - i; j > 0; --j )
            {
              if ( sub_447060(
                     *(int *)((char *)&v15 + v10),
                     *(_WORD *)(v18 + a2) * *(_WORD *)(v11 + a1),
                     (int)((char *)&v15 + v10)) )
                ++*(_WORD *)((char *)&v16 + v10);
              v11 += 2;
              v18 -= 2;
            }
            v10 += 2;
          }
          for ( k = v7 - 16382; (signed __int16)k > 0 && !(v17 & 0x80000000); --k )
            sub_447150((int)&v15);
          if ( (signed __int16)k <= 0 )
          {
            --k;
            while ( (k & 0x8000u) != 0 )
            {
              if ( v15 & 1 )
                ++v19;
              sub_4471B0((int)&v15);
              ++k;
            }
            if ( v19 )
              LOWORD(v15) = v15 | 1;
          }
          if ( (signed int)(unsigned __int16)v15 > 32768 || (v5 = v15, (v5 & 0x1FFFF) == 98304) )
          {
            if ( *(int *)((char *)&v15 + 2) == -1 )
            {
              *(int *)((char *)&v15 + 2) = 0;
              if ( *(int *)((char *)&v16 + 2) == -1 )
              {
                *(int *)((char *)&v16 + 2) = 0;
                if ( HIWORD(v17) == 65535 )
                {
                  HIWORD(v17) = -32768;
                  ++k;
                }
                else
                {
                  ++HIWORD(v17);
                }
              }
              else
              {
                ++*(int *)((char *)&v16 + 2);
              }
            }
            else
            {
              ++*(int *)((char *)&v15 + 2);
            }
          }
          if ( (signed int)k < 32767 )
          {
            *(_WORD *)a1 = HIWORD(v15);
            *(_DWORD *)(a1 + 2) = v16;
            *(_DWORD *)(a1 + 6) = v17;
            result = v9 | k;
            *(_WORD *)(a1 + 10) = result;
          }
          else
          {
            result = a1;
            *(_DWORD *)(a1 + 8) = v9 != 0 ? -32768 : 2147450880;
            *(_DWORD *)(a1 + 4) = 0;
            *(_DWORD *)a1 = 0;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_DWORD *)(a1 + 4) = 0;
          result = a1;
          *(_DWORD *)a1 = 0;
        }
      }
      else
      {
        result = a1;
        *(_WORD *)(a1 + 10) = 0;
      }
    }
    else
    {
      result = a1;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v9 != 0 ? -32768 : 2147450880;
    result = a1;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
  return result;
}

//----- (00448A40) --------------------------------------------------------
char *__cdecl sub_448A40(int a1, signed int a2, int a3)
{
  char *result; // eax@1
  int v4; // [sp+0h] [bp-18h]@7
  int v5; // [sp+4h] [bp-14h]@9
  int v6; // [sp+8h] [bp-10h]@9
  int v7; // [sp+Ch] [bp-Ch]@9
  int v8; // [sp+10h] [bp-8h]@8
  int v9; // [sp+14h] [bp-4h]@1

  result = (char *)&unk_483338 - 96;
  v9 = (int)((char *)&unk_483338 - 96);
  if ( a2 )
  {
    if ( a2 < 0 )
    {
      a2 = -a2;
      v9 = (int)((char *)&unk_483498 - 96);
    }
    if ( !a3 )
    {
      result = (char *)a1;
      *(_WORD *)a1 = 0;
    }
    while ( a2 )
    {
      v9 += 84;
      v4 = a2 & 7;
      result = (char *)(a2 >> 3);
      a2 >>= 3;
      if ( v4 )
      {
        v8 = 12 * v4 + v9;
        if ( (signed int)*(_WORD *)(12 * v4 + v9) >= 32768 )
        {
          v5 = *(_DWORD *)v8;
          v6 = *(_DWORD *)(v8 + 4);
          v7 = *(_DWORD *)(v8 + 8);
          --*(int *)((char *)&v5 + 2);
          v8 = (int)&v5;
        }
        result = (char *)sub_448600(a1, v8);
      }
    }
  }
  return result;
}

//----- (00448B10) --------------------------------------------------------
int __usercall sub_448B10<eax>(int a1<eax>, int a2<ebx>, int a3<edi>, int a4<esi>, LCID Locale, DWORD dwCmpFlags, PCNZCH lpMultiByteStr, signed int cbMultiByte, PCNZCH lpString2, signed int cchCount2, UINT CodePage)
{
  int result; // eax@6
  int v12; // eax@56
  void *v13; // esp@56
  int v14; // eax@62
  void *v15; // esp@62
  int v16; // [sp-Ch] [bp-54h]@1
  int v17; // [sp-8h] [bp-50h]@1
  int v18; // [sp-4h] [bp-4Ch]@1
  int *v19; // [sp+0h] [bp-48h]@62
  int *v20; // [sp+4h] [bp-44h]@56
  BYTE *i; // [sp+8h] [bp-40h]@35
  struct _cpinfo CPInfo; // [sp+Ch] [bp-3Ch]@24
  LPWSTR lpWideCharStr; // [sp+20h] [bp-28h]@62
  LPWSTR lpString1; // [sp+24h] [bp-24h]@56
  int cchWideChar; // [sp+28h] [bp-20h]@60
  int cchCount1; // [sp+2Ch] [bp-1Ch]@54
  int *v27; // [sp+30h] [bp-18h]@1
  int v28; // [sp+38h] [bp-10h]@1
  signed int (__usercall *v29)<eax>(int<ebp>); // [sp+3Ch] [bp-Ch]@1
  _UNKNOWN *v30; // [sp+40h] [bp-8h]@1
  int v31; // [sp+44h] [bp-4h]@1

  v31 = -1;
  v30 = &unk_4790B0;
  v29 = sub_44272C;
  v28 = a1;
  v18 = a2;
  v17 = a4;
  v16 = a3;
  v27 = &v16;
  if ( !dword_6D51FE8 )
  {
    if ( CompareStringW(0, 0, &SrcStr, 1, &SrcStr, 1) )
    {
      dword_6D51FE8 = 1;
    }
    else
    {
      if ( !CompareStringA(0, 0, String2, 1, String2, 1) )
        return 0;
      dword_6D51FE8 = 2;
    }
  }
  if ( cbMultiByte > 0 )
    cbMultiByte = sub_448F10((int)lpMultiByteStr, cbMultiByte);
  if ( cchCount2 > 0 )
    cchCount2 = sub_448F10((int)lpString2, cchCount2);
  if ( dword_6D51FE8 == 2 )
    return CompareStringA(Locale, dwCmpFlags, lpMultiByteStr, cbMultiByte, lpString2, cchCount2);
  if ( dword_6D51FE8 != 1 )
    return 0;
  if ( !CodePage )
    CodePage = dword_6D51F9C;
  if ( cbMultiByte && cchCount2 )
    goto LABEL_70;
  if ( cbMultiByte == cchCount2 )
    return 2;
  if ( cchCount2 > 1 )
    return 1;
  if ( cbMultiByte > 1 )
    return 3;
  if ( !GetCPInfo(CodePage, &CPInfo) )
    return 0;
  if ( (cbMultiByte || cchCount2 != 1) && (cbMultiByte != 1 || cchCount2) )
  {
    if ( sub_43A570(
           a2,
           a4,
           2,
           (int)"a_cmp.c",
           182,
           0,
           "cchCount1==0 && cchCount2==1 || cchCount1==1 && cchCount2==0",
           v16) == 1 )
      __debugbreak();
  }
  if ( cbMultiByte > 0 )
  {
    if ( CPInfo.MaxCharSize >= 2 )
    {
      for ( i = CPInfo.LeadByte; *i && i[1]; i += 2 )
      {
        if ( (unsigned __int8)*lpMultiByteStr >= (signed int)*i && (unsigned __int8)*lpMultiByteStr <= (signed int)i[1] )
          return 2;
      }
      result = 3;
    }
    else
    {
      result = 3;
    }
    return result;
  }
  if ( cchCount2 <= 0 )
  {
LABEL_70:
    cchCount1 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, cbMultiByte, 0, 0);
    if ( cchCount1 )
    {
      v12 = 2 * cchCount1 + 3;
      LOBYTE(v12) = v12 & 0xFC;
      v13 = alloca(v12);
      v20 = &v16;
      v27 = &v16;
      lpString1 = (LPWSTR)&v16;
      v31 = -1;
      if ( &v16 )
      {
        if ( MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpString1, cchCount1) )
        {
          cchWideChar = MultiByteToWideChar(CodePage, 9u, lpString2, cchCount2, 0, 0);
          if ( cchWideChar )
          {
            v14 = 2 * cchWideChar + 3;
            LOBYTE(v14) = v14 & 0xFC;
            v15 = alloca(v14);
            v19 = &v16;
            v27 = &v16;
            lpWideCharStr = (LPWSTR)&v16;
            v31 = -1;
            if ( &v16 )
            {
              if ( MultiByteToWideChar(CodePage, 1u, lpString2, cchCount2, lpWideCharStr, cchWideChar) )
                result = CompareStringW(Locale, dwCmpFlags, lpString1, cchCount1, lpWideCharStr, cchWideChar);
              else
                result = 0;
            }
            else
            {
              result = 0;
            }
          }
          else
          {
            result = 0;
          }
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
    return result;
  }
  if ( CPInfo.MaxCharSize >= 2 )
  {
    for ( i = CPInfo.LeadByte; *i && i[1]; i += 2 )
    {
      if ( (unsigned __int8)*lpString2 >= (signed int)*i && (unsigned __int8)*lpString2 <= (signed int)i[1] )
        return 2;
    }
    result = 1;
  }
  else
  {
    result = 1;
  }
  return result;
}
// 448B10: could not find valid save-restore pair for edi
// 6D51FE8: using guessed type int dword_6D51FE8;

//----- (00448F10) --------------------------------------------------------
int __cdecl sub_448F10(int a1, int a2)
{
  int v2; // edx@2
  int result; // eax@6
  int v4; // [sp+0h] [bp-8h]@1
  int i; // [sp+4h] [bp-4h]@1

  v4 = a2;
  for ( i = a1; ; ++i )
  {
    v2 = v4--;
    if ( !v2 )
      break;
    if ( !*(_BYTE *)i )
      break;
  }
  if ( *(_BYTE *)i )
    result = a2;
  else
    result = i - a1;
  return result;
}

//----- (00448F60) --------------------------------------------------------
signed int __usercall sub_448F60<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5)
{
  int v6; // eax@42
  int v7; // [sp+4h] [bp-18h]@2
  bool v8; // [sp+8h] [bp-14h]@5
  int lpName; // [sp+Ch] [bp-10h]@42
  int v10; // [sp+10h] [bp-Ch]@23
  int v11; // [sp+10h] [bp-Ch]@29
  int v12; // [sp+10h] [bp-Ch]@37
  int v13; // [sp+14h] [bp-8h]@23

  if ( !a4 || (v7 = sub_435040(a4, 61)) == 0 || a4 == v7 )
    return -1;
  v8 = *(_BYTE *)(v7 + 1) == 0;
  if ( dword_6D51CE8 == dword_6D51CEC )
    dword_6D51CE8 = (int)sub_4492C0(a1, a3, (int *)dword_6D51CE8);
  if ( !dword_6D51CE8 )
  {
    if ( a5 && dword_6D51CF0 )
    {
      if ( sub_448450(a1, a2, a3) )
        return -1;
    }
    else
    {
      if ( v8 )
        return 0;
      if ( !dword_6D51CE8 )
      {
        dword_6D51CE8 = sub_436360(a1, a3, 4u, 2, (int)"setenv.c", 135);
        if ( !dword_6D51CE8 )
          return -1;
        *(_DWORD *)dword_6D51CE8 = 0;
      }
      if ( !dword_6D51CF0 )
      {
        dword_6D51CF0 = sub_436360(a1, a3, 4u, 2, (int)"setenv.c", 142);
        if ( !dword_6D51CF0 )
          return -1;
        *(_DWORD *)dword_6D51CF0 = 0;
      }
    }
  }
  v10 = dword_6D51CE8;
  v13 = sub_449240(a1, a2, a3, (const CHAR *)a4, v7 - a4);
  if ( v13 >= 0 && *(_DWORD *)v10 )
  {
    if ( v8 )
    {
      sub_436DA0(a1, a3, *(_DWORD *)(v10 + 4 * v13), 2);
      while ( *(_DWORD *)(v10 + 4 * v13) )
      {
        a3 = v10;
        *(_DWORD *)(v10 + 4 * v13) = *(_DWORD *)(v10 + 4 * v13 + 4);
        ++v13;
      }
      v11 = sub_4367E0(a1, a3, v10, 4 * v13, 2, (int)"setenv.c", 185);
      if ( v11 )
        dword_6D51CE8 = v11;
    }
    else
    {
      *(_DWORD *)(v10 + 4 * v13) = a4;
    }
  }
  else
  {
    if ( v8 )
      return 0;
    if ( v13 < 0 )
      v13 = -v13;
    v12 = sub_4367E0(a1, a3, v10, 4 * v13 + 8, 2, (int)"setenv.c", 206);
    if ( !v12 )
      return -1;
    *(_DWORD *)(v12 + 4 * v13) = a4;
    *(_DWORD *)(v12 + 4 * v13 + 4) = 0;
    dword_6D51CE8 = v12;
  }
  if ( a5 )
  {
    v6 = sub_434FC0(a4);
    lpName = sub_436360(a1, a3, v6 + 2, 2, (int)"setenv.c", 229);
    if ( lpName )
    {
      sub_434B90(lpName);
      *(_BYTE *)(v7 - a4 + lpName) = 0;
      SetEnvironmentVariableA((LPCSTR)lpName, (LPCSTR)(v8 == 0 ? v7 - a4 + lpName + 1 : 0));
      sub_436DA0(a1, a3, lpName, 2);
    }
  }
  return 0;
}
// 6D51CE8: using guessed type int dword_6D51CE8;
// 6D51CEC: using guessed type int dword_6D51CEC;
// 6D51CF0: using guessed type int dword_6D51CF0;

//----- (00449240) --------------------------------------------------------
int __usercall sub_449240<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, const CHAR *a4, int a5)
{
  PCNZCH *i; // [sp+0h] [bp-4h]@1

  for ( i = (PCNZCH *)dword_6D51CE8; *i; ++i )
  {
    if ( !sub_448400(a1, a2, a3, a4, *i, a5) && ((*i)[a5] == 61 || !(*i)[a5]) )
      return (signed int)((char *)i - dword_6D51CE8) >> 2;
  }
  return -((signed int)((char *)i - dword_6D51CE8) >> 2);
}
// 6D51CE8: using guessed type int dword_6D51CE8;

//----- (004492C0) --------------------------------------------------------
int *__usercall sub_4492C0<eax>(int a1<ebx>, int a2<esi>, int *a3)
{
  int *result; // eax@2
  int v4; // edx@3
  int v5; // eax@9
  int v6; // [sp+0h] [bp-10h]@1
  int *v7; // [sp+4h] [bp-Ch]@1
  int *v8; // [sp+4h] [bp-Ch]@7
  int *v9; // [sp+8h] [bp-8h]@5
  int *v10; // [sp+Ch] [bp-4h]@5

  v6 = 0;
  v7 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v4 = *v7;
      ++v7;
      if ( !v4 )
        break;
      ++v6;
    }
    v9 = (int *)sub_436360(a1, a2, 4 * v6 + 4, 2, (int)"setenv.c", 326);
    v10 = v9;
    if ( !v9 )
      sub_4392E0(a1, a2, 9);
    v8 = a3;
    while ( *v8 )
    {
      v5 = sub_434FC0(*v8);
      *v9 = sub_436360(a1, a2, v5 + 1, 2, (int)"setenv.c", 335);
      if ( *v9 )
        sub_434B90(*v9);
      ++v8;
      ++v9;
    }
    *v9 = 0;
    result = v10;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (00449530) --------------------------------------------------------
LPCSTR __usercall sub_449530<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, LPCSTR lpMultiByteStr)
{
  LPCSTR result; // eax@8
  LPCSTR i; // [sp+0h] [bp-Ch]@2
  int lpDestStr; // [sp+4h] [bp-8h]@1
  int cchDest; // [sp+8h] [bp-4h]@9

  lpDestStr = 0;
  if ( dword_6D51F8C )
  {
    cchDest = sub_445010(dword_6D51F8C, a1, a2, a3, dword_6D51F8C, 0x200u, lpMultiByteStr, -1, 0, 0, 0, 1);
    if ( cchDest )
    {
      lpDestStr = sub_436360(a1, a3, cchDest, 2, (int)"strupr.c", 98);
      if ( lpDestStr )
      {
        if ( sub_445010(
               lpDestStr,
               a1,
               a2,
               a3,
               dword_6D51F8C,
               0x200u,
               lpMultiByteStr,
               -1,
               (LPSTR)lpDestStr,
               cchDest,
               0,
               1) )
          sub_434B90((int)lpMultiByteStr);
      }
    }
    sub_436DA0(a1, a3, lpDestStr, 2);
    result = lpMultiByteStr;
  }
  else
  {
    for ( i = lpMultiByteStr; *i; ++i )
    {
      if ( *i >= 97 )
      {
        if ( *i <= 122 )
          *i -= 32;
      }
    }
    result = lpMultiByteStr;
  }
  return result;
}

//----- (0044FA00) --------------------------------------------------------
int __usercall sub_44FA00<eax>(int a1<ebp>)
{
  return sub_4012B2(*(_DWORD *)(a1 - 16) + 8);
}
// 4012B2: using guessed type int __thiscall sub_4012B2(_DWORD);

//----- (0044FA0C) --------------------------------------------------------
int __usercall SEH_427140<eax>(int a1<ebx>, int a2<edi>, int a3<esi>, int a4, int a5, int a6, int a7)
{
  return sub_4382A0((int)&unk_4796E0, a1, a2, a3, a4, a5, a6, a7);
}

//----- (0044FA20) --------------------------------------------------------
int __usercall sub_44FA20<eax>(int a1<ebp>)
{
  return sub_40105F(a1 - 28);
}
// 40105F: using guessed type int __thiscall sub_40105F(_DWORD);

//----- (00450A5D) --------------------------------------------------------
LONG __usercall start<eax>(int a1<ebx>, int a2<edi>, int a3<esi>)
{
  int v3; // eax@1

  v3 = (int)LoadLibraryA("DBSRV.dll");
  return sub_439180(v3, a1, a2, a3);
}


