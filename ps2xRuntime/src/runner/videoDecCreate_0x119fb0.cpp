#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecCreate
// Address: 0x119fb0 - 0x11a0b0
void videoDecCreate_0x119fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119fb0u;

    // 0x119fb0: 0x27bdff90
    ctx->pc = 0x119fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x119fb4: 0xffb00000
    ctx->pc = 0x119fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119fb8: 0x80802d
    ctx->pc = 0x119fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fbc: 0xffb50050
    ctx->pc = 0x119fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119fc0: 0xffb40040
    ctx->pc = 0x119fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119fc4: 0x160a82d
    ctx->pc = 0x119fc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fc8: 0xffb30030
    ctx->pc = 0x119fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119fcc: 0x140a02d
    ctx->pc = 0x119fccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fd0: 0xffb20020
    ctx->pc = 0x119fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119fd4: 0x120982d
    ctx->pc = 0x119fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fd8: 0xffb10010
    ctx->pc = 0x119fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119fdc: 0x100902d
    ctx->pc = 0x119fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fe0: 0xffbf0060
    ctx->pc = 0x119fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x119fe4: 0xc047cbe
    ctx->pc = 0x119FE4u;
    SET_GPR_U32(ctx, 31, 0x119FECu);
    ctx->pc = 0x119FE8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegCreate_0x11f2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119FECu; }
    }
    if (ctx->pc != 0x119FECu) { return; }
    ctx->pc = 0x119FECu;
    // 0x119fec: 0x3c060012
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 6, ((uint32_t)18 << 16));
    // 0x119ff0: 0x200202d
    ctx->pc = 0x119ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ff4: 0x24c6a6a8
    ctx->pc = 0x119ff4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944424));
    // 0x119ff8: 0x282d
    ctx->pc = 0x119ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ffc: 0xc047dd6
    ctx->pc = 0x119FFCu;
    SET_GPR_U32(ctx, 31, 0x11A004u);
    ctx->pc = 0x11A000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x11f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A004u; }
    }
    if (ctx->pc != 0x11A004u) { return; }
    ctx->pc = 0x11A004u;
    // 0x11a004: 0x3c060012
    ctx->pc = 0x11a004u;
    SET_GPR_S32(ctx, 6, ((uint32_t)18 << 16));
    // 0x11a008: 0x200202d
    ctx->pc = 0x11a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a00c: 0x24c6a6d0
    ctx->pc = 0x11a00cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944464));
    // 0x11a010: 0x24050001
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a014: 0xc047dd6
    ctx->pc = 0x11A014u;
    SET_GPR_U32(ctx, 31, 0x11A01Cu);
    ctx->pc = 0x11A018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x11f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A01Cu; }
    }
    if (ctx->pc != 0x11A01Cu) { return; }
    ctx->pc = 0x11A01Cu;
    // 0x11a01c: 0x3c060012
    ctx->pc = 0x11a01cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)18 << 16));
    // 0x11a020: 0x200202d
    ctx->pc = 0x11a020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a024: 0x24c6a700
    ctx->pc = 0x11a024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944512));
    // 0x11a028: 0x24050002
    ctx->pc = 0x11a028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a02c: 0xc047dd6
    ctx->pc = 0x11A02Cu;
    SET_GPR_U32(ctx, 31, 0x11A034u);
    ctx->pc = 0x11A030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x11f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A034u; }
    }
    if (ctx->pc != 0x11A034u) { return; }
    ctx->pc = 0x11A034u;
    // 0x11a034: 0x3c060012
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 6, ((uint32_t)18 << 16));
    // 0x11a038: 0x200202d
    ctx->pc = 0x11a038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a03c: 0x24c6a728
    ctx->pc = 0x11a03cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944552));
    // 0x11a040: 0x24050003
    ctx->pc = 0x11a040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a044: 0xc047dd6
    ctx->pc = 0x11A044u;
    SET_GPR_U32(ctx, 31, 0x11A04Cu);
    ctx->pc = 0x11A048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x11f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A04Cu; }
    }
    if (ctx->pc != 0x11A04Cu) { return; }
    ctx->pc = 0x11A04Cu;
    // 0x11a04c: 0x3c060012
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)18 << 16));
    // 0x11a050: 0x200202d
    ctx->pc = 0x11a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a054: 0x24c6a750
    ctx->pc = 0x11a054u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944592));
    // 0x11a058: 0x24050005
    ctx->pc = 0x11a058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x11a05c: 0xc047dd6
    ctx->pc = 0x11A05Cu;
    SET_GPR_U32(ctx, 31, 0x11A064u);
    ctx->pc = 0x11A060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x11f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A064u; }
    }
    if (ctx->pc != 0x11A064u) { return; }
    ctx->pc = 0x11A064u;
    // 0x11a064: 0xc04683a
    ctx->pc = 0x11A064u;
    SET_GPR_U32(ctx, 31, 0x11A06Cu);
    ctx->pc = 0x11A068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecReset_0x11a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A06Cu; }
    }
    if (ctx->pc != 0x11A06Cu) { return; }
    ctx->pc = 0x11A06Cu;
    // 0x11a06c: 0x26040048
    ctx->pc = 0x11a06cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 72));
    // 0x11a070: 0x220282d
    ctx->pc = 0x11a070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a074: 0x240302d
    ctx->pc = 0x11a074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a078: 0x260382d
    ctx->pc = 0x11a078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a07c: 0x280402d
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a080: 0xc047040
    ctx->pc = 0x11A080u;
    SET_GPR_U32(ctx, 31, 0x11A088u);
    ctx->pc = 0x11A084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C100u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufCreate_0x11c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A088u; }
    }
    if (ctx->pc != 0x11A088u) { return; }
    ctx->pc = 0x11A088u;
    // 0x11a088: 0xdfbf0060
    ctx->pc = 0x11a088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a08c: 0x24020001
    ctx->pc = 0x11a08cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a090: 0xdfb50050
    ctx->pc = 0x11a090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a094: 0xdfb40040
    ctx->pc = 0x11a094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a098: 0xdfb30030
    ctx->pc = 0x11a098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a09c: 0xdfb20020
    ctx->pc = 0x11a09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a0a0: 0xdfb10010
    ctx->pc = 0x11a0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a0a4: 0xdfb00000
    ctx->pc = 0x11a0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a0a8: 0x3e00008
    ctx->pc = 0x11A0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A0ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A0B0u;
}
