#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_SetCbBdr
// Address: 0x17e0e8 - 0x17e140
void SVM_SetCbBdr_0x17e0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_SetCbBdr");


    ctx->pc = 0x17e0e8u;

    // 0x17e0e8: 0x27bdffc0
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e0ec: 0xffb20020
    ctx->pc = 0x17e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17e0f0: 0xffb10010
    ctx->pc = 0x17e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17e0f4: 0xc0902d
    ctx->pc = 0x17e0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0f8: 0xffb00000
    ctx->pc = 0x17e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e0fc: 0xa0882d
    ctx->pc = 0x17e0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e100: 0xffbf0030
    ctx->pc = 0x17e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17e104: 0xc05f6f6
    ctx->pc = 0x17E104u;
    SET_GPR_U32(ctx, 31, 0x17E10Cu);
    ctx->pc = 0x17E108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E10Cu; }
        else if (ctx->pc != 0x17E10Cu) { ctx->pc = 0x17E10Cu; }
    }
    if (ctx->pc != 0x17E10Cu) { return; }
    ctx->pc = 0x17E10Cu;
    // 0x17e10c: 0x3c02002e
    ctx->pc = 0x17e10cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17e110: 0x1080c0
    ctx->pc = 0x17e110u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x17e114: 0x24421bc0
    ctx->pc = 0x17e114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x17e118: 0xdfbf0030
    ctx->pc = 0x17e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e11c: 0x501821
    ctx->pc = 0x17e11cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e120: 0x2028021
    ctx->pc = 0x17e120u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17e124: 0xac720004
    ctx->pc = 0x17e124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x17e128: 0xae110000
    ctx->pc = 0x17e128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x17e12c: 0xdfb20020
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e130: 0xdfb10010
    ctx->pc = 0x17e130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e134: 0xdfb00000
    ctx->pc = 0x17e134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e138: 0x805f700
    ctx->pc = 0x17E138u;
    ctx->pc = 0x17E13Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x17E140u;
}
