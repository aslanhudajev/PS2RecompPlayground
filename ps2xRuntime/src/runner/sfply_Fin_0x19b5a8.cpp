#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_Fin
// Address: 0x19b5a8 - 0x19b5dc
void sfply_Fin_0x19b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_Fin");


    ctx->pc = 0x19b5a8u;

    // 0x19b5a8: 0x27bdffe0
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b5ac: 0xffb00000
    ctx->pc = 0x19b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b5b0: 0xffbf0010
    ctx->pc = 0x19b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b5b4: 0xc066f20
    ctx->pc = 0x19B5B4u;
    SET_GPR_U32(ctx, 31, 0x19B5BCu);
    ctx->pc = 0x19B5B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrStop_0x19bc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5BCu; }
        else if (ctx->pc != 0x19B5BCu) { ctx->pc = 0x19B5BCu; }
    }
    if (ctx->pc != 0x19B5BCu) { return; }
    ctx->pc = 0x19B5BCu;
    // 0x19b5bc: 0x14400004
    ctx->pc = 0x19B5BCu;
    {
        const bool branch_taken_0x19b5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B5C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19b5bc) {
            ctx->pc = 0x19B5D0u;
            goto label_19b5d0;
        }
    }
    ctx->pc = 0x19B5C4u;
    // 0x19b5c4: 0x24030006
    ctx->pc = 0x19b5c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b5c8: 0x102d
    ctx->pc = 0x19b5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5cc: 0xae030044
    ctx->pc = 0x19b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_19b5d0:
    // 0x19b5d0: 0xdfb00000
    ctx->pc = 0x19b5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b5d4: 0x3e00008
    ctx->pc = 0x19B5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B5D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B5D0u: goto label_19b5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B5DCu;
}
