#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdStartFnameSub
// Address: 0x18cb48 - 0x18cca4
void mwSfdStartFnameSub_0x18cb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdStartFnameSub");


    ctx->pc = 0x18cb48u;

    // 0x18cb48: 0x27bdffb0
    ctx->pc = 0x18cb48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cb4c: 0xffb30030
    ctx->pc = 0x18cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18cb50: 0xffb20020
    ctx->pc = 0x18cb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18cb54: 0xffb10010
    ctx->pc = 0x18cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18cb58: 0xa0902d
    ctx->pc = 0x18cb58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb5c: 0xffbf0040
    ctx->pc = 0x18cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18cb60: 0x80882d
    ctx->pc = 0x18cb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb64: 0xffb00000
    ctx->pc = 0x18cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18cb68: 0x8e300040
    ctx->pc = 0x18cb68u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x18cb6c: 0xc06335a
    ctx->pc = 0x18CB6Cu;
    SET_GPR_U32(ctx, 31, 0x18CB74u);
    ctx->pc = 0x18CB70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    ctx->pc = 0x18CD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdStopDec_0x18cd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB74u; }
        else if (ctx->pc != 0x18CB74u) { ctx->pc = 0x18CB74u; }
    }
    if (ctx->pc != 0x18CB74u) { return; }
    ctx->pc = 0x18CB74u;
    // 0x18cb74: 0xc063284
    ctx->pc = 0x18CB74u;
    SET_GPR_U32(ctx, 31, 0x18CB7Cu);
    ctx->pc = 0x18CB78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        mw_sfd_start_ex_0x18ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB7Cu; }
        else if (ctx->pc != 0x18CB7Cu) { ctx->pc = 0x18CB7Cu; }
    }
    if (ctx->pc != 0x18CB7Cu) { return; }
    ctx->pc = 0x18CB7Cu;
    // 0x18cb7c: 0xc063188
    ctx->pc = 0x18CB7Cu;
    SET_GPR_U32(ctx, 31, 0x18CB84u);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB84u; }
        else if (ctx->pc != 0x18CB84u) { ctx->pc = 0x18CB84u; }
    }
    if (ctx->pc != 0x18CB84u) { return; }
    ctx->pc = 0x18CB84u;
    // 0x18cb84: 0x40982d
    ctx->pc = 0x18cb84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb88: 0x200282d
    ctx->pc = 0x18cb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb8c: 0xc063e08
    ctx->pc = 0x18CB8Cu;
    SET_GPR_U32(ctx, 31, 0x18CB94u);
    ctx->pc = 0x18CB90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F820u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_OpenFname_0x18f820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB94u; }
        else if (ctx->pc != 0x18CB94u) { ctx->pc = 0x18CB94u; }
    }
    if (ctx->pc != 0x18CB94u) { return; }
    ctx->pc = 0x18CB94u;
    // 0x18cb94: 0x1440000d
    ctx->pc = 0x18CB94u;
    {
        const bool branch_taken_0x18cb94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CB98u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x18cb94) {
            ctx->pc = 0x18CBCCu;
            goto label_18cbcc;
        }
    }
    ctx->pc = 0x18CB9Cu;
    // 0x18cb9c: 0xc0633b4
    ctx->pc = 0x18CB9Cu;
    SET_GPR_U32(ctx, 31, 0x18CBA4u);
    ctx->pc = 0x18CBA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967194));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA4u; }
        else if (ctx->pc != 0x18CBA4u) { ctx->pc = 0x18CBA4u; }
    }
    if (ctx->pc != 0x18CBA4u) { return; }
    ctx->pc = 0x18CBA4u;
    // 0x18cba4: 0x240282d
    ctx->pc = 0x18cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cba8: 0x3c04002c
    ctx->pc = 0x18cba8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18cbac: 0xdfbf0040
    ctx->pc = 0x18cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cbb0: 0x2484cc48
    ctx->pc = 0x18cbb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954056));
    // 0x18cbb4: 0xdfb30030
    ctx->pc = 0x18cbb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cbb8: 0xdfb20020
    ctx->pc = 0x18cbb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cbbc: 0xdfb10010
    ctx->pc = 0x18cbbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cbc0: 0xdfb00000
    ctx->pc = 0x18cbc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cbc4: 0x8063dda
    ctx->pc = 0x18CBC4u;
    ctx->pc = 0x18CBC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18CBCCu;
