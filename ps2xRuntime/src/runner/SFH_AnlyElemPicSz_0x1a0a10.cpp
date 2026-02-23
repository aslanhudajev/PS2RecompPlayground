#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemPicSz
// Address: 0x1a0a10 - 0x1a0ab8
void SFH_AnlyElemPicSz_0x1a0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemPicSz");


    ctx->pc = 0x1a0a10u;

    // 0x1a0a10: 0x27bdffb0
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0a14: 0xffb10010
    ctx->pc = 0x1a0a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0a18: 0xffb30030
    ctx->pc = 0x1a0a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a0a1c: 0x30b100ff
    ctx->pc = 0x1a0a1cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0a20: 0xffb20020
    ctx->pc = 0x1a0a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0a24: 0xe0982d
    ctx->pc = 0x1a0a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a28: 0xffb00000
    ctx->pc = 0x1a0a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0a2c: 0xc0902d
    ctx->pc = 0x1a0a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a30: 0xffbf0040
    ctx->pc = 0x1a0a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0a34: 0xc0681d0
    ctx->pc = 0x1A0A34u;
    SET_GPR_U32(ctx, 31, 0x1A0A3Cu);
    ctx->pc = 0x1A0A38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A3Cu; }
        else if (ctx->pc != 0x1A0A3Cu) { ctx->pc = 0x1A0A3Cu; }
    }
    if (ctx->pc != 0x1A0A3Cu) { return; }
    ctx->pc = 0x1A0A3Cu;
    // 0x1a0a3c: 0x40802d
    ctx->pc = 0x1a0a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a40: 0x12000016
    ctx->pc = 0x1A0A40u;
    {
        const bool branch_taken_0x1a0a40 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0A44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a40) {
            ctx->pc = 0x1A0A9Cu;
            goto label_1a0a9c;
        }
    }
    ctx->pc = 0x1A0A48u;
    // 0x1a0a48: 0xc0683c8
    ctx->pc = 0x1A0A48u;
    SET_GPR_U32(ctx, 31, 0x1A0A50u);
    ctx->pc = 0x1A0A4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A50u; }
        else if (ctx->pc != 0x1A0A50u) { ctx->pc = 0x1A0A50u; }
    }
    if (ctx->pc != 0x1A0A50u) { return; }
    ctx->pc = 0x1A0A50u;
    // 0x1a0a50: 0x240300e0
    ctx->pc = 0x1a0a50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a0a54: 0x14430011
    ctx->pc = 0x1A0A54u;
    {
        const bool branch_taken_0x1a0a54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0A58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a54) {
            ctx->pc = 0x1A0A9Cu;
            goto label_1a0a9c;
        }
    }
    ctx->pc = 0x1A0A5Cu;
    // 0x1a0a5c: 0x9204001c
    ctx->pc = 0x1a0a5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a0a60: 0x2605001c
    ctx->pc = 0x1a0a60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a0a64: 0x24020001
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a68: 0xae440000
    ctx->pc = 0x1a0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1a0a6c: 0x42100
    ctx->pc = 0x1a0a6cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a0a70: 0x90a30001
    ctx->pc = 0x1a0a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a0a74: 0x31902
    ctx->pc = 0x1a0a74u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x1a0a78: 0x832025
    ctx->pc = 0x1a0a78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0a7c: 0xae440000
    ctx->pc = 0x1a0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1a0a80: 0x90a30001
    ctx->pc = 0x1a0a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a0a84: 0xae630000
    ctx->pc = 0x1a0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1a0a88: 0x31a00
    ctx->pc = 0x1a0a88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a0a8c: 0x90a40002
    ctx->pc = 0x1a0a8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a0a90: 0x641825
    ctx->pc = 0x1a0a90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0a94: 0x30630fff
    ctx->pc = 0x1a0a94u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x1a0a98: 0xae630000
    ctx->pc = 0x1a0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1a0a9c:
    // 0x1a0a9c: 0xdfbf0040
    ctx->pc = 0x1a0a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0aa0: 0xdfb30030
    ctx->pc = 0x1a0aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0aa4: 0xdfb20020
    ctx->pc = 0x1a0aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0aa8: 0xdfb10010
    ctx->pc = 0x1a0aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0aac: 0xdfb00000
    ctx->pc = 0x1a0aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ab0: 0x3e00008
    ctx->pc = 0x1A0AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0A9Cu: goto label_1a0a9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0AB8u;
}
