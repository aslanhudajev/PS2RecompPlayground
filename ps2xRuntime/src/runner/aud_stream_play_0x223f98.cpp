#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_play
// Address: 0x223f98 - 0x224030
void aud_stream_play_0x223f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223f98u;

    // 0x223f98: 0x27bdffa0
    ctx->pc = 0x223f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223f9c: 0xffbf0050
    ctx->pc = 0x223f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x223fa0: 0xffb40040
    ctx->pc = 0x223fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x223fa4: 0xffb30030
    ctx->pc = 0x223fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x223fa8: 0xffb20020
    ctx->pc = 0x223fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223fac: 0xffb10010
    ctx->pc = 0x223facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223fb0: 0xffb00000
    ctx->pc = 0x223fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223fb4: 0x80882d
    ctx->pc = 0x223fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fb8: 0xa0902d
    ctx->pc = 0x223fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fbc: 0xc0982d
    ctx->pc = 0x223fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fc0: 0xe0a02d
    ctx->pc = 0x223fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fc4: 0xc088cb6
    ctx->pc = 0x223FC4u;
    SET_GPR_U32(ctx, 31, 0x223FCCu);
    ctx->pc = 0x223FC8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FCCu; }
    }
    if (ctx->pc != 0x223FCCu) { return; }
    ctx->pc = 0x223FCCu;
    // 0x223fcc: 0x16800003
    ctx->pc = 0x223FCCu;
    {
        const bool branch_taken_0x223fcc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x223FD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223fcc) {
            ctx->pc = 0x223FDCu;
            goto label_223fdc;
        }
    }
    ctx->pc = 0x223FD4u;
    // 0x223fd4: 0x1000000d
    ctx->pc = 0x223FD4u;
    {
        const bool branch_taken_0x223fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223FD8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x223fd4) {
            ctx->pc = 0x22400Cu;
            goto label_22400c;
        }
    }
    ctx->pc = 0x223FDCu;
label_223fdc:
    // 0x223fdc: 0x24430ac0
    ctx->pc = 0x223fdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x223fe0: 0xac510ac0
    ctx->pc = 0x223fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 17));
    // 0x223fe4: 0xac720004
    ctx->pc = 0x223fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x223fe8: 0xac730008
    ctx->pc = 0x223fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x223fec: 0x2404000a
    ctx->pc = 0x223fecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x223ff0: 0xc088ce8
    ctx->pc = 0x223FF0u;
    SET_GPR_U32(ctx, 31, 0x223FF8u);
    ctx->pc = 0x223FF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FF8u; }
    }
    if (ctx->pc != 0x223FF8u) { return; }
    ctx->pc = 0x223FF8u;
    // 0x223ff8: 0x4400004
    ctx->pc = 0x223FF8u;
    {
        const bool branch_taken_0x223ff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x223FFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223ff8) {
            ctx->pc = 0x22400Cu;
            goto label_22400c;
        }
    }
    ctx->pc = 0x224000u;
    // 0x224000: 0x8c500b00
    ctx->pc = 0x224000u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
    // 0x224004: 0x3c02003c
    ctx->pc = 0x224004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x224008: 0xac540f70
    ctx->pc = 0x224008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3952), GPR_U32(ctx, 20));
label_22400c:
    // 0x22400c: 0x200102d
    ctx->pc = 0x22400cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224010: 0xdfbf0050
    ctx->pc = 0x224010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x224014: 0xdfb40040
    ctx->pc = 0x224014u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x224018: 0xdfb30030
    ctx->pc = 0x224018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22401c: 0xdfb20020
    ctx->pc = 0x22401cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224020: 0xdfb10010
    ctx->pc = 0x224020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224024: 0xdfb00000
    ctx->pc = 0x224024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224028: 0x3e00008
    ctx->pc = 0x224028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22402Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223FDCu: goto label_223fdc;
            case 0x22400Cu: goto label_22400c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224030u;
}