label_18cbcc:
    // 0x18cbcc: 0x8e300050
    ctx->pc = 0x18cbccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x18cbd0: 0x2403ffff
    ctx->pc = 0x18cbd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18cbd4: 0x40202d
    ctx->pc = 0x18cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbd8: 0x70182a
    ctx->pc = 0x18cbd8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x18cbdc: 0x260207ff
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2047));
    // 0x18cbe0: 0x203100b
    ctx->pc = 0x18cbe0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x18cbe4: 0x292c3
    ctx->pc = 0x18cbe4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 11));
    // 0x18cbe8: 0xc063e20
    ctx->pc = 0x18CBE8u;
    SET_GPR_U32(ctx, 31, 0x18CBF0u);
    ctx->pc = 0x18CBECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_SetRdSct_0x18f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBF0u; }
        else if (ctx->pc != 0x18CBF0u) { ctx->pc = 0x18CBF0u; }
    }
    if (ctx->pc != 0x18CBF0u) { return; }
    ctx->pc = 0x18CBF0u;
    // 0x18cbf0: 0x50400007
    ctx->pc = 0x18CBF0u;
    {
        const bool branch_taken_0x18cbf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18cbf0) {
            ctx->pc = 0x18CBF4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->pc = 0x18CC10u;
            goto label_18cc10;
        }
    }
    ctx->pc = 0x18CBF8u;
    // 0x18cbf8: 0xc0633b4
    ctx->pc = 0x18CBF8u;
    SET_GPR_U32(ctx, 31, 0x18CC00u);
    ctx->pc = 0x18CBFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC00u; }
        else if (ctx->pc != 0x18CC00u) { ctx->pc = 0x18CC00u; }
    }
    if (ctx->pc != 0x18CC00u) { return; }
    ctx->pc = 0x18CC00u;
    // 0x18cc00: 0x3c04002c
    ctx->pc = 0x18cc00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18cc04: 0xc063dda
    ctx->pc = 0x18CC04u;
    SET_GPR_U32(ctx, 31, 0x18CC0Cu);
    ctx->pc = 0x18CC08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954096));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC0Cu; }
        else if (ctx->pc != 0x18CC0Cu) { ctx->pc = 0x18CC0Cu; }
    }
    if (ctx->pc != 0x18CC0Cu) { return; }
    ctx->pc = 0x18CC0Cu;
    // 0x18cc0c: 0x8e240034
    ctx->pc = 0x18cc0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_18cc10:
    // 0x18cc10: 0xc063e28
    ctx->pc = 0x18CC10u;
    SET_GPR_U32(ctx, 31, 0x18CC18u);
    ctx->pc = 0x18CC14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_SetTrSct_0x18f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC18u; }
        else if (ctx->pc != 0x18CC18u) { ctx->pc = 0x18CC18u; }
    }
    if (ctx->pc != 0x18CC18u) { return; }
    ctx->pc = 0x18CC18u;
    // 0x18cc18: 0x50400007
    ctx->pc = 0x18CC18u;
    {
        const bool branch_taken_0x18cc18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18cc18) {
            ctx->pc = 0x18CC1Cu;
            SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 16), 31));
            ctx->pc = 0x18CC38u;
            goto label_18cc38;
        }
    }
    ctx->pc = 0x18CC20u;
    // 0x18cc20: 0xc0633b4
    ctx->pc = 0x18CC20u;
    SET_GPR_U32(ctx, 31, 0x18CC28u);
    ctx->pc = 0x18CC24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC28u; }
        else if (ctx->pc != 0x18CC28u) { ctx->pc = 0x18CC28u; }
    }
    if (ctx->pc != 0x18CC28u) { return; }
    ctx->pc = 0x18CC28u;
    // 0x18cc28: 0x3c04002c
    ctx->pc = 0x18cc28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18cc2c: 0xc063dda
    ctx->pc = 0x18CC2Cu;
    SET_GPR_U32(ctx, 31, 0x18CC34u);
    ctx->pc = 0x18CC30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954144));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC34u; }
        else if (ctx->pc != 0x18CC34u) { ctx->pc = 0x18CC34u; }
    }
    if (ctx->pc != 0x18CC34u) { return; }
    ctx->pc = 0x18CC34u;
    // 0x18cc34: 0x102fc2
    ctx->pc = 0x18cc34u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 16), 31));
