#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_SetHdrRaw
// Address: 0x192fb0 - 0x193024
void sfhds_SetHdrRaw_0x192fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_SetHdrRaw");


    ctx->pc = 0x192fb0u;

    // 0x192fb0: 0x27bdffc0
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192fb4: 0xffb20020
    ctx->pc = 0x192fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x192fb8: 0xffb10010
    ctx->pc = 0x192fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x192fbc: 0xffbf0030
    ctx->pc = 0x192fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x192fc0: 0x80882d
    ctx->pc = 0x192fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fc4: 0xffb00000
    ctx->pc = 0x192fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192fc8: 0x8e22006c
    ctx->pc = 0x192fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x192fcc: 0x10400003
    ctx->pc = 0x192FCCu;
    {
        const bool branch_taken_0x192fcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192FD0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 108));
        if (branch_taken_0x192fcc) {
            ctx->pc = 0x192FDCu;
            goto label_192fdc;
        }
    }
    ctx->pc = 0x192FD4u;
    // 0x192fd4: 0x1000000d
    ctx->pc = 0x192FD4u;
    {
        const bool branch_taken_0x192fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192FD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192fd4) {
            ctx->pc = 0x19300Cu;
            goto label_19300c;
        }
    }
    ctx->pc = 0x192FDCu;
label_192fdc:
    // 0x192fdc: 0x28c20801
    ctx->pc = 0x192fdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2049));
    // 0x192fe0: 0x24100800
    ctx->pc = 0x192fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x192fe4: 0xc2800b
    ctx->pc = 0x192fe4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 6));
    // 0x192fe8: 0x26240100
    ctx->pc = 0x192fe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 256));
    // 0x192fec: 0xc060172
    ctx->pc = 0x192FECu;
    SET_GPR_U32(ctx, 31, 0x192FF4u);
    ctx->pc = 0x192FF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192FF4u; }
        else if (ctx->pc != 0x192FF4u) { ctx->pc = 0x192FF4u; }
    }
    if (ctx->pc != 0x192FF4u) { return; }
    ctx->pc = 0x192FF4u;
    // 0x192ff4: 0xae500090
    ctx->pc = 0x192ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    // 0x192ff8: 0xc064c74
    ctx->pc = 0x192FF8u;
    SET_GPR_U32(ctx, 31, 0x193000u);
    ctx->pc = 0x192FFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1931D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_ProcessHdr_0x1931d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193000u; }
        else if (ctx->pc != 0x193000u) { ctx->pc = 0x193000u; }
    }
    if (ctx->pc != 0x193000u) { return; }
    ctx->pc = 0x193000u;
    // 0x193000: 0xc064c0a
    ctx->pc = 0x193000u;
    SET_GPR_U32(ctx, 31, 0x193008u);
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_SetHdrSeek_0x193028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193008u; }
        else if (ctx->pc != 0x193008u) { ctx->pc = 0x193008u; }
    }
    if (ctx->pc != 0x193008u) { return; }
    ctx->pc = 0x193008u;
    // 0x193008: 0x24020001
    ctx->pc = 0x193008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19300c:
    // 0x19300c: 0xdfbf0030
    ctx->pc = 0x19300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193010: 0xdfb20020
    ctx->pc = 0x193010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193014: 0xdfb10010
    ctx->pc = 0x193014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193018: 0xdfb00000
    ctx->pc = 0x193018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19301c: 0x3e00008
    ctx->pc = 0x19301Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FDCu: goto label_192fdc;
            case 0x19300Cu: goto label_19300c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193024u;
}
