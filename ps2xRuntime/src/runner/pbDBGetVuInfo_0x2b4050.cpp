#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBGetVuInfo
// Address: 0x2b4050 - 0x2b40ac
void pbDBGetVuInfo_0x2b4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4050u;

    // 0x2b4050: 0x27bdffc0
    ctx->pc = 0x2b4050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4054: 0xffbf0030
    ctx->pc = 0x2b4054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b4058: 0xffb20020
    ctx->pc = 0x2b4058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b405c: 0xffb10010
    ctx->pc = 0x2b405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b4060: 0xffb00000
    ctx->pc = 0x2b4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4064: 0x80802d
    ctx->pc = 0x2b4064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4068: 0xa0882d
    ctx->pc = 0x2b4068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b406c: 0xc0902d
    ctx->pc = 0x2b406cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4070: 0x202d
    ctx->pc = 0x2b4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4074: 0x200282d
    ctx->pc = 0x2b4074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4078: 0x220302d
    ctx->pc = 0x2b4078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b407c: 0xc0ad00c
    ctx->pc = 0x2B407Cu;
    SET_GPR_U32(ctx, 31, 0x2B4084u);
    ctx->pc = 0x2B4080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4030u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu0Info_0x2b4030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4084u; }
    }
    if (ctx->pc != 0x2B4084u) { return; }
    ctx->pc = 0x2B4084u;
    // 0x2b4084: 0x202d
    ctx->pc = 0x2b4084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4088: 0x200282d
    ctx->pc = 0x2b4088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b408c: 0x220302d
    ctx->pc = 0x2b408cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4090: 0x240382d
    ctx->pc = 0x2b4090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4094: 0xdfbf0030
    ctx->pc = 0x2b4094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4098: 0xdfb20020
    ctx->pc = 0x2b4098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b409c: 0xdfb10010
    ctx->pc = 0x2b409cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b40a0: 0xdfb00000
    ctx->pc = 0x2b40a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b40a4: 0x80ad004
    ctx->pc = 0x2B40A4u;
    ctx->pc = 0x2B40A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2B4010u;
    pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime); return;
    ctx->pc = 0x2B40ACu;
}
