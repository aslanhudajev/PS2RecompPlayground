#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Stop
// Address: 0x16bc90 - 0x16bd70
void ADXF_Stop_0x16bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Stop");


    ctx->pc = 0x16bc90u;

    // 0x16bc90: 0x27bdffc0
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bc94: 0x282d
    ctx->pc = 0x16bc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc98: 0xffb00010
    ctx->pc = 0x16bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16bc9c: 0x2407ffff
    ctx->pc = 0x16bc9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bca0: 0x80802d
    ctx->pc = 0x16bca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bca4: 0xffbf0030
    ctx->pc = 0x16bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16bca8: 0xffb10020
    ctx->pc = 0x16bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x16bcac: 0x24040005
    ctx->pc = 0x16bcacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bcb0: 0x200302d
    ctx->pc = 0x16bcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcb4: 0xc05a94a
    ctx->pc = 0x16BCB4u;
    SET_GPR_U32(ctx, 31, 0x16BCBCu);
    ctx->pc = 0x16BCB8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCBCu; }
        else if (ctx->pc != 0x16BCBCu) { ctx->pc = 0x16BCBCu; }
    }
    if (ctx->pc != 0x16BCBCu) { return; }
    ctx->pc = 0x16BCBCu;
    // 0x16bcbc: 0x56000006
    ctx->pc = 0x16BCBCu;
    {
        const bool branch_taken_0x16bcbc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x16bcbc) {
            ctx->pc = 0x16BCC0u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x16BCD8u;
            goto label_16bcd8;
        }
    }
    ctx->pc = 0x16BCC4u;
    // 0x16bcc4: 0x3c04002c
    ctx->pc = 0x16bcc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16bcc8: 0xc05a854
    ctx->pc = 0x16BCC8u;
    SET_GPR_U32(ctx, 31, 0x16BCD0u);
    ctx->pc = 0x16BCCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940104));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCD0u; }
        else if (ctx->pc != 0x16BCD0u) { ctx->pc = 0x16BCD0u; }
    }
    if (ctx->pc != 0x16BCD0u) { return; }
    ctx->pc = 0x16BCD0u;
    // 0x16bcd0: 0x10000022
    ctx->pc = 0x16BCD0u;
    {
        const bool branch_taken_0x16bcd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BCD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bcd0) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BCD8u;
label_16bcd8:
    // 0x16bcd8: 0x24110001
    ctx->pc = 0x16bcd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bcdc: 0x1071001e
    ctx->pc = 0x16BCDCu;
    {
        const bool branch_taken_0x16bcdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        ctx->pc = 0x16BCE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16bcdc) {
            ctx->pc = 0x16BD58u;
            goto label_16bd58;
        }
    }
    ctx->pc = 0x16BCE4u;
    // 0x16bce4: 0x54620003
    ctx->pc = 0x16BCE4u;
    {
        const bool branch_taken_0x16bce4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16bce4) {
            ctx->pc = 0x16BCE8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x16BCF4u;
            goto label_16bcf4;
        }
    }
    ctx->pc = 0x16BCECu;
    // 0x16bcec: 0x1000001a
    ctx->pc = 0x16BCECu;
    {
        const bool branch_taken_0x16bcec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BCF0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x16bcec) {
            ctx->pc = 0x16BD58u;
            goto label_16bd58;
        }
    }
    ctx->pc = 0x16BCF4u;
label_16bcf4:
    // 0x16bcf4: 0x14400005
    ctx->pc = 0x16BCF4u;
    {
        const bool branch_taken_0x16bcf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BCF8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16bcf4) {
            ctx->pc = 0x16BD0Cu;
            goto label_16bd0c;
        }
    }
    ctx->pc = 0x16BCFCu;
    // 0x16bcfc: 0xc05a854
    ctx->pc = 0x16BCFCu;
    SET_GPR_U32(ctx, 31, 0x16BD04u);
    ctx->pc = 0x16BD00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940144));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD04u; }
        else if (ctx->pc != 0x16BD04u) { ctx->pc = 0x16BD04u; }
    }
    if (ctx->pc != 0x16BD04u) { return; }
    ctx->pc = 0x16BD04u;
    // 0x16bd04: 0x10000015
    ctx->pc = 0x16BD04u;
    {
        const bool branch_taken_0x16bd04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BD08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16bd04) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BD0Cu;
