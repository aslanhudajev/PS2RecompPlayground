#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysLoadTex
// Address: 0x2cdd78 - 0x2cddf4
void MBPsysLoadTex_0x2cdd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cdd78u;

    // 0x2cdd78: 0x27bdffd0
    ctx->pc = 0x2cdd78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cdd7c: 0xffbf0020
    ctx->pc = 0x2cdd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cdd80: 0xffb10010
    ctx->pc = 0x2cdd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cdd84: 0xffb00000
    ctx->pc = 0x2cdd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cdd88: 0x8c840070
    ctx->pc = 0x2cdd88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2cdd8c: 0x8c82008c
    ctx->pc = 0x2cdd8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2cdd90: 0x10400012
    ctx->pc = 0x2CDD90u;
    {
        const bool branch_taken_0x2cdd90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDD94u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cdd90) {
            ctx->pc = 0x2CDDDCu;
            goto label_2cdddc;
        }
    }
    ctx->pc = 0x2CDD98u;
    // 0x2cdd98: 0x8c900088
    ctx->pc = 0x2cdd98u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2cdd9c: 0x102403
    ctx->pc = 0x2cdd9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2cdda0: 0x3205ffff
    ctx->pc = 0x2cdda0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 65535));
    // 0x2cdda4: 0xc0ab6ca
    ctx->pc = 0x2CDDA4u;
    SET_GPR_U32(ctx, 31, 0x2CDDACu);
    ctx->pc = 0x2CDDA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2ADB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexLoaded_0x2adb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDDACu; }
    }
    if (ctx->pc != 0x2CDDACu) { return; }
    ctx->pc = 0x2CDDACu;
    // 0x2cddac: 0x1440000c
    ctx->pc = 0x2CDDACu;
    {
        const bool branch_taken_0x2cddac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CDDB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cddac) {
            ctx->pc = 0x2CDDE0u;
            goto label_2cdde0;
        }
    }
    ctx->pc = 0x2CDDB4u;
    // 0x2cddb4: 0xc0ab6e2
    ctx->pc = 0x2CDDB4u;
    SET_GPR_U32(ctx, 31, 0x2CDDBCu);
    ctx->pc = 0x2CDDB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDDBCu; }
    }
    if (ctx->pc != 0x2CDDBCu) { return; }
    ctx->pc = 0x2CDDBCu;
    // 0x2cddbc: 0x40882d
    ctx->pc = 0x2cddbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddc0: 0x16200007
    ctx->pc = 0x2CDDC0u;
    {
        const bool branch_taken_0x2cddc0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CDDC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cddc0) {
            ctx->pc = 0x2CDDE0u;
            goto label_2cdde0;
        }
    }
    ctx->pc = 0x2CDDC8u;
    // 0x2cddc8: 0xc0aa110
    ctx->pc = 0x2CDDC8u;
    SET_GPR_U32(ctx, 31, 0x2CDDD0u);
    ctx->pc = 0x2CDDCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPageEnd_0x2a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDDD0u; }
    }
    if (ctx->pc != 0x2CDDD0u) { return; }
    ctx->pc = 0x2CDDD0u;
    // 0x2cddd0: 0xc0ab6e2
    ctx->pc = 0x2CDDD0u;
    SET_GPR_U32(ctx, 31, 0x2CDDD8u);
    ctx->pc = 0x2CDDD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDDD8u; }
    }
    if (ctx->pc != 0x2CDDD8u) { return; }
    ctx->pc = 0x2CDDD8u;
    // 0x2cddd8: 0x40882d
    ctx->pc = 0x2cddd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdddc:
    // 0x2cdddc: 0x220102d
    ctx->pc = 0x2cdddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cdde0:
    // 0x2cdde0: 0xdfbf0020
    ctx->pc = 0x2cdde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdde4: 0xdfb10010
    ctx->pc = 0x2cdde4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdde8: 0xdfb00000
    ctx->pc = 0x2cdde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cddec: 0x3e00008
    ctx->pc = 0x2CDDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDDF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDDDCu: goto label_2cdddc;
            case 0x2CDDE0u: goto label_2cdde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CDDF4u;
}