label_18cc38:
    // 0x18cc38: 0x8e240034
    ctx->pc = 0x18cc38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x18cc3c: 0x2052821
    ctx->pc = 0x18cc3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x18cc40: 0x200302d
    ctx->pc = 0x18cc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc44: 0xc063e7a
    ctx->pc = 0x18CC44u;
    SET_GPR_U32(ctx, 31, 0x18CC4Cu);
    ctx->pc = 0x18CC48u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    ctx->pc = 0x18F9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_SetFlowLimit_0x18f9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC4Cu; }
        else if (ctx->pc != 0x18CC4Cu) { ctx->pc = 0x18CC4Cu; }
    }
    if (ctx->pc != 0x18CC4Cu) { return; }
    ctx->pc = 0x18CC4Cu;
    // 0x18cc4c: 0xc063e52
    ctx->pc = 0x18CC4Cu;
    SET_GPR_U32(ctx, 31, 0x18CC54u);
    ctx->pc = 0x18CC50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x18F948u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_Start_0x18f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC54u; }
        else if (ctx->pc != 0x18CC54u) { ctx->pc = 0x18CC54u; }
    }
    if (ctx->pc != 0x18CC54u) { return; }
    ctx->pc = 0x18CC54u;
    // 0x18cc54: 0x1040000c
    ctx->pc = 0x18CC54u;
    {
        const bool branch_taken_0x18cc54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CC58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18cc54) {
            ctx->pc = 0x18CC88u;
            goto label_18cc88;
        }
    }
    ctx->pc = 0x18CC5Cu;
    // 0x18cc5c: 0xc0633b4
    ctx->pc = 0x18CC5Cu;
    SET_GPR_U32(ctx, 31, 0x18CC64u);
    ctx->pc = 0x18CC60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967193));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC64u; }
        else if (ctx->pc != 0x18CC64u) { ctx->pc = 0x18CC64u; }
    }
    if (ctx->pc != 0x18CC64u) { return; }
    ctx->pc = 0x18CC64u;
    // 0x18cc64: 0x3c04002c
    ctx->pc = 0x18cc64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18cc68: 0xdfbf0040
    ctx->pc = 0x18cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cc6c: 0xdfb30030
    ctx->pc = 0x18cc6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cc70: 0x2484ccd0
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954192));
    // 0x18cc74: 0xdfb20020
    ctx->pc = 0x18cc74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cc78: 0xdfb10010
    ctx->pc = 0x18cc78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cc7c: 0xdfb00000
    ctx->pc = 0x18cc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cc80: 0x8063dda
    ctx->pc = 0x18CC80u;
    ctx->pc = 0x18CC84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18CC88u;
label_18cc88:
    // 0x18cc88: 0xdfbf0040
    ctx->pc = 0x18cc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cc8c: 0xdfb30030
    ctx->pc = 0x18cc8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cc90: 0xdfb20020
    ctx->pc = 0x18cc90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cc94: 0xdfb10010
    ctx->pc = 0x18cc94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cc98: 0xdfb00000
    ctx->pc = 0x18cc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cc9c: 0x8063190
    ctx->pc = 0x18CC9Cu;
    ctx->pc = 0x18CCA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18C640u;
    mwPlyUnlock_0x18c640(rdram, ctx, runtime); return;
    ctx->pc = 0x18CCA4u;
}