label_16bd0c:
    // 0x16bd0c: 0xc05a4e4
    ctx->pc = 0x16BD0Cu;
    SET_GPR_U32(ctx, 31, 0x16BD14u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD14u; }
        else if (ctx->pc != 0x16BD14u) { ctx->pc = 0x16BD14u; }
    }
    if (ctx->pc != 0x16BD14u) { return; }
    ctx->pc = 0x16BD14u;
    // 0x16bd14: 0xc05c31c
    ctx->pc = 0x16BD14u;
    SET_GPR_U32(ctx, 31, 0x16BD1Cu);
    ctx->pc = 0x16BD18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD1Cu; }
        else if (ctx->pc != 0x16BD1Cu) { ctx->pc = 0x16BD1Cu; }
    }
    if (ctx->pc != 0x16BD1Cu) { return; }
    ctx->pc = 0x16BD1Cu;
    // 0x16bd1c: 0x8e040004
    ctx->pc = 0x16bd1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16bd20: 0xc05c420
    ctx->pc = 0x16BD20u;
    SET_GPR_U32(ctx, 31, 0x16BD28u);
    ctx->pc = 0x16BD24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetCurOfst_0x171080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD28u; }
        else if (ctx->pc != 0x16BD28u) { ctx->pc = 0x16BD28u; }
    }
    if (ctx->pc != 0x16BD28u) { return; }
    ctx->pc = 0x16BD28u;
    // 0x16bd28: 0x8fa30000
    ctx->pc = 0x16bd28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd2c: 0x200202d
    ctx->pc = 0x16bd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd30: 0xc05adf0
    ctx->pc = 0x16BD30u;
    SET_GPR_U32(ctx, 31, 0x16BD38u);
    ctx->pc = 0x16BD34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x16B7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CloseSjStm_0x16b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD38u; }
        else if (ctx->pc != 0x16BD38u) { ctx->pc = 0x16BD38u; }
    }
    if (ctx->pc != 0x16BD38u) { return; }
    ctx->pc = 0x16BD38u;
    // 0x16bd38: 0xc05a4f0
    ctx->pc = 0x16BD38u;
    SET_GPR_U32(ctx, 31, 0x16BD40u);
    ctx->pc = 0x16BD3Cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD40u; }
        else if (ctx->pc != 0x16BD40u) { ctx->pc = 0x16BD40u; }
    }
    if (ctx->pc != 0x16BD40u) { return; }
    ctx->pc = 0x16BD40u;
    // 0x16bd40: 0x24040005
    ctx->pc = 0x16bd40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bd44: 0x24050001
    ctx->pc = 0x16bd44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bd48: 0x200302d
    ctx->pc = 0x16bd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd4c: 0x2407ffff
    ctx->pc = 0x16bd4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bd50: 0xc05a94a
    ctx->pc = 0x16BD50u;
    SET_GPR_U32(ctx, 31, 0x16BD58u);
    ctx->pc = 0x16BD54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD58u; }
        else if (ctx->pc != 0x16BD58u) { ctx->pc = 0x16BD58u; }
    }
    if (ctx->pc != 0x16BD58u) { return; }
    ctx->pc = 0x16BD58u;
label_16bd58:
    // 0x16bd58: 0x8e020014
    ctx->pc = 0x16bd58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16bd5c:
    // 0x16bd5c: 0xdfbf0030
    ctx->pc = 0x16bd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bd60: 0xdfb10020
    ctx->pc = 0x16bd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bd64: 0xdfb00010
    ctx->pc = 0x16bd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd68: 0x3e00008
    ctx->pc = 0x16BD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BCD8u: goto label_16bcd8;
            case 0x16BCF4u: goto label_16bcf4;
            case 0x16BD0Cu: goto label_16bd0c;
            case 0x16BD58u: goto label_16bd58;
            case 0x16BD5Cu: goto label_16bd5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BD70u;
}
