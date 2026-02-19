#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateObjOffsets
// Address: 0x203350 - 0x203388
void UpdateObjOffsets_0x203350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203350u;

    // 0x203350: 0x27bdffd0
    ctx->pc = 0x203350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203354: 0xffbf0020
    ctx->pc = 0x203354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203358: 0xffb10010
    ctx->pc = 0x203358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20335c: 0xffb00000
    ctx->pc = 0x20335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203360: 0x80802d
    ctx->pc = 0x203360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203364: 0xc080c70
    ctx->pc = 0x203364u;
    SET_GPR_U32(ctx, 31, 0x20336Cu);
    ctx->pc = 0x203368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2031C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjColOffset_0x2031c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20336Cu; }
    }
    if (ctx->pc != 0x20336Cu) { return; }
    ctx->pc = 0x20336Cu;
    // 0x20336c: 0x200202d
    ctx->pc = 0x20336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203370: 0x220282d
    ctx->pc = 0x203370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203374: 0xdfbf0020
    ctx->pc = 0x203374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203378: 0xdfb10010
    ctx->pc = 0x203378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20337c: 0xdfb00000
    ctx->pc = 0x20337cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203380: 0x8080ca2
    ctx->pc = 0x203380u;
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x203288u;
    UpdateObjAttnOffset_0x203288(rdram, ctx, runtime); return;
    ctx->pc = 0x203388u;
}
